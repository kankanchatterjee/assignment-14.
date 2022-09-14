//second largest number in an array
//sort elements of array of size 10
#include<stdio.h>
#include<conio.h>
int main()
{
  int a[10],i,j,temp;
  printf("Enter 10 numbers");
  for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
  for(i=0;i<9;i++)
  {
      for(j=i+1;j<10;j++)
      {
          if (a[i]>a[j])
          {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
          }

      }
  }

    printf("second largest number is %d  ",a[8]);

  getch();
  return 0;
}

