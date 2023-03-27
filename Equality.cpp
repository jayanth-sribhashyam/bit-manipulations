#include <iostream>
using namespace std;
#define ll long long
#define modulo 1000000007
 ll power(ll x,ll y)
 {
     if(y==0)
     {
        return 1; 
     }
     ll result=power(x,y/2);
     if(y%2!=0)
     {
         return ((x*result*result)%modulo);
     }
     else
     {
         return ((result*result)%modulo);
     }
 }


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
        cin>>n;
        ll sol=power(2,n-1);
        sol=sol%modulo;
        cout<<sol<<"\n";
	}
	return 0;
}
