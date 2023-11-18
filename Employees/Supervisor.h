/**
 * @file Supervisor.h
 * @author Arden Stanley
 * @date 2023-11-17
 * @brief declares the supervisor class
 * 
 * 
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"


/*
 * @class Supervisor Supervisor.h "Employees/Supervisor.h"
 * @brief A child class of Employee, which defines specified behavior for supervisor roles and attributes
 *
 */
class Supervisor : public Employee {
 private:
  int numSupervised;
 public:

/**
 * override of Employee print function, prints Supervisor specific info
 *
 * @pre 
 * @return void 
 * @post prints to terminal
 * 
 */
  void print();

/**
 * override of Employee calculatePay function, calculates pay for Superivsor positions
 *
 * @pre valid Supervisor
 * @return double - amount of pay
 * @post none
 * 
 */
  double calculatePay();

/**
 * constructor with default 0 initialization
 *
 * @pre none
 * @post members are initialized to 0
 * 
 */
  Supervisor();

/**
 * constructor with user specified parameters
 *
 * @param int ID the Supervisor identification number
 * @param int years the years worked
 * @param double hourlyRate the rate of pay
 * @param float hoursWorked the hours worked
 * @param int numSupervised the number of people supervised
 * @pre none
 * @post members are initialized to specified params
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
