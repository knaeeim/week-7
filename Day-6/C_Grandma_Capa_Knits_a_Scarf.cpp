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
        string s; cin>>s; 

        int left = 0, right = n - 1, ans = 0; 

        bool isFirst = true;
        char selected;

        while(left < right){
            if(s[left] == s[right]){
                left++; 
                right--;
                continue;
            }

            if(s[left] != s[right] and isFirst){
                ans++;
                selected = s[left];
                isFirst = false;
                left++;
                continue;
            }

            if(s[left] != s[right]){
                ans++;
                if(selected == s[left]){
                    left++;
                }
                else if(selected == s[right]){
                    right--;
                }
                else{
                    ans = INT_MAX;
                    break;
                }
            }
        }

        int ans1 = ans; 

        left = 0, right = n - 1, ans = 0; 

        isFirst = true;
        selected;

        while(left < right){
            if(s[left] == s[right]){
                left++; 
                right--;
                continue;
            }

            if(s[left] != s[right] and isFirst){
                ans++;
                selected = s[right];
                isFirst = false;
                right--;
                continue;
            }

            if(s[left] != s[right]){
                ans++;
                if(selected == s[left]){
                    left++;
                }
                else if(selected == s[right]){
                    right--;
                }
                else{
                    ans = INT_MAX;
                    break;
                }
            }
        }

        if(ans == INT_MAX and ans1 == INT_MAX ) cout<<-1<<endl;
        else cout<<min(ans, ans1)<<endl; 
    }
    return 0; 
}