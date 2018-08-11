#include <vector>
#include <iostream>
#include <tuple>
#include <complex>

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

    int n, m;
    cin >> n >> m;
    int a = min(n, m);
    cout << a + 1 << endl;
    for (int i = 0; i <= min(n, m); i++) {
        cout << i << " " << a - i << endl;
    }
}