class Employee;
// read comment on Employee.h

class Manager {
  private:
    int totalHours;
  protected:
  // private: corrected below
  public:
    Manager();
    void getWorkerHours(Employee* emp);
    void report();
};