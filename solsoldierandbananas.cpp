#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int k,w;
	long long n,sum = 0;
	cin >> k >> n >> w;
	for(int i = 1; i <= w; i++)
		sum+= i*k;
	if(n > sum) cout << "0";
	else{
	cout << sum - n; 
	}
		
}