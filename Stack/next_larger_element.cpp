//
// Created by akhil on 14/8/17.
//
#include <iostream>
using namespace std;

vector<int> next_larger_element(vector<int> v){
    vector<int> ans(v.size());
    ans[v.size() - 1] = -1;
    stack<int> st;
    st.push(v.size() - 1);
    for(int i = v.size() - 2;i >= 0;i--)
    {
        if(v[i] >= v[st.top()]){
            while(v[i] >= v[st.top()]) st.pop();
            if(st.empty()) st.push(i);
            else if(v[i] < v[st.top()])
            {
                st.push(i);
                ans[i] = v[st.top()];
            }
        }
        else
        {
            ans[i] = v[st.top()];
            st.push(i);
        }
    }
    return ans;
}

