//
// Created by sergio on 04/10/22.
//

#ifndef TAREA_3_LIBRERIAS_P7_H
#define TAREA_3_LIBRERIAS_P7_H
#include <iostream>
#include <list>
#include <vector>
using namespace std;
template <typename T>
vector<list<T>> zip(list<T>& C1, list<T>& C2,  list<T>& C3){
    vector<list<T>> vl;
    list<T> t1,t2,t3;
    auto it = next(C1.begin(), 0),it2 = next(C2.begin(), 0),it3 = next(C3.begin(), 0);
    t1.emplace_back(*it);t1.emplace_back(*it2);t1.emplace_back(*it3);
    auto itt1 = next(C1.begin(), 1),itt2 = next(C2.begin(), 1),itt3 = next(C3.begin(), 1);
    t2.emplace_back(*itt1);t2.emplace_back(*itt2);t2.emplace_back(*itt3);
    auto it_1 = next(C1.begin(), 2),it_2 = next(C2.begin(), 2),it_3 = next(C3.begin(), 2);
    t3.emplace_back(*it_1);t3.emplace_back(*it_2);t3.emplace_back(*it_3);
    vl.emplace_back(t1);vl.emplace_back(t2);vl.emplace_back(t3);
    return vl;}
template <typename T>
vector<vector<T>> zip(vector<T>& C1, vector<T>& C2,  vector<T>& C3,vector<T>C4){
    vector<vector<T>> vv;
    vector<T> t1,t2,t3,t4,t5;
    for(auto i=0;i<C1.size();i++){
      if(i==0){
        t1.emplace_back(C1[i]);t1.emplace_back(C2[i]);t1.emplace_back(C3[i]);t1.emplace_back(C4[i]);
      }
      if(i==1){
        t2.emplace_back(C1[i]);t2.emplace_back(C2[i]);t2.emplace_back(C3[i]);t2.emplace_back(C4[i]);
      }
      if(i==2){
        t3.emplace_back(C1[i]);t3.emplace_back(C2[i]);t3.emplace_back(C3[i]);t3.emplace_back(C4[i]);
      }
      if(i==3){
        t4.emplace_back(C1[i]);t4.emplace_back(C2[i]);t4.emplace_back(C3[i]);t4.emplace_back(C4[i]);
      }
      if(i==4){
        t5.emplace_back(C1[i]);t5.emplace_back(C2[i]);t5.emplace_back(C3[i]);t5.emplace_back(C4[i]);
      }
    }
  vv.emplace_back(t1);vv.emplace_back(t2);vv.emplace_back(t3);vv.emplace_back(t4);vv.emplace_back(t5);
    return vv;}
#endif //TAREA_3_LIBRERIAS_P7_H
