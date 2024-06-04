#include <iostream>

using namespace std;

// создаем класс SimpleCircle
class SimpleCircle
{

public:
    SimpleCircle();                     // конструктор
    SimpleCircle(const SimpleCircle &); // конструктор копирования
    ~SimpleCircle();                    // деконструуктор

    double GetRadius() const { return *itsRadius; } // мет. получения радиуса
    void SetRadius(double r) { *itsRadius = r; }    // мет. присвоения радиуса

    const SimpleCircle &operator++();   // меняем void, что бы возвращался объект
    const SimpleCircle operator++(int); // пост инкримент с целым параметром
    SimpleCircle &operator=(const SimpleCircle &);

private:
    double *itsRadius; // переенная со значение радиуса

    // int itsValue; // переме. для хранения значения инкримента
};

// иницалализация конструкторов
SimpleCircle::SimpleCircle()
{
    itsRadius = new double(5);
};

// конструктор копий
SimpleCircle::SimpleCircle(const SimpleCircle &rhs)
{
    itsRadius = new double;
    *itsRadius = rhs.GetRadius();
}

SimpleCircle::~SimpleCircle()
{
    delete itsRadius;
};

// реализация инкримента
const SimpleCircle &SimpleCircle::operator++()
{
    ++(*itsRadius);
    return *this;
}

// реалицация пост инкримента
const SimpleCircle SimpleCircle::operator++(int)
{
    SimpleCircle temp(*this);
    ++(*itsRadius);
    return temp;
}

SimpleCircle& SimpleCircle::operator=(const SimpleCircle &rhs)
{
    if (this == &rhs)
        return *this;
    *itsRadius = rhs.GetRadius();
    return *this;
}

int main()
{

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
    cout << " и myCircle: " << myCircle.GetRadius() << endl;

    //задание №5
    SimpleCircle Circle_A, Circle_B;
    Circle_B.SetRadius(9); // задаем значение

    //значения обзектов
    cout << "Circle_A радиус: " << Circle_A.GetRadius() << endl;
    cout << "Circle_B радиус: " << Circle_B.GetRadius() << endl;

    //применяем инкримент
    cout << "Значение радиуса после приминения инкримента:" << endl;
    ++Circle_A;
    cout << "Circle_A радиус: " << Circle_A.GetRadius() << endl;
    ++Circle_B;
    cout << "Circle_B радиус: " << Circle_B.GetRadius() << endl;

    //присвоение значения
    Circle_A = Circle_B;
    cout << "Значение Circle_A после присвоения значения Circle_B: " << Circle_A.GetRadius();
    return 0;
}
