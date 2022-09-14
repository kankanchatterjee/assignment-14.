#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,s=0;
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
        s=s+a[i];
    printf("Average is %f",s/10.0);
    getch();
    return 0;
}
