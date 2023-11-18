#include <iostream>
#include <string>
// operator overloading : creating your own operators


struct Vector2
{
    float x, y;

    Vector2(float x, float y)
        : x(x), y(y) {}

    //first const indicates that the other parameter is a constant reference and wont be modified
    //const at the endof the member function declaration indicates that the function
    //  guarantees it won't modify any member variables of that instance
    Vector2 Add(const Vector2& other) const
    {
        return Vector2(x + other.x, y + other.y);
    }
    Vector2 Multiply(const Vector2 &other) const
    {
        return Vector2(x * other.x, y * other.y);
    }

    // operator overloading
    Vector2 operator+(const Vector2 &other) const
    {
        return Add(other);
    }

    Vector2 operator*(const Vector2 &other) const
    {
        return Multiply(other);
    }

    bool operator==(const Vector2 &other) const
    {
        return x == other.x && y == other.y;
    }

    bool operator!=(const Vector2 &other) const
    {
        return !(*this == other);
    }
};

std::ostream& operator<<(std::ostream& stream, const Vector2& other)
{
    stream << other.x << ", " << other.y;
    return stream;
}

int main()
{
    Vector2 position(4.0f, 4.0f);
    Vector2 speed(0.5f, 1.5f);
    Vector2 powerUp(1.1f, 1.1f);

    Vector2 result = position.Add(speed.Multiply(powerUp));
    // using operator overloading
    Vector2 result2 = position + speed * powerUp;

    if (result == result2)
    {

    }

    // can't do this without monkey patching
    std::cout << result2 << std::endl;
}