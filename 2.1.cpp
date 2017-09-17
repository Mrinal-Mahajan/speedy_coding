#include<stdio.h>
int main()
{
	int rows,columns,i,j;
	scanf("%d %d",&rows,&columns);
	int array[rows][columns];
	for(i=0;i<rows;i++)
	for(j=0;j<columns;j++)
	scanf("%d",&array[i][j]);
	int left=0,right=columns-1,top=0,bottom=rows-1;
	while(right>=left || bottom>=top)
	{
		for(i=left;i<=right;i++)
		printf("%d",array[top][i]);
		
		for(i=top+1;i<=bottom;i++)
		printf("%d",array[i][right]);
		
		if(top<bottom)
		for(i=right-1;i>=left;i--)
		printf("%d",array[bottom][i]);
		
		if(right-1>left)
		for(i=bottom-1;i>top;i--)
		printf("%d",array[i][left]);
		
		left++;
		right--;
		top++;
		bottom--;
	}
}
