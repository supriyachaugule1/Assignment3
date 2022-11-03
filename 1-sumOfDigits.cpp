#include <iostream>
#include <string>
#define size 5

using namespace std;

int sumOfDigits(int N)
{
    int sum = 0;
    while (N != 0)
    {
        sum = sum + N % 10;
        N = N / 10;
    }
    return sum;
}
int main()
{
    int N;
    cout << "Enter the no" << endl;
    cin >> N;
    if (N > 99999)
        cout << "Enter the 5 digit number" << endl;
    else
        cout << "Sum Of Digits " << sumOfDigits(N);
    return 0;
}
