#include<stdio.h>

int product_digits(int n)
{
	int product =1;
	while(n>0)
	{
		product*=n%10;
		n/=10;
	}
	return product;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",product_digits(n));
}
