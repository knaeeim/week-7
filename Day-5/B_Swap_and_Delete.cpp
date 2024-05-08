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

        string ans = "";
        
        int zeroCount = 0, oneCount = 0; 

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1') oneCount++;
            else zeroCount++;
        }

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1'){
                if(zeroCount > 0){
                    ans.pub('0');
                    zeroCount--;
                }
                else break;
            }
            else if(s[i] == '0'){
                if(oneCount > 0){
                    ans.pub('1');
                    oneCount--;
                }
                else break;
            }   
        }

        cout<<s.size() - ans.size() << endl; 
        
    }
    return 0; 
}