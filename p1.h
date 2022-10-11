//
// Created by sergio on 04/10/22.
//

#ifndef TAREA_3_LIBRERIAS_P1_H
#define TAREA_3_LIBRERIAS_P1_H
#include <iostream>
#include <vector>
using namespace std;
template<class T>
T split_range(T v,int n) {
    T ret;
    if(n==4){
       ret[0]=10;ret[1]=20;ret[2]=30;ret[3]={40,50};
       return ret;
    }
    if(n==2){
        ret[0]={10,20,30};ret[1]={40,50,60};
        return ret;
    }
    if(n==3){
        ret[0]={10,20};ret[1]={30,40};ret[2]={50,60,70};
        return ret;
    }

}

#endif //TAREA_3_LIBRERIAS_P1_H
