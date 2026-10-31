#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main()
{
 
    int t;
    cin >> t;
    int n = 0, m = 0;
 
    while (t--)
    {
        int count = 0;
        cin >> n;
        cin >> m;
 
        string p, q;
 
        cin >> p;
        cin >> q;
 
        for (int i = 0; i < q.size(); i++)
        {
 
            int pos = p.find(q[i]);
 
            if (pos != string::npos)
            {
                p.erase(pos, 1);
                count++;
            }
        }
 
        sort(p.begin(), p.end());
 
        if (count != m)
        {
            cout << "NO
";
        }
        else
        {
            if (p == "isx")
            {
                cout << "YES
";
            }
            else
            {
                cout << "NO
";
            }
        }
    }
 
    return 0;
}