#include<bits/stdc++.h>
using namespace std;

int GCD(int n1, int n2)
{
	if (n2 == 0) {
		return n1;
	}
	return GCD(n2, n1 % n2);
}

int MaxGCD(vector<int> reactivity, int n)
{
	int max = 0;
	for (int i = 0; i < n-1; i++) 
    {
        for(int j=i+1; j < n; j++)
        {
            int val = 0;
            // if(i != j)
            // {
                val = GCD(reactivity[i], reactivity[j]);
		        if (val > max) 
                {
			        max = val;
		        }
            // }
        }
	}

	return max;
}

int main()
{
    string input;
    getline(cin, input);
    vector<int> reactivity;
    istringstream ts(input);
    string w;
    while (ts >> w) 
    {
        if(w.size() == 1)
        {
            reactivity.push_back(w[0] - 55);
        }
        
        else
        {
            reactivity.push_back(((w[0] - 55) * (w[1] - 60)) + (w[1] - 61));
        }
        
    }
    int n = reactivity.size();
	cout << MaxGCD(reactivity, n);
    
    return 0;
}