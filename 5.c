//greatest number in an array
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,b=-999999999;
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
     {
         if (a[i]>b)
            b=a[i];
     }
    printf("Largest number is %d",b);
    getch();
    return 0;

}
