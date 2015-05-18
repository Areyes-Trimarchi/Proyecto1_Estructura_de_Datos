#include <iostream>
#include <cstdlib>
#include <ctime>
#include "tdalist.h"
#include "linkedlist.h"
#include "integer.h"
#include "fscursorlist.h"
#include "fsarraylist.h"
#include <fstream>

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
                ofstream datos;
                datos.open("datos.ods");
                datos<<"Iteracion: ";
                for (int i = 0; i < 1000; ++i)
                {
                    datos<<","<<i<<",";
                }
                datos<<endl;
                datos<<"Array_time: ";
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
                    datos<<","<<end-start<<",";
                    array->reset();
                } 
                datos<<endl;
                datos<<"Linked_time: ";   
                for (int i = 0; i < 1000; ++i)
                {
                    start=clock();
                    for (int j = 0; j < i; ++j)
                    {
                        elemento=rand()%1000;
                        pos=rand()%(linked->getSize()+1);
                        linked->insert(new Integer(elemento),pos);
                    }
                    end=clock();
                    datos<<","<<end-start<<",";
                    linked->reset();
                }
                datos<<endl;
                datos<<"Cursor_time: ";
                for (int i = 0; i < 1000; ++i)
                {  
                    start=clock();
                    for (int j = 0; j < i; ++j)
                    {
                        elemento=rand()%1000;
                        pos=rand()%(cursor->getSize()+1);
                        cursor->insert(new Integer(elemento),pos);
                    }
                    end=clock();
                    datos<<","<<end-start<<",";
                    cursor->reset();
                }
                datos.close();
                break;
            }    
            case 2:
            {
               cout << "IndexOf: "<<endl;
               ofstream datos;
               datos.open("datos.ods");
               datos<<"Iteracion: ";
               for (int i = 0; i < 1000; ++i)
               {
                    datos<<","<<i<<",";
               }
               datos<<endl;
                datos<<"Array_time: ";
                for (int i = 0; i < 1000; ++i)
                {   
                    elemento=rand()%1000;
                    pos=rand()%(array->getSize()+1);
                    array->insert(new Integer(elemento),pos);   
                    start=clock();

                    array->indexOf(new Integer(rand()%1000));

                    end=clock();
                    datos<<","<<end-start<<",";
                    array->reset();
                }
                datos<<endl;
                datos<<"linked_time: ";
                for (int i = 0; i < 1000; ++i)
                {
                    elemento=rand()%1000;
                    pos=rand()%(linked->getSize()+1);
                    linked->insert(new Integer(elemento),pos);
                    start=clock();

                    linked->indexOf(new Integer(rand()%1000));

                    end=clock();
                    datos<<","<<end-start<<",";
                    linked->reset();
                }
                datos<<endl;
                datos<<"Cursor_time: ";
                for (int i = 0; i < 1000; ++i)
                {
                    elemento=rand()%1000;
                    pos=rand()%(array->getSize()+1);
                    cursor->insert(new Integer(elemento),pos);
                    start=clock();

                    cursor->indexOf(new Integer(rand()%1000));

                    end=clock();
                    datos<<","<<end-start<<",";
                    cursor->reset();
                }  
                datos.close();  
               break;
            }   
            case 3:
            {
                cout << "Remove: "<<endl;
                ofstream datos;
                datos.open("datos.ods");
                datos<<"Iteracion: ";
                for (int i = 0; i < 1000; ++i)
                {
                    datos<<","<<i<<",";
                }
                datos<<endl;
                datos<<"Array_time: ";
                for (int i = 0; i < 1000; ++i)
                {
                    elemento=rand()%1000;
                    pos=rand()%(array->getSize()+1);
                    array->insert(new Integer(elemento),pos);
                    start=clock();

                    array->remove(0);

                    end=clock();
                    datos<<","<<end-start<<",";
                    array->reset();
                }
                datos<<endl;
                datos<<"linked_time: ";
                for (int i = 0; i < 1000; ++i)
                {
                    elemento=rand()%1000;
                    pos=rand()%(linked->getSize()+1);
                    linked->insert(new Integer(elemento),pos);
                    start=clock();
                    
                    linked->remove(0);
                    
                    end=clock();
                    datos<<","<<end-start<<",";
                    linked->reset();
                }
                datos<<endl;
                datos<<"Cursor_time: ";
                for (int i = 0; i < 1000; ++i)
                {
                    elemento=rand()%1000;
                    pos=rand()%(array->getSize()+1);
                    cursor->insert(new Integer(elemento),pos);
                    start=clock();
                    
                    cursor->remove(0);
                    
                    end=clock();
                    datos<<","<<end-start<<",";
                    cursor->reset();
               }
               datos.close();
               break;
            }   
            case 4:
            {
                cout << "Get: "<<endl;
                ofstream datos;
                datos.open("datos.ods");
                datos<<"Iteracion: ";
                for (int i = 0; i < 1000; ++i)
                {
                    datos<<","<<i<<",";
                }
                datos<<endl;
                datos<<"Array_time: ";
                for (int i = 0; i < 1000; ++i)
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
                for (int i = 0; i < 1000; ++i)
                {
                    start=clock();

                    array->get(rand()%899);

                    end=clock();
                    datos<<","<<end-start<<",";
                }
                datos<<endl;
                datos<<"linked_time: ";
                for (int i = 0; i < 1000; ++i)
                {
                    start=clock();

                    linked->get(rand()%899);
                    
                    end=clock();
                    datos<<","<<end-start<<",";
                }
                datos<<endl;
                datos<<"Cursor_time: "; 
                for (int i = 0; i < 1000; ++i)
                {   
                    start=clock();
                    
                    cursor->get(0);
                    
                    end=clock();
                    datos<<","<<end-start<<",";
                }
                datos.close();
                break;
            }   
            case 5:
            {
                cout << "First: "<<endl;
                ofstream datos;
                datos.open("datos.ods");
                datos<<"Iteracion: ";
                for (int i = 0; i < 1000; ++i)
                {
                    datos<<","<<i<<",";
                }
                datos<<endl;
                datos<<"Array_time: ";
                for (int i = 0; i < 1000; ++i)
                {
                    elemento=rand()%1000;
                    pos=rand()%(array->getSize()+1);
                    array->insert(new Integer(elemento),pos);
                    start=clock();

                    array->first();

                    end=clock();
                    datos<<","<<end-start<<",";
                    array->reset();
                }
                datos<<endl;
                datos<<"linked_time: ";
                for (int i = 0; i < 1000; ++i)
                {
                    elemento=rand()%1000;
                    pos=rand()%(linked->getSize()+1);
                    linked->insert(new Integer(elemento),pos);
                    start=clock();
                    
                    linked->first();
                    
                    end=clock();
                    datos<<","<<end-start<<",";
                    linked->reset();
                }
                datos<<endl;
                datos<<"Cursor_time: ";
                for (int i = 0; i < 1000; ++i)
                {
                    elemento=rand()%1000;
                    pos=rand()%(array->getSize()+1);
                    cursor->insert(new Integer(elemento),pos);
                    start=clock();
                    
                    cursor->first();
                    
                    end=clock();
                    datos<<","<<end-start<<",";
                    cursor->reset();
                }
                datos.close();
                break;
            }   
            case 6:
            {
                cout << "Last: "<<endl;
                ofstream datos;
                datos.open("datos.ods");
                datos<<"Iteracion: ";
                for (int i = 0; i < 1000; ++i)
                {
                    datos<<","<<i<<",";
                }
                datos<<endl;
                datos<<"Array_time: ";
                for (int i = 0; i < 1000; ++i)
                {
                    elemento=rand()%1000;
                    pos=rand()%(array->getSize()+1);
                    array->insert(new Integer(elemento),pos);
                    start=clock();

                    array->last();

                    end=clock();
                    datos<<","<<end-start<<",";
                    array->reset();
                }
                datos<<endl;
                datos<<"linked_time: ";
                for (int i = 0; i < 1000; ++i)
                {
                    elemento=rand()%1000;
                    pos=rand()%(linked->getSize()+1);
                    linked->insert(new Integer(elemento),pos);
                    start=clock();
                    
                    linked->last();
                    
                    end=clock();
                    datos<<","<<end-start<<",";
                    linked->reset();
                }
                datos<<endl;
                datos<<"Cursor_time: ";
                for (int i = 0; i < 1000; ++i)
                {
                    elemento=rand()%1000;
                    pos=rand()%(array->getSize()+1);
                    cursor->insert(new Integer(elemento),pos);
                    start=clock();
                    
                    cursor->last();
                    
                    end=clock();
                    datos<<","<<end-start<<",";
                    cursor->reset();
               }
               cout<<"3. "<<endl;
               datos.close();
               break;
            }          
        }  
        flag=menu();   
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
