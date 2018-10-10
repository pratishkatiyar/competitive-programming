#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;

typedef pair<int, int> ii;
typedef tuple<int, int, int> iii;

typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<ld> vd;
typedef vector<ll> vl;
 
#define mp make_pair
#define pb push_back
#define f first
#define s second

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, last, cur, len = 1, ans = 1;
    cin >> n >> last;
    n--;
    
    while (n--) {
        cin >> cur;
        if (cur > last) len++;
        else len = 1;
        ans = max(ans, len);
        last = cur;
    }

    cout << ans << endl;
}