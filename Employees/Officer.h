/**
 * @file Officer.h
 * @author Arden Stanley
 * @date 2023-11-17
 * @brief declares officer class
 * 
 * 
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"


/**
 * a child (class that inherits) class of Employee, defines specified behaviors and attributes
 *
 * @class Officer Officer.h "Employees/Officer.h" 
 *
 */
class Officer : public Employee {
 private:
  double evilness;
 public:

/**
 * overrides print function from Employee class to print information for an officer
 *
 * @pre none
 * @return void 
 * @post prints to terminal
 * 
 */
  void print();

/**
 * overrides calculatePay function in Employee class to calculate pay specific to officers
 *
 * @pre valid officer needed
 * @return double - the pay
 * @post none
 * 
 */
  double calculatePay();

/**
 * constructor for Officer class, initializes all variables to 0
 *
 * @pre none
 * @post all member variables initialized to 0
 * 
 */
  Officer();

/**
 * constructor for initializing Officer class to specified paramters
 *
 * @param int ID Officer ID
 * @param int years years worked
 * @param double hourlyRate the hourly rate of pay
 * @param float hoursWorked the hours worked
 * @param double evilness the evilness of the officer
 * @pre none
 * @post initializes all member variables to user specified paramters
 * 
 */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
