//
//  main.cpp
//  ABezwada_Pr1
//
//  Created by Anne on 2/20/20.
//  Copyright © 2020 Anne. All rights reserved.
//

/*
 * Class: CMSC140 CRN
 * Instructor:
 * Project<number>
 * Description: (Give a brief description for Project)
 * Due Date:
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Anne Bezwada__________
 

 * Pseudocode or Algorithm for the program:
    (be sure to indent items with control structure)
    (need to match flow chart submitted in documentation)
  1.
  2.
  3.
  4.
  5.
 (more as needed)
*/

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    // declare variables
    string robot_Name;
    const int one_Dog_Year = 7; const int days_Per_Month = 30;
    string first_Name;
    string last_Name;
    string full_Name;
    int important_Age;
    int any_Number1;
    int any_Number2;

    
    //display the title
    cout << "******************* Robot Prototype Scripting *******************\n";
    
    //define robot_Name
    robot_Name = "Nao";
    cout <<"Hello, welcome to Montgomery College! My name is " << robot_Name << "!" << endl;
   
    
    //Take inputer's first and last name. Then assign a variable for it
    cout << " What is your first name: ";
    cin >> first_Name;
    cout << " What is your last name: ";
    cin >> last_Name;
    full_Name = first_Name + " " + last_Name;
    
    
    
    cout << "Nice to have you with us today, " << full_Name << endl;
    cout << "Let me impress you with a small game." << endl;
    cout << "Please give me the age of an important person or a pet to you." << endl;
    cin >> important_Age;
    
    
    cout << "You have now entered " << important_Age << "." << endl;
    cout << "If this is for a person, the age can be expressed as: " << important_Age << " " << "years" << endl;
    cout << "or " << important_Age * 12 << " " << "months" << endl;
    cout << "or about " << 365 * important_Age << " " << "days" << endl;
    cout << "or about " << ((important_Age * 365)*24) << " " << "hours" << endl;
    cout << "or about " << (((important_Age * 365)*24)*60) << " " << "minutes" << endl;
    cout << "or about " << ((((important_Age * 365)*24)*60)*60) << " " << "seconds." << endl;
    cout << "If this is for a dog, it is " << important_Age * 7 << " " << "years old in human age." << endl;
    cout << "If this is for a gold fish, it is " << important_Age * 5 << " " << "years old in human age." << endl;
    
    cout << "Let's play another game, " << full_Name << "." << " " << "Give me a whole number." << endl;
    cin >> any_Number1;
    cout << "Very well. Give me another whole number." << endl;
    cin >> any_Number2;
    cout << "Using the operator '+' in C++, the result of " <<  any_Number1 << "+" <<  any_Number2 << " " << "is" << " " <<  any_Number1 + any_Number2 << endl;
    cout << "Using the operator '/' in C++, the result of " <<  any_Number1 << "/" <<  any_Number2 << " " << "is" << " " <<  any_Number1 / any_Number2 << endl;
    
    cout << "however, the result of " << any_Number1 * 1.00 << "/" << any_Number2 * 1.00 << " " << "is" << " " << (any_Number1 * 1.0) / (any_Number2 * 1.0)  << endl;
    
    
    // Display the ending of the program: statement, my name, title of project, and due date
    cout << "Thank you for testing my program!" << endl;
    cout << "PROGRAMMER: Anne Bezwada" << endl;
    cout << "CMSC140 Common Project 1" << endl;
    cout << "Due Date: 2/24/20" << endl;
    
    
    
    
    
    



    return 0;


}
