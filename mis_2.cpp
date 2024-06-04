#include<iostream>

using namespace std;

//создаем класс SimpleCircle
class SimpleCircle{

    public:
    SimpleCircle(); // конструктор
    ~SimpleCircle(); // деконструуктор

    double GetRadius() const { return *itsRadius; } // мет. получения радиуса
    void SetRadius(double r) { *itsRadius = r; } // мет. присвоения радиуса

    const SimpleCircle &operator++(); // меняем void, что бы возвращался объект
    const SimpleCircle operator++(int); // пост инкримент с целым параметром

    private:
    double *itsRadius; // переенная со значение радиуса

    int itsValue; // переме. для хранения значения инкримента
};

//иницалализация конструкторов
SimpleCircle::SimpleCircle():itsRadius(0){
    itsRadius = new double();
};
SimpleCircle::~SimpleCircle(){
    delete itsRadius;
};

//реализация инкримента
const SimpleCircle& SimpleCircle::operator++(){
    ++(*itsRadius);
    return *this;
}

//реалицация пост инкримента
const SimpleCircle SimpleCircle::operator++(int){
    SimpleCircle temp(*this);
    ++(*itsRadius);
    return temp;
}

int main(){

    setlocale(LC_ALL, "Russian");

    SimpleCircle myCircle;
    cout << "Значение itsRadius: " << myCircle.GetRadius() << endl;
    ++myCircle;
    cout << "Значение itsRadius: " << myCircle.GetRadius() << endl;

    SimpleCircle a = ++myCircle;
    cout << "Значение itsRadius a: " << a.GetRadius();
    cout << " и myCircle: " << myCircle.GetRadius() << endl;

    a = myCircle++;
    cout << "Значение itsRadius a: " << a.GetRadius();
    cout << " и myCircle: " << myCircle.GetRadius() << endl;;

    return 0;
}