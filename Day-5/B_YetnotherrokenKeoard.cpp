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
        string s; cin>>s; 

        stack <pair<char, int>> small, capital; 

        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'A' and s[i] <= 'Z'){
                if(s[i] == 'B'){
                    if(!capital.empty()) capital.pop();
                }
                else capital.push({s[i], i});
            }
            else {
                if(s[i] == 'b'){
                    if(!small.empty()) small.pop();
                }
                else small.push({s[i], i});
            }
        }

        vector < pair<char, int> > ans; 

        while(!capital.empty()){
            ans.pub(capital.top()); 
            capital.pop();
        }
        while(!small.empty()){
            ans.pub(small.top()); 
            small.pop();
        }

        sort(ans.begin(), ans.end(), [&](pair<char, int> a, pair<char, int> b){
            return a.second < b.second;
        });

        for(auto el: ans){
            cout<<el.first;
        } 
        cout<<endl;
    }
    return 0; 
}