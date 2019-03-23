/*
 -----------------------------------------------------------------------------------
 Laboratoire : 02
 Fichier     : tri_g.h
 Auteur(s)   : RICCI Thomas <thomas.ricci@heig-vd.ch>
 Date        : March 15, 2019

 But         : Fonction générique pour trier un vector quelquonc

 Remarque(s) : 

 Compilateur : gcc (Ubuntu 5.4.0-6ubuntu1~16.04.10) 5.4.0 20160609
 -----------------------------------------------------------------------------------
 */
#include <vector>
#include <functional>
#ifndef TRI_G_H
#define TRI_G_H

/*
 * Tri un vecteur en bubble sort
 * Modifie le vecteur d'entrée en le triant par ordre croissant
 * Les éléments du vecteurs doivent implementer l'oprateur ">"

 * example repris de la documentation de less: 
 * https://en.cppreference.com/w/cpp/utility/functional/less
*/
template <typename T, typename U>
void tri(std::vector<T>& v){
   //bubble sort
   int i, j;
   U predicat = U();

   for (i = 0; i < (int)v.size() - 1; i++)    
      for (j = 0; j < (int)v.size() - i - 1; j++) 
         if (predicat(v[j],v[j+1])){
            T tmp = v[j];
            v[j] = v[j+1];
            v[j+1] = tmp;
         }
            
}

#endif