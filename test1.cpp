#include <iostream>
#include <vector>
#include "Strings/parenthesis_checker.cpp"
#include "Stack/next_larger_element.cpp"
#include "Graphs/Graph.h"

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0;i < n;i++){
            cin >> v[i];
        }
        print_vector(next_larger_element(v));
    }
    return 0;
}