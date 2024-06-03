#include<iostream>

using namespace std;

//создаем класс SimpleCircle
class SimpleCircle{

    public:
    SimpleCircle(); // конструктор
    ~SimpleCircle(); // деконструуктор

    double GetRadius() const { return itsRadius; } // мет. получения радиуса
    void SetRadius(double r) { itsRadius = r; } // мет. присвоения радиуса

    private:
    double itsRadius; // переенная со значение радиуса
};

//иницалализация конструкторов
SimpleCircle::SimpleCircle():itsRadius(0){};
SimpleCircle::~SimpleCircle(){};

int main(){
    /*Код для проверки работы класса
    SimpleCircle myCircle;
    cout << "myCircle radius: " << myCircle.GetRadius() << endl;
    myCircle.SetRadius(15);
    cout << "myCircle radius: " << myCircle.GetRadius() << endl;
    */
    //
    return 0;
}