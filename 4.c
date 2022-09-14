//copy one array into another
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,j,s=0,copy[10];
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0,j=0;i<=9;i++,j++)
        copy[j]=a[i];
    for(j=0;j<=9;j++)
        printf("%d  ",copy[j]);
    getch();
    return 0;

}
