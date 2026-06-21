#include <iostream>
using namespace std;

class Vehicle
{
protected:
    int wheels_count;
    float max_speed;
    string manufacturer;
    Vehicle(int, float, string);
    void vehicle_print();
};

Vehicle::Vehicle(int wheels_count = 0, float max_speed = 0.0, string manufacturer = "\0")
    : wheels_count(wheels_count),
      max_speed(max_speed),
      manufacturer(manufacturer)
{
    cout << "Vehicle constructor called\n";
}

void Vehicle::vehicle_print()
{
    cout << "Wheel Count: " << wheels_count << endl;
    cout << "Max Speed: " << max_speed << endl;
    cout << "Manufacturer: " << manufacturer << endl;
}

class Automobile : public Vehicle
{
    float engine_cc;
    int gear_count;

public:
    Automobile(int wheels_count, float max_speed, string manufacturer, float engine_cc, int gear_count)
        : engine_cc(engine_cc),
          gear_count(gear_count),
          Vehicle(wheels_count, max_speed, manufacturer)
    {
        cout << "Automobile constructor called\n";
    }

    // error: no matching function for call to ‘Vehicle::Vehicle()’
    void print()
    {
        vehicle_print();
        cout << "Engine Capacity: " << engine_cc << endl;
        cout << "Gear Count: " << gear_count << endl;
    }
};

int main()
{
    Automobile automobile(2, 100, "Honda", 125, 4);
     automobile.vehicle_print();
    //automobile.print();
    return 0;
}