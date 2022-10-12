//
// Created by sergio on 04/10/22.
//

#ifndef TAREA_3_LIBRERIAS_P1_H
#define TAREA_3_LIBRERIAS_P1_H
#include <iostream>
#include <vector>
#include <list>
using namespace std;
template<class T>
vector<vector<int>> split_range(T v1, int n){
    int c = 0;
    for (auto&& l:v1){c ++;}
    int ce = c/n;
    c = 0;vector<int> v2;vector <vector<int>> m;
    for (auto && l:v1){
      v2.push_back(l);c++;
      if(c == ce){m.push_back(v2);v2.erase(v2.begin(), v2.end());c=0;}}
    for (int i=0;i<v2.size();i++){m[n -1].push_back(v2[i]);}
    return m;}
#endif //TAREA_3_LIBRERIAS_P1_H
