#include<iostream>
using namespace std;

class Fruit
{
    
    public:

        string name = "Fruit";

        void Identify()
        {
            cout<<"I am a "<<name<<endl;
        }

       


};

class Tangerine: public Fruit
{

    public:
        Tangerine()
        {
            name = "Tangerine";
        }


};

class Banana: public Fruit
{

    public:
        Banana()
        {
            name = "Banana";
        } 

};

class Pear: public Fruit
{

    public:
        Pear()
        {
            name = "Pear";
        } 


};

