// how can we avoid copying our objects

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

    // copy constructor to track how many times the data gets copied
    Vertex(const Vertex &vertex)
        : x(vertex.x), y(vertex.y), z(vertex.z)
    {
        std::cout << "Copied!" << std::endl;
    }
};

int main()
{
    std::vector<Vertex> vertices;
    // gets copied from the main functions stack frame into the vector
    vertices.push_back({1, 2, 3});
    vertices.push_back({4, 5, 6});
    // 3 copies for two above lines
    vertices.push_back({7, 8, 9});
    // prints copied 3 more times

    std::cout << "--------" << std::endl;
    // if we know how long the vector needs to be, it wont resize everytime
    std::vector<Vertex> verticesFirstOpt;
    verticesFirstOpt.reserve(3);
    verticesFirstOpt.push_back({1, 2, 3});
    verticesFirstOpt.push_back({4, 5, 6});
    verticesFirstOpt.push_back({7, 8, 9});
    // now only get three copies, is there a way to just put it in the vertices memory allocation

    std::cout << "--------" << std::endl;
    std::vector<Vertex> verticesFinalOpt;
    verticesFinalOpt.reserve(3);
    // just pass parameter list for the constructor
    verticesFinalOpt.emplace_back(1, 2, 3);
    verticesFinalOpt.emplace_back(4, 5, 6);
    verticesFinalOpt.emplace_back(7, 8, 9);
    // no copies!
}