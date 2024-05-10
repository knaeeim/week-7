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
    

    int n; cin>>n; 

    string ans = ""; 

    if(n % 2 == 0){
        int f = 1; 
        for(int i = 0; i < n; i+=2){
            if(f ==  1){
                ans += "aa";
            }
            else{
                ans += "bb";
            }
            f = f ^ 1;
        }
    }
    else{
        int f = 1; 
        for(int i = 0; i < n - 1; i+=2){
            if(f ==  1){
                ans += "aa";
            }
            else{
                ans += "bb";
            }
            f = f ^ 1;
        }

        if((n/2) % 2 == 0) ans +="a";
        else ans +="b";
    }

    cout<< ans << endl; 
    return 0; 
}