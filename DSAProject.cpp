#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>

using namespace std;

class Product
{
private:
    int id;
    string name;
    float price;
    int stock;

public:
    Product(int id, string name, float price, int stock)
        : id(id), name(name), price(price), stock(stock) {}

    int getId() const { return id; }
    string getName() const { return name; }
    float getPrice() const { return price; }
    int getStock() const { return stock; }

    void reduceStock(int quantity) { stock -= quantity; }

    void display() const
    {
        cout << "ID: " << id << ", Name: " << name
             << ", Price: " << price << ", Stock: " << stock << "\n";
    }
};

// Inventory class
class Inventory
{
private:
    vector<Product> products;
    queue<string> customerQueue;
    stack<Product> purchaseStack;
    float totalSales;

public:
    Inventory() : totalSales(0) {}

    void addProduct(int id, string name, float price, int stock)
    {
        products.emplace_back(id, name, price, stock);
        cout << "Product added successfully!\n";
    }

    void searchProduct(const string &name) const
    {
        bool found = false;
        for (const auto &product : products)
        {
            if (product.getName() == name)
            {
                product.display();
                found = true;
            }
        }
        if (!found)
            cout << "Product not found!\n";
    }

    void sortProductsByPrice()
    {
        sort(products.begin(), products.end(), [](const Product &a, const Product &b)
             { return a.getPrice() < b.getPrice(); });
        cout << "Products sorted by price.\n";
    }

    void displayInventory() const
    {
        cout << "\nInventory:\n";
        for (const auto &product : products)
        {
            product.display();
        }
    }

    void customerPurchase(const string &customerName)
    {
        customerQueue.push(customerName);
        cout << "Customer " << customerName << " added to the queue.\n";

        string productName;
        int quantity;
        while (true)
        {
            cout << "Enter product name to purchase (or type 'done' to finish): ";
            cin >> productName;
            if (productName == "done")
                break;

            cout << "Enter quantity: ";
            cin >> quantity;

            bool found = false;
            for (auto &product : products)
            {
                if (product.getName() == productName)
                {
                    found = true;
                    if (product.getStock() >= quantity)
                    {
                        product.reduceStock(quantity);
                        totalSales += product.getPrice() * quantity;
                        purchaseStack.push(Product(product.getId(), product.getName(), product.getPrice(), quantity));
                        cout << "Purchase successful!\n";
                    }
                    else
                    {
                        cout << "Insufficient stock for " << productName << ".\n";
                    }
                    break;
                }
            }
            if (!found)
                cout << "Product not found!\n";
        }
        cout << "Customer " << customerName << " checkout complete.\n";
    }

    void displaySalesReport() const
    {
        cout << "\nSales Report:\n";
        cout << "Total Sales: " << totalSales << "\n";
        displayInventory();
    }
};

int main()
{
    Inventory inventory;
    int choice;
    do
    {
        cout << "\n--- Grocery Store Inventory System ---\n";
        cout << "1. Add Product\n";
        cout << "2. Search Product\n";
        cout << "3. Sort Products by Price\n";
        cout << "4. Customer Purchase\n";
        cout << "5. View Inventory and Sales Report\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int id, stock;
            string name;
            float price;
            cout << "Enter Product ID: ";
            cin >> id;
            cout << "Enter Product Name: ";
            cin >> name;
            cout << "Enter Product Price: ";
            cin >> price;
            cout << "Enter Product Stock: ";
            cin >> stock;
            inventory.addProduct(id, name, price, stock);
            break;
        }
        case 2:
        {
            string name;
            cout << "Enter Product Name to Search: ";
            cin >> name;
            inventory.searchProduct(name);
            break;
        }
        case 3:
            inventory.sortProductsByPrice();
            break;
        case 4:
        {
            string customerName;
            cout << "Enter Customer Name: ";
            cin >> customerName;
            inventory.customerPurchase(customerName);
            break;
        }
        case 5:
            inventory.displaySalesReport();
            break;
        case 9:
            cout << "Exiting program. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 9);

    return 0;
}
