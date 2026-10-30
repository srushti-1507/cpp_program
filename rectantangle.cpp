
#include <iostream>
using namespace std;

class Rectangle {
    int length, width;

public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    ~Rectangle() {
        cout << "Object destroyed" << endl;
    }

    void area() {
        cout << "Area = " << length * width << endl;
    }

    void perimeter() {
        cout << "Perimeter = "
             << 2 * (length + width) << endl;
    }
};

int main() {
    Rectangle r(10, 5);
    r.area();
    r.perimeter();

    return 0;
}