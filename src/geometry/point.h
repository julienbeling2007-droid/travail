#ifndef POINT_H
#define POINT_H
#include <string>
#include "vecteur.h"

struct point {
    float x;
    float y;
};
point Make (float x, float y);
point translation(const point &p, float dx, float dy);
point translation(const point &p, const vecteur &v  );
point homothetie(const point &p, float sx, float sy);
point homothetie(const point &p, const vecteur &s);
point rotation(const point &p, float angledegree);

std::string Tostring(const point &p);
#endif