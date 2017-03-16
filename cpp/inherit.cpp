#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Point{
private:
    double x, y;
public:
    Point(double i, double j){
        x = i;
        y = j;
        cout<<"in Point constructor"<<x<<" "<<y<<endl;
    }
 
    virtual double Area() const{
        return 0.0;
    }
    
    virtual ~Point(){}
};

class Rectangle:public Point{
private:
    double w, h;
public:
    Rectangle(double i,double j,double k,double l);
    
    virtual double Area() const{
        return w * h;
    }
};

class Circle: public Point{
private:
    double x, y;
public:
    Circle(double i, double j, double x, double y);
    virtual double Area() const {
        return x * y;
    }
};

Rectangle::Rectangle(double i,double j,double k,double l):Point(i, j){
    /*
     子类继承父类时候，子类构造函数执行构造时候必须显示的执行父类的构造函数，除非父类Point是default的构造，default的构造是无参数的。
     */
    w = k;
    h = l;
}

Circle::Circle(double i, double j, double x, double y):Point(i, j){
    this->x = x;
    this->y = y;
}

void fun(Point &s){
    cout<<s.Area()<<endl;
    /*如果Point 的double Area() 方法不是virtual 那么此处仅仅是call 父类的方法，但此处是虚函数，虚函数的价值就是：如果有多个子类继承父类
     时候，子类可以call属于自己的方法。像fun这个函数一样，Rec/Cir 两个父类都可以通过这一个方法call自己的Area，实际的应用就游戏的包围和(box)，每个人物有自己的box，都可以用这一个方法call
     */
}

int main(){
    int a = 10; int *ptr = &a; int &b = a;
    
    printf("p %p\n", &ptr);
    printf("b %p, a %p\n", &b, &a);
    /*指针：指针是一个变量，只不过这个变量存储的是一个地址，指向内存的一个存储单元；而引用跟原来的变量实质上是同一个东西，只不过是原变量的一个别名而已。如：
     
     int a=1;int *p=&a;
     
     int a=1;int &b=a;
     
     上面定义了一个整形变量和一个指针变量p，该指针变量指向a的存储单元，即p的值是a存储单元的地址。
     
     而下面2句定义了一个整形变量a和这个整形a的引用b，事实上a和b是同一个东西，在内存占有同一个存储单元。*/
    
    Rectangle rec(3.0,5.2,15.0,25.0);
    fun(rec);
    
    Circle cir(1.0, 2.0, 3.0, 4.0);
    fun(cir);
    
    
    return 0;
}
