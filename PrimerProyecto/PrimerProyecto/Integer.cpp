#include "Integer.h"
using std::string;
using std::stringstream;
Integer::Integer(int n) {
	inicio = new Nodo(n);
}

Nodo* Integer::getPrimero() {
	return inicio;
}

void Integer::insertar(string) {

}

string Integer::toString() {
	stringstream s;
	Nodo* tmp = inicio;
	short int* vector;
	while (tmp != nullptr){
		vector = tmp->vector;
		for (int i = 0; i < tmp->n; i++){
			s << vector[i];
		}
		tmp = tmp->next;
	}
	return s.str();
}

