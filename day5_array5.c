#include <stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n,i;
    printf("ENTER ANY NUMBER:");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
        printf("%d ",i);
    
    if (n%2!=0)    i=n-1;
    else i--;

    for(;i>=2;i=i-2)
        printf("%d ",i);

/*
    even tho loop 0 = n/2
    0 - n odd strore 
    loop n/2+1 ==> n
    0 - n eveen store

    else n odd 
    n+1;*/

    return 0;
}