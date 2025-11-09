# ifndef VECTEUR_H
# define VECTEUR_H
#include<string>
#include<cmath>
#include "point.h"
struct vecteur{
    float x;
    float y;
};

vecteur make(float a, float b);
vecteur make(const point &a, const point &b);
vecteur add(const vecteur &a, const vecteur &b);
vecteur sub(const vecteur &a, const vecteur &b);
vecteur homothetie(const vecteur & v, float scalar);
float dot(const vecteur &a, const vecteur &b);
float length(const vecteur &v);
vecteur normaliser(const vecteur &v);
vecteur lerp(const vecteur &a, const vecteur &b, float t);
float determinant(const vecteur &a, const vecteur &b);

std::string Tostring(const vecteur &v);
#endif