#include<stdio.h>
int fib(int);
int arr[20];
main()
{
    int n,i;
    printf("\nEnter the number : ");
    scanf("%d",&n);
    printf("\n");
fib(n);
 for(i=-1;i<n;i++)
    printf("%d\t",arr[i]);
}
int fib(int n)
{
    int i;
    if((n==0)||(n==1))
        return 1;
    arr[0]=1;
    arr[1]=1;
    for(i=2;i<n;i++)
        arr[i]=arr[i-1]+arr[i-2];
    return arr[n-1];
}

