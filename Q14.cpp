#include <bits/stdc++.h>
int modularExponentiation(int x, int n, int m) {
	if(n==0) return 1;
	int res=modularExponentiation(x,n/2,m);
	if(n%2==1) return (res%m*res%m*x%m)%m;
	else return (res%m*res%m)%m;
}
