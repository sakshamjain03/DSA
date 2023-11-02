#include <iostream>
using namespace std;
int Maximum(int x, int y)
{
	if(x>y){
		return x;
	}
	else{
		return y;
	}
}
void Swap(int &x, int &y)
{
	int temp =x;
	x=y;
	y=temp;// no need to return as orignal value is changed
}
int main()
{
	int test, a, b, r;
	cin >> test;
	cin >> a >> b;
	switch (test)
	{
	case 1:
		r = Maximum(a, b);
		cout << r;
		break;
	case 2:
		Swap(a, b);
		cout << a << " " << b;
		break;
	default:
		cout << "Invalid test option";
	}
	return 0;
}