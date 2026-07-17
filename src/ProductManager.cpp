#include "ProductManager.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

void ProductManager::addProduct() {
    int id;
    string title;
    double price;
    cout << "" << endl;
    cout << "ID: "; cin >> id;
    cin.ignore();
    cout << "Title: "; getline(cin, title);
    cout << "Price ($): "; cin >> price;

    products.push_back(Product(id, title, price));
    cout << "" << endl;
}

void ProductManager::getAllProducts() {
    if (products.empty()) {
        cout << "" << endl;
        return;
    }
    cout << "\n" << left << setw(10) << "ID" << setw(20) << "Title" << setw(10) << "Price" << endl;
    for (const auto& p : products) {
        cout << left << setw(10) << p.id << setw(20) << p.title << setw(10) << p.price << "$" << endl;
    }
}

void ProductManager::updateProductById() {
    int id;
    cout << " "; cin >> id;
    for (auto& p : products) {
        if (p.id == id) {
            cin.ignore();
            cout << " "; getline(cin, p.title);
            cout << ""; cin >> p.price;
            cout << "" << endl;
            return;
        }
    }
    cout << "" << endl;
}

void ProductManager::searchProductByTitle() {
    string title;
    bool found = false;
    cin.ignore();
    cout << ""; getline(cin, title);
    for (const auto& p : products) {
        if (p.title == title) {
            cout << "" << p.id << ", Title: " << p.title << ", Price: " << p.price << "$" << endl;
            found = true;
        }
    }
    if (!found) cout << "" << endl;
}

void ProductManager::deleteProductById() {
    int id;
    cout << " "; cin >> id;
    for (auto it = products.begin(); it != products.end(); ++it) {
        if (it->id == id) {
            products.erase(it);
            cout << "" << endl;
            return;
        }
    }
    cout << "" << endl;
}
