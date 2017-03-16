//������
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Vehicle{  
protected:      
    float speed;
    int   total;     
public:     
    Vehicle(float speed,int total){    
        this->speed = speed;    
        this->total = total;
		cout<<"in Vehicle construct"<<endl;
    }    
	Vehicle(const Vehicle  & vv){
		cout<<"in Vehicle copy"<<endl;
	}

    virtual void ShowMember() = 0;//���麯���Ķ���

    virtual ~Vehicle(){}
};

class Car:public Vehicle{
protected:      
    int aird;   
	
public:
    Car(int aird,float speed,int total):Vehicle(speed,total){      
        this->aird = aird;    
		cout<<"in car construct"<<endl;
    }
    Car(Car & cc):Vehicle(cc){
		this->aird = cc.aird;
		cout<<"in Car copy "<<endl;
	}

    virtual  void ShowMember(){   //�������Ա��������  
        cout<<aird<<"|"<<speed<<"|"<<total<<endl;    
    }   
};      
  
int main()    
{  
	//Vehicle a(100,4);//����,�����಻�ܴ�������   
    Car b(250,150,4);
	cout<<"========"<<endl;
	Car c = b;
    b.ShowMember();  
	return 0;
}
