#include<iostream>

class Shape{

    public:
    Shape();
    ~Shape();
};

//создаем класс Rectangle от класса Shape
class Rectangle:public Shape{

    public:
    Rectangle(int a, int b) : Shape() { a = itsLength, b = itsWidth; }
    ~Rectangle();

    int GetLength() { return itsLength; }
    void SetLength(int length) { itsLength = length; }
    int GetWidth() { return itsWidth; }
    void SetWidth(int width) { itsWidth = width; }

    private:
    int itsLength; // длина 
    int itsWidth; // ширина
};

//создаем класс Square от класса Rectangle
class Square:public Rectangle{

    public:
    Square(int a) : Rectangle(a, 5), itsLength(a) {}
    ~Square();

    int GetLength() { return itsLength; }
    void SetLength(int length) { itsLength = length; }

    private:
    int itsLength; // длина
};

int main(){
    //
    return 0;
}