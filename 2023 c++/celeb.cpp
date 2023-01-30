

// The problem with this code is that the findCelebrity function does not have a return statement at the end. This means that if the celebrity is not found, the function will not return -1 as it should. To fix this, we can add a return statement at the end of the function:
#include<iostream>
#include<vector>
#include<stack>

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

    if(chk==true)return potentialCelebrity;   // Added return statement here to fix the problem  

    //otherwise  

    return -1;   // Added return statement here to fix the problem  

     }