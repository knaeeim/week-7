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
        int n, q; 
        cin>>n>>q; 

        vi v(n), v1(q); 

        for(int i = 0; i < n; i++) cin>>v[i];
        for(int i = 0; i < q; i++) cin>>v1[i];

        set <int> checking; 

        for(int i = 0; i < q; i++){
            if(checking.count(v1[i])) continue;
            checking.insert(v1[i]); 
            for(int j = 0; j < n; j++){
                if(v[j] % ( 1 << v1[i] ) == 0){
                    v[j] += (1 << v1[i] - 1);
                }
            }
        }

        range(v);
        cout<<endl;
    }
    return 0; 
}