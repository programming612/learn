#include <iostream>
using namespace std;
class Person
{
public:
	static void num() {};
	Person() {};
	~Person() {};
	//��̬��Ա��������������+����ֵʱ����ʱ����
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
//	//����ʵ��
//	return 0;
//}