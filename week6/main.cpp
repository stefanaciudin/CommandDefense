#include <iostream>
#include "Circuit.h"
#include "Car.h"
#include "Weather.h"
#include "Dacia.h"
#include "Toyota.h"
#include "Mercedes.h"
using namespace std;
int main()
{
	Circuit c;

	c.SetLength(100);
	c.SetWeather(Weather::Rain);
	c.AddCar(new Dacia());
	c.AddCar(new Toyota());
	c.AddCar(new Mercedes());
	c.Race();
	c.ShowFinalRanks(); // it will print the time each car needed to finish the circuit sorted from the fastest car to the   slowest.
	c.ShowWhoDidNotFinish(); // it is possible that some cars don't have enough fuel to finish the circuit

	return 0;
}