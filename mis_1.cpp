#include<iostream>

using namespace std;

//создаем класс SimpleCircle
class SimpleCircle{

    public:
    SimpleCircle(); // конструктор
    ~SimpleCircle(); // деконструуктор

    double GetRadius() const { return itsRadius; } // мет. получения радиуса
    void SetRadius(double r) { itsRadius = r; } // мет. присвоения радиуса

    void operator++() { ++itsRadius; }

    private:
    double itsRadius; // переенная со значение радиуса

    int itsValue; // переме. для хранения значения инкримента
};

//иницалализация конструкторов
SimpleCircle::SimpleCircle():itsRadius(0), itsValue(0){};
SimpleCircle::~SimpleCircle(){};

int main(){

    setlocale(LC_ALL, "Russian");

    SimpleCircle myCircle;
    cout << "Значение itsRadius: " << myCircle.GetRadius() << endl;
    ++myCircle;
    cout << "Значение itsRadius: " << myCircle.GetRadius() << endl;

    return 0;
}