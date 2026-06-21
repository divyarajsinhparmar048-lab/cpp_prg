#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct vertex
{
    float x, y, z;
};

int main()
{
    vector<vertex> vertices;
    vertices.push_back({1, 2, 3});
    vertices.push_back({4, 5, 6});

    for (int i = 0; i < vertices.size(); i++)
    {
        cout << vertices[i].x << "\t" << vertices[i].y << "\t" << vertices[i].z << endl;
    }

    for (const vertex &v : vertices)
    {
        cout << v.x << " " << v.y << " " << v.z << " " << endl;
    }

    vertices.erase(vertices.begin() + 1);

    for (const vertex &v : vertices)
    {
        cout << v.x << " " << v.y << " " << v.z << " " << endl;
    }
}
