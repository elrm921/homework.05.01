#include <iostream>

class Figure {
    public:
        Figure() {
            this->name = "Фигура";
            this->sides = 0;
        }
        void print() {
            std::cout << name << "\n";
            std::cout << "Количество сторон: " << sides << "\n";
        }
    protected:
        Figure(std::string name, int sides) {
            this->name = name;
            this->sides = sides;
        }
    private:
        std::string name;
        int sides;
};

class Triangle : public Figure {
    public:
        Triangle() : Figure("Треугольник", 3) {}
};

class Quadrangle : public Figure {
    public:
        Quadrangle() : Figure("Четырехугольник", 4) {}
};

void print(Figure &figure) {
    figure.print();
}

int main() {
    Figure f1;
    Triangle t1;
    Quadrangle r1;

    print(f1);
    print(t1);
    print(r1);

    return 0;
}