#include <iostream>
#include <cstdlib>
#include <ctime>
#include "tdalist.h"
#include "linkedlist.h"
#include "integer.h"
#include "fscursorlist.h"
#include "fsarraylist.h"

using namespace std;

int menu();

int main(int argc, char *argv[])
{
    clock_t start, end;
    srand(time(0)); 
    TDAList* array = new FSArrayList(1000);
    TDAList* linked = new LinkedList();
    TDAList* cursor = new FSCursorList(1000);
    bool flag = true;
    while (flag)
    {
        switch(menu())
        {
            case 1:
                cout<<"Insertar: "<<endl;
                for (int i = 0; i < 1000; ++i)
                {
                    start=clock_t();
                    for (int j = 0; j < i; ++j)
                    {
                        array->insert(new Integer(rand()%1000),rand()%array->getSize());
                    }
                    end=clock_t();
                    cout<<"Array_time: "<<end-start<<" "<<endl;
                    array->reset();

                    start=clock_t();
                    for (int j = 0; j < i; ++j)
                    {
                        linked->insert(new Integer(rand()%1000),rand()%linked->getSize());
                    }
                    end=clock_t();
                    cout<<"Linked_time: "<<end-start<<" "<<endl;
                    linked->reset();

                    start=clock_t();
                    for (int j = 0; j < i; ++j)
                    {
                        cursor->insert(new Integer(rand()%1000),rand()%cursor->getSize());
                    }
                    end=clock_t();
                    cout<<"Cursror_time: "<<end-start<<" "<<endl;
                    cursor->reset();
                }
                break;
            case 2:
               cout << "IndexOf: "<<endl;
               for (int i = 0; i < 1000; ++i)
               {
                   for (int j = 0; j < i; ++j)
                    {
                        array->insert(new Integer(rand()%1000),rand()%array->getSize());
                        linked->insert(new Integer(rand()%1000),rand()%linked->getSize());
                        cursor->insert(new Integer(rand()%1000),rand()%cursor->getSize());    
                    }

                    start=clock_t();

                    array->indexOf(new Integer(rand()%1000));

                    end=clock_t();
                    cout<<"Array_time: "<<end-start<<" "<<endl;
                    array->reset();

                    start=clock_t();

                    linked->indexOf(new Integer(rand()%1000));

                    end=clock_t();
                    cout<<"linked_time: "<<end-start<<" "<<endl;
                    linked->reset();

                    start=clock_t();

                    cursor->indexOf(new Integer(rand()%1000));

                    end=clock_t();
                    cout<<"Cursor_time: "<<end-start<<" "<<endl;
                    cursor->reset();
               }
               break;
            case 3:
               cout << "Remove: "<<endl;
               for (int i = 0; i < 1000; ++i)
               {
                   for (int j = 0; j < i; ++j)
                    {
                        array->insert(new Integer(rand()%1000),rand()%array->getSize());
                        linked->insert(new Integer(rand()%1000),rand()%linked->getSize());
                        cursor->insert(new Integer(rand()%1000),rand()%cursor->getSize()); 
                    }

                    start=clock_t();

                    array->remove(rand()%999);

                    end=clock_t();
                    cout<<"Array_time: "<<end-start<<" "<<endl;
                    array->reset();

                    start=clock_t();
                    
                    linked->remove(rand()%999);
                    
                    end=clock_t();
                    cout<<"linked_time: "<<end-start<<" "<<endl;
                    linked->reset();

                    start=clock_t();
                    
                    cursor->remove(rand()%999);
                    
                    end=clock_t();
                    cout<<"Cursor_time: "<<end-start<<" "<<endl;
                    cursor->reset();
               }
               break;
            case 4:
               cout << "Get: "<<endl;
               for (int i = 0; i < 1000; ++i)
               {
                   for (int j = 0; j < i; ++j)
                    {
                        array->insert(new Integer(rand()%1000),rand()%array->getSize());
                        linked->insert(new Integer(rand()%1000),rand()%linked->getSize());
                        cursor->insert(new Integer(rand()%1000),rand()%cursor->getSize()); 
                    }

                    start=clock_t();

                    array->get(rand()%999);

                    end=clock_t();
                    cout<<"Array_time: "<<end-start<<" "<<endl;
                    array->reset();

                    start=clock_t();

                    linked->get(rand()%999);
                    
                    end=clock_t();
                    cout<<"linked_time: "<<end-start<<" "<<endl;
                    linked->reset();

                    start=clock_t();
                    
                    cursor->get(rand()%999);
                    
                    end=clock_t();
                    cout<<"Cursor_time: "<<end-start<<" "<<endl;
                    cursor->reset();
               }
               break;
            case 5:
               cout << "First: "<<endl;
               for (int i = 0; i < 1000; ++i)
               {
                   for (int j = 0; j < i; ++j)
                    {
                        array->insert(new Integer(rand()%1000),rand()%array->getSize());
                        linked->insert(new Integer(rand()%1000),rand()%linked->getSize());
                        cursor->insert(new Integer(rand()%1000),rand()%cursor->getSize()); 
                    }

                    start=clock_t();

                    array->first();

                    end=clock_t();
                    cout<<"Array_time: "<<end-start<<" "<<endl;
                    array->reset();

                    start=clock_t();
                    
                    linked->first();
                    
                    end=clock_t();
                    cout<<"linked_time: "<<end-start<<" "<<endl;
                    linked->reset();

                    start=clock_t();
                    
                    cursor->first();
                    
                    end=clock_t();
                    cout<<"Cursor_time: "<<end-start<<" "<<endl;
                    cursor->reset();
               }
               break;
            case 6:
               cout << "Last: "<<endl;
               for (int i = 0; i < 1000; ++i)
               {
                   for (int j = 0; j < i; ++j)
                    {
                        array->insert(new Integer(rand()%1000),rand()%array->getSize());
                        linked->insert(new Integer(rand()%1000),rand()%linked->getSize());
                        cursor->insert(new Integer(rand()%1000),rand()%cursor->getSize());  
                    }

                    start=clock_t();

                    array->last();

                    end=clock_t();
                    cout<<"Array_time: "<<end-start<<" "<<endl;
                    array->reset();

                    start=clock_t();
                    
                    linked->last();
                    
                    end=clock_t();
                    cout<<"linked_time: "<<end-start<<" "<<endl;
                    linked->reset();

                    start=clock_t();
                    
                    cursor->last();
                    
                    end=clock_t();
                    cout<<"Cursor_time: "<<end-start<<" "<<endl;
                    cursor->reset();
               }
               break;
            case 7:
               cout << "Salir"<<endl;
               
               flag=false;
               break;      
            }   
    }
    delete[] array;
    delete[] linked;
    delete[] cursor;
    return 0;
}

int menu()
{
    cout << "1. Inster\n2. Indexof\n3. Remove\n4. Get\n5. First\n6. Last\n7.Salir\nElija su Opcion: ";
    int opcion;
    cin >> opcion;
    return opcion;
}
