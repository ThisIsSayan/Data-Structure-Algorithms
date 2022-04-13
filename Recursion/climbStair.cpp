#include<bits/stdc++.h>
using namespace std;

int climb(int stair)
{
	if(stair < 0)
		return 0;
	if(stair == 0)
		return 1;

	return climb(stair-1) + climb(stair-2);
}

int main()
{
	int n = 5;
	cout << climb(n) << endl;
	return 0;
}