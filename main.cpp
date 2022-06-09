#include <iostream>

class Figure {
    public:
        Figure() {
            this->name = "Фигура";
            this->sides = 0;
        }
        std::string get() {
            return this->name;
        }
        int count() {
            return this->sides;
        }
    protected:
        std::string name;
        int sides;
};

class Triangle : public Figure {
    public:
        Triangle() {
            this->name = "Треугольник";
            this->sides = 3;
        }
};

class Quadrangle : public Figure {
    public:
        Quadrangle() {
            this->name = "Четырехугольник";
            this->sides = 4;
        }
};

int main() {
    Figure f1;
    Triangle t1;
    Quadrangle r1;

    std::cout << "Количество сторон:" << "\n";
    std::cout << f1.get() << ": " << f1.count() << "\n";
    std::cout << t1.get() << ": " << t1.count() << "\n";
    std::cout << r1.get() << ": " << r1.count() << "\n";

    return 0;
}