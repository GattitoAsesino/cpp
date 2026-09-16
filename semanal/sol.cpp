#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    
    cin >> t;
    for (int i = 0; i < t;i++)
    {
        int n, k;
        cin >> n >> k;
        cout << ((k-1)/(n-1) * n + (k-1)% (n-1)+1) << endl;
    }
    
    
    return 0;
}  