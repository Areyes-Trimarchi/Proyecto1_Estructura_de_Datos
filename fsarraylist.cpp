#include "object.h"
#include "tdalist.h"
#include "fsarraylist.h"
#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;
using std::cerr;

FSArrayList::FSArrayList(){
    data=new Object*[capacity];
    if(!data){
        cerr<<"No hay memoria suficiente"<<endl;
        exit(1);
    }
}
FSArrayList::~FSArrayList(){
    for (int i = 0; i < size; ++i)
    {
        delete data[i];
    }
    delete data;
}

bool FSArrayList::insert(Object* elemento, int pos) {
    if (pos < 0 || pos > size)
        return false;
    if (isFull())
        return false;
    if(pos==size){
        data[pos]=elemento;
    }
    else { 
        for(int i = size; i>pos; i--){
            data[i] = data[i-1];
        }
        data[pos] = elemento;
    }
    size++;
    return true;
}

int FSArrayList::indexOf(Object* element)const {
    int pos = -1;
    for(int i = 0;i<size; i++){
        if(data[i]->equals(element)){
            pos = i;
            break;
        }
    }
    return pos;
}

Object* FSArrayList::get(unsigned pos)const {
    if(pos<0 || pos>=size)
        return NULL;
    return data[pos];    
}

Object* FSArrayList::remove(unsigned pos) {
    if (pos<0 || pos>=size)
        return NULL;
    Object* objeto = data[pos];
    for(int i = pos;i <(size-1); i++){
        data[i+1] = data[i];
    }
    size--;
    return objeto;  
}

int FSArrayList::prev(int pos) const {
    return -1;
}

int FSArrayList::next(int pos) const {
    return -1;
}

void FSArrayList::reset() {
    for (int i = 0; i < size; ++i)
    {
        delete data[i];
    } 
    size=0;   
}

Object* FSArrayList::first()const {
    if(isEmpty()){
        return NULL;
    }
    return data[0];    
}

Object* FSArrayList::last()const {
    if(isEmpty()){
        return NULL;
    }
    return data[size-1];    
}

void FSArrayList::print()const {
   
}
bool FSArrayList::isFull()const {
    if(size==capacity){
        return true;
    }
    return false;
}

bool FSArrayList::isEmpty()const {
    if(size==0){
        return true;
    }
    return false;
}

int FSArrayList::getCapacity()const{
    return capacity;
}

int FSArrayList::getSize()const{
    return size;
}