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
    

    string t, p; 
    cin>>t;
    cin>>p; 

    int n = t.size(), m = p.size(); 

    vi v(n); 
    for(int i = 0; i < n; i++){
        cin>>v[i]; 
    }

    auto ok = [&](int mid){
        vector <bool> bad(n+1); 
        for(int i = 0; i < mid; i++){
            bad[v[i]] = true; 
        }
        int j = 0; 
        bool found = false;
        for(int i = 0; i < n; i++){
            if(t[i] == p[j] && !bad[i+1]){
                j++;
            }
            if(j == m){
                found = true;
                break;
            }
        }
        return found; 
    }; 

    int left = 0, right = n, mid, ans = 0;
    while(left <= right){
        mid = left + (right - left) / 2; 
        if(ok(mid)){
            ans = mid; 
            left = mid + 1;
        }
        else right = mid - 1;
    }

    cout<<ans<<endl; 
    return 0; 
}