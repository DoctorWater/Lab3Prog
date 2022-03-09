//
// Created by malck on 09.03.2022.
//

#ifndef LAB3PROG_TRIANGLE_H
#define LAB3PROG_TRIANGLE_H
class Dot{
private:
    float x=0, y=0;
public:
    float getX() const;

    float getY() const;

    void setX(float x);

    void setY(float y);
};

class Triangle {
private:
    Dot A,B,C;
public:
    Triangle();
    Triangle(Dot,Dot,Dot);
    Triangle(float,float,float,float,float,float);
    float getLength(Dot A, Dot B);
    float roundSquare();
    float triangleSquare();
    std::string toString();
};


#endif //LAB3PROG_TRIANGLE_H
