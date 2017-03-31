#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, tcase = 1;
    while (scanf("%d", &n) != EOF)
    {
        int mi, ma, ra;
        for (int i = 0; i < n; i++)
        {
            int num;
            scanf("%d", &num);
            if (i == 0)
            {
                mi = num;
                ma = num;
            }
            else if (num > ma)
                ma = num;
            else if (num < mi)
                mi = num;
        }
        ra = ma - mi;
        printf("Case %d: %d %d %d\n", tcase, mi, ma, ra);
        tcase++;
    }
    return 0;
}
