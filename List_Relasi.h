#ifndef LIST_RELASI_H_INCLUDED
#define LIST_RELASI_H_INCLUDED

#include "List_Relasi.h"
#include "List_Child.h"
#include "List_Parent.h"

#include <iostream>
using namespace std;

#define next(P) P->next
#define first(L) L.first
#define child(P) P->child
#define parent(P) P->parent

typedef struct elmlist_relasi *address_relasi;

struct elmlist_relasi{
    address_relasi next;
    address_child child;
    address_parent parent;
};

struct List_relasi{
    address_relasi first;
};


void createList(List_Relasi &L);
void insertFirst(List_Relasi &L, address_relasi P);
void insertLast(List_Relasi &L, address_relasi P);
void insertAfter(address_relasi Prec, address_relasi P);
void deleteFirst(List_Relasi &L, address_relasi &P);
void deleteLast(List_Relasi &L, address_relasi &P);
void deleteAfter(address_relasi Prec, address_relasi &P);


address_relasi alokasi(address_parent P, address_child C);
void dealokasi(address_relasi &P);
address_relasi findElm(List_Relasi L, address_parent P, address_child C);
void printInfo(List_Relasi L);

#endif
