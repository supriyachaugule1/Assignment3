#include <iostream>
#include <string>

using namespace std;

int sumOfFirstAndLastDigits(int N)
{
    int lastDigit, firstDigit;
    lastDigit = N % 10;
    while (N > 0)
    {
        firstDigit = N % 10;
        N = N / 10;
    }
    int sum = firstDigit + lastDigit;
    return sum;
}
int main()
{
    int N;
    cout << "Enter the no" << endl;
    cin >> N;
    if (N > 9999 & N < 99999)
        cout << "Sum of first and last digit :" << sumOfFirstAndLastDigits(N) << endl;
    else
        cout << "Enter the 5 digit number" << endl;

    return 0;
}
