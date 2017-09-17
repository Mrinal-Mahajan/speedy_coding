#include<stdio.h>
#include<math.h>
void isperfect(int n)
{
	int i,sum=0;
	for(i=1;i<=n/2;i++)
	if(n%i==0)
	sum+=i;
	if(sum==n)
	printf("yes");
	else
	printf("no");
	
}
int main()
{
	int n;
	scanf("%d",&n);
	isperfect(n);
}
