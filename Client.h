#ifndef CLIENT_H
#define CLIENT_H
#include "Product.h"
#include "Magazine.h"
#include <vector>
class Client
{
    std::vector<Product*> productz;

public:
    void AddToBasket(Product* obj)
    {
          productz.push_back(obj);
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
