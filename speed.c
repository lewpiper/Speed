/* Spped Lab | Lew Piper III | 011263249 */

#include<stdio.h>

//Define file variable to point to
FILE *fp;

int main(void) {
	//Declaration of variables
	const int m_per_mile = 1600;
	const int sec_per_hour = 3600;
	double distance_traveled_miles = 425.5;
	double time_of_travel_hours = 7.5;
	double speed_mph;
	double speed_mps;
		
		//Open file to print to
		fp = fopen("csis.txt", "w");
		
		
		//Calculations
		speed_mph = distance_traveled_miles / time_of_travel_hours;
		speed_mps = (distance_traveled_miles * m_per_mile) / (time_of_travel_hours * sec_per_hour);
		
		
		//Presentation of the results 
		printf("Speed of the car %.2lf MPH\n", speed_mph);
		fprintf(fp, "Speed of the car %.2lf MPH\n", speed_mph);
		printf("Speed of the car %.2lf M/S\n", speed_mps);
		fprintf(fp, "Speed of the car %.2lf M/S\n", speed_mps);
		

		//Close the file and exit the program
		fclose(fp);
		return 0;
}