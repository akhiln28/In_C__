//
// Created by akhil on 14/8/17.
//
#include <iostream>
#include <stack>

using namespace std;
bool parenthesis_checker(string str){
    stack<char> st;
    for(int i = 0;i < str.length();i++)
    {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[' || st.empty()) st.push(str[i]);
        else if(str[i] == ')')
        {
            if(st.top() != '(') return false;
            else st.pop();
        }
        else if(str[i] == '}')
        {
            if(st.top() != '{') return false;
            else st.pop();
        }
        else if(str[i] == ']')
        {
            if(st.top() != '[') return false;
            else st.pop();
        }
    }
    if(st.empty()) return true;
    else return false;
}
