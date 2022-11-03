#include <iostream>
#include <string>

using namespace std;

void calLoss(double SP, double CP)
{
    double loss;
    loss = CP - SP;
    cout << "Loss :" << loss;
}
void calProfit(double SP, double CP)
{
    double profit;
    profit = SP - CP;
    cout << "Profit :" << profit;
}
int main()
{
    double costPrice, sellingPrice;
    cout << "Enter the cost price :";
    cin >> costPrice;
    cout << "Enter the selling price :";
    cin >> sellingPrice;
    if (sellingPrice > costPrice)
        calProfit(sellingPrice, costPrice);
    else
        calLoss(sellingPrice, costPrice);

    return 0;
}
