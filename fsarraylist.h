#ifndef FSARRAYLIST_H
#define FSARRAYLIST_H
#include "tdalist.h"

class FSArrayList : public TDAList{
	protected:
		Object** data;
		unsigned int capacity;
	public:
		FSArrayList();
		virtual ~FSArrayList();
		virtual bool insert(Object*, int);
		virtual int indexOf(Object*)const;
		virtual Object* get(unsigned index)const;
		virtual Object* remove(unsigned pos);
		virtual int prev(int pos)const ;
		virtual int next(int pos) const;
		virtual void reset();
		virtual Object* first()const;	
		virtual Object* last()const;
		virtual void print()const;
		virtual bool isFull()const;
		virtual bool isEmpty()const;
		virtual int getCapacity()const;
		virtual int getSize()const;
};

#endif