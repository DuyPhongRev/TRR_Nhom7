#include <iostream>

using namespace std;

int main()
{
    int a, n;
    cout << "Nhap so a: ";
    cin >> a;
    cout << "Nhap so modulo: ";
    cin >> n;
    int k = n; // k giu lai gia tri cua n khi n bi thay doi trong vong lap
    int q;
    int s = 0, t = 1;
    while (n % a != 0)
    {
        q = n / a;
        int tmp = n % a;
        n = a;
        a = tmp;
        tmp = t;
        t = s - q * t;
        s = tmp;
        cout << "q: " << q << " n: " << n << " a: " << a << " t:" << t << endl;
    }
    if (a == 1) cout << "So nghich dao cua a la: " << (t > 0? t : t % k );
    else cout << "Khong ton tai nghich dao cua a";
    return 0;
}
