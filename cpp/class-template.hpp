//
//  func-template.hpp
//  cpp-test
//
//  Created by lvfeng on 17/3/15.
//  Copyright © 2017年 lvfeng. All rights reserved.
//

#ifndef func_template_hpp
#define func_template_hpp


#include <iostream>

using std::cout;

using std::endl;

template<typename T1,typename T2>

class myClass{
    
private:
    
    T1 I;
    
    T2 J;
    
public:
    
    myClass(T1 a, T2 b);//Constructor
    
    void show();
    
};

//这是构造函数

//注意这些格式

template <typename T1,typename T2>

//myClass<T1,T2>::myClass(T1 a,T2 b):I(a),J(b)
myClass<T1,T2>::myClass(T1 a,T2 b)
{
    this->I = a;
    this->J = b;
}

//这是void show();

template <typename T1,typename T2>
void myClass<T1,T2>::show()
{
    cout<<"I="<<I<<", J="<<J<<endl;
}


#endif /* func_template_hpp */
