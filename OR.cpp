#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    bool con=false;
	    long long arr[x],BOR=0;
	    for(int i=0;i<x;i++)
	    {
	        cin>>arr[i];
	        BOR=BOR|arr[i];
	    }
	    for(int j=0;j<=y;j++)
	    {
	        if((BOR|j)==y)
	        {
	            cout<<j<<"\n";
	            con=true;
	            break;
	        }
	    }
	    if(!con)
	    {
	        cout<<"-1\n";
	    }
	    
	}
	return 0;
}
