//
// Created by ASUS on 16/09/2019.
//

#include <iostream>
#include <stdlib.h>
#include "Matriz.h"

Matriz::Matriz():filas(0),columnas(0),matriz(nullptr){}

Matriz::Matriz(int f,int c):filas(f),columnas(c)
{
    matriz = new int*[filas];
    for(int i = 0; i < filas; i++){
        matriz[i] = new int[columnas];
    }
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            matriz[i][j]=0;
        }
    }
}

void Matriz::LlenadoMatriz()
{
   for(int i = 0; i < filas; i++){
       for(int j = 0; j < columnas; j++){
           this->matriz[i][j]=(rand()%9);
       }
   }

}

Matriz Matriz::operator+(Matriz m){
     Matriz temp(filas,columnas);
     for(int i = 0; i < filas; i++){
         for(int j = 0; j < columnas; j++){
             temp.matriz[i][j] = this->matriz[i][j] + m.matriz[i][j];
         }
     }
     return temp;
}

Matriz Matriz::operator*(Matriz m){
    int col=m.getcolumnas();
    int fil=m.getfilas();
    Matriz temp(filas,col);
    for(int i = 0; i < filas; i++) {
        for (int j = 0; j < col; j++) {
            for (int z = 0; z < columnas; z++) {
                 temp.matriz[i][j] += this->matriz[i][z]*m.matriz[z][j];
            }
        }
    }
    return temp;
}

Matriz Matriz::operator*(int n){
    Matriz temp=*this;
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            temp.matriz[i][j] = this->matriz[i][j]*n;
        }
    }
    return temp;
}


Matriz Matriz::Transpuesta(){
    Matriz temp(filas,columnas);
       for(int  i = 0; i < filas; i++){
           for(int j = 0; j < columnas; j++){
                temp.matriz[i][j] = this->matriz[j][i];
           }
       }
       return temp;
}

void Matriz::ImprimirMatriz(){
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            std::cout<<matriz[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    std::cout<<"\n";
}
