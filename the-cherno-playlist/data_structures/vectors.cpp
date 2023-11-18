#include <iostream>
#include <string>
#include <vector>

// DYNAMIC ARRAYS
// SET THAT DOESN'T enforce uniqueness
// can resize
struct Vertex
{
    float x, y, z;

    Vertex(float x, float y, float z)
        : x(x), y(y), z(z)
    {
    }
};

// not sure why this is erroring
std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
    stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
    return stream;
};


int main()
{   
    // pass in type, in this case the class, but you can pass primitive types
    // not storing pointers, but you can store pointers vs objects
    // technically more efficient to store objects unless its going to be resizing
    // a lot and there is a lot of data to copy every time, in that case use pointers
    // pointers are a last results if you really need to do it that way
    std::vector<Vertex> vertices;
    vertices.push_back({ 1, 2, 3 });
    vertices.push_back({ 4, 5, 6 });

    for (int i = 0; i < vertices.size(); i++)
    {
        std::cout << vertices[i] << std::endl;
    }
    // this will copy each vertex!!
    for (Vertex v : vertices)
    {
        std::cout << v << std::endl;
    }

    // make v a Vertex reference to not copy each vertex!!!!
    for (Vertex& v : vertices)
    {
        std::cout << v << std::endl;
    }
    // erase the second element, need to pass in an iterator?
    vertices.erase(vertices.begin() + 1);

    //set to 0 length
    vertices.clear();
}