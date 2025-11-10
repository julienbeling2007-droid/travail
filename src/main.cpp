#include "point.h"
#include "vecteur.h"
#include "utils.h"
#include <sstream>

int main(){
   point p=Make(2.0f,3.0f);
   Print("le point est:", ToString(p));

   point p1=translation(p, 3.0, 4.5);
   Print("translation par point:", Tostring(p1));

   vecteur v=make(5.0, 6.5);
   point p2=translation(p,v);
   Print("translation par vecteur:", Tostring(p2));

   point p3=homothetie(p, 2, 3);
   Print("le scale est:",Tostring(p3));

   point p4= homothetie(p,v);
   Print("le scale par vecteurest:",Tostring(p4));

   point p5=rotation(p, 45.0);
   Print("la rotation est:",Tostring(p5));

   vecteur v=make(5.0, 6.5);
   Print("le vecteur est:",Tostring(v));

   Print("\ncalcul vectoriel:\n");

   point x1=Make(3.0f, 2.0f);
   point x2=Make(5.0f, 4.0f);
   vecteur y1=make(x1, x2);
   Print("le premier vecteur:", Tostring(y1));

   vecteur y2=make(7.0, 5.0);
   Print("le second vecteur:", Tostring(y2));
   vecteur v2= add(y1,y2);
   Print("la somme est :", Tostring(v2));

   vecteur v3=sub(y1,y2);
   Print("la soustraction est:",Tostring(v3));

   vecteur v4=homothetie(v, 3.0);
   Print("le scale est:",v4);

   float f= dot(y1,y2);
   Print("le produit scalaire est:",f);

   float l=length(y1);
   Print("la norme est:",l);

   vecteur v5=normaliser(y2);
   Print("la forme normalisé est:",v5);

   vecteur v6= lerp(y1, y2, 0.5);
Print("le lerp est :",v6);

   float g =determinant(y1, y2);
   Print("le determinant est:",g);
   
   return 0;
}