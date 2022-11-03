#include <iostream>
#include <string>

using namespace std;

void add1ToDigits(int N)
{
    int rem, ans=0, p=1 ;
    while(N>0)
    {
        rem = N%10;
        (rem == 9)?rem = 0:rem+=1;
        ans+=p*rem;
        p*=10;N/=10;
    }
    cout <<  ans;
}
int main()
{
    int N;
    cout << "Enter the no" << endl;
    cin >> N;
    if (N > 9999 & N < 99999)
    {
        cout << "M ";
        add1ToDigits(N);
    }
    else
        cout << "Enter the 5 digit number" << endl;
    return 0;
}
