// B�i 4.18
// C�ch 1:
#include<iostream>
using namespace std;

int main ()
{
    int n, m, a, b;
    cin >> n >> m;
    a = n;
    b = m;
    while ( a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    cout << a << ' ' << m*n / a;
    return 0;
}

/*
// C�ch 2:
#include<iostream>
using namespace std;

int main ()
{
    int n, m, a, b;
    cin >> n >> m;
    a = n;
    b = m;
    while(b != 0)
    {
      int r = a % b;
      a = b;
      b = r;
    }
    cout << a << ' ' << m*n / a;
    return 0;
}
/*

/*
//C�ch 3:
#include<iostream>
#include<algorithm>
using namespace std;

int main ()
{
    int n, m;
    cin >> n >> m;
    cout << __gcd(n, m) << ' ' << m*n / __gcd(n, m);
    return 0;
}
*/
