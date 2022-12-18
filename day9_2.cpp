// Minimum Height Triangle
//https://www.hackerrank.com/challenges/lowest-triangle/problem


/*
?CONCEPT:
For a given base b and area a, we want to know what is the smallest integer h, such that there exists a triangle with base b, height h, and area at least a.

The area of any triangle can be computed as follows:
                        ! area=0.5.base.height
Thus, we want the smallest integer h, such that:
                        ! a<=0.5*b*h
,
which means that h satisfies the equation:
                        ! h>= 2*a/b
So, the only thing to do is to find the smallest integer greater or equal to 2*a/b.

*The ceil() function in C++ returns the smallest possible integer value which is greater than or equal to the given argument.
                ? ceil(15.08)=16
*/

/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'lowestTriangle' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER trianglebase
 *  2. INTEGER area
 

!int lowestTriangle(int trianglebase, int area) {
?    double result = ceil(double(area * 2) / double(trianglebase));
?    return int(result);
?    
!}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int trianglebase = stoi(first_multiple_input[0]);

    int area = stoi(first_multiple_input[1]);

    int height = lowestTriangle(trianglebase, area);

    fout << height << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
 */