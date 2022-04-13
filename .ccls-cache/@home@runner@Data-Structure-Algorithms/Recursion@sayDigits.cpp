#include<bits/stdc++.h>
using namespace std;

void printDigits(int num)
{
	if(num == 0)
		return;
	printDigits(num / 10);
	cout << num % 10 << " , ";
	
}

int main()
{
	int num = 413;
	printDigits(num);
	cout << endl;
}