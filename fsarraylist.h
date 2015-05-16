#ifndef FSARRAYLIST_H
#define FSARRAYLIST_H

class FSArrayList : public Object{
	protected:
		Object** data;
		unsigned int capacity;
	public:
		FSArrayList();
		virtual ~FSArrayList();
		virtual bool insert(Object*, int);
		virtual int indexOf(Object*);
		virtual Object* get(unsigned index)const;
		virtual Object* remove(unsigned pos);
		virtual int prev(int pos);
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