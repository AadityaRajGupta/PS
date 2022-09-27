// https://docs.google.com/spreadsheets/d/1NFa8r6Oi6gkmkQKmtVlRONwc-sbLvi5wjHQrQQ8b1Jo/edit?usp=sharing
#include <stdio.h>
#include <string.h>
// ctrl+alt+M ==> stop background process

/*
Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character),
and depending upon which the total salary is calculated as -
totalSalary = basic + hra + da + allow – pf. where : hra = 20% of basic, da = 50% of basic, allow = 1700 if grade = ‘A’, allow = 1500 if grade = ‘B’,
allow = 1300 if grade = ‘C' or any other character, pf = 11% of basic.Round off the total salary and then print the integral part only.
 */
int salary()
{
    int basic, total_salary;
    float hra, da, allow, pf;
    char grade;
    printf("ENTER BASIC SALARY:");
    scanf("%d", &basic);
    hra = 0.2 * basic;
    da = 0.5 * basic;
    pf = 0.11 * basic;
    printf("ENTER GRADE:");
    // gets(grade);
    scanf(" %c", &grade);
    if (grade == 'A')
    {
        allow = 1700;
    }
    else if (grade == 'B')
    {
        allow = 1500;
    }
    else
    {
        allow = 1300;
    }
    // printf("\n\n%f\n",allow);
    total_salary = basic + hra + da + allow - pf;
    printf("TOTAL SALARY:%d", total_salary);
    return 0;
}


int help_kuku_enigma_problem()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT*/
    int contest_n,iq_q,test_t,a[100],bin[100],i,j;

    scanf("%d",&test_t);

    for (i=0;i<test_t;i++)
    {
        scanf("%d%d",&contest_n,&iq_q);
        for (j=0;j<contest_n;j++)
        {
            scanf("%d",&a[j]);
        }


    for (j=0;j<contest_n;j++)
    {
        if (a[j]<=iq_q)
        {
            iq_q++;
            bin[j]=1;
        }
        else
        {
            bin[j]=0;
        }
    }

    for(j=0;j<contest_n;j++)
    {
        printf("%d",bin[j]);
    }
        printf("\n");
    }
    return 0;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        //quadrant();
    return 0;
}