//
//  main.cpp
//  ABezwada_Pr4(2)
//
//  Created by Anne on 4/22/20.
//  Copyright © 2020 Anne. All rights reserved.
//
/*
 * Class: CMSC140 CRN
 * Instructor:Shah
 * Project<4>
 * Description: (Give a brief description for Project)
 Write a program that calculates the average number of days a company's employees are absent during the year and outputs a report on a file named "employeeAbsences.txt".
 * Due Date: 4/30/20
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Anne Bezwada
 

 * Pseudocode or Algorithm for the program:
    (be sure to indent items with control structure)
    (need to match flow chart submitted in documentation)
  1.    Declare functions
  a.    Int NumOfEmployees
  b.    Int TotDaysAbsent(int);
  c.    Double AverageAbsent(int, int)
  2.    In int main (), write
  a.    Declare variables
  i.    Int TotEmployee
  ii.    Int TotData
  iii.    Double average
  b.    Write description of project up top of program
  c.    Call the functions
  3.    Write NumOfEmployees function
  a.    Set employees = 0
  b.    Allow user to enter # of employees in company
  c.    Accept # in employees
  d.    Reject if input is less than or equal to 0
  e.    Return employees
  4.    Write TotDaysAbsent
  a.    Open file named “employeeAbsences.txt”
  b.    File format
  c.    Declare new variables (employeeID, absentDays, total, average)
  d.    Ask user to input employee ID
  e.    Store ID in employeeID
  f.    Ask user to enter # of absences
  g.    Store # in absentDays
  h.    Format of data displayed in file
  i.    Close file
  5.    Write AverageAbsent function
  a.    Equation to calculate average (absenceAverage = (absentDays / employees)
  b.    Return absenceAverage
  6.    Stop

 (more as needed)
*/


#include <iostream>
#include <fstream>
#include <iomanip>
 
using namespace std;
 

int NumOfEmployees();
int TotDaysAbsent(int);
double AverageAbsent(int, int);
 
int main()
{
   
    int TotEmployee;
    int TotData;
    double average;
 
    cout << "Calculate the average number of days a company's employees are absent." << endl;
    cout << endl;
 
    
    TotEmployee = NumOfEmployees();
 
    
    TotData = TotDaysAbsent(TotEmployee);
    
    
    average = AverageAbsent(TotEmployee, TotData);
 
    cout << "Programmer: Anne Bezwada";
 
    int a;
    cin >> a;
    return 0;
    
 
}
 
//*************************************************
// Function that prompts user to enter the amount *
// of employees. It also rejects input if it is   *
//equal or less than zero                         *
//*************************************************
 
int NumOfEmployees()
{
    int employees = 0;
 
    cout << "Please enter the number of employees in the company: ";
    cin >> employees;
 
    
    if (employees < 1)
    {
        cout << "The number of employees cannot be less than one. Please enter again!" << endl;
        cin >> employees;
    }
    return employees;
 
 
}
 
//***************************************************
//Function that asks user to input their IDs and    *
// the number of days they have been absent.        *
//***************************************************
 
int TotDaysAbsent(int employees)
{
    ofstream outFile;
    outFile.open("employeeAbsences.txt");
   
    
    outFile << "EMPLOYEE ABSENCE REPORT" << endl;
    outFile << "employee id" << "  " << "days absent" << endl;
 
    
    int employeeID;
    int absentDays;
    int total = 0;
   
    double average = 0.0;
 
    
    for (int num1 = 1; num1 <= employees; num1++)
    {
 
        cout << "Please enter an employee ID: ";
        cin >> employeeID;
 
        cout << "Please enter the number of days this employee was absent: ";
        cin >> absentDays;
 
        if (absentDays < 0)
        {
            cout << "The number of days must not be negative." << endl;
            cout << "Please re-enter the number of days absent: ";
            cin >> absentDays;
        }
   
        
        outFile << setw(5) << employeeID << setw(13) << absentDays << endl;
 
        total += absentDays;
       
        
        average = total / employees;
   
    }
   
    
    outFile << "The " << employees << " employees were absent a total of " << total << " days" << endl;
    cout << fixed << showpoint << setprecision(1);
    outFile << "The average number of days absent is " << average << " days" << endl << endl;
    outFile << "Programmer: Anne Bezwada" << endl;
   
    
    outFile.close();
    return total;
}
 
//*********************************
//Function that calculates the    *
//average of employee's           *
//days of absences.               *
//*********************************
 
double AverageAbsent(int employees, int absentDays)
{
    int absenceAverage;
    absenceAverage = (absentDays / employees);
    return absenceAverage;
 
}

