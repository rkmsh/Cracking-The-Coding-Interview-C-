#include<bits/stdc++.h>

using namespace std;

bool Permutation(string str1, string str2);

int main()
{
	string str1, str2;
	cout<<"Enter the 1st String:";
	getline(cin, str1);
	cout<<"Enter the 2nd String:";
	getline(cin, str2);

	if(Permutation(str1, str2))
	{
		cout<<"2nd String is permutation of the first!\n";
	}
	else
	{
		cout<<"2nd String is NOT the Permutation of the first!\n";
	}

	return 0;
}

bool Permutation(string str1, string str2)
{
	if(str1.size() != str2.size()) return false;

	int count[128] = {};

	for(int i = 0; i<str1.size(); i++)
	{
		int val = (int)str1[i];
		count[val]++;
	}

	for(int i = 0; i<str2.size(); i++)
	{
		int val = (int)str2[i];
		count[val]--;
	}
	
	for(int i = 0; i<128; i++)
	{
		if(count[i]<0 || count[i]>0) return false;
	}
	return true;
}
