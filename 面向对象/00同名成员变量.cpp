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
	/*此时Doctor类有3个成员变量
		2个来自父类: acc number
		1个来自自身：number
	*/
};
//int main() {
//	cout<<sizeof Doctor;
//	Doctor d;
//	cout<<d.number;
//	return 0;
//}


