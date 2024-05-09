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
        vi a(n), taken; 
        string ans = ""; 
        bool broken = false;
        for(int i = 0; i < n; i++){
            cin>>a[i]; 
            if(taken.empty()){
                ans.pub('1');
                taken.pub(a[i]); 
            }
            else{
                if(broken){
                    if(a[i] < taken.back()){
                        ans.pub('0');
                    }
                    else{
                        if(a[i] > taken[0]){
                            ans.pub('0');
                        }
                        else{
                            ans.pub('1');
                            taken.pub(a[i]);
                        }
                    }
                }
                else{
                    if(a[i] >= taken.back()){
                        ans.pub('1'); 
                        taken.pub(a[i]);
                    }
                    else{
                        if(a[i] > taken[0]){
                            ans.pub('0'); 
                        }
                        else{
                            broken = true; 
                            ans.pub('1'); 
                            taken.pub(a[i]);
                        }
                    }
                }
            }
        }

        cout<<ans<<endl;
    }
    return 0; 
}