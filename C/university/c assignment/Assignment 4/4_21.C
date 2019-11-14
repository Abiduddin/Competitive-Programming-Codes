#include<graphics.h>
#include<conio.h>

int main()
{
	int driver = DETECT,gmode;
	initgraph(&driver,&gmode,"C:\\TC\\BGI");
	setcolor(GREEN);
	rectangle(200,150,400,250);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(300,170,GREEN);

	setcolor(RED);
	circle(300,200,30);
	setfillstyle(SOLID_FILL,RED);
	floodfill(300,200,RED);


	getch();
}