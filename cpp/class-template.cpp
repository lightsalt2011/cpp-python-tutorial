//
//  func-template.cpp
//  cpp-test
//
//  Created by lvfeng on 17/3/15.
//  Copyright © 2017年 lvfeng. All rights reserved.
//


 #include "class-template.hpp"

#include <iostream>

using std::cout;

using std::endl;

int main()

{
    
    myClass<int,int> class1(3,5);
    
    class1.show();
    
    myClass<int,char> class2(3,'a');
    
    class2.show();
    
    myClass<double,int> class3(2.9,10);
    
    class3.show();
    
    return 0;
    
}




