/***********************************************************************
* Program:
*    Team Activity 09, Polymorphism   
*    Brother Alvey, CS165
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
* Class: Employee
* Purpose: 
***********************************************************************/
class Employee
{
private:
   string name;
   void setName(const string name)
   {
      this->name = name;
   }
   
public:
   string getName()
   {
      return name;
   }
};

/**********************************************************************
 * Class: HourlyEmployee
 * Purpose:
 ***********************************************************************/
class HourlyEmployee : public Employee
{

};

/**********************************************************************
 * Class: SalaryEmployee
 * Purpose:
 ***********************************************************************/
class SalaryEmployee : public Employee
{

};

/**********************************************************************
* Function: main
* Purpose: This is the entry point and driver for the program.
***********************************************************************/
int main()
{
   return 0;
}
