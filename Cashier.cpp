#include <iostream>
#include <string>

using namespace std;

struct product_info
{
    string product_code;
    string product_name;
    int price;
};


int main()
{
    string product, code;
    product_info name;
    string product_code[3] = {"01", "02", "03",};
    string product_name[3] = {"Indomie", "Nuvo", "Mineral water",};
    int amount_money, qty_product, change,dollar,price,qty, total = 0;

    cout << "\tWelcome to Random Supermarket " << endl;
    cout << "Products : " << endl;
    cout << " code        Name             price " << endl;
    cout << " 01          Indomie          $5" << endl;
    cout << " 02          Jasmine tea      $2" << endl;
    cout << " 03          Mineral Water    $3" << endl;


    cout << "Product Code : ";
    cin >> name.product_code;
    if (name.product_code== "01")
    {
        cout << "Product: " << product_name[0] << endl;
        cout << "$5/piece";
        product = "Instant Noodle";
        price = 5;
    }
    else if (name.product_code== "02")
    {
        cout << "Product": " << product_name[0] << endl;
        cout << "$2/piece";
        product = "Soap";
        price = 2;
    }
    else if (name.product_code== "03")
    {
        cout << "Product": " << product_name[0] << endl;
        cout << "$3/piece";
        product = "Water";
        price = 3;
    }
    else
    {
        cout << "Wrong Input!";
    }
    cout << endl;
    cout << "Quantity  : ";
    cin >> qty_product;
    cout << "You Pay                           : ";
    cin >> amount_money;
    total = qty_product * price;
    qty = qty_product;
    change = amount_money - total;
    
    cout << "                   -Random Supermarket-                        " << endl;
    cout << "           We Don't Accept Cent and Credit Cards                        " << endl;

    cout << "product        : " << product << endl;
    cout << "Quantity       : " << qty << endl;
    cout << "$/piece        : $" << price << endl;
    cout << "Total          : $" << total << endl;
    cout << "You Pay        : $" << amount_money << endl;
    cout << "Change         : $" << change << endl;
    cout << "======================================================" << endl;

    return 0;
}