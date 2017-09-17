#include<stdio.h>
int absolute(int a,int b)
{
	if(a-b>0)
	return a-b;
	else
	return b-a;
}

int main()
{
	int n,num;
	scanf("%d %d",&n,&num);
	int array[n],i,j,index,count,min=99999,temp;
	for(i=0;i<n;i++)
	{
	scanf("%d",&array[i]);
	temp = absolute(array[i],num);
	if(temp<min)
	{
		min=temp;
		index =i;
	}
    }
	i=index-1;
	j=index+1;
	count=0;
	while(count<5)
	{
	  	printf("%d ",array[index]);
	  	if(absolute(array[i],num)<absolute(array[j],num))
	  	{
	  	   index = i;
		   i--;	 	
		}
		else
		{
			index = j;
			j++;
		}
		count++;
	}
	
}
