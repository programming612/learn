#include <iostream>
#include<string>
using namespace std;
/*���μ̳У�
		base
	1         1
	son1     son2
	 1			1
	   grandson
	������ͬʱ�̳�һ���࣬���������ֱ�ͬһ����̳У���ʱgrandson�����׳��ֶ�����
	���������ʹ����̳�
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