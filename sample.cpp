#include<bits/stdc++.h>
using namespace std;
//int a[200]={},b[200]={};
int main()
{
	string s;
	cin>>s;
	stack<char> c;
	stack<int> index;
	int l=s.length();
	for(int i=0;i<l;i++)
	{
		if(s[i]=='('||s[i]==')'||s[i]=='['||s[i]==']'||s[i]=='{'||s[i]=='}')
		{
			if(c.empty())
		{
			if(s[i]=='('||s[i]=='['||s[i]=='{')
			{c.push(s[i]);
			index.push(i+1);}
			else
			{
				c.push(s[i]);
			index.push(i+1);
			i=l;
			}
		}
		else
		{
			char x=c.top();
			if(x=='('&&s[i]==')')
			{
				c.pop(); index.pop();}
			else if(x=='{'&&s[i]=='}')
			{
				c.pop(); index.pop();}
			else if(x=='['&&s[i]==']')
			{
				c.pop(); index.pop();}
			else if(s[i]=='('||s[i]=='['||s[i]=='{')
			{
				c.push(s[i]);
				index.push(i+1);
			}
			else
			{ c.push(s[i]);
				index.push(i+1);
			
				i=l;
				}
		}
	}
	}
	if(index.empty())
	{
		cout<<"Success";
	}
	else
	{
		cout<<index.top();
	}
}

