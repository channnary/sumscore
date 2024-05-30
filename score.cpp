#include <iostream>
using namespace std;
string myName(string name){
 string names =  "My name: " + name + "\n";
    // string = "My name " << name;
    cout << names;
    return names;
}

void sum(double x, double y) {

    int sum = x + y;

    // Print the sum
    std::cout << "The sum of Java and C++ is " << sum << std::endl;
}

int main(){    
    
    myName("ABC");
    sum(90,89);
    return 0;
    
} 