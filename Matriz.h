//
// Created by ASUS on 16/09/2019.
//

#ifndef PROYECTO_MATRIZ_H
#define PROYECTO_MATRIZ_H


class Matriz {

  private:
    int** matriz;
    int filas;
    int columnas;

  public:
    Matriz();
    Matriz(int f,int c);

    int getcolumnas(){return columnas;}
    int getfilas(){return filas;}

    void LlenadoMatriz();

    Matriz operator+(Matriz m);
    Matriz operator*(Matriz m);

    Matriz operator*(int n);

    Matriz Transpuesta();

    void ImprimirMatriz();

    ~Matriz()=default;
};


#endif //PROYECTO_MATRIZ_H
