#ifndef _MANAGER_H_
#define _MANAGER_H_

class Employee;

class Lackey {
  private:
    Lackey *nextLackey;
    Employee *employee;
  public:
    Lackey();
    void setNextLackey(Lackey *next);
    void setEmployee(Employee *emp);
    Lackey *getNextLackey();
    Employee *getEmployee();
};

class Manager {
  private:
    int totalHours;
    Lackey *lackeys;
  protected:
  // private: corrected below
  public:
    Manager();
    void getWorkerHours(Employee* emp);
    void report();
    void addWorker(Employee *emp);
    void reportLackeys();
};

#endif