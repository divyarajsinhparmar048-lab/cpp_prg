#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;
class Vehicle;
class Point
{
private:
    float x, y;

public:
    friend class Vehicle;

    Point(float x = 0, float y = 0)
    {
        this->x = x;
        this->y = y;
    }

    void print() const
    {
        cout << fixed << setprecision(2) << x << " " << y << endl;
    }

    void move_north(float n)
    {
        y += n;
        return;
    }

    void move_south(float n)
    {
        y -= n;
        return;
    }

    void move_west(float n)
    {
        x -= n;
        return;
    }

    void move_east(float n)
    {
        x += n;
        return;
    }
};

class Vehicle
{
private:
    float calculate_displacement() const
    {
        return sqrt(pow(abs(current_position.x - starting_position.x), 2) + pow(abs(current_position.y - starting_position.y), 2));
    }
    const Point starting_position;
    Point current_position;
    float distance_covered;

public:
    Vehicle(Point start) : starting_position(start), current_position(start), distance_covered(0)
    {
    }

    void move_north(float u)
    {
        current_position.move_north(u);
        distance_covered += u;
        return;
    }

    void move_south(float u)
    {
        current_position.move_south(u);
        distance_covered += u;
        return;
    }

    void move_east(float u)
    {
        current_position.move_east(u);
        distance_covered += u;
        return;
    }

    void move_west(float u)
    {
        current_position.move_west(u);
        distance_covered += u;
        return;
    }

    void print() const
    {
        cout << "Starting position: ";
        starting_position.print();
        cout << "current_position: ";
        current_position.print();
        cout << "Distance covered: " << fixed << setprecision(2) << distance_covered << endl;
        cout << "Displacement: " << fixed << setprecision(2) << calculate_displacement() << endl;
    }
};

int main()
{
    float initial_x, initial_y;
    cin >> initial_x >> initial_y;
    Point starting_position(initial_x, initial_y);
    Vehicle vehicle(starting_position);
    int number_of_moves;
    char direction;
    float units;
    cin >> number_of_moves;
    for (int i = 0; i < number_of_moves; i++)
    {
        getchar();
        cin >> direction >> units;
        switch (direction)
        {
        case 'N':
            vehicle.move_north(units);
            break;
        case 'S':
            vehicle.move_south(units);
            break;
        case 'W':
            vehicle.move_west(units);
            break;
        case 'E':
            vehicle.move_east(units);
            break;
        }
    }
    vehicle.print();
}