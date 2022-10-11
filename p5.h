//
// Created by sergio on 04/10/22.
//

#ifndef TAREA_3_LIBRERIAS_P5_H
#define TAREA_3_LIBRERIAS_P5_H
#include <iostream>
#include <tuple>
using namespace std;
template <class... T>
tuple<T&...> unpack(T&...args){return{args...};}
#endif //TAREA_3_LIBRERIAS_P5_H
