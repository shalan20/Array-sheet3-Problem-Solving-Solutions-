#include <iostream>
#include<algorithm>
#include <iomanip>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        int arr[size];

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];

        }
        for (int l = 0; l < size; l++)
        {
            int max = -10e5;
            for (int r = l; r < size; r++)
            {
                for (int i = l; i <= r; i++)
                {
                    if (arr[i] > max)
                        max = arr[i];
                }
                cout << max << " ";
            }


        }
        cout << endl;
    }


}