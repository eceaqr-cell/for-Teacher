#include <iostream>
#include "ProductManager.hpp"

using namespace std;

int main() {
    ProductManager manager;
    int choice;

    do {
        cout << "" << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << " " << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << ""; cin >> choice;

        switch (choice) {
            case 1: manager.addProduct(); break;
            case 2: manager.getAllProducts(); break;
            case 3: manager.updateProductById(); break;
            case 4: manager.searchProductByTitle(); break;
            case 5: manager.deleteProductById(); break;
            case 0: cout << "" << endl; break;
            default: cout << "" << endl;
        }
    } while (choice != 0);

    return 0;
}
