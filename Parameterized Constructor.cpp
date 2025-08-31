#include <iostream>
using namespace std;

class Demo {
    int x;
public:
    Demo(int a) {   
        x = a;
        cout << "Parameterized Constructor called! x = " << x << endl;
    }
};

int main() {
    Demo obj1(10);   
    Demo obj2(25);
    return 0;
}
