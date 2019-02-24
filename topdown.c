#include<stdio.h>
int fib(int);
int arr[20];
main()
{
    int n,i;
    printf("\nEnter the number : ");
    scanf("%d",&n);
    printf("\n");
    arr[1]=1;
    arr[2]=1;
    fib(n);
 for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
}
int fib(int n)
{
    if((n==0)||(n==1))
        return 1;
    if(arr[n]!=0)
        return arr[n];
    return arr[n]=fib(n-1)+fib(n-2);
}
