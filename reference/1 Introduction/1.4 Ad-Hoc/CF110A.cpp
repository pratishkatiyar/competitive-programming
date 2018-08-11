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

    string a;
    cin >> a;
    int ct = 0;
    for (auto &c : a) {
        if (c == '4' or c == '7') ct++;
    }
    string b = to_string(ct);
    bool ans = true;
    for (auto &c : b) {
        if (c != '4' and c != '7') {
            ans = false;
            break;
        }
    }
    cout << (ans ? "YES" : "NO") << endl;
}