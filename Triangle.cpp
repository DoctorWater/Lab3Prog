//
// Created by malck on 09.03.2022.
//
#include <cmath>
#include <iostream>
#include "Triangle.h"

float Dot::getX() const {
    return x;
}

float Dot::getY() const {
    return y;
}

void Dot::setX(float x) {
    Dot::x = x;
}

void Dot::setY(float y) {
    Dot::y = y;
}

Triangle::Triangle() {
    this->A.setX(0);
    this->A.setY(0);
    this->B.setX(0);
    this->B.setX(0);
    this->C.setX(0);
    this->C.setX(0);
}

Triangle::Triangle(Dot A, Dot B, Dot C) {
    this->A = A;
    this->B = B;
    this->C = C;
}

Triangle::Triangle(float ax, float ay, float bx, float by, float cx, float cy) {
    this->A.setX(ax);
    this->A.setY(ay);
    this->B.setX(bx);
    this->B.setX(by);
    this->C.setX(cx);
    this->C.setX(cy);
}

float Triangle::getLength(Dot a, Dot b) {
    return sqrtf(pow(a.getX() - b.getX(), 2) + pow(a.getY() - b.getY(), 2));
}

float Triangle::roundSquare() {
    float p = (getLength(this->A, this->B) + getLength(this->B, this->C) + getLength(this->A, this->C)) / 2;
    float r = sqrtf((p - getLength(this->A, this->B)*(p- getLength(this->B,this->C))*(p- getLength(this->A,this->C))) / p);
    return r;
}

float Triangle::triangleSquare() {
    float p = (getLength(this->A, this->B) + getLength(this->B, this->C) + getLength(this->A, this->C)) / 2;
    return p*roundSquare();
}

std::string Triangle::toString() {
    std::string s="Точки треугольника: Ax: " + std::to_string(this->A.getX()) +" Ay: " + std::to_string(this->A.getY()) + " Bx: "+ std::to_string(this->B.getX()) + " By: " + std::to_string(this->B.getY()) + " Cx: " + std::to_string(this->C.getX()) + " Cy: " + std::to_string(this->C.getY())+". Площадь равна: " +
                                                                                                                                                                                                                                                                                                   std::to_string(triangleSquare());
    return s;
}