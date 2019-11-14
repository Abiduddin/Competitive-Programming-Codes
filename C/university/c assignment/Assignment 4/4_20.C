#include<graphics.h>
#include<conio.h>

int  main()
{
	int driver=DETECT,gmode;
	initgraph(&driver,&gmode,"C:\\TC\\BGI");
	circle(300,200,100);
	line(300,150,300,250);
	getch();
}