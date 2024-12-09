#include <iostream>
#include<string>
using namespace std;
/*菱形继承：
		base
	1         1
	son1     son2
	 1			1
	   grandson
	两个类同时继承一个类，这两个类又被同一个类继承，此时grandson类容易出现二义性
	解决方法，使用虚继承
*/
class Person {
public: int number;
	  string name;
};
class Doctor1 :virtual public Person{
//public: int number=10;
}
;
class Doctor2 :virtual public Person{
//public: int number=20;
};

class  hkdDoctor : public Doctor1,  public Doctor2 {

};
//int main() { 
//	//hkdDoctor a;
//	////a.Doctor1::name = 10;
//	//a.number = 30;
//	//cout << a.number;
//	return 0; }