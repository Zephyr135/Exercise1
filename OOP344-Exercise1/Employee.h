#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

class Manager;

class Employee {
  private:
    int ID;
    char* name;
    Manager* boss;
    int hours;
    int totalHours;
  protected:
  public:
    Employee(int id, char* name);
    ~Employee();
    void setBoss(Manager* newBoss);
    void work(int numOfHours);
    void report();
    int getHours();
    int getID();
    char* getName();
    int getTotalHours();
};

#endif