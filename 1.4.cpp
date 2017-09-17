#include<stdio.h>

int main()
{
	float x1,y1,x2,y2,x3,y3;
	scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
	float m1 = (y2-y1)/(x2-x1);
	float m2 = (y3-y2)/(x3-x2);
	if(m1==m2)
	printf("Yes");
	else
	printf("No");
}
