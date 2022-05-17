#include <iostream>
#include <string>
using namespace std;

#ifndef CAPITAL_CPP
#define CAPITAL_CPP

class Capital
{
public:
    //define the varaibles
    int initialCapital = 0;
    int moneySpent = 0; //stores the total number of the money spent
    int currentValue;

    //functions
    Capital(int cap)
    {
        initialCapital = cap;
    }
    Capital():Capital(0){}

    //set functions
    void set_initialCapital(int initCapital)
    {
        initialCapital = initCapital;
    }
    void get_initialCapital()
    {
        std::cout << "initialCapital: " << initialCapital << std::endl;
    }

    int add_moneySpent(int money)
    {
        moneySpent = moneySpent + money;
        return moneySpent;
    }
    int get_moneySpent()
    {
        return moneySpent;
    }

/*    void update_currentValue()
    {
        currentValue = initialCapital - moneySpent;
    }*/
    int get_currentValue()
    {
        currentValue = initialCapital - moneySpent;
        return currentValue;
    }

    ~Capital();
};

#endif //CAPITAL_CPP