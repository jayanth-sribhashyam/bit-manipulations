#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,bxor=0;
	    cin>>n;
	    long long arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        bxor=bxor^arr[i];
	    }
	    cout<<bxor*2<<"\n";
	    
	}
	return 0;
}
