//
//  main.cpp
//  Coffee
//
//  Created by Aurélien Ammeloot on 13/01/2022.
//

#include <iostream>

using namespace std;

// A class is a blueprint for multiple
// It's a specialised set of data / functions to perform programmatic tasks
// Because the code is embedded in a single cohesive class, it's easy to
// extract it from one project and reuse it in another project.

class CoffeeMachine { // Class -> blueprint for objects

protected:
    // Those are the properties
    int waterQuantity;
    int coffeeQuantity;
    
public:
    void addWater(int quantity) {
        waterQuantity = quantity;
    }
    
    void addGroundCoffee(int quantity) {
        coffeeQuantity = quantity;
    }
    
    void brew() {
        double ratio = (double)coffeeQuantity / (double)waterQuantity;
        
        if (ratio <= 0.05)
        {
            cout << waterQuantity << "ml of weak coffee." << endl;
        }
        else if (ratio > 0.05 && ratio < 0.2)
        {
            cout << waterQuantity << "ml of normal coffee" << endl;
        }
        else
        {
            cout << waterQuantity << "ml of strong coffee" << endl;
        }
    }
};


class FancyCoffeeMachine: public CoffeeMachine
{
    // The new parts
    int beansQuantity;
    int espressoWaterQuantity;
    bool readyToBrew = false;
    
public:
    
    void setBeansQuantity(int qty)
    {
        beansQuantity = qty;
    }
    
    void setEspressoWaterQuantity(int qty)
    {
        espressoWaterQuantity = qty;
    }
    
    void grindBeans()
    {
        readyToBrew = true;
    }
    
    void makeEspresso()
    {
        if (!readyToBrew)
        {
            cout << "You can't make espresso until your beans are ground" << endl;
        }
        else
        {
            cout << espressoWaterQuantity << "ml of espresso" << endl;
            readyToBrew = false;
        }
    }
};


int main() {

    // Create an instance of CoffeeMachine
    // So c will be an object of the class CoffeeMachine
 /*
    CoffeeMachine c;
    
    // Test the coffee machine
    // Strong
    c.addWater(200);
    c.addGroundCoffee(50);
    c.brew();
    
    
    // Medium
    c.addWater(200);
    c.addGroundCoffee(30);
    c.brew();
    
    // Weak
    c.addWater(200);
    c.addGroundCoffee(10);
    c.brew();
*/
    
    // Create the fancy one
    FancyCoffeeMachine f;
    
    // Test the espresso functions
    f.setBeansQuantity(20);
    f.setEspressoWaterQuantity(100);
    f.grindBeans();
    f.makeEspresso();
    
    // The inherited functions
    f.addWater(200);
    f.addGroundCoffee(40);
    f.brew();
    
    
    
    return 0;
}
