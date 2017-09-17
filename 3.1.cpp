#include<stdio.h>
int blocks(int n)
{
	if(n==1)
	return 1;
	else if(n==2)
	return 3;
	else
	return blocks(n-1)*2+1;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",blocks(n));
}
