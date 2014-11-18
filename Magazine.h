#ifndef MAGAZINE_H
#define MAGAZINE_H

#include "Product.h"
#include <vector>
#include <algorithm>
class Magazine
{
    std::vector<Product*> products;

public:
    void Add(Product* obj)
    {
     products.push_back(obj);
    }
    void Remove(Product* obj)
    {
     std::vector<Product*>::iterator found = std::find(products.begin(), products.end(), obj);
     if( found !=products.end())
     {
         products.erase(found);
     }

    }

    void Show()
    {
    for(unsigned int i = 0 ; i <products.size() ; i++)
    {
         products[i]->show();

    }

}

};

#endif // MAGAZINE_H
