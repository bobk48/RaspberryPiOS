#include <iostream>

using namespace std;

int main()
{
    double originalPrice, salesTaxRate, totalPrice, markupPercentage, salesTaxPrice, markupPrice;
    
    cout << "Please enter the original price: $";
    cin >> originalPrice;
    
    cout << "Please enter the mark-up percentage: ";
    cin >> markupPercentage;
    
    cout << "Please enter the sales tax percentage: ";
    cin >> salesTaxRate;
    
    markupPrice = originalPrice * (markupPercentage / 100);
    salesTaxPrice = originalPrice * (salesTaxRate / 100);
    totalPrice = originalPrice + salesTaxPrice + markupPrice;
    
    cout << "Original Price: $" << originalPrice << endl;
    cout << "Sales Tax: $" << salesTaxPrice << endl;
    cout << "Mark-Up: $" << markupPrice << endl;
    cout << "Total Price: $" << totalPrice << endl;
    
    return 0;
}
