#include <iostream>
using namespace std;
class Person
{
public:
	static void num() {};
	Person() {};
	~Person() {};
	//静态成员变量在类内声明+赋初值时必须时常量
	static int number ;
private:
	string name;
	int acc = 100;
};

int Person::number = 100;

class Doctor :public Person
{
public:
	static void num() {};
	static int number;
private:

};
int Doctor::number = 200;



//int main() {
//	//cout << sizeof Person;
//	//cout<<sizeof Doctor;
//	Doctor d;
//	//cout<<d.number;
//	//cout << d.Person::number;
//
//	cout<<&Doctor::number<<endl;
//	cout<<&Doctor::Person::number;
//	//两份实例
//	return 0;
//}