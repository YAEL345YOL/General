// ΨΔΣL345ΨΘL
#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define ull unsigned long long
#define sp(x) fixed<<setprecision(x)
#define all(x) x.begin(),x.end()
#define letter(x) x>=65 && x<=90 || x>=97 && x<=122 ? true:false
#define number(x) x>=48 && x<=57 ? true:false
// 'A' = 65 'Z' = 90
// 'a' = 97 'z' = 122
// '0' = 48 '9' = 57
int main(){
    cin.tie(0)->sync_with_stdio(0),cout.tie(0);
    ll n;
    cin>>n;
    ll aux=n,total=0;
    for(ll x=n-1;x>0;--x){
        aux*=x;
        total+=aux;
    }
    cout<<total+(n+1);
    return 0;
}
