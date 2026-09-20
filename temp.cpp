#include<bits/stdc++.h> 

using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

#ifdef LOCAL
#include "dbg/dbg.h"
#else
#define dbg(...)
#endif
#define ll long long
#define ld long double
#define vi vector<int>
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend() 
#define vll vector<ll>
#define vvll vector<vll>
#define pll pair<ll, ll>
#define vpll vector<pair<ll, ll>>
#define vvpll vector<vpll>
#define uid uniform_int_distribution
#define endl '\n'
#define found(x, y) (x.find(y) != x.end()) //set - map - unordered_set - unordered_map
#define sz(x) (ll)x.size()

//ceil and floor 
ll cdiv(ll a, ll b) {return a/b+((a^b)>0&&a%b);}
ll fdiv(ll a, ll b) {return a/b-((a^b)<0&&a%b);} 

//loops
#define rep(i, a, b) for(ll i = (a); i < (b); i++)
#define repinv(i,a,b) for(ll i = (a); i >= (b); i--)

const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;
const double PI = acos(-1);

//#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
//#pragma GCC optimize("O3,unroll-loops")
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w",stdout);

//bits 
ll msb(ll x) { return (x == 0 ? 0 : 64 - __builtin_clzll(x)); }
ll lsb(ll x) { return __builtin_ffsll(x); }

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count()); 
template<class T> T rnd(T a, T b){return uid<T>(a, b)(rng);}
template<class T> vector<T> rnd(int  n, T a, T b){vector<T> v(n);for(auto&x:v) x = rnd(a, b); return v;}
string rnd_str(ll n, char a='a',char b='z'){string s(n, '\0');for(auto&c:s)c=uid<ll>(a, b)(rng); return s;} 
template<class A, class B> auto& operator>>(istream& is, pair<A, B>&p){return is >> p.ff >> p.ss;}
template<class A, class B> auto& operator<<(ostream& os, const pair<A, B>&p){return os << p.ff << ' ' << p.ss;}
template<class T> auto& operator>>(istream& i, vector<T>& v){for(auto& x : v)i >> x; return i;}
template<class T> auto& operator<<(ostream& os, const vector<T>& v){rep(i, 0, sz(v)) os << v[i] << ' '; return os;}
template<class T> auto& operator<<(ostream& os, const set<T>& s){for(const auto& x: s) os << x << ' '; return os;}
template<class T> auto& operator<<(ostream& os, const deque<T>& d){for(const auto& x: d) os << x << ' '; return os;}

void solve(){
  
}

signed main(){
  ios_base::sync_with_stdio(0); cin.tie(0); 
  ll t = 1; 
  cin >> t; 
  while(t--) solve(); 
}