#include "stdio.h"
#include "conio.h"
#include "string.h"

	int main()
	{
		//assuming earth to be a perfect spheroid and the lats and longs equidistant, and the elevation of an aircraft 
		//above earth negligible as compared to the earth's radius

		float rho = 0.0, phi = 0.0, theta = 0.0;
		int north_south, east_west;
		float lat_deg = 0.0, lat_min = 0.0, lat_sec = 0.0;
		float long_deg = 0.0, long_min = 0.0, long_sec = 0.0;
		printf("Enter the Latitude value in the order Degree, minute and second \n");
		scanf_s("%f %f %f", &lat_deg, &lat_min, &lat_sec);
		printf("Enter the Longitude value in the order Degree, minute and second \n");
		scanf_s("%f %f %f", &long_deg, &long_min, &long_sec);
		lat_deg = lat_deg + (lat_min / 60) + (lat_sec / 360);
		long_deg = long_deg + (long_min / 60) + (long_sec / 360);
		printf("%f %f", lat_deg, long_deg);

		float EarthRadius = 6400.0;
		rho = EarthRadius;
		//1 for north and 2 for south
		printf("\nEnter whether north or south");
		scanf_s("%d",&north_south);
		

		//1 for east and 2 for west
		printf("Enter whether east or west\n");
		scanf_s("%d",&east_west);

		if (north_south == 1)
		{
			phi = 90 - lat_deg;
			if (east_west == 1)
				theta = long_deg;
			else if (east_west == 2)
				theta = 360 - long_deg;
		}
		else if (north_south == 2)
		{
			phi = 90 + lat_deg;
			if (east_west == 1)
				theta = long_deg;
			else if (east_west == 2)
				theta = 360 - long_deg;
		}
		printf("The spherical co-ordinates for the lat and long values are as follows\n");
		printf("Rho = %f, Phi = %f, Theta = %f", rho, phi, theta);
		_getch();
	}
	