//
//  stl-test.cpp
//  cpp-test
//
//  Created by lvfeng on 17/3/16.
//  Copyright © 2017年 lvfeng. All rights reserved.
//

#include "stl-template.hpp"

#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <list>

using std::cout;
using std::endl;
using std::list;
using std::vector;

template <typename T>
void print(T v)
{
    typename T::iterator itor;
    for (itor = v.begin(); itor != v.end(); ++itor)
    {
        cout << *itor << " ";
    }
    cout << endl;
}

int main(int argc, char **argv){
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    if(!l.empty())
        print(l);
    
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(6);
    if(!vec.empty())
        print(vec);
    
    return 0;
}

