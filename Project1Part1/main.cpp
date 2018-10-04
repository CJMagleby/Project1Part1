#include <iostream>
#include <string>

class Animal
{
protected:
    std::string name;
    int age;
public:
    Animal(std::string passName, int passAge)
    {
        name = passName;
        age = passAge;
    }
    Animal()
    {
        name = "NULL";
        age = 0;
    }
    std::string getName() { return name; }
    void setName(std::string newName) { name = newName; }
    int getAge() { return age; }
    void setAge(int newAge) { age = newAge; }
    virtual void print() = 0;
};

class Zebra : public Animal
{
protected:
    std::string location;
public:
    Zebra(std::string passName, int passAge) : Animal(passName, passAge) { location = "Africa"; }
    Zebra() : Animal() { location = "Africa"; }
    std::string getLocation() { return location; }
    void print()
    {
        std::cout << "Name: " << name << " Age: " << age << " Location: " << location << std::endl;
    }
};

class Dolphin : public Animal
{
protected:
    std::string location;
public:
    Dolphin(std::string passName, int passAge) : Animal(passName, passAge) { location = "Ocean"; }
    Dolphin() : Animal() { location = "Ocean"; }
    std::string getLocation() { return location; }
    void print()
    {
        std::cout << "Name: " << name << " Age: " << age << " Location: " << location << std::endl;
    }
};

int main()
{
    std::string dolphinName = "Flipper";
    int dolphinAge = 10;
    Dolphin flipper(dolphinName, dolphinAge);
    flipper.print();
    
    std::string zebraName = "Marty";
    int zebraAge = 4;
    Zebra marty(zebraName, zebraAge);
    marty.print();
    
    
    system("Pause");
    return 0;
}
