#include<stdio.h>
int max_contiguous(int array[],int n)
{
	int i,j,max=-99999,sum;
	for(i=0;i<n;i++)
	{
	    sum =array[i];
	    for(j=i+1;j<n;j++)
	    {
	    	sum+=array[j];
	    	if(sum>max)
	    	max=sum;
		}
			
	}
	return max;
	
	
}
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int array[n];
	for(i=0;i<n;i++)
	scanf("%d",&array[i]);
	printf("%d",max_contiguous(array,n));
}
