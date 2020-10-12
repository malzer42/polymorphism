/**
 * File: Employee.cpp
 * Author(s): Pierre Abraham Mulamba
 * Created (modified) on: 20201005 (202010)
 * Description: Implementation the class Employee
 */


#include "Employee.h"

Employee::Employee(const std::string& name, double salary) : name_(name),
                                                       salary_(salary)
{}


Employee::Employee(const Employee& e) : name_(e.name_),
                                        salary_(e.salary_)
{}

std::string Employee::getName()const
{
  return name_;
}


double Employee::getSalary()const
{
  return salary_;
}


void Employee::setName(std::string& name)
{
  name_ = name;
}

void Employee::setSalary(double salary)
{
  salary_ = salary;
}

std::ostream& operator<<(std::ostream& out, const Employee& e)
{
  out << e.name_ <<", " << e.salary_ << '\n';
  return out;
}

void Employee::print()const
{
  std::cout << "Name: " << this->getName()
            << ", Salary: " << this->getSalary() << '\n';
}
