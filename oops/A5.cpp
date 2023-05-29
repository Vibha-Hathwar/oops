/*
5. Create a RainGauge class that store rainfallincm information and city name.
Include a zero-parameter constructor. Implement the following methods:
fnReadMeasurement that generates a random decimal value in the range 0-20cms and
reads the name of the city. fnDispReading that display city name and rainfall
received. Write a friend function that takes an array of RainGauge objects and the
number of cities as parameters and calculates the average rainfall received Create
an array of RainGauge objects in main and display the results.
*/
#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;
class Raingauge
{
    int rainfall;
    string city;
    public:
    Raingauge() : rainfall(0), city("") { }
    void fnReadMeasurement() 
    {
        srand(time(0));
        rainfall = rand() % 21;
        cout << "Enter city name: "; cin >> city;
    }
    void fnDispReading() 
    {
        cout << "Rainfall received: " << rainfall << endl;
        cout << "City: " << city << endl;
    }
    friend float computeAverage(Raingauge* Rarr, int nCities);
};
float computeAverage(Raingauge* Rarr, int nCities) 
{
    float total = 0;
    for (int i = 0; i < nCities; i++)
        total += Rarr[i].rainfall;
    return total / nCities;
}
int main() 
{
    int nCities;
    cout << "Enter number of cities: ";
    cin >> nCities;
    cout << endl;
    cout << "Enter measurement details of " << nCities << " cities: " << endl;
    Raingauge* Rarr = new Raingauge[nCities];
    for (int i = 0; i < nCities; i++) {
        Rarr[i].fnReadMeasurement();
    }
    cout << endl << "Measurement details of " << nCities << " cities: " << endl;
    for (int i = 0; i < nCities; i++) {
        Rarr[i].fnDispReading();
}
cout << endl << "Average rainfall of " << nCities << " cities: " <<computeAverage(Rarr, nCities)<<"\n";
delete [] Rarr;
return 0;
}
