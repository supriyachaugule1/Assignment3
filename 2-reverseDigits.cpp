#include <iostream>
#include <string>
#define size 5

using namespace std;

void reverseDigits(int N)
{
    int M;
    while (N > 0)
    {
        M = N % 10;
        cout << M;
        N = N / 10;
    }
}
int main()
{
    int N;
    cout << "Enter the no" << endl;
    cin >> N;
    if (N > 99999)
        cout << "Enter the 5 digit number" << endl;
    else
    {
        cout << "Orignal number" << N << endl;
        cout << "Reversed number";
        reverseDigits(N);
    }
    return 0;
}
