#include <bits/stdc++.h>
#define ll long long
ll modularExponentiation(ll x, ll n, ll m) {
	if(n==0) return 1;
	ll res=modularExponentiation(x,n/2,m);
	if(n%2==1) return (res%m*res%m*x%m)%m;
	else return (res%m*res%m)%m;
}
