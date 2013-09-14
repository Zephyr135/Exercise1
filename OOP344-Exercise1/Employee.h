class Manager;
// no need for #include since .cpp files are compiled first, and already included there

class Employee {
  private:
    int ID;
    char* name;
    Manager* boss;
    int hours;
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
};