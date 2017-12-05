#include <bits/stdc++.h>

using namespace std;

#define ST first
#define ND second
#define PB push_back
#define MP make_pair

#define REP(i, n)    for (int (i) = 0; (i) < (n); (i)++)
#define FOR(i, a, b)  for (int (i) = (a); (i) < (b); (i)++)
#define FORI(i, a, b) for (int (i) = (a); (i) <= (b); (i)++)
#define FORD(i, b, a) for (int (i) = (b) - 1; (i) >= (a); (i)--)
#define FORE(i, u)   for (auto (i): (u))
#define ALL(u)      (u).begin(), (u).end()

#define INF   0x7fffffff
#define INFLL 0x7fffffffffffffffLL

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<PII> VII;
typedef set<int> SI;
typedef set<PII> SII;
typedef stack<int> TI;
typedef queue<int> QI;
typedef priority_queue<int> PRI;

inline void get(int &x) { scanf("%d", &x); }
inline void get(double &x) { scanf("%lf", &x); }
inline void get(LD &x) { scanf("%Lf", &x); }
inline void get(char *s) { scanf("%s", s); }
inline void get(char &c) { while ((c = getchar()) > 126 || c < 33); }
inline void put(int x) { printf("%d", x); }
inline void put(double x) { printf("%lf", x); }
inline void put(LD x) { printf("%Lf", x); }
inline void put(char *s) { printf(s); }
inline void put(char c) { putchar(c); }

int main()
{
    int n, m; get(n); get(m);
    char s[105];
    get(s);

    while (m--) {
        int l, r;
        char c1, c2;
        get(l);
        get(r);
        get(c1);
        get(c2);
        FORI(i,l-1,r-1) {
            if (s[i] == c1) {
                s[i] = c2;
            }
        }
    }
    put(s);
    put('\n');

    return 0;
}
