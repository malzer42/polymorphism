/**
 * File: main.cpp
 * Author(s): Pierre Abraham Mulamba
 * Created (modified) on : 20201005
 * Description: Supreme Commander
 * Usage: cd build && cmake ..
 */


#include "Employee.h"
#include "Manager.h"
#include "Secretary.h"
#include <vector>
#include <memory>
#include <iostream>
#include <algorithm>

void print(std::shared_ptr<Employee>& e)
{
  e->print();
}

int main(int argc, char *argv[])
{
  try{
    std::cout << "Program To Test Polymorphism\n";
    std::shared_ptr<Employee> e = std::make_shared<Employee>("Pierre", 75000);
    std::shared_ptr<Employee> e2 = std::make_shared<Employee>("Abraham", 75000);
    std::shared_ptr<Secretary> s = std::make_shared<Secretary>("Annie", 45000);

    std::shared_ptr<Manager> m2 = std::make_shared<Manager>("Benoit", 75000, 5);

    m2->addEmployee(e);
    m2->addEmployee(e2);
    std::vector<std::shared_ptr<Employee>> employees;

    employees.push_back(m2);
    employees.push_back(s);
    std::for_each(employees.begin(), employees.end(), print);

    return 0;

  }
  catch(...){
    std::cout << "Unknown Exception thrown\n";
  }
}
