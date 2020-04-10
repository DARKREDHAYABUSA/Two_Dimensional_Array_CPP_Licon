//Student Name: Johnathon Licon

//Teacher: Dr. Tyson McMillan

//Date: 4-10-2020

//A program to practice working with multi-dimensional arrays

#include <iostream>

using namespace std;

/*

Research Input data: go to http://www.weather.com

Pick two cities of your choice. Fill in the temperature for the 7 days of this week of both cities. Fill in this text data table, which will be used in your program.

//City_One = 1, City_Two = 2  Replace City_One and City_Two with the names of your cities

//Data Table

//City X, Day X: Temp

Fort Worth, Day 1: 76

Fort Worth, Day 2: 71

Fort Worth, Day 3: 78

Fort Worth, Day 4: 54

Fort Worth, Day 5: 55

Fort Worth, Day 6: 59

Fort Worth, Day 7: 68

South Padre Island, Day 1: 75

South Padre Island, Day 2: 80

South Padre Island, Day 3: 84

South Padre Island, Day 4: 75

South Padre Island, Day 5: 76

South Padre Island, Day 6: 70

South Padre Island, Day 7: 76

*/

 

int main()

{

      const int CITY = 2;

      const int WEEK = 7;

 

    int temperature[CITY][WEEK];

    //Note your input data from the above

    cout << "Enter all temperature for a week of first city and then second city. \n";

 

    // Inserting the values into the temperature array

    //note for every dimension of the array you need a for loop 2 dimensions = 2 for loops

    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {

            cout << "City " << i + 1 << ", Day " << j + 1 << " : ";

            cin >> temperature[i][j];

        }

    }

 

    cout << "\n\nDisplaying Values:\n";

 

    // Accessing the values from the temperature array

    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {

            cout << "City " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;

        }

    }

 

    return 0;

}

//Source
/*

Fort Worth, Tx

https://weather.com/weather/tenday/l/0a618306ade513e6f8c7ce8afb260fff01820c0036f0c71448960731c7524a81

***********************************************************

South Padre Island, Tx

https://weather.com/weather/tenday/l/1ed60a77081d6fe961eef7d0ce915a243b55e53a475d7611406e3913c92d1e65

*/