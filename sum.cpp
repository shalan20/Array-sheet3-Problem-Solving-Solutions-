 

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long sum=0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        sum += num;
    }
    cout << abs(sum);
     
}

 