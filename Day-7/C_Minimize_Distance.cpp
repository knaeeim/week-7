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
        int n, k; 
        cin>>n>>k; 

        vi positive, negative; 

        int x;
        for(int i = 0; i < n; i++){
            cin>>x; 
            if(x < 0) negative.pub(-x); 
            else positive.pub(x);
        }

        ll ans = 0; 

        sorta(positive); 
        sorta(negative); 
        reverse(positive.begin(), positive.end()); 
        reverse(negative.begin(), negative.end()); 

        if(negative.size() == 0){
            if(positive.size() != 0){
                for(int i = 0; i < positive.size(); i+=k){
                    ans +=(positive[i] * 2);
                }
                ans -=positive[0]; 
            }
            cout<<ans<<endl;
        }
        else if(positive.size() == 0){
            if(negative.size() != 0){
                for(int i = 0; i < negative.size(); i+=k){
                    ans +=(negative[i] * 2);
                }
                ans -= negative[0];
            }
            cout<<ans<<endl;
        }
        else{
            for(int i = 0; i <positive.size(); i+=k){
                ans +=positive[i] * 2; 
            }
            for(int i = 0; i <negative.size(); i+=k){
                ans +=negative[i] * 2; 
            }
            if(positive[0] > negative[0]){
                ans -=positive[0];
            }
            else{
                ans -=negative[0];
            }
            cout<<ans<<endl; 
        }
    }
    return 0; 
}