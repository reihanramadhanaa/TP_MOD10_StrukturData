#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include<iostream>
#define nil NULL
#define info(p)(p)->info
#define next(p)(p)->next
#define head(Q)((Q).head)
#define tail(Q)((Q).tail)

using namespace std;

typedef bool boolean;
typedef  int infotype;
typedef struct elmQ *address;

struct elmQ {
  infotype info ;
  address next ;
};

struct queue {
  address head,tail ;
};


address alokasi_1302220048(infotype info);
address findElmt_1302220048(queue Q, infotype num);
bool queueEmpty_1302220048(queue Q);
void createQueue_1302220048(queue &Q);
void dealokasi_1302220048(address p);
void enQueue_1302220048(queue &Q, address p);
void deQueue_1302220048(queue &Q,address p);
void printInfo_1302220048(queue Q);
int nbOfElm_1302220048(queue Q);
void ganjilGenap(queue &Q,queue &Qganjil,queue &Qgenap);



#endif // QUEUE_H_INCLUDED
