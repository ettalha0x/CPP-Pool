#include <iostream>
using namespace std;

// Base class
class Vehicle
{
protected:
    string model;
    string type;
    int year;

public:
    Vehicle(){

    };
    Vehicle(string model, string type, int year)
    {
        this->model = model;
        this->type = type;
        this->year = year;
    };
    virtual ~Vehicle() {};
    virtual void printInfo()
    {
        cout << "parent implemntation" << endl;
        cout << "model: " << model << endl;
        cout << "type: " << type << endl;
        cout << "year: " << year << endl;
    } 
};

// Derived class
class Car : public Vehicle
{
public:
    string license;
    Car(){

    };
    Car(string model, string type, int year, string license) : Vehicle(model, type, year)
    { 
        this->license = license;
    };
    ~Car(){};
    void printInfo()
    {
        cout << "child implemntation" << endl;
        cout << "model: " << model << endl;
        cout << "type: " << type << endl;
        cout << "year: " << year << endl;
        cout << "license: " << license << endl;
    }
};

int main()
{
    // Vehicle v1("Dacia", "Docker", 2010);
    // v1.printInfo();
    // Car c1("Renault", "Express", 2021, "lgk");
    // c1.printInfo();

    Vehicle *v1 = new Vehicle("Toyota", "CHR", 2023);
    Vehicle *v2 = new Car("Renault", "Express", 2021, "llc");
    
    v1->printInfo();
    v2->printInfo();

    delete v1;
    delete v2;

    // system("leaks a.out");
    return 0;
}
