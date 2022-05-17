//
// Created by Satori on 2022/5/17.
//

#ifndef OOP_S1_2022_PROJECTV01_FARM_H
#define OOP_S1_2022_PROJECTV01_FARM_H

#include <iostream>
#include <string>
using namespace std;

#include "Address.cpp"
#include "Capital.cpp"

class storage{
    virtual void add_storage(int storage) = 0;
};

class Farm: public storage{
public:
    //store the address and captial
    Address *address = new Address();
    Capital *capital = new Capital();

    //initial varaibles
    string farmName;

    string aList[99];
    string cList[99];
    //functions

    //Implement the default constructor
    Farm(string farmname, string sub, string sta, string cou, float initCapital)
    {
        //set the values as asked
        farmName = farmname;
        address->set_address(sub, sta, cou);
        capital->set_initialCapital(initCapital);
    }

    Farm():Farm("", "", "", "", 0){}

    void get_farmName()
    {
        cout << "farmName: " << farmName << endl;
    }
    //return all data in format
    void get_currentDataInTable()
    {
        get_farmName();
        address->get_address();
        capital->get_initialCapital();
    }
    //change the storage value
    void add_storage(int storage){};
};

//Captial is used in line 29*/
//create the parent class Crop



class Crop:public Farm {
protected://initiate the varaibles
    string cType;
    int cValue;
    int cSize;
    bool cAlive;
    int cStock;
    int cStorage = 0;

public:
    Crop(){};

    void add_storage(int storage){
        cStorage = storage;
    };

    bool ifAlive(){
        return cAlive;
    };

    void sell(){
        remove_crop();
    };
    virtual void add_crop(char crop){};
    virtual void remove_crop(){};

};


class Wheat:public Crop{
public:
    //define and set the varaible values
    string cType = "Wheat";
    int cValue = 1000;
    int cSize = 25;
    bool cAlive = true;

    //inherit the functions from Crop(its parent class)
    void add_crop(char crop)
    {
        if (cStorage > cSize)
        {
            cList[cStock] = crop;
            cStock ++;
            cStorage - cSize;
        }
    }
    void remove_crop()
    {
        cList[cStock] = "";
        cStock --;
        cStorage + cSize;
    }
};

class Corn:public Crop{
public:
    //define and set the varaible values
    string cType = "Corn";
    int cValue = 500;
    int cSize = 15;
    bool cAlive = true;

    //inherit the functions from Crop(its parent class)
    void add_crop(char crop)
    {
        if (cStorage > cSize)
        {
            cList[cStock] = crop;
            cStock ++;
            cStorage - cSize;
        }
    }
    void remove_crop()
    {
        cList[cStock] = "";
        cStock --;
        cStorage + cSize;
    }
};





class Animal:public Farm {
protected:
    //initiate the varaibles
    string aType;
    int aValue;
    int aSize;
    bool aAlive;
    char aStock;
    int aStorage = 0;
    string aList[99];
public:
    Animal(){

    };

    void add_storage(int storage){
        aStorage = storage;
    };

    bool ifAlive(){
        return aAlive;
    };

    void sell(){
        remove_animal();
    };

    virtual void add_animal(char animal){};
    virtual void remove_animal(){};

    ~Animal(){

    };
};


class Pig:public Animal{
public:
    //define and set the varaible values
    string aType = "Pig";
    int aValue = 100;
    int aSize = 4;
    bool aAlive = true;
    int pigNo;
    int pigCost;


    Pig(int no){
        pigNo = no;
        pigCost = pigNo * aValue;
    }
    Pig():Pig(0){}
    int get_pigCost(){return pigCost;}

    void add_animal(char animal)
    {
        if (aStorage > aSize)
        {
            aList[aStock] = animal;
            aStock ++;
            aStorage - aSize;
        }
    }
    void remove_animal(){
        aList[aStock] = "";
        aStock --;
        aStorage + aSize;
    }
};

class Sheep:public Animal{
public:
    //define and set the varaible values
    string aType = "sheep";
    int aValue = 200;
    int aSize = 2;
    bool aAlive = true;

    void add_animal(char animal){
        if (aStorage > aSize)
        {
            aList[aStock] = animal;
            aStock ++;
            aStorage - aSize;
        }
    }
    void remove_animal(){
        aList[aStock] = "";
        aStock --;
        aStorage + aSize;
    }
};



#endif //OOP_S1_2022_PROJECTV01_FARM_H
