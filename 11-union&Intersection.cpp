#include <iostream>
#include <set>
#include<algorithm>
#include <iterator>

using namespace std;
void printSet(set<int> *myset)
{
    set<int>::iterator iter = myset->begin();

    while (iter != myset->end())
    {
        cout << *iter << " ";
        iter++;
    }
}
void getSet()
{
   set<int> A;
    set<int> B;
    set<int> C;
    set<int> D;
    int N, M, x;
    cout << "Enter the cardility of set A";
    cin >> N;
    cout << "Enter the cardility of set B";
    cin >> M;
    cout << "Enter the values of set A";
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        A.insert(x);
    }
    cout << "Enter the values of set B";
    for (int i = 0; i < M; i++)
    {
        cin >> x;
        B.insert(x);
    }  
    set_intersection(A.begin(), A.end(), B.begin(), B.end(), inserter(C,C.begin()));
    set_union(A.begin(), A.end(), B.begin(), B.end(), inserter(D,D.begin()) );
    cout << "Set A  "; 
    printSet(&A);
    cout << endl;
    cout << "Set B  "; 
    printSet(&B);
    cout << endl;
    cout << "Set C after intersection  "; 
    printSet(&C);
    cout << endl;
    cout << "Set D after Union  "; 
    printSet(&D);
    cout << endl;
    cout << "Cardility of set C =" << C.size() << endl;
    cout << "Cardility of set D =" << D.size() << endl;


}

int main()
{
    getSet();
    return 0;
}
