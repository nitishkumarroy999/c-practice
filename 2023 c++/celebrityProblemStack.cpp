#include<iostream>
#include<vector>
#include<stack>
using namespace std;

bool isCelebrity(int p, vector<vector<int>>&a)
{
	int n=a.size();
	//row check
	for(int i=0;i<n;i++)
	{
		if(a[p][i]==1)return false;
	}
	//col check
	for(int j=0;j<n;j++)
	{
		if(j==p)continue;
		if(a[j][p]==0)return false;
	}

	//after both condition satisfied
	return true;
}

int findCelebrity(vector<vector<int>>&a)
{
	int n=a.size();

	stack<int>st;
	//stack contain possible celebrity
	for(int i=0;i<n;i++)st.push(i);

	//elmination start
	while(st.size()>1)
	{
		int firstPerson=st.top();
		st.pop();
		int secondPerson=st.top();
		st.pop();

		if(a[firstPerson][secondPerson]==1)
		{
			// chance of first person to become celebrity is ended
			st.push(secondPerson);
		}
		else
		{
			//first does not know second
			// so second eliminated from race of celebrity
			st.push(firstPerson);
		}
	}

	int potentialCelebrity=st.top();
	bool chk=isCelebrity(potentialCelebrity,a);
	if(chk==true)return potentialCelebrity;
	//otherwise
	return -1;

}

int main()
{
	int n;
	cin>>n;
	vector<vector<int>>a(n,vector<int>(n));

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}

	int ans=findCelebrity(a);
	if(ans==-1)cout<<"No Celebrity"<<endl;
	else cout<<ans<<endl;
}