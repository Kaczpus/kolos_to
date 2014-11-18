#ifndef PRODUCT_H
#define PRODUCT_H


class Product
{
public:

void virtual show(){}

protected:
    int cost;
    int amount;

};

class Fruit: public Product
{
public:
    enum class Type{APPLE,BANANA,ORANGE};

void show()
{
   std::cout << "dupa" <<std::endl;
}

Fruit(int cost_,int amount_,Type kind_)
{
    this->kind = kind_;
    this->cost = cost_;
    this->amount = amount_;
}
private:
    Type kind;
};

class Drink: public Product
{
public:

    enum class Type{FANTA,PEPSI,ICETEA};

    void show()
    {
       std::cout << "dupa1"  <<std::endl ;
    }

Drink(int cost_,int amount_,Type kind_)
{
    this->kind = kind_;
    this->cost= cost_;
    this->amount = amount_;
}

private:
    Type kind;

};
class Fodder: public Product
{
public:

    void show()
    {
       std::cout << "dupa2"  <<std::endl;
    }

    enum class Type{OAT,WHEAT,RYE};

Fodder(int cost_,int amount_,Type kind_)
{
    this->kind = kind_;
    this->cost = cost_;
    this->amount = amount_;
}

private:
    Type kind;
};

#endif // PRODUCT_H
