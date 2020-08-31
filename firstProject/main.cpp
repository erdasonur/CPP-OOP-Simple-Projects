#include <iostream>

using namespace std;

class Rectangle{
public:
    int en;
    int boy;
    int alanFunc(){
        return en * boy;
    }
    int cevreFunc(){
        return 2 * (en + boy);
    }
};

int main()
{
    Rectangle r1,r2;
    r1.en=50;
    r1.boy=100;
    cout<<"Ilk dikdortgenin alani = "<<r1.alanFunc()<<" ,cevresi = "<<r1.cevreFunc()<<endl;
    r2.en=150;
    r2.boy=200;
    cout<<"Ikinci dikdortgenin alani = "<<r2.alanFunc()<<" ,cevresi = "<<r2.cevreFunc()<<endl;
    return 0;
}
