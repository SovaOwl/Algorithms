#include <iostream>

using namespace std;

int main()
{
    int f1 = 1;
    int f2 = 1;
    int i = 0;
    int s = 0;
    int n = 5;

    while (i < n)
    {
        i++;
        s = f1 + f2;
        f1 = f2;
        f2 = s;
        cout << s << endl;
    }
}