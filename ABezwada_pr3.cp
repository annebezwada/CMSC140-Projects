//
//  main.cpp
//  ABezwada_Pr3
//
//  Created by Anne on 3/16/20.
//  Copyright © 2020 Anne. All rights reserved.
//
/*

 * Class: CMSC140 CRN

 * Instructor:

 * Project<3>

 * Description: (Give a brief description for Project)

 * Due Date: 4/7/2020

 * I pledge that I have completed the programming assignment independently.

   I have not copied the code from a student or any source.

   I have not given my code to any student.

   Print your Name here: _Anne Bezwada_________

 * Pseudocode or Algorithm for the program:

(be sure to indent items with control structure)

(need to match flow chart submitted in documentation)

  1. Declare variables

  2. Allow user to input location of hotel

  3. Allow user to Enter total number of floors

  4. Allow user to enter total number of rooms

  5.Allow user to enter number of Single rooms

  6. Allow user to enter number of Double rooms

  7. Allow user to enter number of King rooms

  8. Allow user to enter number of Suite rooms

  9. Loop if there are multiple floors entered

  10. Display room rates

  11. Calculate hotel income

  12. Calculate total number of rooms

  13. Calculate and display total number of occupied rooms

  14. Calculate and display total number of unoccupied rooms

  15. Calculate and display occupancy rate

  16. If occupancy rate is < 60%, display message

  17. Display floor with occupied rooms

  18. Display end card

 (more as needed)

*/




#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
string locationHotel;
int floorsHotel;
int roomsHotel;
int singleRooms;
int doubleRooms;
int kingRooms;
int suiteRooms;
int singleRate;
int doubleRate;
int kingRate;
int suiteRate;
int hotelIncome;
int totalRooms;
int number;


int main()

{
    
    cout << "********************************************" << endl;
    cout << setprecision(20) << "BlueMont Hotel" << endl;
    cout << "********************************************" << endl;
    
    cout << "Enter the location of this hotel chain: " << endl;
    cin >> locationHotel;
    
    
    cout << "Enter total number of floors of the hotel: " << endl;
    cin >> floorsHotel;
    while (floorsHotel > 5 || floorsHotel <= 0)
    {
    cout << "Please enter a number between 1 through 5!! Please try again." << endl;
    cin >> floorsHotel;
    }
   
    for (int i = 1; i <= floorsHotel; i++) {
    do{
        
        cout << "Enter total number of rooms on " << i << "th floor: " << endl;
        cin >> roomsHotel;
        while (roomsHotel <= 0 || roomsHotel > 30)
         {
             cout << "Please enter a number between 1 through 30!! Please try again." << endl;
             cin >> roomsHotel;
         }
        
        
    cout <<  "How many SINGLE rooms are occupied in the " << i << "th floor: " << endl;
          cin >> singleRooms;
        
         
          cout << "How many DOUBLE rooms are occupied in the " << i << "th floor: " << endl;
          cin >> doubleRooms;
        
          
          cout << "How many KING rooms are occupied in the " << i << "th floor: " << endl;
          cin >> kingRooms;
        
          
          cout << "How many SUITE rooms are occupied in the " << i << "th floor: " << endl;
          cin >> suiteRooms;
        
          
          if ((singleRooms + doubleRooms + kingRooms + suiteRooms) > roomsHotel )
          {
       cout << "Total number of occupied rooms exceeds the total number on this floor. Please try again!!" << endl;
          }
    }
        
     while ((singleRooms + doubleRooms + kingRooms + suiteRooms) > roomsHotel);
                                 
          }

    
    
    // Display the input as a menu
    cout << "************************************************************************" << endl;
    cout << "BlueMont Hotel located in " << locationHotel << endl;
    cout << "TODAY'S ROOM RATES (US$/NIGHT)" << endl;
    
    singleRate = 60;
    cout << setprecision(5) << "Single rooms: $" << singleRate << endl;
    
    doubleRate = 75;
    cout << setprecision(30) << "Double rooms: $" << doubleRate << endl;
  
    kingRate = 100;
    cout << setprecision(30) << "King rooms: $" << kingRate << endl;
  
    suiteRate = 150;
    cout << setprecision(30) << "Suite rooms: $" << suiteRate << endl;
   
    cout << "************************************************************************" << endl;
    
    
    
    hotelIncome = ((singleRooms * singleRate) + (doubleRooms * doubleRate) + (kingRooms * kingRate) + (suiteRooms * suiteRate));
    cout << "Hotel Income: $" << hotelIncome << endl;
    
    
    
    cout << "Total number of rooms: " << totalRooms << endl;
    
    cout << "Total number of occupied rooms: " << endl;
     
    
    cout << "Total # of unoccupied rooms: " << endl;
    
    
    cout << "Occupancy rate: " << endl;
    
    
    
      
    cout << "Thank you for testing my program!" << endl;
    cout << "PROGRAMMER: Anne Bezwada" << endl;
    cout << "CMSC 140 Common Project 3" << endl;
    cout << "Due Date: 4/7/2020" << endl;
    
    
  
    
    
    
}




