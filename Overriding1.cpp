#include <iostream>
using namespace std;

class Employee
{
	public:
		string name;
		int id;
		float sal;
		Employee() {}
		Employee(string n, int i, float s) : name(n), sal(s), id(i) {}
		void calculatesalary()
		{
			cout<<"EMployee Salary : ";
			cout<<sal;
		}
};

class Manager : public Employee
{
	public:
		float bonus;
		Manager() {}
		Manager(string n, int i, float s, float b) : bonus(b), Employee(n,i,s) {}
		void calculatesalary()
		{
			cout<<"Manager salary ";
			sal = (sal + (bonus*sal/100));
			cout<<sal;
		}
};

class Developer : public Employee
{
	public:
		float var;
		Developer() {}
		Developer(string n, int i, float s, float v) : var(v), Employee(n,i,s) {}
		void calculatesalary()
		{
			cout<<"Developer salary ";
			sal = (sal + (var*sal*1.25/100));
			cout<<sal;
		}
};

int main()
{
	Manager m1("ABC",111,50000,10);
	Developer d1("XYZ",222,50000,20);
	Employee e("JKL",456,10000);
/*
	m1.calculatesalary();
	cout<<"\n";
	d1.calculatesalary();
	cout<<"\n";

*/
	Employee* ptr1 = &e;
	ptr1->calculatesalary();
	cout<<"\n";
	Employee* ptr2 = &m1;
	ptr2->calculatesalary();
	cout<<"\n";
	Employee* ptr3 = &d1;
	ptr3->calculatesalary();
	delete ptr1;
	delete ptr2;
	delete ptr3;

}

