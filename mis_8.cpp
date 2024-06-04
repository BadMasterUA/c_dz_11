#include<iostream>

class Shape{

    public:
    Shape();
    ~Shape();

    int GetLength() { return itsLength; }
    void SetLength(int length) { itsLength = length; }
    int GetWidth() { return itsWidth; }
    void SetWidth(int width) { itsWidth = width; }

    private:
    int itsLength; // длина 
    int itsWidth; // ширина
};

//создаем класс Rectangle от класса Shape
class Rectangle:public Shape{

    public:
    Rectangle();
    ~Rectangle();
};

//создаем класс Square от класса Rectangle
class Square:public Rectangle{

    public:
    Square();
    ~Square();
};

int main(){
    //
    return 0;
}