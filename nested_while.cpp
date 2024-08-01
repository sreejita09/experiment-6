//Sreejita Bhardwaj 
//Prn: 23070123130 
//experiment 6: loops

#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter the number of rows for the triangle: ";
    cin >> n;
    int i = 1;
    while (i <= n) 
    {
        int j = 1;
        while (j <= i) 
        {
            std::cout << "*";
            j++;
        }
        cout <<endl;
        i++;
    }

    return 0;
}