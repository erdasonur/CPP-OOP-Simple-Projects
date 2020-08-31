#include <iostream>

using namespace std;

class Employee{//Abstract Class
    protected:
        string name;
        int age;
    public:
        Employee(string name,int age){
            this->name = name;
            this->age = age;
        }
        virtual void salaryCalc()=0;//Abstract method
};

class Engineer : public Employee{
    protected:
        int salary;
    public:
        Engineer(string name,int age):Employee(name,age){}
        void setSalary(int salary){
            if(salary >=0)
                this->salary = salary;
            else
                cout<<"Salary can't be under 0"<<endl;
        }
        int getSalary(){
            return salary;
        }
};

class ComputerEngineer : public Engineer{
    private:
        int efficiency;
    public:
        ComputerEngineer(string name,int age):Engineer(name,age){}
        void setEfficiency(int efficiency){
            this->efficiency = efficiency;
        }
        int getEfficiency(){
            return efficiency;
        }
        void salaryCalc(){
            cout<<"Total salary = "<<salary + efficiency*100<<endl;
        }
        void showInfos(){
            cout<<"Name : "<<name<<" Age : "<<age << " Salary : "<<salary<<endl;
        }
};

class CivilEngineer : public Engineer{
    private:
        int extra;
    public:
        CivilEngineer(string name,int age):Engineer(name,age){}
        void setExtra(int extra){
            this->extra = extra;
        }
        int getExtra(){
            return extra;
        }
        void salaryCalc(){
            cout<<"Total salary = "<<salary + extra<<endl;
        }
        void showInfos(){
            cout<<"Name : "<<name<<" Age : "<<age << " Salary : "<<salary<<endl;
        }
};

class Secretary : public Employee{
    private:
        int salary;
        int overtime = 500;
    public:
        Secretary(string name,int age):Employee(name,age){}
        void setOvertime(int overtime){
            this->overtime = overtime;
        }
        int getOvertime(){
            return overtime;
        }
        void setSalary(int salary){
            if(salary >=0)
                this->salary = salary;
            else
                cout<<"Salary can't be under 0"<<endl;
        }
        int getSalary(){
            return salary;
        }
        void salaryCalc(){
            cout<<"Total salary = "<<salary + overtime<<endl;
        }
        void showInfos(){
            cout<<"Name : "<<name<<" Age : "<<age << " Salary : "<<salary<<endl;
        }
};

int main()
{
    ComputerEngineer c("Onur",23);
    c.setSalary(6000);
    c.setEfficiency(15);
    c.showInfos();
    c.salaryCalc();
    CivilEngineer ci("Huseyin",33);
    ci.setSalary(5000);
    ci.setExtra(500);
    ci.showInfos();
    ci.salaryCalc();
    Secretary s("Meltem",23);
    s.setSalary(4000);
    s.setOvertime(200);
    s.showInfos();
    s.salaryCalc();
    return 0;
}
