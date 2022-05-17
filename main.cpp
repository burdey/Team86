
#include "Farm.h"
//#include "Crop.h"

int main()
{
    string farmname;
    string sub;
    string sta;
    string cou;
    float initCapital;

    cout << "Welcome to 0086 Farm Management System, Please enter your farm Name: " ;
    cin >> farmname;

    cout << "Farm name set as " << farmname << ", Please type your farm's location" << endl;
    cout << "Suburb: ";
    cin >> sub;

    cout << "State: ";
    cin >> sta;

    cout << "Country: ";
    cin >> cou;

    cout << "Farms location saved. " << endl;
    cout << "Please enter your initial capital(in numbers): " ;
    cin >> initCapital;

    Farm *f = new Farm(farmname,sub,sta,cou,initCapital);

    cout << "All info saved, would you like to view your status? Please type 1 to view. " << endl;
    int see;
    cin >> see;
    if (see == 1)
    {
        f->get_currentDataInTable();
    }

    int animal_storage;
    cout << "Please set your animal storage: ";
    cin >> animal_storage;
    cout << "Animal storage set" << endl;

    int pno;
    int sno;
    cout << "According to the local laws, you may only raise Pig and Sheep. How many Pig do you own? ";
    cin >> pno;
    Pig *p = new Pig(pno);
    cout << "You have own " << pno << " pigs. It has cost you " << p->get_pigCost()
         << " Dollars. You have " << f->capital->add_moneySpent(p->get_pigCost())  <<f->capital->get_currentValue() << " left. " << endl;

    cout << "As sheep was banned previously, now you have the option to raise sheep, how many Sheep do you wish to own?";

    Animal *a = new Animal();


    cout << "Version one preview finished" << endl;

    /*Farm *f = new Farm("MyFarm", "Payneham", "SA", "Australia", 1000000);

    f->get_currentDataInTable();

*/
    return 0;

}