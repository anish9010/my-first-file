#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI (3.141592653589)
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] " 


void solve()
{
int m,h;
cin>>m>>h;
int l=m/(h*h);
if(l<=18)
cout<<1<<endl;
else if(l>=19&&l<=24)
cout<<2<<endl;
else if(l>=25&&l<=29)
cout<<3<<endl;
else
cout<<4<<endl;

    
}


signed main(){
FAST_IO;
int t;
cin>>t;
while(t--)
solve();
return 0;
}
