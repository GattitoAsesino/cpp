#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string t, s;
    cin >> t >> s;
       
    reverse(t.begin(), t.end());
    if(t == s) 
    cout << "YES";
    else 
    cout << "NO";
    
    return 0;
}  