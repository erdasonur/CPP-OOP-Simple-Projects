#include <iostream>

using namespace std;

class Human{
    protected:
        string name;
        int age;
        int weight;
        int height;
    public:
        void setName(string name){
            this->name = name;
        }
        string getName(){
            return name;
        }
        void setAge(int age){
            this->age = age;
        }
        int getAge(){
            return age;
        }
        void setWeight(int weight){
            this->weight = weight;
        }
        int getWeight(){
            return weight;
        }
        void setHeight(int height){
            this->height = height;
        }
        void setHeight(double height){
            this->height = height * 100;
        }
        int getHeight(){
            return height;
        }
};

class Employee : public Human{
    private:
        int salary;
    public:
        void setSalary(int salary){
            this->salary = salary;
        }
        void setSalary(double salary){
            this->salary = salary * 1000;
        }
        int getSalary(){
            return salary;
        }
    Employee operator+(const Employee& e){
        Employee totalSalary;
        totalSalary.salary = salary + e.salary;
        return totalSalary;
    }
};

int main()
{
    Employee emp;
    emp.setName("Onur");
    emp.setHeight(1.75);
    emp.setWeight(80);
    emp.setAge(23);
    emp.setSalary(4.500);
    cout<<"Name "<<emp.getName()<<" Age "<<emp.getAge()<<" Weight "<<emp.getWeight()<<" Height "<<emp.getHeight()<< " Salary "<<emp.getSalary()<<endl;
    Employee emp2;
    emp2.setName("Melisa");
    emp2.setHeight(1.62);
    emp2.setWeight(54);
    emp2.setAge(23);
    emp2.setSalary(5000);
    cout<<"Name "<<emp2.getName()<<" Age "<<emp2.getAge()<<" Weight "<<emp2.getWeight()<<" Height "<<emp2.getHeight()<< " Salary "<<emp2.getSalary()<<endl;

    Employee total = emp + emp2;
    cout<<"Total Salary = "<<total.getSalary();
    return 0;
}
