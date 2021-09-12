//
//  main.cpp
//  ABezwada_Pr2
//
//  Created by Anne on 3/4/20.
//  Copyright © 2020 Anne. All rights reserved.
//

/*
 * Class: CMSC140 CRN
 * Instructor: Prof. Shah
 * Project<2>
 * Description: (Give a brief description for Project)
 * Due Date: 3/10/2020
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Anne Bezwada
 

 * Pseudocode or Algorithm for the program:
    (be sure to indent items with control structure)
    (need to match flow chart submitted in documentation)
  1. declare variables
  2. allow user to input country name
  3. display menu to user
  4. allow user to input choice and complete requested task accordingly
    1. if choice 1 is chosen, display and calculate temperature converter
    2. if choice 2 is chosen, display and calculate distance converter
    3. if choice 3 is chosen, display and calculate weight converter
    4. if choice 4 is chosen, display quit message
  5. display country's name and "sounds fun!"
  6. display thank you message
 (more as needed)
*/


#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main ()

{
    string countryName;
    double cel_Temperature;
    double far_Temperature;
    int choice;
    double kil_Distance;
    double mil_Distance;
    double pou_Weight;
    double kil_Weight;
    
    
    cout << "Enter a country name: ";
    cin >> countryName;
   
    
   
    
    cout << "Converter Toolkit" << endl;
    cout << "--------------------" << endl;
    cout << "1. Temperature Converter" << endl;
    cout << "2. Distance Converter" << endl;
    cout << "3. Weight Converter" << endl;
    cout << "4. Quit" << endl;
    
    cout << "Enter your choice (1-4): ";
    cin >> choice;
    
    if (choice > 4 || choice < 1)
    {
        cout << "Your choice is invalid!" << endl;
    }
    
    
    
    else if (choice == 1)
    {
        
     cout << "Please enter temperature in Celcius (such as 24): " << endl;
     cin >> cel_Temperature;
        
    
        far_Temperature = (((1.8) * cel_Temperature) + 32);
     cout << "It is "<< far_Temperature  << fixed << setprecision(2)<< " degrees Farenheit" << endl;
    }
   
    
    else if(choice == 2)
    {
        
        cout << "Please enter distance in Kilometers:" << endl;
        cin >> kil_Distance;
        
        if (kil_Distance <= 0)
        {
            cout << "This is an error" << endl;
        }
       
        else if (kil_Distance >= 0)
        {
            mil_Distance = (kil_Distance * 0.6);
            cout << "It is " << fixed << setprecision(2)<< mil_Distance << " miles." << endl;
        }
        
        
    
    }
    
    
    else if (choice == 3)
    {
        cout << "Please enter weight in Kilograms:" << endl;
        cin >> kil_Weight;
        
        if (kil_Weight <= 0)
        {
            cout << "This is an error" << endl;
        }
        
        else if (kil_Weight >= 0)
        {
        pou_Weight = (kil_Weight * 2.2);
        cout << "It is "<< pou_Weight << fixed << setprecision(1)<< " pounds." << endl;
        }
    }
    
    
    else if (choice == 4)
    {
        cout << "End of program!" << endl;
    }
    
    
    cout << countryName << " sounds fun!" << endl;
    
    
    cout << "Thank you for testing my programming!" << endl;
    cout << "PROGRAMMER: Anne Bezwada" << endl;
    cout << "CMSC Common Project 2" << endl;
    cout << "Due Date: 3/9/2020" << endl;
    
    
        return 0;
    
    
    
    
    
    
}


