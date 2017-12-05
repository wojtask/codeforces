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

inline void get(int &x) {scanf("%d", &x);}
inline void get(LL &x) {scanf("%I64d", &x);}
inline void get(double &x) {scanf("%lf", &x);}
inline void get(LD &x) {scanf("%Lf", &x);}
inline void get(char *s) {scanf("%s", s);}
inline void get(char &c) {while ((c = getchar()) > 126 || c < 33);}
inline void put(int x) {printf("%d", x);}
inline void put(LL x) {printf("%I64d", x);}
inline void put(double x) {printf("%lf", x);}
inline void put(LD x) {printf("%Lf", x);}
inline void put(char *s) {printf(s);}
inline void put(char c) {putchar(c);}

ULL A[54];

const char *terminal = "What are you doing at the end of the world? Are you busy? Will you save us?";
const char *front = "What are you doing while sending \"";
const char *middle = "\"? Are you busy? Will you send \"";
const char *back = "\"?";

const int tL = strlen(terminal);
const int fL = strlen(front);
const int mL = strlen(middle);
const int bL = strlen(back);

char get_character(int n, LL k) {
    if (n == 0) {
        return k < tL ? terminal[k] : '.';
    }
    if (k < fL) {
        return front[k];
    }
    if (n <= 53) {
        if (k < fL + A[n - 1]) {
            return get_character(n - 1, k - fL);
        }
        if (k < fL + A[n - 1] + mL) {
            return middle[k - fL - A[n - 1]];
        }
        if (k < fL + A[n - 1] + mL + A[n - 1]) {
            return get_character(n - 1, k - fL - A[n - 1] - mL);
        }
        if (k < fL + A[n - 1] + mL + A[n - 1] + bL) {
            return back[k - fL - A[n - 1] - mL - A[n - 1]];
        }
        return '.';
    }
    return get_character(n - 1, k - fL);
}

int main()
{
    A[0] = tL;
    int len = fL + mL + bL;
    FOR(i,1,54) {
        A[i] = 2 * A[i - 1] + len;
    }

    int q; get(q);
    while (q--) {
        int n; LL k; get(n); get(k); k--;
        put(get_character(n, k));
    }
    put('\n');

    return 0;
}
