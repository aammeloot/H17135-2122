//
//  main.cpp
//  CoffeOverride
//
//  Created by Aurélien Ammeloot on 20/01/2022.
//

#include <iostream>

using namespace std;

class GenericCoffeeMachine
{
protected:
    int waterQty;
    int coffeeQty;
public:
    void addCoffee(int qty)
    {
        coffeeQty = qty;
    }
    
    void addWater(int qty)
    {
        waterQty = qty;
    }
    
    virtual void brew()
    {
        cout << "I cannot brew coffee I'm a 'generic' machine" << endl;
    }
};


class FilterCoffeeMachine: public GenericCoffeeMachine
{
public:
    void brew()
    {
        cout << "I am making filter coffee" << endl;
        double ratio = (double)coffeeQty / (double)waterQty;
        
        cout << "The ratio of coffee to water is: " << ratio << endl;
    }
};

class EspressoMachine: public GenericCoffeeMachine
{
public:
    void brew()
    {
        cout << "Making a cup of espresso" << endl;
    }
};



int main(int argc, const char * argv[]) {
    
    
    //GenericCoffeeMachine g;
    //g.brew();
    
    //FilterCoffeeMachine f;
    //f.addWater(200);
    //f.addCoffee(50);
    //f.brew();

    
    return  0;
    
}
