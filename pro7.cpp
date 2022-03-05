#include<iostream>

using namespace std;
class employ
{
	public:
	int salary,hour;
	void getinfo();
	void addsalary();
	void addwork();
};


	void employ :: getinfo()
	{
	cout<<"ent the salary:="<<endl;
	cin>>salary;
	cout<<"ent the hours of work per day:="<<endl;
	cin>>hour;
	}



	void employ :: addsalary()
	{
	cout<<"add $10 if it is less than $500"<<endl;
	salary+=10;
	cout<<"final salary :="<<salary;

	}


	void employ :: addwork()
	{
	cout<<"adds $5 if no of hours wrok per day is more than 6"<<endl;
	salary+=5;
	cout<<"final salary :="<<salary;
	}

	int main()
	{
	employ e;
	e.getinfo();

	if(e.salary<500)
{
	e.addsalary();
}
	if(e.hour>6)
{
	e.addwork();
}
	return 0;
	}

