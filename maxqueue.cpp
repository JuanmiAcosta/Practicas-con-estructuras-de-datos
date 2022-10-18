/**
 * @file maxqueue.cpp
 * @brief  Archivo de implementación del TDA MaxStack
 * @author
 */

#include "maxqueue.h"

//Para ello haremos uso de dos pilas. Sobre una realizaremos las consultas y borrados, sobre otra haremos las inserciones.

//Funciones privadas

int MaxQueue::front(){
    if(second.empty()){
        while(!first.empty()){
            int aux=first.top();
            second.push(aux);
            first.pop();
        }
    }
    return second.top();
}

bool MaxQueue::empty() const{
    return (first.empty() && second.empty());
}

void MaxQueue::push(int num){
    first.push(num);
}

void MaxQueue::pop() {
    if(second.empty()){
        while(!first.empty()){
            int aux=first.top();
            second.push(aux);
            first.pop();
        }
    }
    second.pop();
}

int MaxQueue::size() const{
    return (first.size()+second.size());
}

