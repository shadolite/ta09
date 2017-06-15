/***********************************************************************
* Program:
*    Team Activity 09, Polymorphism   
*    Brother Alvey, CS165
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <string>
using namespace std;

/**********************************************************************
* Class: Employee
* Purpose: 
***********************************************************************/
class Employee
{
private:
   string name;
   
public:
   string getName() const
   {
      return name;
   }
void setName(const string name)
   {
      this->name = name;
   }
   virtual void display()
   {
      cout << name << endl;
   }
};

/**********************************************************************
 * Class: HourlyEmployee
 * Purpose:
 ***********************************************************************/
class HourlyEmployee : public Employee
{
private:
   int hourlyWage;

public:
   int getHourlyWage() const { return hourlyWage;}
   void setHourlyWage(int wage) { this->hourlyWage = wage; }
   virtual void display()
   {
      cout << getName() << " - $" << hourlyWage << "/hour\n";
   }
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
