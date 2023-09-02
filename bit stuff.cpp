#include<stdio.h>
int main()
{
	int i=0,j=0,count=0;
	char inputdata[20],stuffeddata[20];
	printf("Enter the data: ");
	scanf("%s",inputdata);
	while(inputdata[i]!='\0')
	{
	  stuffeddata[j]=inputdata[i];
	  if(inputdata[i]=='1')
	  {
	  	count++;
      }
      else
      {
      	count=0;
	  }
	  if(count==5)
	  {
	  	stuffeddata[++j]='0';
	  	count=0;
	  }
	  stuffeddata=='\0';
	  i++;
	  j++;
	}
	printf("Original data is: %s\n",inputdata);
	printf("After bit stuffing is : %s",stuffeddata);
}
