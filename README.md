# Template-CP
Template usado para programação competitiva

```cpp
#include<bits/stdc++.h>

using namespace std; 

#ifdef LOCAL
#include "dbg/dbg.h"
#else
#define dbg(...)
#endif
#define ll long long
#define ld long double
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define vll vector<ll>
#define pll pair<ll, ll>
#define vpll vector<pair<ll, ll>>
#define vvpll vector<vpll>
#define endl '\n'
#define found(x, y) (x.find(y) != x.end()) //set - map - unordered_set - unordered_map
#define sz(x) (int)x.size()

//loops
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define repinv(i,a,b) for(int i = (a); i >= (b); i--)

const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;
ll meuJeitoNinja = 0; 

template<typename Container, typename T>
bool fd(const T& value, const Container& container) {
  return find(container.begin(), container.end(), value) != container.end();
} 

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); 
  

  return 0;

}

```
# Debug

```cpp
#pragma once
#include <bits/stdc++.h>
using namespace std;
template <typename T> void p(T x) {
    int f = 0;
    #define D(d) cerr << "\e[94m" << (f++ ? d : "")
    if constexpr (!requires {cout << x;}) {
        cerr << '{';
        if constexpr (requires {get<0>(x);})
            apply([&](auto... args) {((D(","), p(args)), ...);}, x);
        else if constexpr (requires {x.pop();}) while (size(x)) {
            D(",");
            if constexpr (requires {x.top();}) p(x.top());
            else p(x.front());
            x.pop();
        } else for (auto i : x)
            (requires {begin(*begin(x));} ? cerr << "\n\t" : D(",")), p(i);
        cerr << '}';
    } else D("") << x;
} template <typename... A>
void pr(A... a) {int f = 0; ((D(" | "), p(a)), ...); cerr << "\e[m\n";}
#define dbg(...) { cerr << __LINE__ << ": [" << #__VA_ARGS__ << "] = "; pr(__VA_ARGS__); }