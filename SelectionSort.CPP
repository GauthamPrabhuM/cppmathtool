#include<iostream.h>
#include<dos.h>
#include<process.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gdriver = EGA, gmode = EGAHI, errorcode;
	initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
	const int sx=getmaxx();
	const int sy=getmaxy();
	int a[1000];
	int dx=100;
	setcolor(3);

	int n=sx/dx;
	for(int i=0;i<n;i++)
	{
		a[i]=random(sy);
		for(int j=i*dx;j<dx+i*dx;j++)
		{
			line(j,sy,j,sy-a[i]);

		}
	}

	cout<<n;
	getch();

	int c=1;int position;
	int small=0;
	for(i=0;i<n;i++)
	{       small=a[i];
		position=i;
		for(int j=i+1; j<n; j++)
		{


			if(a[j]<small)
			{
				small=a[j];
				position=j;
				a[position]=a[i];
				a[i]=small;

			}
			cleardevice();
		clrscr();
		for(int k=0;k<n;k++)
		{
			for(int j=k*dx;j<dx+k*dx;j++)
			{
				line(j,sy,j,sy-a[k]);

			}
		}
		delay(10);



		}

	}//outer for
	getch();
}