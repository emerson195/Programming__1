#include<iostream>
using namespace std;

int main()
{
	int num1, num2;
	
	cin >> num1;
	cin >> num2;
	if (num1%num2== 0)
		cout << "num1�Onum2������" << endl;
	else if (num1%num2 > 0)
		cout << "num1���Onum2������" << endl;

	return 0;


}