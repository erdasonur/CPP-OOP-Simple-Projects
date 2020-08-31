#include <iostream>

using namespace std;

class Human{
    protected:
        string name;
        int age;
        int weight;
        int level;
    public:
        int meal(){
            weight++;
        }
};

class Employee : public Human{
    private:
        int salary;
    public:
        int Raise(int raise){
            salary +=raise;
            level++;
        }
        void setSalary(int salary){
            if(salary > 0)
                this->salary = salary;
            else
                cout<<"Salary can't be lower than 0"<<endl;
        }
        int getSalary(){
            return salary;
        }
        void showInfos(){
            cout<<"Name = " <<name <<" Age = " << age<<" Weight = "<<weight<<" Level = "<<level<<" Salary = "<<salary<<endl;
        }
        Employee(string name,int age,int weight,int level){
            this->name = name;
            this->age = age;
            this->weight = weight;
            this->level = level;
        }
};
int main()
{
    Employee emp("ONUR",23,80,2);
    emp.setSalary(5000);
    emp.showInfos();
    emp.Raise(500);
    emp.showInfos();
    emp.setSalary(-500);
    emp.showInfos();
    return 0;
}
