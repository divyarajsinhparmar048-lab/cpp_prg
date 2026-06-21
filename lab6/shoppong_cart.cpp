#include <iostream>
#include <string>

using namespace std;

class Item
{

    int price;

public:
    string name;
    friend class ShoppingCart;
    Item(string name = "\0", int price = 0)
    {
        this->name = name;
        this->price = price;
    }
};

class ShoppingCart
{
    Item items[20];
    int quant[20] = {};
    int count = 0;

public:
    void add_item(Item i, int q)
    {

        for (int j = 0; j < count; j++)
        {
            if (i.name == items[j].name)
            {
                quant[j] += q;
                return;
            }
        }

        items[count] = i;
        quant[count] = q;
        count++;
        return;
    }
    int calculate_bill()
    {
        int bill_amt = 0;
        for (int i = 0; i < count; i++)
        {
            bill_amt += items[i].price * quant[i];
        }
        return bill_amt;
    }

    void print()
    {
        for (int i = 0; i < count; i++)
        {
            cout << endl;
            cout << items[i].name << "\t" << quant[i]; //<< endl;
        }
    }
};

int main()
{

    Item items[10];
    int input_items_count, price;
    string name;
    cin >> input_items_count;
    for (int i = 0; i < input_items_count; i++)
    {
        getchar();
        cin >> name >> price;
        items[i] = Item(name, price);
    }

    ShoppingCart sc;
    int purchase_entries, quantity;
    cin >> purchase_entries;
    for (int i = 0; i < purchase_entries; i++)
    {
        getchar();
        cin >> name >> quantity;
        int j;
        for (j = 0; j < input_items_count; j++)
        {
            if (items[j].name == name)
                break;
        }
        sc.add_item(items[j], quantity);
    }

    cout << sc.calculate_bill();
    sc.print();

    return 0;
}