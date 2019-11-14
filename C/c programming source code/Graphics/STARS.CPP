/*	Author:  Sean Bugel
	E-mail:  bugelsea@rcn.com
	Compiler:  Borland C++ 4.52
	Program:  This is a starfield simulation program I wrote with 3 different star
				 fields.  I used arrays to randomly allocate the positions of 30 stars,
				 10 in each field, which proved to be more efficient than most other
				 programs I've seen.  I wrote this to see if I could write a decent
				 star field to match up with some others that I have seen.  I like
				 mine better than them all :)
*/

#include<dos.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include"apvector.h"

#define LEFT  75
#define RIGHT 77

typedef unsigned char  byte;

void set_mode(byte mode)
{
union REGS regs;
regs.h.ah = 0x00;
regs.h.al = mode;
int86(0x10, &regs, &regs);
}

void pixel(int x,int y,byte color)
{
union REGS regs;
regs.h.ah = 0x0C;
regs.h.al = color;
regs.x.cx = x;
regs.x.dx = y;
int86(0x10, &regs, &regs);
}

void opening(void)
{
clrscr();
_setcursortype(_NOCURSOR);
gotoxy(30,1); cout<<"Starfield Simulation";
gotoxy(37,2); cout<<"by Sean Bugel";
gotoxy(2,19); cout<<"+ to speed up star field";
gotoxy(2,20); cout<<"- to slow down star field";
gotoxy(2,21); printf("%c to move the star field right",16);
gotoxy(2,22); printf("%c to move the star field left",17);
gotoxy(2,23); cout<<"'Esc' to quit simulation";

	while(!kbhit())
	{
	gotoxy(1,25);
	clreol();
	delay(750);
	gotoxy(28,25);
	cout<<"Press any key to continue...";
	delay(1000);
	}
clrscr();
}

void main(void)
{
opening();

set_mode(0x13);
randomize();
apvector<int>x(31);  //array of x axis for 30 stars
apvector<int>y(31);  //array of y axis for 30 stars

int i=8,finish=0,a=0,b=0,inc=2,c,dir=0;  //i is star speed, finish is variable for exit from loop
													  //a & b used for finding random star position loop
													  //inc slows down second and third field
													  //dir is variable to choose direction of starfield, 0 left, 1 right

	while(a!=30)  //allocate 30 x positions
	{
	x[a]=rand()%320;
	a++;
	}

	while(b!=30)  //allocate 30 y positions
	{
	y[b]=rand()%320;
	b++;
	}

	c=1;
	while(c!=10)  //place 10 WHITE stars
	{
	pixel(x[c],y[c],WHITE);
	c++;
	}

		while(!finish)
		{
			if(kbhit())
			{
				switch(getch())  //This code is for controlling the speed
				{
				case 61:  //+
					{
					if(i>=2){i--;}
					else break;
					} break;
				case 43:  //+
					{
					if(i>=2){i--;}
					else break;
					} break;

				case 95:  //-
					{
					if(i<=16){i++;}
					else break;
					} break;
				case 45:  //-
					{
					if(i<=16){i++;}
					else break;
					} break;

				case LEFT:
					{
					dir=0;
					} break;
				case RIGHT:
					{
					dir=1;
					} break;

				case 27:  //Quit
					{
					finish=1;
					} break;

				default: break;
				}
			}

		inc++;  //variable used to slow down second and third field

		c=1;
		while(c<=10)  //erase first field
		{
		pixel(x[c],y[c],BLACK);
		c++;
		}

		c=1;
		while(c<=10)  //checks to see if field 1 stars hit border
		{

			if(dir==0)  //if direction is left
			{
			if(x[c]!=1){x[c]--;} else{y[c]=rand()%200;x[c]=320;}
			}

			else if(dir=1)  //if direction is right
			{
			if(x[c]!=320){x[c]++;} else{y[c]=rand()%200;x[c]=1;}
			}
		c++;
		}


			if(inc%2==0)		//second star field algos
			{
				c=11;
				while(c<=20)  //erase second field
				{
				pixel(x[c],y[c],BLACK);
				c++;
				}

				c=11;
				while(c<=20)  //checks to see if field 2 stars hit border
				{
					if(dir==0)  //if direction is left
					{
					if(x[c]!=1){x[c]--;} else{y[c]=rand()%200;x[c]=320;}
					}

					else if(dir=1)  //if direction is right
					{
					if(x[c]!=320){x[c]++;} else{y[c]=rand()%200;x[c]=1;}
					}
				c++;
				}

				c=11;
				while(c<=20)  //place 10 LIGHTGRAY stars
				{
				pixel(x[c],y[c],LIGHTGRAY);
				c++;
				}
			}  //end of second star field data

			if( inc%5==0)		//third star field algos
			{
				c=21;
				while(c<=30)  //erase third field
				{
				pixel(x[c],y[c],BLACK);
				c++;
				}

				c=21;
				while(c<=30)  //checks to see if field 3 stars hit border
				{
            if(dir==0)  //if direction is left
				{
				if(x[c]!=1){x[c]--;} else{y[c]=rand()%200;x[c]=320;}
				}

				else if(dir=1)  //if direction is right
				{
				if(x[c]!=320){x[c]++;} else{y[c]=rand()%200;x[c]=1;}
				}
				c++;
				}

				c=21;
				while(c<=30)  //place 10 dark gray stars
				{
				pixel(x[c],y[c],DARKGRAY);
				c++;
				}
			}  //end of third star field data

		c=1;
		while(c<=10)  //place 10 white stars
		{
		pixel(x[c],y[c],WHITE);
		c++;
		}

		delay(i);
		if(inc==500){inc=2;}  //to keep the variable from getting too big
		}

set_mode(0x03);
_setcursortype(_NORMALCURSOR);
}
