//Sreejita Bhardwaj 
//Prn: 23070123130 
//experiment 6: loops

#include <iostream>
using namespace std;

int main() 

{
    for (int i = 1; i <= 5; ++i) 
    {
        for (int j = 1; j <= 5; ++j) 
        {
            cout << i << " x " << j << " = " << i * j << "\t";
        }
        cout << endl;
    }
    return 0;
}