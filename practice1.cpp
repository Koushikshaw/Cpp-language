#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    //Write Your code here
    string x = "10";
    string y = "20";
    string z = x.append(y);
    cout << z << "\n";
    cout << "The length of the string z is  : " << z.length() << "\n" ;
    cout << "The length of the string z is  : " << z.size() << "\n";
    cout << max(5,9) << "\n";
    cout << log10(1.23) << "\n";

    return 0;
}