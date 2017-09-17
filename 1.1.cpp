#include<stdio.h>
#include<math.h>
int perfectsquares(int a,int b)
{
	int i,ans=0;
	for(i=a;i<=b;i++)
	{
		if (sqrt(i)-int(sqrt(i))==0)
		ans++;
	}
	return ans;
	
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",perfectsquares(a,b));
}
