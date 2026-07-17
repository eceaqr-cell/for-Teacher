#pragma once
#include <string>

class Product {
public:
    int id;
    std::string title;
    double price;

    Product(int id, std::string title, double price);
};
