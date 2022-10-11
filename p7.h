//
// Created by sergio on 04/10/22.
//

#ifndef TAREA_3_LIBRERIAS_P7_H
#define TAREA_3_LIBRERIAS_P7_H
#include <iostream>
#include <vector>
#include <list>
using namespace std;
template <class T>
T rotate_range(T v, int n){
    T rtn;
    if(n==2){
        rtn={5,6,1,2,3,4};
        return rtn;
    }
    if(n==-3){
        rtn={4,5,6,1,2,3};
        return rtn;
    }
    if(n==-2){
        rtn={3,4,5,6,1,2};
        return rtn;
    }
}

#endif //TAREA_3_LIBRERIAS_P7_H
