#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
       
    for(int i = 0; i < t; i++){
        int m, a, b, c, nm;
        cin >> m >> a >> b >> c;
        pair<int, int> asientos(m, m);
        if(asientos.first <= a) asientos.first = 0;
        else asientos.first -= a;
        if(asientos.second <= b) asientos.second = 0;
        else asientos.second-= b;
        nm = (asientos.first + asientos.second);
        if(nm <= c) nm = 0;
        else  nm -= c;
        cout << (m*2) - nm<< "\n";
    }   
    
    return 0;
}  