#include<bits/stdc++.h>

using namespace std;

bool isUnique(string str);

int main()
{
	string str;
	cout<<"Enter the string:";
	getline(cin, str);

	if(isUnique(str))
	{
		cout<<"\nString has all Unique Characters.";
	}
	else
	{
		cout<<"\nString has Duplicate Characters.\n";
	}
	return 0;
}

bool isUnique(string str)
{
	if(str.size() > 128) return false;
	
	set<int> s;
	for(int i=0; i < str.size(); i++)
	{
		int val = (int)str[i];
		if(s.count(val)) return false;

		s.insert(val);
	}
	return true;
}
