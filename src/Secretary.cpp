#include "Secretary.h"

Secretary::Secretary(const std::string& name, double salary):
  Employee(name, salary)
{}

std::string Secretary::getName()const
{
  return Employee::getName() + "(Secretary)";
}

void Secretary::print()const
{
  std::cout <<"Name: " << this->getName() << ", Salary: "
            << this->getSalary() <<'\n';
}
