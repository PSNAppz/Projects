#include<stdio.h>
void sortasc(void);
void sortdesc(void);
int main()
{
	int choice;
   printf("\t-----MENU-Sorting Array-----\n1.Ascending sort\n2.Descending sort\n\n\tEnter your choice:");
   scanf("%d",&choice);
   switch(choice)
   {
   	case 1:sortasc();break;
      case 2:sortdesc();break;
      default:printf("Invalid option\n");
   }

   return 0;
}

void sortasc()          
{
	int i,j,temp,a[10];
	printf("Enter the array(of 10)to sort in descending order\n");
   for(i=0;i<10;i++)
   	scanf("%d",&a[i]);
   for(i=0;i<10;i++)
   {
   	for(j=0;j<10;j++)
      {
      	if(a[i]<a[j])
         {
      	 temp=a[i];
          a[i]=a[j];
          a[j]=temp;
         }
       }
    }
   printf ("\n Ascending order: ");
	for (i=0 ; i<10 ; i++)           
	{
		printf (" %d", a[i]);
	}

}

void sortdesc()        
{
	int i,j,temp,a[10];
	printf("Enter the array(of 10)to sort in descending order\n");
   for(i=0;i<10;i++)
   	scanf("%d",&a[i]);
  for(i=0;i<10;i++)
   {
   	for(j=0;j<10;j++)
      {
      	if(a[i]<a[j])
         {
      	 temp=a[i];
          a[i]=a[j];
          a[j]=temp;
         }
       }

    }
   printf ("\n Descending order: ");
	for (i=10 ; i>0 ; i--)         
	{
		printf (" %d", a[i-1]);
	}

}
