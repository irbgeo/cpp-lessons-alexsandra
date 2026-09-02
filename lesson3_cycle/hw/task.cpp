/*
TASK: Store checkout program

INPUT:
1. N - number of products
2. For each product: its price
3. Discount percent
4. Minimum purchase amount for the discount
5. Maximum price of one product

CONDITIONS:
- If a product's price > maximum price, the product is NOT added
- The discount is applied only if the total sum >= the minimum purchase amount

OUTPUT:
- Total price (after discount, if applied)
- If a product is not added to the purchase, print a message about it
*/

#include <iostream>

using namespace std;

int main()
{
    int product_count = 0;
    cout << "Enter quantity of products: ";
    cin >> product_count;

    int max_price = 0;
    cout << "Enter the maximum price of one product: ";
    cin >> max_price;

    int discount_percent = 0;
    cout << "Enter the amount of sale(%): ";
    cin >> discount_percent;

    if (discount_percent < 0 || discount_percent > 100)
    {
        cout << "invalid value of sale amount\n";
        return 1;
    }

    int min_purchase_for_discount = 0;
    if (discount_percent != 0)
    {
        cout << "Enter the price for sale: ";
        cin >> min_purchase_for_discount;
    }

    int total_price = 0;
    for (int i = 0; i < product_count; i++)
    {
        int product_price = 0;
        cout << "Enter product price " << i + 1 << " : ";
        cin >> product_price;

        if (product_price > max_price)
        {
            cout << "Product " << i + 1 << " was not added (exceeds the maximum price)\n";
            continue;
        }

        total_price += product_price;
    }

    if (total_price >= min_purchase_for_discount)
    {
        total_price -= total_price * discount_percent / 100;
    }

    cout << "Total price: " << total_price << "\n";
}
