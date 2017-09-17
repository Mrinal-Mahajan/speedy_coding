#include<stdio.h>
void sort(int array[],int index[],int left,int right)
{
	int x = array[(left+right)/2];
	int i=left,j=right,w;
	
	do
	{
		while(array[i]<x)
		i++;
		while(array[j]>x)
		j--;
		if(i<=j)
		{
			w = array[i];
			array[i]=array[j];
			array[j]=w;
			w = index[i];
			index[i]=index[j];
			index[j]=w;
			i++;
			j--;
		}
	}while(i<=j);
	
	if(array[2]==x)
	return;
	if(left<j && array[2]<x)
	sort(array,index,left,j);
	if(i<right && array[2]>x)
	sort(array,index,i,right);
}

int bronze_medal(int array[])
{
	int index[10],i;
	for(i=0;i<10;i++)
	index[i]=i;
	sort(array,index,0,9);
	return index[2]+1;
}
int main()
{
	int array[10],t;
	scanf("%d",&t);
	int i,answer[t],j;
	for(i=0;i<t;i++)
	{
		for(j=0;j<10;j++)
		scanf("%d",&array[j]);
		answer[i] = bronze_medal(array);
	}
	for(i=0;i<t;i++)
	printf("%d\n",answer[i]);
}
