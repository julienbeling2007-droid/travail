#include "point.h"
#include "vecteur.h"
#include <sstream>

point Make(float x, float y){
    point p; //declaration d'une variable de type point
    p.x=x; //   affectation de x en l'abscisse du point
    p.y=y; // affectation de y en ordonnée du point
    return p; //retourne du point
}

point translation(const point &p, float dx, float dy){
    point t; //declaration d'un type point
    t.x=p.x+dx; // deplacement de la coordonnée das abscisses
    t.y=p.x+dy; // deplacement de la coordonnée des ordonnées
    return t; // retourne de la valeur du point translaté grace a un point
}

point translation(const point &p, const vecteur &v){
    point r; //declaration d'un type point
    r.x=p.x+v.x; //deplacement de la coordonnee des abscisses grace a l'abscisse du type vecteur
    r.y=p.y+v.y; //deplacement de la coordonnéé des abscisses grace a l'ordonnee du type vecteur
    return r; // retourne de la valeur du point translaté grace a un vecteur
}

point homothetie(const point &p, float sx, float sy){
    point h;
    float k;
    h.x=(p.x*k)+(1-k)*sx;
    h.y =(p.y*k)+(1-k)*sy;
    return h;
}

point homothetie(const point &p, const vecteur &s){
    point h;
    float k;
    h.x=(p.x*k)+(1-k)*s.x;
    h.y=(p.y*k)+(1-k)*s.y;
    return h;
}

point rotation(const point &p, float angledegree){
    point r;
    float anglerad =angledegree*(3.14/180);
    r.x=(p.x*cos(anglerad))-(p.y*sin(anglerad));
    r.y=(p.x*sin(anglerad))+(p.y*cos(anglerad));
    return r;
}

std:: string Tostring(const point &p){
    std::ostringstream oss; //pour l'affichage
    oss <<"(" << p.x <<"," << p.y<<")";

    return oss.str(); // on reprend l'ensemble des chaine de caractères

}


