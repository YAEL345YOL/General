// ΨΔΣL345ΨΘL
#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define f first
#define s second
#define pb push_back
#define ll long long
#define ull unsigned long long
#define sp(x) fixed<<setprecision(x)
#define all(x) x.begin(),x.end()
#define fore(it,i,f) for(auto it=i;it<f;++it)
#define letter(x) x>=65 && x<=90 || x>=97 && x<=122 ? true:false
#define number(x) x>=48 && x<=57 ? true:false
/*'A' = 65 'Z' = 90
  'a' = 97 'z' = 122
  '0' = 48 '9' = 57 */
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll tamalesRobados,cantidadDeIntegrantes;
    cin>>tamalesRobados>>cantidadDeIntegrantes;
    
    cout<<(tamalesRobados/2 + tamalesRobados%2) + ((tamalesRobados-(tamalesRobados/2 + tamalesRobados%2))%(--cantidadDeIntegrantes));
  
    return 0;
}
