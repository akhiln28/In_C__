//
// Created by akhil on 14/8/17.
//
#include <iostream>
#include <bits/stdc++.h>
#include "Graph.h"
using namespace std;

Graph :: Graph(int V,vector<vector<int> > list)
{
    this->list = list;
    this->V = V;
}
//this gives the reference to the vector of degrees of each vertex
void Graph :: degrees(vector<int> &v)
{
    v.resize(V);
    for(int i = 0;i < V;i++)
        v[i] = list[i].size();
}
vector<int> Graph :: degrees()
{
    vector<int> v(V);
    for(int i = 0;i < V;i++)
        v[i] = list[i].size();
    return v;
}
//this gives vector of topological sortings
void Graph :: topological_sort(vector<int> &v)
{
    v.resize(V);
    //initializing the visited vector
    visited.resize(V);
    stack<int> st;
    for(int i = 0;i < V;i++)
    {
        if(!visited[i])
        {
            topological_sortutil(i,st);
        }
    }
    //making the topological sort
    //here v is the reverse of st(which is the postfix order)
    for(int i = 0;i < V;i++)
    {
        v[i] = st.top();st.pop();
    }
}
void Graph :: topological_sortutil(int i,stack<int> &st){
    visited[i] = 1;
    vector<int> v = list[i];
    for(int j = 0;j < v.size();j++)
    {
        if(!visited[v[j]]) topological_sortutil(v[j],st);
    }
    st.push(i);
}


