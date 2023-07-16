 
#include <bits/stdc++.h>
#define ll long long
#define MOD 100000007
using namespace std;
 
 
int main()
{
    string s = "";
    string p = "";
    
    cin >> s;
    cin >> p;
    
    ll count = 0;
    string con = p + "$" + s;
    
    ll Zarr[con.size()];
    
    ll L = 0;
    ll R = 0;
    ll i =1;
    ll k =0;
    for(i;i<con.size();i++) {
        if(i > R) {
            L = R = i;
            
            while(R < con.size() && con[R-L] == con[R]) {
                R++;
            }
            Zarr[i] = R - L;
            R--;
        }
        else {
            k = i - L;
            
            if(Zarr[k] < R-i+1) {
                Zarr[i] = Zarr[k];
            }
            else {
                L = i;
                
                while(R < con.size() && con[R-L] == con[R])
                    R++;
                Zarr[i] = R-L;
                R--;
            }
        }
        
        if(Zarr[i] == p.size())
        count++;
    }
    cout << count;
}   