//
// Created by sergio on 04/10/22.
//

#ifndef TAREA_3_LIBRERIAS_P8_H
#define TAREA_3_LIBRERIAS_P8_H
#include <iostream>
#include <forward_list>
#include <fstream>
#include <string>
#include <list>
#include <vector>
#include <deque>
using namespace std;
template <template<class> class Container=vector, class T>
Container<T> filter_codes(T file, char character){
    ifstream document(file);string ch;Container<T> out;
    if (document.is_open()){while (getline(document, ch)){if (ch[0] == character){out.push_back(ch);}}}
    document.close();sort(out.begin(), out.end());return out;}

#endif //TAREA_3_LIBRERIAS_P8_H
