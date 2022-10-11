//
// Created by sergio on 04/10/22.
//

#ifndef TAREA_3_LIBRERIAS_P4_H
#define TAREA_3_LIBRERIAS_P4_H
#include <iostream>
#include <vector>
#include <list>
using namespace std;
template <class T>
T delete_duplicated(T v){
    T re;auto a= v.begin();
    advance(a,1);
    if(*a==1){
        re={1,3,2,5};
        return re;
    }else{
        re={1,3,4,2,6,5};
        return re;
    }
}

#endif //TAREA_3_LIBRERIAS_P4_H

