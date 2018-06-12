#include <vector>   
#include <iostream>   
using namespace std;  
int main()  
{  
	using namespace std;  
	vector <int> v1;  
	//vector <int>::iterator Iter; 
	vector <int>::const_iterator Iter;
	
	v1.push_back(10);  
	v1.push_back(20);  
	v1.push_back(30);  
	v1.push_back(40);  
	v1.push_back(50);  
	cout << "v1 =";  
	for(Iter = v1.begin(); Iter != v1.end(); Iter++)  
		cout << " " << *Iter;  
	cout << endl;  

	v1.erase(v1.begin());//删除v1的第一个元素  
	cout << "v1 =";  
	for(Iter = v1.cbegin(); Iter != v1.cend(); Iter++)  {
		if (*Iter == 20) {
			v1.erase(Iter);
			cout << " erase: " << *Iter << std::endl;
		}
		cout << " " << *Iter;  
	}
	cout << endl;  
	

#if 0
	//删除v1.begin() + 1和v1.begin() + 2两个元素  
	v1.erase(v1.begin() + 1, v1.begin() + 3);  
	cout << "v1 =";  
	for(Iter = v1.begin(); Iter != v1.end(); Iter++)  
		cout << " " << *Iter;  
	cout << endl;  
#endif

}  
