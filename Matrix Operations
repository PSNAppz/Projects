#include<stdio.h>
int main()
{
	int a[5][5],i,j,k,even=0,odd=0,big=0,small=0,row,column;
	printf("Enter the array elements");

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]%2==0)
			{
				even++; //total even nos
			}
			else
			{
				odd++; //total odd nos
			}
		}
	}

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]>big)
			{
				big=a[i][j]; // biggest number
				
			}
			if(a[i][j]<small)
			{
				small=a[i][j]; // smallest number
			}
		}
	}


	for(i=0;i<5;i++)
	{
		row=0;
		printf("\n\n");
		for(j=0;j<5;j++)
		{
			row+=a[i][j];
			printf("%d\t",a[i][j]);
				
			
		}printf("\tSum:%d\n",row);
	}
	printf("-------------------------------------\n");	
	for(j=0;j<5;j++)
	{
		column=0;
		for(i=0;i<5;i++)
		{
			column+=a[i][j];
			
		}printf("Sum:%d\t",column);
	}	
	
printf("\n\nThere are %d even nos and  %d odd nos.\n%d is big and %d is small\n",even,odd,big,small);
return 0;
}
