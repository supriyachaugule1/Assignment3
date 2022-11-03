#include <iostream>
using namespace std;

class Integer
{
private:
    int arr[10], N, K, min, pos = 0;

public:
    void getValue()
    {
        cout << "Enter the size of the List : " << endl;
        cin >> N;
        cout << "Enter the elements of the List : ";
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        cout << "Enter the Integer K :" << endl;
        cin >> K;
    }
    void calMin()
    {
        min = arr[0];
        for (int i = 0; i <= K; i++)
        {
            if (min > arr[i])
            {
                min = arr[K];
                pos = K;
            }
        }
        cout << " k'th Smallest integer : " << min << " " << endl;
        cout << "Position of Smallest integer:" << pos << endl;
    }
};

int main()
{
    Integer I;
    I.getValue();
    I.calMin();
}
