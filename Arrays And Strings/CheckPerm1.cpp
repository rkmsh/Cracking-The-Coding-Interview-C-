#include<bits/stdc++.h>

using namespace std;

bool permutation(string str1, string str2);

int main()
{
	string str1, str2;
	cout<<"Enter the 1st String:";
	getline(cin, str1);
	cout<<"Enter the 2nd String:";
	getline(cin, str2);

	if (permutation(str1, str2))
	{
		cout<<"2nd String is permutation of the other.\n";
	}
	else
	{
		cout<<"2nd String is not the permutation of the other.\n";
	}
	return 0;
}

bool permutation(string str1, string str2)
{
	sort(str1.begin(), str1.end());
	sort(str2.begin(), str2.end());

	if(str1.size() != str2.size()) return false;
       
	else if(str1 == str2) return true;

	else return false;
}
