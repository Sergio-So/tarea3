//
// Created by sergio on 04/10/22.
//

#include "p3.h"
int p3(){
    vector<int> v1 = {1, 3, 4, 1, 3, 2, 3, 4, 6, 5};
    auto v3 = delete_range(v1, 1); // {3, 4, 3, 2, 3, 4, 6, 5}
    list<int> v2 = {1, 3, 4, 1, 3, 2, 3, 4, 6, 5};
    auto v4 = delete_range(v1, {1, 4});	 // {3, 3, 2, 3, 6, 5}
}
