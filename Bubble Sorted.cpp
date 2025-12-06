#include <bits/stdc++.h>
using namespace std;

int rounds(vector<int> a){
    int r=0;
    while(!is_sorted(a.begin(), a.end())){
        r++;
        for(int i=0;i<(int)a.size()-1;i++)
            if(a[i]>a[i+1]) swap(a[i],a[i+1]);
    }
    return r;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        vector<tuple<int,int,int>> cons(m);
        for(int i=0;i<m;i++){
            int k,l,r; 
            cin >> k >> l >> r;
            cons[i]={k,l,r};
        }

        long long ans=0;
        vector<int> p(n);
        iota(p.begin(),p.end(),1);

        do{
            vector<int> b(n);
            for(int i=0;i<n;i++)
                b[i]=rounds(vector<int>(p.begin(),p.begin()+i+1));

            bool ok=true;
            for(auto [k,l,r]:cons){
                int c=0;
                for(int i=0;i<n;i++) if(b[i]<=k) c++;
                if(c<l || c>r){ok=false; break;}
            }
            if(ok) ans++;
        }while(next_permutation(p.begin(),p.end()));

        cout << ans << "\n";
    }
}
