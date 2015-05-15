#include "fscursorlist.h"
#include <iostream>

FSCursorList::FSCursorList(int capacity){
	rows = new rows[capacity];
	if (!rows)
	{
		throw "no memory";
	}
}

FSCursorList::~FSCursorList(){
	delete[] rows;
}

bool FSCursorList::insert(Object* elemento, int pos){
	if(pos < 0 || pos > size)
		return false;
	if(pos == capacity)
		return false;
	int neo = next.avail();
	if(p == 0 && head != -1){
		head == neo;
		rows[head].prev = -1;
		rows[head].next = -1;
		rows[head].data = elemento;
	}
}

int FSCursorList::indexOf(Object*)const{

}

Object* FSCursorList::get(unsigned)const{

}

bool FSCursorList::erase(unsigned){

}

int FSCursorList::prev(int) const{

}

int FSCursorList::next(int) const{

}

void FSCursorList::reset(){

}

Object* FSCursorList::first()const{

}

Object* FSCursorList::last()const{

}

void FSCursorList::print()const{

}

bool FSCursorList::isFull()const{

}

int FSCursorList::getCapacity()const{
	
}