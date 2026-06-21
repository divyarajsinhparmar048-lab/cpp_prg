#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double Bus::diesel_price_per_litre = 80.88;
double Bus::petrol_price_per_litre = 75.77;

class Bus
{
    string bus_id;
    string fuel_type;
    double mileage_per_litre;
    int max_passengers;
    double diesel_price_per_litre = 80.88;
    double petrol_price_per_litre = 75.77;

public:
    Bus(string bus_id, string fuel_type, double mileage_per_liter, int max_passengers)
    {
        this->bus_id = bus_id;
        this->fuel_type = fuel_type;
        this->mileage_per_litre = mileage_per_liter;
        this->max_passengers = max_passengers;
    }

    static void change_petrol_price(double a)
    {
        petrol_price_per_litre = a;
    }

    static void change_diesel_price(double b)
    {
        diesel_price_per_litre = b;
    }
};

class Route
{
    string route_id;
    string source;
    string destination;
    double distance;
    int fare_per_passengers;

public:
    Route(string route_id,
          string source,
          string destination,
          double distance,
          int fare_per_passengers)
    {
        this->route_id = route_id;
        this->source = source;
        this->destination = destination;
        this->distance = distance;
        this->fare_per_passengers = fare_per_passengers;
    }


};

double calculate_profit(const Bus & bus,const Route &route)
{

}


int main()
{
    static double petrol_price_per_litre, diesel_price_per_litre;
    cin >> petrol_price_per_litre >> diesel_price_per_litre;
    Bus::change_petrol_price(petrol_price_per_litre);
    Bus::change_diesel_price(diesel_price_per_litre);

    string bus_id, fuel_type;
    double mileage_per_litre;
    int max_passengers;
    cin >> bus_id >> fuel_type >> mileage_per_litre >> max_passengers;
    Bus bus(bus_id, fuel_type, mileage_per_litre, max_passengers);

    getchar(); // Removing newline from input buffer
    string route_id, source, destination;
    double distance;
    int fare_per_passenger;
    cin >> route_id >> source >> destination >> distance >> fare_per_passenger;
    Route route(route_id, source, destination, distance, fare_per_passenger);

    cout << std::fixed << std::setprecision(2) << calculate_profit(bus, route);

    return 0;
}