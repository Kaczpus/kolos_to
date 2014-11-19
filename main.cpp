#include <iostream>
#include <vector>
#include <memory>
#include <utility>
#include "Product.h"
#include "Client-Magazine.h"


int main()
{

    Magazine a ;
    Product* ab = new Fruit(1,2,Fruit::Type::APPLE);
    a.Add(ab);

    a.Show();
    Client abc;
    abc.AddToBasket(ab);

}
