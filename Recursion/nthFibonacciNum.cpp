#include<bits/stdc++.h>
using namespace std;

int nthFibonacci(int n)
{
	if(n == 1)
		return 0;
	if(n == 2)
		return 1;
	return nthFibonacci(n-1) + nthFibonacci(n-2);
}
int main()
{
	int n = 8;
	cout << nthFibonacci(8) << endl;
}