#include <iostream>
using namespace std;

class Demo {
    int x;
public:
    Demo(int a) {   
        x = a;
    }

    Demo(const Demo &obj) {   
        x = obj.x;
        cout << "Copy Constructor called! x = " << x << endl;
    }
};

int main() {
    Demo obj1(50);   
    Demo obj2(obj1); 
    return 0;
}
