#include<stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long arr[n];
			cout<<"1 1 2 3"<<endl<<flush;
			long long ele;
			cin>>ele;
			cout<<"2 ";
			if(ele%2==0)
			{
				for(long i=0;i<n;i++)
				{
					cout<<ele+i+1<<" ";
				}
			}
			else
			{
				ele-=4;
				for(long i=0;i<n;i++)
				{
					cout<<ele+i+1<<" ";
				}
			}
		int output;
		cin>>output;
		if(output==-1)
			 break;

	}
}