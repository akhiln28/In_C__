//
// Created by akhil on 14/8/17.
//

#ifndef IN_C_GRAPH_H
#define IN_C_GRAPH_H
#include <bits/stdc++.h>
using namespace std;

template<typename T>
void print_vector(vector<T> v)
{
    for(int i = 0;i < v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
class Graph{
public:
    int V,E;
    vector<bool> visited;
    vector<vector<int> > list;
    Graph(int V1,vector<vector<int> > list1);
    void degrees(vector<int> &v);
    vector<int> degrees();
    void topological_sort(vector<int> &v);
    void topological_sortutil(int i,stack<int> &st);
};
#endif //IN_C_GRAPH_H
