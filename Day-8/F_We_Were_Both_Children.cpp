#include<bits/stdc++.h>
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define ll long long int
#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define vi vector<int>
#define vll vector<ll>
#define vp vector<pair<ll,ll>>
#define sorta(arr) sort(arr.begin(), arr.end());
#define sortd(arr) sort(arr.begin(), arr.end(), greater<int>());
#define All(X) (X).begin(),(X).end()
#define Unique(X) (X).erase(unique((X).begin(),(X).end()),(X).end())
#define range(arr) for(auto el: arr) cout<<el<<" ";


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    

    int t; cin>>t; 

    while(t--){
        int n; cin>>n; 

        vll v; 

        for(int i = 0; i < n; i++) {
            int x; cin>>x; 
            if(x <= n) v.pub(x); 
        }
        map <ll, ll> mp; 

        for(int i = 0; i < v.size(); i++){
            ll k = 0, j = 0;
            // cout<<v[i] << "-> ";
            while(k <= n){
                // cout<< j << " ";
                mp[j]++;
                j +=v[i]; 
                k++;
            }
            // cout<<endl;
        }

        ll mx = 0;

        // for(auto el: mp){
        //     cout<<el.first << " " << el.second <<endl;
        // }

        for(auto el: mp){
            if(el.first != 0 and el.first <= n){
                mx = max(mx, el.second);
            } 
        }

        cout<<mx<<endl; 
    }
    return 0; 
}