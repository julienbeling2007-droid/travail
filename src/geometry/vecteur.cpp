#include "vecteur.h"
#include <cmath>
#include "point.h"
#include <sstream>

vecteur make(float a, float b){
    vecteur v;
    v.x=a;
    v.y=b;
    return v;
}

vecteur make(const point &a, const point &b){
    vecteur v1;
    v1.x=b.x-a.x;
    v1.y=b.y-a.y;
    return v1;
}

vecteur add(const vecteur &a, const vecteur &b){
    vecteur v2;
    v2.x=a.x+b.x;
    v2.y=a.y+b.y;
    return v2;
}

vecteur sub(const vecteur &a, const vecteur &b){
    vecteur v3;
    v3.x=a.x-b.x;
    v3.y=a.y-b.y;
    return v3;
}


vecteur homothetie(const vecteur &v, float scalar){
    vecteur h;
    h.x=v.x*scalar;
    h.y=v.y*scalar;
    return h;
}

float dot (const vecteur &a, const vecteur &b){
    vecteur v4;
    v4.x=a.x*b.x;
    v4.y=a.y*b.y;
    return v4.x+v4.y;

}

float length(const vecteur &v){
    float lengh;
    lengh=sqrt ((v.x*v.x)+(v.y*v.y));
    return lengh;
}

vecteur normaliser(const vecteur &v){
    vecteur n={0,0};
    float t=length(v);
    vecteur u;
    if(t==0){
        return n;
    }
    else{
        u.x=v.x/t;
        u.y=v.y/t;
        return u;
    }
}

vecteur lerp (const vecteur &a, const vecteur &b, float t){
    vecteur v;
    if(t>=0 && t<1){
        v.x=(1-t)*a.x+ t*(b.x);
        v.y=(1-t)*a.y +t*(b.y);
        return v;
    }

}


float determinant(const vecteur &a, const vecteur &b){
    vecteur d;
    d.x= a.x*b.y;
    d.y=a.y*b.x;
    return d.x-d.y;
}

std:: string Tostring(const vecteur &v){
    std::ostringstream oss;
    oss <<"("<< v.x<< v.y <<")";
}