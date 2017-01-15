// Closest Sums on Kattis

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int caseNo = 1;
    while (true)
    {
        int numNumbers;
        cin >> numNumbers;
        if (cin.eof())
            break;
        cout << "Case " << caseNo << ":" << endl;
        vector<int> listSums;
        vector<int> numStorage;
        for (int i = 0; i < numNumbers; i++)
        {
            int temp;
            cin >> temp;
            numStorage.push_back(temp);
        }
        for (int i = 0; i < numNumbers; i++)
        {
            for (int j = i+1; j < numNumbers; j++)
            {
                listSums.push_back(numStorage[i] + numStorage[j]);
            }
        }
        int targetNums;
        cin >> targetNums;
        while (targetNums--)
        {
            int distance;
            int targetNum;
            cin >> targetNum;
            int outputNum;
            for (int i = 0; i < listSums.size(); i++)
            {
                if (i == 0)
                {
                    distance = abs(listSums[0] - targetNum);
                    outputNum = listSums[0];
                }
                else
                {
                    if (abs(listSums[i] - targetNum) < distance )
                    {
                        distance = abs(listSums[i] - targetNum);
                        outputNum = listSums[i];

                    }
                }
            }
            cout << "Closest sum to " << targetNum << " is " << outputNum << "." << endl;
        }
        caseNo++;
    }
}
