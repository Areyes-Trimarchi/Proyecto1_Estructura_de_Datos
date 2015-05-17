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
    int flag=menu();
    int elemento;
    int pos;
    while (flag!=7)
    {
        switch(flag)
        {
            case 1:
            {
                cout<<"Insertar: "<<endl;
                for (int i = 0; i < 1000; ++i)
                {
                    start=clock();
                    for (int j = 0; j < i; ++j)
                    {
                        elemento=rand()%1000;
                        pos=rand()%(array->getSize()+1);
                        array->insert(new Integer(elemento),pos);
                    }
                    end=clock();
                    cout<<"Array_time: "<<end-start<<" "<<endl;
                    array->reset();

                    start=clock();
                    for (int j = 0; j < i; ++j)
                    {
                        elemento=rand()%1000;
                        pos=rand()%(linked->getSize()+1);
                        linked->insert(new Integer(elemento),pos);
                    }
                    end=clock();
                    cout<<"Linked_time: "<<end-start<<" "<<endl;
                    linked->reset();

                    start=clock();
                    for (int j = 0; j < i; ++j)
                    {
                        elemento=rand()%1000;
                        pos=rand()%(cursor->getSize()+1);
                        cursor->insert(new Integer(elemento),pos);
                    }
                    end=clock();
                    cout<<"Cursror_time: "<<end-start<<" "<<endl;
                    cursor->reset();
                }
                break;
            }    
            case 2:
            {
               cout << "IndexOf: "<<endl;
               for (int i = 0; i < 1000; ++i)
               {
                   for (int j = 0; j < i; ++j)
                    {
                        elemento=rand()%1000;
                        pos=rand()%(array->getSize()+1);
                        array->insert(new Integer(elemento),pos);
                        elemento=rand()%1000;
                        pos=rand()%(linked->getSize()+1);
                        linked->insert(new Integer(elemento),pos);
                        elemento=rand()%1000;
                        pos=rand()%(array->getSize()+1);
                        cursor->insert(new Integer(elemento),pos);    
                    }

                    start=clock();

                    array->indexOf(new Integer(rand()%1000));

                    end=clock();
                    cout<<"Array_time: "<<end-start<<" "<<endl;
                    array->reset();

                    start=clock();

                    linked->indexOf(new Integer(rand()%1000));

                    end=clock();
                    cout<<"linked_time: "<<end-start<<" "<<endl;
                    linked->reset();

                    start=clock();

                    cursor->indexOf(new Integer(rand()%1000));

                    end=clock();
                    cout<<"Cursor_time: "<<end-start<<" "<<endl;
                    cursor->reset();
               }
               break;
            }   
            case 3:
            {
               cout << "Remove: "<<endl;
               for (int i = 0; i < 1000; ++i)
               {
                   for (int j = 0; j < i; ++j)
                    {
                        elemento=rand()%1000;
                        pos=rand()%(array->getSize()+1);
                        array->insert(new Integer(elemento),pos);
                        elemento=rand()%1000;
                        pos=rand()%(linked->getSize()+1);
                        linked->insert(new Integer(elemento),pos);
                        elemento=rand()%1000;
                        pos=rand()%(array->getSize()+1);
                        cursor->insert(new Integer(elemento),pos);  
                    }

                    start=clock();

                    array->remove(rand()%999);

                    end=clock();
                    cout<<"Array_time: "<<end-start<<" "<<endl;
                    array->reset();

                    start=clock();
                    
                    linked->remove(rand()%999);
                    
                    end=clock();
                    cout<<"linked_time: "<<end-start<<" "<<endl;
                    linked->reset();

                    start=clock();
                    
                    cursor->remove(rand()%999);
                    
                    end=clock();
                    cout<<"Cursor_time: "<<end-start<<" "<<endl;
                    cursor->reset();
               }
               break;
            }   
            case 4:
            {
               cout << "Get: "<<endl;
               for (int i = 0; i < 1000; ++i)
               {
                   for (int j = 0; j < i; ++j)
                    {
                        elemento=rand()%1000;
                        pos=rand()%(array->getSize()+1);
                        array->insert(new Integer(elemento),pos);
                        elemento=rand()%1000;
                        pos=rand()%(linked->getSize()+1);
                        linked->insert(new Integer(elemento),pos);
                        elemento=rand()%1000;
                        pos=rand()%(array->getSize()+1);
                        cursor->insert(new Integer(elemento),pos);   
                    }

                    start=clock();

                    array->get(rand()%999);

                    end=clock();
                    cout<<"Array_time: "<<end-start<<" "<<endl;
                    array->reset();

                    start=clock();

                    linked->get(rand()%999);
                    
                    end=clock();
                    cout<<"linked_time: "<<end-start<<" "<<endl;
                    linked->reset();

                    start=clock();
                    
                    cursor->get(rand()%999);
                    
                    end=clock();
                    cout<<"Cursor_time: "<<end-start<<" "<<endl;
                    cursor->reset();
               }
               break;
            }   
            case 5:
            {
               cout << "First: "<<endl;
               for (int i = 0; i < 1000; ++i)
               {
                   for (int j = 0; j < i; ++j)
                    {
                        elemento=rand()%1000;
                        pos=rand()%(array->getSize()+1);
                        array->insert(new Integer(elemento),pos);
                        elemento=rand()%1000;
                        pos=rand()%(linked->getSize()+1);
                        linked->insert(new Integer(elemento),pos);
                        elemento=rand()%1000;
                        pos=rand()%(array->getSize()+1);
                        cursor->insert(new Integer(elemento),pos);   
                    }

                    start=clock();

                    array->first();

                    end=clock();
                    cout<<"Array_time: "<<end-start<<" "<<endl;
                    array->reset();

                    start=clock();
                    
                    linked->first();
                    
                    end=clock();
                    cout<<"linked_time: "<<end-start<<" "<<endl;
                    linked->reset();

                    start=clock();
                    
                    cursor->first();
                    
                    end=clock();
                    cout<<"Cursor_time: "<<end-start<<" "<<endl;
                    cursor->reset();
               }
               break;
            }   
            case 6:
            {
               cout << "Last: "<<endl;
               for (int i = 0; i < 1000; ++i)
               {
                   for (int j = 0; j < i; ++j)
                    {
                        elemento=rand()%1000;
                        pos=rand()%(array->getSize()+1);
                        array->insert(new Integer(elemento),pos);
                        elemento=rand()%1000;
                        pos=rand()%(linked->getSize()+1);
                        linked->insert(new Integer(elemento),pos);
                        elemento=rand()%1000;
                        pos=rand()%(array->getSize()+1);
                        cursor->insert(new Integer(elemento),pos);    
                    }

                    start=clock();

                    array->last();

                    end=clock();
                    cout<<"Array_time: "<<end-start<<" "<<endl;
                    array->reset();

                    start=clock();
                    
                    linked->last();
                    
                    end=clock();
                    cout<<"linked_time: "<<end-start<<" "<<endl;
                    linked->reset();

                    start=clock();
                    
                    cursor->last();
                    
                    end=clock();
                    cout<<"Cursor_time: "<<end-start<<" "<<endl;
                    cursor->reset();
               }
               break;
            }   
            case 7:
            {
               cout << "Salir"<<endl;
               flag=-1;
               break; 
            }        
        }      
    }
    delete array;
    delete linked;
    delete cursor;
    return 0;
}

int menu()
{
    int opcion;
    cout << "1. Insert\n2. IndexOf\n3. Remove\n4. Get\n5. First\n6. Last\n7.Salir\nElija su Opcion: ";
    cin >> opcion;
    return opcion;
}
