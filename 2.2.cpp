#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100],str2[100];
	scanf("%s %s",str1,str2);
	int i,j,count1,count2,flag=1;
	if(strlen(str1)==strlen(str2))
	{
	  for(i=0;i<strlen(str1);i++)
	  {
	  	count1=0;
	  	count2 =0;
	  	for(j=0;j<strlen(str1);j++)
	  	if(str1[j]==str1[i])
	  	count1++;
	  	
	    for(j=0;j<strlen(str1);j++)
	  	if(str2[j]==str1[i])
	  	count2++;
	  	
	  	if(count1 !=count2)
	  	{
	  		flag=0;
	  		break;
		  }
	  }	
	  if(flag=0)
	  printf("no");
	  else
	  printf("yes");
	}
	else
	printf("no");
}
