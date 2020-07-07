#include<iostream>
using namespace std;

int main()
{
	int num1, num2;
	
	cin >> num1;
	cin >> num2;
	if (num1%num2== 0)
		cout << "num1是num2的倍數" << endl;
	else if (num1%num2 > 0)
		cout << "num1不是num2的倍數" << endl;

	return 0;


}