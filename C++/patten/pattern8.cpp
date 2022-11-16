#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 || j == 1 || i == n || j == m)
            {
                cout << j;
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
    return 0;
}