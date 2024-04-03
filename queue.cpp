#include <iostream>
#include "queue.h"
using namespace std;


address alokasi_1302220048(infotype info){
 address p = new elmQ ;
 info(p) = info ;
 next(p) = nil ;


 return p;

}

address findElmt_1302220048(queue Q, infotype num){
   address p;
   boolean found = false ;

   p = head(Q);


   while(p!= nil && found == false){
     if (info(p) == num ){
        found = true ;
     }else {
        p = next(p);
     }

   }
   return p;

}

bool queueEmpty_1302220048(queue Q){
 if (head(Q)== nil){
    return true ;

 }else {
    return false ;
 }

}

void createQueue_1302220048(queue &Q){
  head(Q) = nil ;

}

void dealokasi_1302220048(address p){
delete p ;

}

void enQueue_1302220048(queue &Q, address p){
 if (queueEmpty_1302220048(Q)){
    head(Q) = p;
    tail(Q) = p;
 }else{
   next(tail(Q)) = p;
   tail(Q) = p ;
 }

}

void deQueue_1302220048(queue &Q,address p){
  if (queueEmpty_1302220048(Q)){
     cout<< "Queue Kosong";
  }else if (next(head(Q))== nil ) {
     p = head(Q);
     head(Q)= nil;

  }else{
    p = head(Q);
     head(Q) = next(p);
     next(p) = nil;

  }

}


void printInfo_1302220048(queue Q){
  address p ;
  int i = 1 ;


  p = head(Q);

  if (p == nil ){
    cout<<"Queue Kosong";
  }else {
    while( p!= nil){
        cout<< "Antrian ke-"<< i<< ":" << info(p)<<endl;
        p = next(p) ;
        i++ ;
    }
  }
    cout << "banyaknya data : " << nbOfElm_1302220048(Q) << endl;
    cout << endl;

}


int nbOfElm_1302220048(queue Q){
 int numOfElm = 0 ;
 address p ;

 p = head(Q);
 while(p != nil){
    numOfElm ++ ;
    p= next(p);
 }
 return numOfElm ;

}
void ganjilGenap(queue &Q,queue &Qganjil,queue &Qgenap){
 address p = head(Q) ;
 address info ;


  while(p != nil){
     if (info(p) % 2 != 0){
        enQueue_1302220048(Qganjil,alokasi_1302220048(info(p)));

     }else {
       enQueue_1302220048(Qgenap,alokasi_1302220048(info(p)));

     }
      p = next(p);
      deQueue_1302220048(Q,p);

  }
  cout<<"queue ganjil"<<endl;
  printInfo_1302220048(Qganjil);
  cout<<"queue genap"<<endl;
  printInfo_1302220048(Qgenap);


}


