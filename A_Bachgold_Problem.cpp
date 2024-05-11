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

const int N = 1e7+123;
bitset<N> isPrime;
vector<int> primes;
int cnt[N];

void prime_gen(int n)
{

    for (int i = 3; i <= n; i += 2) isPrime[i] = 1;

    int sz = sqrt(n);

    for (int i = 3; i <= sz; i += 2){
        if (isPrime[i]){
            for (int j = i * i; j <= n; j += i){
                isPrime[j] = 0;
            }
        }
    }

    isPrime[2] = 1; 
    primes.push_back(2);

    for (int i = 3; i <= n; i++){
        if (isPrime[i] == 1){
            primes.push_back(i);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    

    int n; cin>>n; 

    ll sum = 0;

    if(n % 2 == 0){
        cout << n / 2 << endl; 
        for(int i = 0; i < n/2; i++){
            cout<< 2 << " "; 
        }
    }
    else{
        cout<< n / 2<< endl;
        for(int i = 0; i < (n/2) - 1; i++){
            cout<< 2 << " ";
        }
        cout<< 3 << endl; 
    }

    return 0; 
}