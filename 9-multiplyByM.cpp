#include <iostream>
using namespace std;

class Position
{
private:
    int L1[10],L2[10], N,M;

public:
    void getValue()
    {
        cout << "Enter the size of the array : ";
        cin >> N;
        cout << "Enter the elements of the array : ";
        for (int i = 0; i < N; i++)
            cin >> L1[i];
        cout << "Enter the number to be multiplied : " ;
        cin >> M;

    }
    void multiplyByM()
    {
    for(int i =0;i < N ;i++)
    {
        L2[i] = L1[i]*M;
    }
    }
    void printValue()
    {
        cout << "L1 = (";
        for(int i=0;i< N;i++)
           cout << L1[i] << ",";
        cout << ")" << endl;  
        cout << "L2 = ( ";
        for(int i=0;i< N;i++)
           cout << L2[i] << ","; 
        cout << ")" << endl;    
    }          
};

int main()
{
    Position p;
    p.getValue();
    p.multiplyByM();
    p.printValue();
}