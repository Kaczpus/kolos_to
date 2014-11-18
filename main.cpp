#include <iostream>
#include <vector>
#include <memory>
#include <utility>
#include "Magazine.h"
#include "Product.h"
#include "Client.h"


int main()
{
    Magazine a;
    Product* ab = new Fruit(1,2,Fruit::Type::APPLE);
    a.Add(ab);
    a.Show();
    a.Remove(ab);
    a.Show();

}
