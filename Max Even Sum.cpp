#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long a,b;
        cin >> a >> b;

        long long res = -1;

        for(long long k=1;k*k<=b;k++){
            if(b%k==0){
                long long k1 = k, k2 = b/k;
                long long s1 = a*k1 + b/k1;
                long long s2 = a*k2 + b/k2;
                if(s1%2==0) res = max(res,s1);
                if(s2%2==0) res = max(res,s2);
            }
        }

        cout << res << "\n";
    }
}
