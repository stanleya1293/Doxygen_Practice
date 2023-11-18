/**
 * @file Employee.h
 * @author Arden Stanley
 * @date 2023-11-17
 * @brief declares the Employee class, which stores information about each employee
 * 
 * 
*/

#ifndef EMPLOYEE_H
#define EMPLOYEE_H



/*
*
* @class Employee Employee.h "Employees/Employee.h"
* @brief A class layout for an employee, defining behavior and attributes
*
*/
class Employee {
 private:
  int ID; //employee ID
  int years;
  
 protected:
  double hourlyRate;
  float hoursWorked;
 public:

/**
 * prints information about the employee
 *
 * @pre none
 * @return virtual void
 * @post prints to the terminal
 * 
 */
  virtual void print();

/**
 * calculates the pay of the employee
 *
 * @pre needs a valid employee
 * @return virtual double - the amount of pay for the employee
 * @post none
 * 
 */
  virtual double calculatePay();

/**
 * updates the years the employee has worked there
 *
 * @pre valid employee
 * @return void 
 * @post updates years to be years + 1
 * 
 */
  void anniversary();

/**
 * constructor, initializes private and protected members
 *
 * @pre none
 * @post initialized variables
 * 
 */
  Employee();

/**
 * constructor to initialize to specified values
 *
 * @param int ID the employee identification number
 * @param int years the years worked
 * @param double hourlyRate the rate of pay
 * @param float hoursWorked how many hours are worked in a set amount of time
 * @pre none
 * @post initialized all variables to the parameterized user specifications
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
