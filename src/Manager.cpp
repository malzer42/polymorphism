/**
 * File: Manager.cpp
 * Author(s): Pierre Abraham Mulamba
 * Created(modified) on: 20201005
 */

#include "Manager.h"

Manager::Manager(const std::string& name, double salary, double bonus):
  Employee(name, salary), bonus_(bonus)
{
  managedEmployees_.clear();
}

Manager::Manager(const Manager& m) : Employee(m.getName(), m.getSalary()),
                                     bonus_(m.bonus_),
                                     managedEmployees_(m.managedEmployees_)
{

}

void Manager::addEmployee(std::shared_ptr<Employee>& e_ptr)
{
  managedEmployees_.push_back(e_ptr);
}

std::shared_ptr<Employee>  Manager::getEmployee(const std::string& name)const
{
  std::shared_ptr<Employee> e = nullptr;
  for(auto& elt : managedEmployees_){
    if(elt->getName() == name ){
      e = std::make_shared<Employee>(elt->getName(), elt->getSalary());
    }
  }
  return e;
}

double Manager::getSalary()const
{
  return Employee::getSalary()*(1 + bonus_/100.0);
}

std::string Manager::getName()const
{
  return Employee::getName() + "(Manager)";
}

void Manager::print()const
{
  //Employee::print();
  std::cout <<"Name: " << this->getName() <<", Salary: " << this->getSalary();
  std::cout <<"\nBonus: " << bonus_ << '\n';
  std::cout << "Managed Employees: \n";
  for(auto& employee : managedEmployees_){
    employee->print();
  }
  std::cout <<"-------------End of Managed Employees-----------\n";
}
