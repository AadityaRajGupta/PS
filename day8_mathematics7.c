#include <stdio.h>
// Print all prime factors of the given number
// Sieve Of Eratosthnes:  // 2520
int DAT[101]={0};
int prime(int n)
{
    if (DAT[n]==1)
        return 0;
    if (n<2)
        DAT[n]=1;
    for(int i=2;i*i<=n;i++)
        if (DAT[i]==0)
            for(int j=i+i;j<=n;j+=i)
                DAT[j]=1;
    if (DAT[n]==1)
        return 0;
    return 1;
}
int main()
{
    int num;
    printf("ENTER ANY NUMBER: ");
    scanf("%d",&num);

    printf("\nALL PRIME FACTORS OF THE GIVEN NUMBER %d:\n",num);
    for(int i=1;i<=num;i++)
        if (prime(i) && num%i==0)
            printf("%d ",i);
    
    return 0;
}
