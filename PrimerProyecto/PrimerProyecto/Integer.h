#ifndef INTEGER_H
#define INTEGER_H
#include <iostream>
#include<sstream>
struct Nodo {
	int n;
	int* vector;
	struct Nodo* next;
	Nodo(int n, Nodo* sig = nullptr) : n{ n }, vector{ new int[n] }, next{ sig } {}
};
class Integer{
private:
	Nodo* inicio;
public:
	Integer(int);
	Nodo* getPrimero();
	void insertar(std::string);
	std::string toString();
	//SOBRECARGAS
	//Aritméticos
	Integer& operator+(Integer&);
	Integer& operator-(Integer&);
	Integer& operator*(Integer&);
	Integer& operator/(Integer&);
	//Asignación
	Integer& operator=(Integer&);
	Integer& operator+=(Integer&);
	Integer& operator-=(Integer&);
	Integer& operator*=(Integer&);
	Integer& operator/=(Integer&);
	//Comparación
	Integer& operator==(Integer&);
	Integer& operator!=(Integer&);
	Integer& operator<(Integer&);
	Integer& operator<=(Integer&);
	Integer& operator>(Integer&);
	Integer& operator>=(Integer&);
	
};
#endif

