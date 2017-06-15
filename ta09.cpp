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
private:
   int salary;
   
public:
   int getSalary() const { return salary; }
   void setSalary(int salary) { this->salary = salary; }

   virtual void display()
   {
      cout << getName() << " - $" << salary << "/year\n";
   }
};

/**********************************************************************
* Function: main
* Purpose: This is the entry point and driver for the program.
***********************************************************************/
int main()
{

   Employee* pEmployee[3];



   for (int i = 0; i < 3; i==)
   {
      char letter;
      string name;
      int wage;
      cout << "h or s: ";
      cin >> letter;

      if (letter == 'h')
      { HourlyEmployee* emp = new HourlyEmployee;
         cout << "Name: ";
         cin >> name;

         emp->setName(name);

         cout << "Wage: ";
         cin >> wage;
         emp->setHourlyWage(wage);

         pEmployee[i] = emp;
      }

      else
      {
         SalaryEmployee* emp = new SalaryEmployee;
         cout << "Name: ";
         cin >> name;

         emp->setName(name);

         cout << "Salary: ";
         cin >> wage;
         emp->setSalary(wage);

         pEmployee[i] = emp;
         
      }
   }
   for (int i = 0; i < 3; i++)
   {
      pEmployee[i]->display();  
   }

   for (int i = 0; i < 3; i++)
   {
      delete pEmployee[i];

      pEmployee[i] = NULL;
   }
   
      return 0;
}
