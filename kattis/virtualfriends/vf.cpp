#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    while (a--)
    {
        map<string, int> m1;
        vector<int> v1;
        int currentIndex = 0;
        while (b--)
        {
            string s1, s2;
            cin >> s1 >> s2;
            cout << s1 << " " << s2 << endl;
            if (m1.find(s1) == m1.end() && m1.find(s2) == m1.end())
            {
                m1[s1] = m1[s2] = currentIndex;
                v1.push_back(2);
                currentIndex++;
                cout << "2" << endl;
            }
            else if (m1.find(s1) != m1.end() && m1.find(s2) == m1.end())
            {
                v1[m1.find(s1)->second] += 1;
                m1[s2] = m1[s1];
                cout << v1[m1.find(s1)->second] << endl;
            }
            else if (m1.find(s2) != m1.end() && m1.find(s1) == m1.end())
            {
                v1[m1.find(s2)->second] += 1;
                m1[s1] = m1[s2];
                cout << v1[m1.find(s2)->second] << endl;
            }
            else
            {
                if (m1[s1] == m1[s2])
                    cout << v1[m1.find(s1)->second] << endl;
                else
                {
                    int newSize = v1[m1.find(s1)->second] + v1[m1.find(s2)->second];
                    v1[m1.find(s1)->second] = newSize;
                    v1[m1.find(s2)->second] = newSize;
                    m1[s1] = m1[s2];
                    cout << newSize << endl;
                }
            }
        }
        if (a != 0)
            cin >> b;
    }
    return 0;
}
