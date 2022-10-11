//
// Created by sergio on 04/10/22.
//

#include "p2.h"
int p2(){
    vector<int> v1 = {1, 3, 4};
    vector<int> v2 = {4, 5, 6};
    auto v3 = sum_range(v1, v2); // {5, 8, 10}
    list<int> v4 = {1, 2, 3, 4, 5};
    list<int> v5 = {10, 20};
    auto v6 = sum_range(v4, v5); // {11, 22, 13, 24, 15}
    for(auto i:v6)
        cout<<i<<" ";
}
