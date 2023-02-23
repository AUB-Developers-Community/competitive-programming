#include <iostream>
#include <cmath>

using namespace std;

int convert(long long n)
{
    int dec = 0, i=0, rem;

    while (n!=0)
    {
        rem = n%10;
        n /= 10;
        dec += rem * pow(2, i);
        i++;
    }

    return dec;
}

int gcd(int n1, int n2)
{
    int g_cd=0;
    for (int i=1; i<=n1 && i<=n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            g_cd = i;
        }
    }

    return g_cd;
}

int main()
{

    int t, pair_case = 1;

    cin >> t;
    long long n1, n2;
    while(t>0)
    {
        t--;
        cin >> n1 >> n2;

        int f = convert(n1);
        int s = convert(n2);

        int c = gcd(f, s);


        (c == 1) ? cout << "Pair #" << pair_case << ": Love is not all you need!\n" : cout << "Pair #" << pair_case << ": All you need is love!\n";
        pair_case++;
    }

    return 0;
}
