#include <iostream>
using namespace std;
class Person
{
public:
	static void num() {};
	Person() {};
	~Person() {};
	int number;
private:
	//string name;
	int acc = 100;
};


class Doctor :public Person
{
public:
	 void num() {};
	 int number=10;
private:
	/*��ʱDoctor����3����Ա����
		2�����Ը���: acc number
		1����������number
	*/
};
//int main() {
//	cout<<sizeof Doctor;
//	Doctor d;
//	cout<<d.number;
//	return 0;
//}


