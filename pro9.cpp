#include <iostream>
using namespace std;
 
class addamount
{
private:
    int amount;
 
public:
    addamount()
{
	amount=50;
}

	addamount(int a)
{
	amount=50;
	amount=a+amount;
}
	void print_amount()
{
	cout<<amount<<endl;
}
};

int main()
{
	addamount a1;
	addamount a2(15);
	a1.print_amount();
	a2.print_amount();

	return 0;
}
