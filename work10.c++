#include <iostream>
using namespace std;

class Fibonacci
{
public:
    Fibonacci(int n)
    {
        int a=0, b=1, c;

        cout << a << " " << b << " ";

        for(int i=3;i<=n;i++)
        {
            c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }
    }
};

int main()
{
    int n;

    cout << "Enter terms: ";
    cin >> n;

    Fibonacci f(n);

    return 0;
}