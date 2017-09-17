#include<stdio.h>
#include<string.h>
int main()
{
	char array[100];
	scanf("%s",array);
	int i,j,k;
	for(i=0;i<strlen(array);i++)
	{
		if('a'<=array[i] && array[i]<='z')
		{
			k=0;
			for(j=0;j<i;j++)
			{
				if(array[j]=='(')
				k++;
				if(array[j]==')')
				k--;
			}
			printf("%d ",k);
		}
	}
}
