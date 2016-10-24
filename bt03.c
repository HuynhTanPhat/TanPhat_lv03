#include<stdio.h>
void main()
{
    int i, s, n;
    printf("nhap n: ");
    scanf("%d",&n);
    i=0;
    s=1;
    for(i=1;i<=n;i++)
    {
        s*=i;
    }
    printf("\n%d ",s);
}
