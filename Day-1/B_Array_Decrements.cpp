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

        vi a(n), b(n); 

        map<int, int> mpA, mpB;

        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }

        for(int i = 0; i < n; i++) {
            cin>>b[i];
        }

        int mnDiff = INT_MAX;
        bool found = false;
        for(int i = 0; i < n; i++){
            if(a[i] - b[i] < 0){
                found = true;
                break;
            }
            else if(b[i] > 0){
                mnDiff = min(mnDiff, a[i] - b[i]); 
            }
        }

        if(found) no; 
        else {
            bool flag = false;
            for(int i = 0; i < n; i++){
                if(b[i] != 0){
                    if(mnDiff != a[i] - b[i]){
                        flag = true; 
                        break;
                    }
                }
                else{
                    if(a[i] - b[i] > mnDiff){
                        flag = true;
                        break;
                    }
                }
            }

            if(flag) no; 
            else yes;
        }

    }
    return 0; 
}