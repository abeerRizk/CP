#include <iostream>
using namespace std;


ll fast_power(ll n , ll x)
{
    ll res = 1;
    while(n)
    {
        if(n%2 == 1)
            res = x*res;
        x = x*x;
        n/=2;

    }
    return res;
}

int main() {
	// your code goes here
	return 0;
}
