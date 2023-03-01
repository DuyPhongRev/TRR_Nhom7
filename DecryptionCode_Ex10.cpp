#include <iostream>

using namespace std;

int main()
{
    int n;
    int k = 9379;
    cin >> n;
    int m = n;
    // Ý tưởng là chia nhỏ số mũ để modulo dần
    for (int i = 1; i <= 11; i++)
        n = n*n % k;
    long long x1 = n;
    n = m;
    for (int i = 1; i <= 6; i++)
        n = n*n % k;
    long long x2 = n;
    n = m;
    for (int i = 1; i <= 5; i++)
        n = n*n % k;
    long long x3 = n;
    n = m;
    for (int i = 1; i <= 4; i++)
        n = n*n % k;
    long long x4 = n;
    //
    long long res = x2 * x3 * x4* m * x1;
    cout << res % k;
}

