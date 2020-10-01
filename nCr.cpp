// O(n)
// most efficient solution
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll nCr(ll n,ll k)
{
    ll res = 1; 
  
    // Since C(n, k) = C(n, n-k) 
    if (k > n - k) 
        k = n - k; 
  
    // Calculate value of [n*(n-1)*---*(n-k+1)] / [k*(k-1)*---*1] 
    for (ll i = 0; i < k; ++i) 
    { 
        res *= (n - i); 
        res /= (i + 1); 
    } 
  
    return res; 
} 
int main()
{
	cout<<nCr(500,200);
	return 0;
}
