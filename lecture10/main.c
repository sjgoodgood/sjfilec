#include<stdio.h>

int main()
{
	char screen[450];
	int a = 0;
	while(a<15)
	{
		int b = 0;
		while(b<30)
		{
			if(a==0||a==14)
			{
				screen[b]='*';
			}
			else if(b==0||b==29)
			{
				screen[b]='*';
			}
			else
			{
				screen[b]=' ';
			}
			b+=1;
		}
		screen[30]='\n';
		screen[31]='\0';
		printf("%s",screen);
		a+=1;
	}
	return 0;
}
		
