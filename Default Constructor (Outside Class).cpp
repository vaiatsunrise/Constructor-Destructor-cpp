#include <iostream>
using namespace std;

class Demo {
public:
    Demo();   
};

Demo::Demo() {   
    cout << "Default Constructor (Outside) called!" << endl;
}

int main() {
    Demo obj;
    return 0;
}
