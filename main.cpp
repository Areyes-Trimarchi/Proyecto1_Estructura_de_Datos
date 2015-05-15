#include <iostream>
#include <cstdlib>
#include <ctime>
#include "tdalist.h"
#include "linkedlist.h"
#include "integer.h"
#include "fscursorlist.h"
#include "fsarraylist.h"

using namespace std

int menu();

int main(int argc, char *argv[])
{
    clock_t start, end;
    srand(time(0)); 
    TDAList* array = new FSArrayList(5000);
    TDAList* linked = new LinkedList();
    TDAList* cursor = new FSCursorList(5000);
    bool flag = true;
    while (flag)
    {
        switch(menu())
        {
            case 1:
                cout<<"Insertar: "<<endl;
                for (int i = 0; i < 4000; ++i)
                {
                    start=clock_t();
                    for (int j = 0; j < i; ++j)
                    {
                        array->insert(new Integer(rand()%4000),rand()%array->size;
                    }
                    end=clock_t();
                    cout<<"Array_time: "<<end-start<<" "<<endl;
                    array->rest();

                    start=clock_t();
                    for (int j = 0; j < i; ++j)
                    {
                        linked->insert(new Integer(rand()%4000),rand()%linked->size;
                    }
                    end=clock_t();
                    cout<<"Linked_time: "<<end-start<<" "<<endl;
                    linked->rest();

                    start=clock_t();
                    for (int j = 0; j < i; ++j)
                    {
                        cursor->insert(new Integer(rand()%4000),rand()%cursor->size;
                    }
                    end=clock_t();
                    cout<<"Cursror_time: "<<end-start<<" "<<endl;
                    cursor->rest();
                }
                break;
            case 2:
               cout << "IndexOf: "<<endl;
               break;
            case 3:
               cout << "Remove: "<<endl;
               break;
            case 4:
               cout << "Get: "<<endl;
               break;
            case 5:
               cout << "First: "<<endl;
               break;
            case 6:
               cout << "Last: "<<endl;
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
