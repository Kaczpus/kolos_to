#ifndef CLIENT_H
#define CLIENT_H
#include "Product.h"
#include <vector>
#include <algorithm>
class Magazine
{


public:
    std::vector<Product*> products;
    void Add(Product* &obj)
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

class Client:public Magazine
{
    std::vector<Product*> productz;

public:
    void AddToBasket(Product* obj)
    {
          std::vector<Product*>::iterator found = std::find(products.begin(), products.end(), obj);
          productz.push_back(std::move(obj));
          products.erase(found);
    }
    void SumUp()
    {

    }


    void RemoveFromBasket(Product* obj)
    {
     std::vector<Product*>::iterator found = std::find(productz.begin(), productz.end(), obj);
     if( found !=productz.end())
     {
         productz.erase(found);
     }

    }

};


#endif // CLIENT_H
