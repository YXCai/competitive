#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    int numSoldiers, numAttacks;
    while (true)
    {
        scanf("%d %d", &numSoldiers, &numAttacks);
        if (numSoldiers == 0 && numAttacks == 0)
        {
            break;
        }
        for (int i = 0; i < numAttacks; i++)
        {

            int left, right;
            scanf("%d %d", &left, &right);
            int soldierArray[100000];
            if (i == 0)
            {
                for (int i = 0; i < numSoldiers; i++)
                {
                    soldierArray[i] = 1;
                }
            }
            for (int i = left-1; i <= right-1; i++)
            {
                soldierArray[i] = 0;
            }
            for (int j = left-1; j >= 0; j--)
            {
                if (soldierArray[j] == 1)
                {
                    printf("%d ", j+1);
                    break;
                }
                else if (j == 0)
                {
                    printf("* ");
                    break;
                }
            }
            for (int j = right-1; j < numSoldiers; j++)
            {
                if (soldierArray[j] == 1)
                {
                    printf("%d\n", j+1);
                    break;
                }
                else if (j == numSoldiers-1)
                {
                    printf("*\n");
                    break;
                }
            }
        }
        printf("-\n");

    }
    return 0;
}
