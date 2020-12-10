#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>



using namespace std;

/*
	Purpose:		Calculate the average diamter of the twig	
	Pre-condition:		
	Post-condition:		
	Input:			___ diamter	measurements
	Output:			Average diameter	
*/
double average_diameter_calc();
//---------------------------------------------------------------------------------------


int main(void)
{

	float flt_cord_length = 0.0; //Also known as the measured width
	float flt_avg_diamter = 0.0; 
	float flt_length_of_segment = 0.0;
	int int_lenticel_count = 0;
	float flt_lenticel_density = 0.0;
	string strAction = "y";

	while (strAction != "n")
	{

		cout << ("How many lenticels did you count?\n");
		cin >> int_lenticel_count;

		cout << ("What is the length of the section being measured?\n");
		cin >> flt_length_of_segment;

		cout << ("What is the width of the section being measured?\n");
		cin >> flt_cord_length;

		flt_avg_diamter = average_diameter_calc();

		flt_lenticel_density = ((int)int_lenticel_count/(((float)flt_avg_diamter) *  (float)flt_length_of_segment * asin(((float)flt_cord_length)/((float)flt_avg_diamter))));

		cout << ("The density of lenticels is ") << flt_lenticel_density << (" cells per unit of given area.");

		cout << ("Would you like to calculate again? (y/n) \n");
		cin >> strAction;

	}
}
double average_diameter_calc()
{
	float dia_1;
	float dia_2;
	float dia_3;
	float dia_4;
	cout << ("Please enter your four diamter measurements, pressing 'ENTER' after each measurement: \n");
	cin >> dia_1;
	cin >> dia_2;
	cin >> dia_3;
	cin >> dia_4;

	float flt_avg_dia = ((dia_1 + dia_2 + dia_3 + dia_4)/4);

	return flt_avg_dia;
}