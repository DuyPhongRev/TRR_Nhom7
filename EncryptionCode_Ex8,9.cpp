#include <iostream>

using namespace std;

int main()
{
    int n;
    int k = 9379;
    cin >> n;
    int m = n;
    // Ý tưởng là chia nhỏ số mũ để modulo dần
    for (int i = 1; i <= 4; i++)
        {
            n = n*n % k;
            cout << n << endl;
        }
    cout << n* m % k;
}
