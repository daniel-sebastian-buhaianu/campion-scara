#include <fstream>
using namespace std;
int main()
{
    ifstream f("scara.in");
    int n;
    f >> n;
    f.close();
    int y = n%4 ? n/4 : n/4-1;
    ofstream g("scara.out");
    for (int i = 1; i <= 4; i++)
    {
        int x = y+i-1;
        if ((y%2 == 0 && n == 4*y+i)
            || (y%2 && n == 4*y+5-i))
        {
            g << x << ' ' << y;
            break;
        }
    }
    g.close();
    return 0;
}
