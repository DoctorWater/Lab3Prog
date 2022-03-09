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

    void setX(float);

    void setY(float);
};

class Triangle {
private:
    Dot A,B,C;
public:
    Triangle();
    Triangle(Dot,Dot,Dot);
    Triangle(float,float,float,float,float,float);
    float getLength(Dot , Dot );
    float roundSquare();
    float triangleSquare();
    std::string toString();
    Triangle move (float , float);
    bool operator >(Triangle );
    bool operator <(Triangle );
    bool operator == (Triangle);
    bool operator != (Triangle);
};


#endif //LAB3PROG_TRIANGLE_H
