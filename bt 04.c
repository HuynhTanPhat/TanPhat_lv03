#include<stdio.h>
void main()
{
    int n,i, dem=0;
    printf("nhap n: ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
     if(i%2==0)
       dem++;
     printf("\n%d", i);
    }
    printf("\n%d so chan ", dem);
}
