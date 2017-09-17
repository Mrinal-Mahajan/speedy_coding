#include<stdio.h>
void bubblesort(int array[],int index[])
{
	int i,j,temp;
	for(i=0;i<3;i++)
	{
		for(j=9;j>0;j--)
		{
			if(array[j]<array[j-1])
			{
				temp = array[j];
				array[j]=array[j-1];
				array[j-1]=temp;
				temp = index[j];
				index[j]=index[j-1];
				index[j-1]=temp;
			}
		}
	}
}
int bronze_medal(int array[])
{
	int i,index[10];
	for(i=0;i<10;i++)
	index[i]=i;
	bubblesort(array,index);
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


