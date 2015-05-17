#include "fscursorlist.h"
#include <iostream>

FSCursorList::FSCursorList(int capacity){
	rows = new rows[capacity];
	if(!rows)
		throw "no memory";
}

FSCursorList::~FSCursorList(){
	delete[] rows;
}

bool FSCursorList::insert(Object* elemento,int pos){
	if(pos < 0 || pos > size)
		return false;
	if(pos == capacity)
		return false;
	if(p == 0 && head != -1){
		head == neo;
		rows[head]->prev = -1;
		rows[head]->next = -1;
		rows[head]->data = elemento;
	}else{
		temp = head;
		for(int i = 0; i < pos-1; i++)
			temp = rows[head].next;
		rows[neo]->prev = temp;
		rows[neo]->next = rows[temp].next;
		rows[temp]->next = neo;
		if(pos < size)
			rows[rows[neo]->next]->prev = neo;
	}
}

int FSCursorList::indexOf(Object* elemento)const{
	int temp = head;
	for (int i = 0; i < size; i++){
		temp = rows[temp].next;
		if (temp == index)
		{
			return temp;
		}
	}
}

Object* FSCursorList::get(unsigned index)const{
	int temp = head;
	for (int i = 0; i < size; i++){
		temp = rows[temp]->next;
		if (temp == index)
		{
			return rows[temp]->data;
		}
	}
}

bool FSCursorList::erase(unsigned index){
	int temp = head;
	if(index < 0 || index > size)
		return false;
	if(index == 0 || index < size){
		temp = head;
		for(int i = 0; i < index)
			temp = rows[temp]->next;
		rows[rows[temp]->next]->prev = rows[temp]->prev;
		rows[rows[temp]->prev]->next = rows[temp]->next;
	}else{
		temp = head;
		for (int i = 0; i < size; i++)
		{
			temp = rows[temp]->next;
		}
	}
}

int FSCursorList::prev(int prev) const{

}

int FSCursorList::next(int next) const{

}

void FSCursorList::reset(){
	~FSCursorList();
}

Object* FSCursorList::first()const{
	int temp = head;
	for (int i = 0; i < size; i++)
	{
		temp = rows[temp]->next;
		if (temp == 0)
		{
			return rows[temp]->data;
		}
	}
}

Object* FSCursorList::last()const{
	int temp = head;
	for (int i = 0; i < size; i++)
	{
		temp = rows[temp]->next;
		if (temp == size-1)
		{
			return rows[temp]->data;
		}
	}
}

void FSCursorList::print()const{
	temp = head;
	for (int i = 0; i < size; i++)
	{
		temp = rows[temp].next;
		cout << i << ". " << temp[rows]->data << endl;
	}
}

bool FSCursorList::isFull()const{
	if (size == capacity)
	{
		return true;
	}else{
		return false;
	}
}

int FSCursorList::getCapacity()const{
	return capacity;
}