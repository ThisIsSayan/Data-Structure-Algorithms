#include <bits/stdc++.h>
using namespace std;

const int MAX = 10000;
int pf[MAX + 1];

void create()
{
	bool isPrime[MAX + 1];
	memset(isPrime, true, sizeof(isPrime));

	for (int j = 2; j * j <= MAX; j++) 
    {
		if (isPrime[j] == true) 
        {
			for (int i = j * 2; i <= MAX; i += j)
				isPrime[i] = false;
		}
	}

	pf[0] = pf[1] = 0;
	for (int j = 2; j <= MAX; j++) 
    {
		pf[j] = pf[j - 1];
		if (isPrime[j])
			pf[j]++;
	}
}

int solve(int n1, int n2)
{
	return pf[n2] - pf[n1 - 1];
}

int main()
{
	create();

    int n;
    cin >> n;
	int m = 1, count = 1;
    while(n > 1)
    {
        int ans = solve(m, n);
        n -= ans;
        count++;
    }
    cout << count;
	return 0;
}



