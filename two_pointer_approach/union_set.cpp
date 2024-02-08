#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// merge two sorted array
int merge_two()
{
    int a[5]={1,2,3,4,5},b[7]={3,4,5,6,7,8,9},c[10];
    int i=0,j=0;
    int k=0;
    int m=5 , n=7;
    while(i<m && j<n)
    {
        if(a[i]<=b[j])
            c[k++]=a[i++];
        else if(a[i]>b[j])
            c[k++]=b[j++];
    }
    while(i<m)  c[k++]=a[i++];
    while(j<n)  c[k++]=b[j++];

    printf("MERGE OF TWO SORTED ARRAY:");
    for(int h=0;h<k;h++)
        cout << c[h] << " ";
    cout << endl;    
    return 0;
}

// union 
int union_function()
{
    int a[5]={1,2,3,4,5},b[7]={3,4,5,6,7,8,9},c[10];
    int i=0,j=0;
    int k=0;
    int m=5 , n=7;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
            c[k++]=a[i++];
        else if(a[i]>b[j])
            c[k++]=b[j++];
        else
        {
            c[k++]=a[i++];
            j++;
        }
    }
    while(i<m)  c[k++]=a[i++];
    while(j<n)  c[k++]=b[j++];

    printf("UNION OF TWO SORTED ARRAY:");
    for(int h=0;h<k;h++)
        cout << c[h] << " ";
    cout << endl;    
    return 0;
}

// intersection 
int intersection_function()
{
    int a[5]={1,2,3,4,5},b[7]={3,4,5,6,7,8,9},c[10];
    int i=0,j=0;
    int k=0;
    int m=5 , n=7;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
            i++;
        else if(a[i]>b[j])
            j++;
        else
        {
            c[k++]=a[i++];
            j++;
        }
    }

    printf("INTERSECTION OF TWO SORTED ARRAY:");
    for(int h=0;h<k;h++)
        cout << c[h] << " ";
    cout << endl;    
    return 0;
}

// difference 
int difference_function()
{
    int a[5]={1,2,3,4,5},b[7]={3,4,5,6,7,8,9},c[10];
    int i=0,j=0;
    int k=0;
    int m=5 , n=7;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
            c[k++]=a[i++];
        else if(a[i]>b[j])
            j++;
        else
        {
            i++;j++;
        }
    }
    while(i<m)  c[k++]=a[i++];

    printf("DIFFERENCE OF TWO SORTED ARRAY:");
    for(int h=0;h<k;h++)
        cout << c[h] << " ";
    cout << endl;    
    return 0;
}

// symmetric difference
int symmetric_difference_function()
{
    int a[5]={1,2,3,4,5},b[7]={3,4,5,6,7,8,9},c[10];
    int i=0,j=0;
    int k=0;
    int m=5 , n=7;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
            c[k++]=a[i++];
        else if(a[i]>b[j])
            c[k++]=b[j++];
        else
        {
            i++;j++;
        }
    }
    while(i<m)  c[k++]=a[i++];
    while(j<n)  c[k++]=b[j++];

    printf("SYMMETRIC DIFFERENCE OF TWO SORTED ARRAY:");
    for(int h=0;h<k;h++)
        cout << c[h] << " ";
    cout << endl;    
    return 0;
}

int main()
{
    merge_two();
    union_function();
    intersection_function();
    difference_function();
    symmetric_difference_function();
    return 0;
}

// // for each loop
// for(auto n:num)
// {
//     cout << n << " ";
// }