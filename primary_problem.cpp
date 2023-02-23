#include <iostream>

using namespace std;

int primeCheck(int num)
{
    bool isPrime = true;

    if (num == 0 || num == 1)
    {
        isPrime = false;
    }
    else
    {
        for (int i=2; i<= num/2; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    return isPrime;
}

int main()
{

    int N;

    while(true)
    {
        cin >> N;
        if (N == 0)
        {
            break;
        }

        if (N>3 && N<1000000)
        {
            int f=0, l=0, f1=0, s1=0;

            for (int i=2; i<= N/2; i++)
            {
                if (primeCheck(i) == 1)
                {
                    if (primeCheck(N-i) == 1)
                    {
                        l++;
                        if (l == 1)
                        {
                            f1 = i;
                            s1 = N-i;
                        }

                        f = 1;
                    }
                }
            }

            if (f1 != 0 && s1 != 0)
            {
                cout << N << ":\n" << f1  << "+" << s1 << endl;
            }

            else if (f1 == 0 && s1 == 0)
            {
                cout << N << ":\n" << "NO WAY!\n";
            }
            else if (f == 0)
            {
                cout << "NO WAY!\n";
            }
        }
    }

    return 0;
}
