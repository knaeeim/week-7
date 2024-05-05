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

bool possible(ll mid, int n, int x, int y){
    if(mid < min(x, y)) return false;

    int cnt = 1; 
    mid -= min(x, y); 

    cnt += mid/x + mid/y; 
    return cnt >= n;
}


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    

    int n, x, y; 
    cin>>n>>x>>y; 

    ll left = 0, right = max(x, y) * n, ans = 0; 

    while(left <= right){
        ll mid = left + ( right - left ) / 2; 

        if(possible(mid, n, x, y)){
            ans = mid; 
            right = mid - 1;
        }
        else left = mid + 1;
    }

    cout<< ans << endl;
    return 0; 
}