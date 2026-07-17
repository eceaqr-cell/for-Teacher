#pragma once
#include <vector>
#include "Product.hpp"

class ProductManager {
private:
    std::vector<Product> products;

public:
    void addProduct();
    void updateProductById();
    void getAllProducts();
    void searchProductByTitle();
    void deleteProductById();
};
