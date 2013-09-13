#include "Manager.h"
#include "Employee.h"
#include <iostream>

Lackey::Lackey() {
  nextLackey = NULL;
  employee = NULL;
}

void Lackey::setNextLackey(Lackey *next) {
  nextLackey = next;
}

void Lackey::setEmployee(Employee *emp) {
  employee = emp;
}

Lackey * Lackey::getNextLackey() {
  return nextLackey;
}

Employee * Lackey::getEmployee() {
  return employee;
}

Manager::Manager() {
  totalHours = 0;
  lackeys = NULL;
}

void Manager::getWorkerHours(Employee* emp) {
  std::cout << "Employee #" << emp->getID() << " has logged " << emp->getHours() << " hours..." << std::endl;
  std::cout << "Thanks " << emp->getName() << "!" << std::endl << std::endl;
  totalHours += emp->getHours();
}

void Manager::report() {
  std::cout << "A total of " << totalHours << " have been logged by employees since the last report." << std::endl << std::endl;
  totalHours = 0;
}

void Manager::addWorker(Employee *emp) {
  if (!emp) {
    return;
  }

  if (!lackeys) {
    lackeys = new Lackey();
    lackeys->setEmployee(emp);
    return;
  }

  Lackey *l = lackeys;
  while (l->getNextLackey()) {
    l = l->getNextLackey();
  }

  Lackey *l2 = new Lackey();
  l2->setEmployee(emp);
  l->setNextLackey(l2);
}

void Manager::reportLackeys() {
  if (!lackeys) {
    std::cout << "I have no goddamn lackeys" << std::endl;
    return;
  }

  Lackey *l = lackeys;
  while (l) {
    char *name = l->getEmployee()->getName();
    int hrs = l->getEmployee()->getTotalHours();
    std::cout << "My motherfucker " << name;
    std::cout << " worked motherfuckin " << hrs;
    std::cout << "hrs" << std::endl;

    if (hrs < 5) {
      std::cout << "This faggot needs to work harder";
    } else if (hrs < 20) {
      std::cout << "Not bad " << name << ", but stop fucking around";
    } else {
      std::cout << name << " is a fuckin bro";
    }
    std::cout << std::endl;
    std::cout << std::endl;
    
    l = l->getNextLackey();
  }

  ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
  ;;;;;;;;  ;;;;;;  ;;;;;;          ;;;;;  ;;  ;;;;;;;;
  ;;;;;;;;  ;;;;;;  ;;;;;;;;;;  ;;;;;;;;;  ;;  ;;;;;;;;
  ;;;;;;;;  ;;;;;;  ;;;;;;;;;;  ;;;;;;;;;  ;;  ;;;;;;;;
  ;;;;;;;;          ;;;;;;;;;;  ;;;;;;;;;  ;;  ;;;;;;;;
  ;;;;;;;;  ;;;;;;  ;;;;;;;;;;  ;;;;;;;;;  ;;  ;;;;;;;;
  ;;;;;;;;  ;;;;;;  ;;;;;;;;;;  ;;;;;;;;;;;;;;;;;;;;;;;
  ;;;;;;;;  ;;;;;;  ;;;;;;          ;;;;;  ;;  ;;;;;;;;
  ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
}