#include <iostream>
#include "constants.h"

using namespace std;

double distancefallen(int seconds)
{
	double distance = myConstants::normal_gravity*seconds*seconds/2;
	return distance;
}

int main()
{
	double height;
	cout << "Please enter height: " << '\n';
	cin >> height;
	int time(0);
	double dist_fall(0);
	while (dist_fall < height)
	{
		dist_fall = distancefallen(time);
		cout << "Distance fallen: " << dist_fall<<'\n';
		if (dist_fall <= height)
		{
			cout << "The height of ball at " << time << " seconds is: " << height - dist_fall << " metres" << '\n';
		}
		else
		{
			cout << "The height of ball at " << time << " seconds is: 0 metres" << '\n';
		}
		time++;
	}
	return 0;
}
