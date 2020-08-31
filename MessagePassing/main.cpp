#include <iostream>

using namespace std;

class Meal{
public:
    int calori;
    int gram;
    int price;
};
class Human{
public:
    int height;
    float weight;
    int age;
    int meal(Meal m){
        weight += m.calori / (float)7000;
    }
};
int main()
{
    Meal sandwich;
    sandwich.calori = 233;
    sandwich.gram = 100;
    sandwich.price = 10;
    Human ali;
    ali.age = 30;
    ali.height = 180;
    ali.weight = 80;
    cout<<"Age= "<<ali.age<<" Height= "<<ali.height<<" Weight"<<ali.weight<<endl;
    ali.meal(sandwich);
    cout<<"Age= "<<ali.age<<" Height= "<<ali.height<<" Weight"<<ali.weight<<endl;
    return 0;
}
