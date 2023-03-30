#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    float sum=0;
    int howlong = argc - 1;
    float average = 0;
    for (int i = 1; i <= howlong; i++)
    {
        sum += atof(argv[i]);
    }
    average = sum / howlong;
    if (argc <= 1)
    {
        cout << "Please input numbers to find average.";
    }
    else
    {
        cout << "---------------------------------" << endl;
        cout << "Average of " << howlong << " numbers = " << average;
        cout << "\n---------------------------------";
    }
}
