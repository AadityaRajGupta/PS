#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void move_stk2_to_stk1(stack<char>& stk1, stack<char> stk2)
{
    if(stk2.empty())
        return;
    
    char temp=stk2.top();
    stk2.pop();
    move_stk2_to_stk1(stk1,stk2);
    stk1.push(temp);
}
void clear_the_stack(stack<char>& stk)
{
    while(!stk.empty())
        stk.pop();
}

void print_stk(stack<char> stk)
{
    if(stk.empty())
        return;
    
    char temp=stk.top();
    stk.pop();
    print_stk(stk);
    cout << temp << " " ;
}
int main()
{
    stack<char> primary;
    stack<char> backup;
    stack<pair<int,int>> type_data;
    int Q;
    cin >> Q;
    while(Q--)
    {
        // printf("stack: ");
        // print_stk(primary);
        // cout << endl;

        int type;
        cin >> type;
        switch (type)
        {
            case 1:
                {
                    string s;
                    cin >> s;
                    type_data.push({type,s.size()});
                    for(int i=0;s[i]!='\0';i++)
                    {
                        primary.push(s[i]);
                    }

                    
                }
                break;

            case 2:
                {
                    int pop_n;
                    cin >> pop_n;
                    type_data.push({type,pop_n});
                    while(pop_n--)
                    {
                        char temp=primary.top();
                        primary.pop();
                        backup.push(temp);
                    }
                }
                break;
            case 3:
                {
                    int print_n;
                    cin >> print_n;
                    int count = primary.size()-print_n;
                    // cout << "count : " << count << endl;
                    for(int i=0;i<count;i++)
                    {
                        if (!primary.empty())
                        {
                            char temp = primary.top();
                            primary.pop();
                            backup.push(temp);
                        }
                    }

                    cout << primary.top() << endl;

                    for(int i=0;i<count;i++)
                    {
                        char temp=backup.top();
                        backup.pop();
                        primary.push(temp);
                    }
                }
                break;
            
            case 4:
                {
                    auto temp = type_data.top();
                    type_data.pop();
                    if(temp.first==1)
                    {
                        for(int i=0;i<temp.second;i++)
                        {
                            primary.pop();
                        }
                    }
                    else if(temp.first==2)
                    {
                        for(int i=0;i<temp.second;i++)
                        {
                            char prev_data = backup.top();
                            backup.pop();
                            primary.push(prev_data);
                        }
                    }
                }
                break;
        }
    }
    
    
    return 0;
}