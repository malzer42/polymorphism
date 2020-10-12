#ifndef SECRETARY_H
#define SECRETARY_H

#include "Employee.h"
#include <string>
#include <iostream>

class Secretary : public Employee{
 public:
  Secretary(const std::string& name = "Unknown", double salary = 0);
  std::string getName()const;
  virtual void print()const;
};


#endif /* SECRETARY_H */
