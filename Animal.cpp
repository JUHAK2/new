
#include <iostream>
#include <string>
using namespace std;
class Animal
{
private:
    string name;
    int age;
public:
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    void set_value(string name1, int age1)
    {
        name = name1;
        age = age1;
    }
};
class Zebra : public Animal
{
private:
    string placeOfBirth;
public:
    void setPOB(string placeOfBirth)
    {
        this->placeOfBirth = placeOfBirth;
    }
    void description()
    {
        cout << "Zebra info :" << endl << "Age : " << getAge() << endl << "Name : " << getName() << endl << "Place of birth : " << placeOfBirth << endl;
    }
};
class Dolphin : public Animal
{
private:
    string placeOfBirth;
public:
    void setPOB(string placeOfBirth)
    {
        this->placeOfBirth = placeOfBirth;
    }
    void description()
    {
        cout << "Dolphin info :" << endl << "Age : " << getAge() << endl << "Name : " << getName() << endl << "Place of birth : " << placeOfBirth << endl;
    }
};

int main()
{
    Dolphin dol1;
    Zebra zeb1;
    dol1.set_value("dolphiiiin", 23);
    dol1.setPOB("Ocean");
    dol1.description();
    zeb1.set_value("ZZZEEBRA", 30);
    zeb1.setPOB("Africa");
    zeb1.description();
    
    
    
    return 0;
}

/*
 2) Write a program with a parental class ('Animal'). Inside it define a name and an age variables, and set_value() function.Then create two child classes( Zebra and Dolphin) which write a message telling the age, the name, and place of birth ('Africa' for Zebra and 'Ocean' for Dolphin).
*/
