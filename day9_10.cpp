// Count Primes
// https://leetcode.com/problems/count-primes/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//! TIME EXCEEDED  20/66
class Solution
{
public:
    int prime_function(long long num)
    {
        long long i;
        for (i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                return 0;
            }
        }
        return num;
    }
    int countPrimes(long long n)
    {
        int count = 0;
        for (long long i = 2; i < n; i++)
        {
            if (prime_function(i) != 0)
            {
                count++;
            }
        }
        return count;
    }
};

//! NEW TIME ERROR  19/66
class Solution
{
public:
    int countPrimes(int n)
    {
        int count = 0;
        for (int j = 2; j < n; j++)
        {
            int isPrime = 1;
            for (int i = 2; i * i <= j; i++)
            {
                if (j % i == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime)
                count++;
        }
        return count;
    }
};

//! NEW 63/66
class Solution
{
public:
    int countPrimes(int n)
    {
        if (n <= 2)
            return 0;
        vector<int> v(n, 0);
        int ans = 0;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (!v[i])
            {
                for (int j = i * i; j < n; j += i)
                    v[j] = 1;
            }
        }
        for (int i = 2; i < n; i++)
            if (!v[i])
                ans++;
        return ans;
    }
};

// Square root approach
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
int printPrime(int n)
{
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
            count++;
    }
    return count;
}

/*Sieve of Eratosthenes
The best approach is to use the Sieve of Eratosthenes algorithm.

Let’s check the algorithm:

- return 0 if n <= 2
- initialize bool primes array
  bool primes[n]
- initialize i, j and set count = 0
- set all primes array value to true
  - loop for i = 2; i < n; i++
    - primes[i] = true
- loop for i = 2; i <= sqrt(n); i++
  - if primes[i]
    - loop for j = i + i; j < n; j += i
      - primes[j] = false
- count all primes[i] = true
  loop for i = 2; i < n; i++
    - if primes[i]
      - count = count + 1
- return count
The time complexity of this approach is O(N * loglog(N)).

C++ solution
class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2)
            return 0;
        bool primes[n];
        int i, j, count = 0;
        for(i = 2; i < n; i++){
            primes[i] = true;
        }
        for(i = 2; i <= sqrt(n); i++){
            if(primes[i]){
                for(j = i+i; j < n; j += i)
                    primes[j] = false;
            }
        }
        for(i = 2; i < n; i++)
            if(primes[i])
                count++;
        return count;
    }
};
*/
// ACCEPTED: https://alkeshghorpade.me/post/leetcode-count-primes

class Solution
{
public:
    int countPrimes(int n)
    {
        if (n <= 2)
            return 0;

        bool primes[n];
        int i, j, count = 0;

        for (i = 2; i < n; i++)
        {
            primes[i] = true;
        }

        for (i = 2; i <= sqrt(n); i++)
        {
            if (primes[i])
            {
                for (j = i + i; j < n; j += i)
                    primes[j] = false;
            }
        }

        for (i = 2; i < n; i++)
            if (primes[i])
                count++;

        return count;
    }
};

/*
Input: n = 10
Step 1: if n <= 2
        10 < 2
        false
Step 2: bool primes[n]
        int i, j, count = 0
Step 3: loop for(i = 2; i < n; i++){
            primes[i] = true
        }
        so all values from primes[0] to primes[9] are set to true.
Step 4: loop for i = 2; i <= sqrt(n)
          i <= sqrt(10)
          2 <= 3
          true
          if primes[2]
            true
          loop for j = i + i; j < n
            j = i + i
              = 4
            j < n
            4 < 10
            true
            primes[j] = false
            primes[4] = false
            j += i
            j = j + i
              = 4 + 2
              = 6
            j < n
            6 < 10
            true
            primes[j] = false
            primes[6] = false
            j += i
            j = j + i
              = 6 + 2
              = 8
            j < n
            8 < 10
            true
            primes[j] = false
            primes[8] = false
            j += i
            j = j + i
              = 8 + 2
              = 10
            j < n
            10 < 10
            false
            i++
            i = 3
Step 5: i <= sqrt(10)
        3 <= 3
        true
        if primes[3]
            true
        loop for j = i + i; j < n
             j = i + i
               = 6
        j < n
        6 < 10
        true
        primes[j] = false
        primes[6] = false
        j += i
        j = j + i
          = 6 + 3
          = 9
        j < n
        9 < 10
        true
        primes[j] = false
        primes[9] = false
        j += i
        j = j + i
          = 9 + 3
          = 12
        j < n
        12 < 10
        false
        i++
        i = 4
Step 6: i <= sqrt(10)
        4 <= 3
        false
Step 7: loop for i = 2; i < n; i++
              if primes[i]
                count++
        primes from index 2
        = [true, true, false, true, false, true, false, false]
        so count of true is 4.
Step 8: return count
So we return the answer as 4.
*/
