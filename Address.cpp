#include <iostream>
#include <string>
using namespace std;

class Address{
public:
    //define the varaibles
    string suburb;
    string state;
    string country;

    //functions
    Address(string sub,
            string sta,
            string cou)
    {
        suburb = sub;
        state = sta;
        country = cou;
    }
    Address():Address("", "", ""){}

    //set functions
    void set_address(string sub, string sta, string cou)
    {
        suburb = sub;
        state = sta;
        country = cou;
    }

    void set_suburb(string sub)
    {
        suburb = sub;
    }
    void set_state(string sta)
    {
        state = sta;
    }
    void set_country(string cou)
    {
        country = cou;
    }

    void get_address()
    {
        std::cout << "Farm address: " << suburb << " suburb; "
                                 << state << " state; "
                                 << country << " country; " << std::endl;

    }

    ~Address();
};
