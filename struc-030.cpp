#include <iostream> //it's like <stdio.h>

using namespace :: std; //namespace is a way to encapsulate
const double m_to_k = 1.609; //const meaning that this identifier cannot have its value changed in this program. 

inline double convert( int mi) { return (mi * m_to_k);} //inline tells the compiler to optimize a function

int main(void)
{
    int miles = 1;

    while (miles != 0)
    {
        cout << "Input distance in miles or 0 to terminate: ";
        cin >> miles;
        cout << "\nDistance is " << convert(miles) << " km." << endl;
        
    }

    cout << endl;
}