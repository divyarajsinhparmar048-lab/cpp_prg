#include <iostream>
#include <string>
#include <iomanip>

using std::cin;
using std::cout;
using std::string;

class Route;

class Bus
{
    string bus_id;
    string fuel_type;
    double mileage_per_litre;
    int max_passengers;
    static double petrol_price_per_litre;
    static double diesel_price_per_litre;

public:
    friend double calculate_profit(Bus &, Route &);
    Bus(string id, string type, double mil, int mp)
    {
        bus_id = id;
        fuel_type = type;
        mileage_per_litre = mil;
        max_passengers = mp;
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

double Bus::petrol_price_per_litre = 80.88;
double Bus::diesel_price_per_litre = 75.77;

class Route
{
    string route_id;
    string source;
    string destination;
    double distance;
    int fare_per_passenger;

public:
    friend double calculate_profit(Bus &, Route &);

    Route(string route_id, string source, string destination, double distance, int fare_per_passenger)
    {
        this->route_id = route_id;
        this->source = source;
        this->destination = destination;
        this->distance = distance;
        this->fare_per_passenger = fare_per_passenger;
    }
};

double calculate_profit(Bus &b, Route &r)
{
    double fuel_price = b.fuel_type == "petrol" ? b.petrol_price_per_litre : b.diesel_price_per_litre;
    return ((r.fare_per_passenger * b.max_passengers) - (r.distance / b.mileage_per_litre * fuel_price));
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