#include <iostream>
#include<vector>
using namespace std;

class Position
{
private:
    int L1[10], N,D;
    vector<int>L2;

public:
    void getValue()
    {
        cout << "Enter the size of the array : ";
        cin >> N;
        cout << "Enter the elements of the array : ";
        for (int i = 0; i < N; i++)
            cin >> L1[i];
        cout << "Enter the number to be divide : " ;
        cin >> D;

    }
    void divideByD()
    {
    for(int i =0;i < N ;i++)
    {
        int rem = L1[i]% D;
        if( rem == 0)
          L2.push_back(L1[i]);
    }
    }
    void printValue()
    {
        cout << "L1 = (";
        for(int i=0;i< N;i++)
           cout << L1[i] << ",";
        cout << ")" << endl;  
        cout << "L2 = ( ";
        for(int i=0;i< L2.size() ;i++)
           cout << L2[i] << ","; 
        cout << ")" << endl;
        cout << "Size of L2 = " << L2.size();    
    }          
};

int main()
{
    Position p;
    p.getValue();
    p.divideByD();
    p.printValue();
}