#include <iostream>
using namespace std;

int main()
{
    int h1, m1, s1;
    int h2, m2, s2;
    int h, m, s;

    cout << "Enter first time (hour minute second): ";
    cin >> h1 >> m1 >> s1;

    cout << "Enter second time (hour minute second): ";
    cin >> h2 >> m2 >> s2;

    s = s1 + s2;
    m = m1 + m2;
    h = h1 + h2;

    if (s >= 60)
    {
        s = s - 60;
        m++;
    }

    if (m >= 60)
    {
        m = m - 60;
        h++;
    }

    cout << "Total time = " << h << " hour "
         << m << " minute "
         << s << " second";
    cout<<endl;
    return 0;
}