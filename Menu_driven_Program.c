//Menu Driven Program
//Author:PSN
//Date:8/10/2014

#include<stdio.h>
#include<conio.h>                  //for using getch() function (optional)

int main()
{
  int a[100],b[100],c[100];       //three arrays declared for adding a and b and storing result to c
  int res=0,choice,i,n;           //res-result,choice-for menu choice selection
  char ch;                       //for do while loop
  do
  {
    printf("\tArray Operations-MENU\n1.Largest Element\n2.Smallest Element\n3.Sum of Array\n");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:                    //case 1 to find the largest element
      printf("Enter the total no of elements\n");
      scanf("%d",&n);
      printf("Enter the array elements\n");
      for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
        res=a[0];
      }
      for(i=0;i<n;i++)
      {
        if(res<a[i])
        res=a[i];
      }
      printf("The largest element is:%d\n",res);
      break;
      case 2:                   //second case for finding smallest element
      printf("Enter the total no of elements\n");
      scanf("%d",&n);
      printf("Enter the array elements\n");
      for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
        res=a[0];
      }
      for(i=0;i<n;i++)
      {
        if(res>a[i])
        res=a[i];
      }
      printf("The smallest element is:%d \n",res);
      break;
      case 3:                 //3rd case to do array addition
      printf("Enter the total no of elements\n");
      scanf("%d",&n);
      printf("Enter the array elements of first array\n");
      for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }
       printf("Enter the array elements of second array\n");
      for(i=0;i<n;i++)
      {
        scanf("%d",&b[i]);
      }
      for(i=0;i<n;i++)
      {
        c[i]=a[i]+b[i];
      }
      printf("The sum of arrays is:\n");
       for(i=0;i<n;i++)
      {
        printf("%d\n",c[i]);
      }
      break;
      default:printf("Invalid choice :P \n");   
    }
    printf("Do you wish to redo the program?(Y/N)");
    scanf("%d",&ch);
  }
  while(ch=='Y'||ch=='y');
  return 0;
  getch();
  }
  
  //This code is compiled succesfully in Borland C++/C compiler and has shown no errors :D. If found bugs please comment it.
  //Don't forget to fork ;)
