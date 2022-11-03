#include <iostream>
using namespace std;

class Position
{
private:
    int arr[10], N, max, min, pos=0,pos1=0;

public:
    void getValue()
    {
        cout << "Enter the size of the array : ";
        cin >> N;
        cout << "Enter the elements of the array : ";
        for (int i = 0; i < N; i++)
            cin >> arr[i];
    }
    void calMax()
    {
        max = arr[0];
        for (int i = 0; i < N; i++)
        {
            if (max < arr[i])
            {
                max = arr[i];
                pos = i;
            }
        }
        cout << "Largest integer : " << max << " " << "Position of Largest integer:" << pos <<endl;
    }
    void calMin()
    {
        min = arr[0];
        for (int i = 0; i < N; i++)
        {
            if (min > arr[i])
            {
                min = arr[i];
                pos1 = i;
            }
        }
        cout << "Smallest integer : " << min << " "<< "Position of Smallest integer:" << pos1 <<endl;
    }
};

int main()
{
    Position p;
    p.getValue();
    p.calMax();
    p.calMin();
}