#ifndef INTEGER_H
#define INTEGER_H
#include <iostream>
#include<sstream>
struct Nodo {
	int n;
	short int* vector;
	struct Nodo* next;
	Nodo(int n, Nodo* sig = nullptr) : n{ n }, vector{ new short int[n] }, next{ sig } {}
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
	//Aritm�ticos
	Integer& operator+(Integer&);
	Integer& operator-(Integer&);
	Integer& operator*(Integer&);
	Integer& operator/(Integer&);
	//Asignaci�n
	Integer& operator=(Integer&);
	Integer& operator+=(Integer&);
	Integer& operator-=(Integer&);
	Integer& operator*=(Integer&);
	Integer& operator/=(Integer&);
	//Comparaci�n
	Integer& operator==(Integer&);
	Integer& operator!=(Integer&);
	Integer& operator<(Integer&);
	Integer& operator<=(Integer&);
	Integer& operator>(Integer&);
	Integer& operator>=(Integer&);
	
};
#endif

