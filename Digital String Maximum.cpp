#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        vector<int> f(10,0);

        for(int i=0;i<n;i++){
            int x=s[i]-'0';
            if(i==0) f[x]++;
            else{
                if(x==0) f[0]++;
                else f[x-1]++;
            }
        }

        string ans="";
        for(int d=9;d>=0;d--) ans+=string(f[d],char('0'+d));
        cout<<ans<<"\n";
    }
}
