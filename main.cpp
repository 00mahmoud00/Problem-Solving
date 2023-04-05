#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void readFromFile(string input = "TestCode.txt",string output="OutPutCode.txt") {
#ifndef ONLINE_JUDGE
    freopen(input.c_str(),"r",stdin);
    freopen(output.c_str(),"w",stdout);
#endif
}
vector<int> vec,frq;

void solve(){
    int n;cin>>n;

    vec = vector<int>(n);
    frq = vector<int>(n + 10,0);
    for(auto &it : vec) {
        cin>>it;
        frq[it]++;
    }
    int ans = 0;
    for(int l = 0;l<n;l++){
        int sum = 0;
        for(int r = l ; r<n;r++){
            sum += vec[r];
            if(l == r)continue;

            if(sum <= n){
                ans += frq[sum];
                frq[sum] = 0;
            }
        }
    }
    cout<<ans<<endl;
    frq.clear();
}

int main(){
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    readFromFile();
    int t;scanf("%d",&t);while(t--)
        solve();
    return 0;
}#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void readFromFile(string input = "TestCode.txt",string output="OutPutCode.txt") {
#ifndef ONLINE_JUDGE
    freopen(input.c_str(),"r",stdin);
    freopen(output.c_str(),"w",stdout);
#endif
}
vector<int> vec,frq;

void solve(){
    int n;cin>>n;

    vec = vector<int>(n);
    frq = vector<int>(n + 10,0);
    for(auto &it : vec) {
        cin>>it;
        frq[it]++;
    }
    int ans = 0;
    for(int l = 0;l<n;l++){
        int sum = 0;
        for(int r = l ; r<n;r++){
            sum += vec[r];
            if(l == r)continue;

            if(sum <= n){
                ans += frq[sum];
                frq[sum] = 0;
            }
        }
    }
    cout<<ans<<endl;
    frq.clear();
}

int main(){
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    readFromFile();
    int t;scanf("%d",&t);while(t--)
        solve();
    return 0;
}#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void readFromFile(string input = "TestCode.txt",string output="OutPutCode.txt") {
#ifndef ONLINE_JUDGE
    freopen(input.c_str(),"r",stdin);
    freopen(output.c_str(),"w",stdout);
#endif
}
vector<int> vec,frq;

void solve(){
    int n;cin>>n;

    vec = vector<int>(n);
    frq = vector<int>(n + 10,0);
    for(auto &it : vec) {
        cin>>it;
        frq[it]++;
    }
    int ans = 0;
    for(int l = 0;l<n;l++){
        int sum = 0;
        for(int r = l ; r<n;r++){
            sum += vec[r];
            if(l == r)continue;

            if(sum <= n){
                ans += frq[sum];
                frq[sum] = 0;
            }
        }
    }
    cout<<ans<<endl;
    frq.clear();
}

int main(){
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    readFromFile();
    int t;scanf("%d",&t);while(t--)
        solve();
    return 0;
}