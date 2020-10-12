#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include <string>
#include <vector>
#include <memory>

class Manager : public Employee{
 public:
  Manager(const std::string& name = "Unknown", double salary = 0,
          double bonus = 0);
  Manager(const Manager& m); // copy ctor
  void addEmployee(std::shared_ptr<Employee>& e_ptr );
  std::shared_ptr<Employee> getEmployee(const std::string& name)const;
  virtual double getSalary()const; // override the method getSalary
  std::string getName()const;
  virtual void print()const;

 private:
  double bonus_;
  std::vector<std::shared_ptr<Employee>> managedEmployees_;
};




#endif /* MANAGER_H */
