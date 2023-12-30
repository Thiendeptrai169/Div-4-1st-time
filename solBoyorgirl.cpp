#include <bits/stdc++.h>
using namespace std;
 

int main()
{
	set<char> se;
	char c[101];
	cin >> c;
	for(int i = 0; i < strlen(c); i++){
		se.insert(c[i]);
	}
 
	if(se.size() % 2 == 0) cout << "CHAT WITH HER!";
	else cout << "IGNORE HIM!";
}