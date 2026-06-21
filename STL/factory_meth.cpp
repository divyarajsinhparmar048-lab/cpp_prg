// implementation of FACTORY method in c++

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0;
    virtual ~Shape() {};
};

class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "DRAWING A CIRCLE" << endl;
    }
};

class Square : public Shape
{
public:
    void draw() override
    {
        cout << "DRAWING A SQUARE" << endl;
    }
};

class Shapefactory
{
public:
    virtual Shape *createshape() = 0;
    virtual ~Shapefactory() {};
};

class Circlefactory : public Shapefactory
{
public:
    virtual Shape *createshape() override
    {
        return new Circle();
    }
};

class Squarefactory : public Shapefactory
{
public:
    virtual Shape *createshape() override
    {
        return new Square();
    }
};

Shapefactory *getfactory(char type)
{
    if (type == 'C')
    {
        return new Circlefactory();
    }

    else if (type == 'S')
    {
        return new Squarefactory();
    }

    return nullptr;
}

int main()
{
    char user;
    cout << "Enter choice" << endl;
    cin >> user;

    Shapefactory *factory = getfactory(user);
    if (factory == nullptr)
    {
        exit(-1);
    }

    Shape *Shape = factory->createshape();
    Shape->draw();
    delete Shape;
    delete factory;

    return 0;
    
}
