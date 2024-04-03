#include <iostream>
#include "queue.h"
using namespace std;

int main()
{
    queue Q,Q2,Q3;
    address p ;
    infotype info ;

    createQueue_1302220048(Q);
    createQueue_1302220048(Q3);
    createQueue_1302220048(Q2);

    enQueue_1302220048(Q, alokasi_1302220048(2));
    enQueue_1302220048(Q, alokasi_1302220048(3));
    enQueue_1302220048(Q, alokasi_1302220048(4));
    enQueue_1302220048(Q, alokasi_1302220048(5));
    enQueue_1302220048(Q, alokasi_1302220048(6));
    enQueue_1302220048(Q, alokasi_1302220048(7));
    enQueue_1302220048(Q, alokasi_1302220048(8));
    enQueue_1302220048(Q, alokasi_1302220048(9));
    enQueue_1302220048(Q, alokasi_1302220048(10));
    enQueue_1302220048(Q, alokasi_1302220048(11));

    cout<< "KONDISI AWAL"<<endl;
    cout<<endl;
    printInfo_1302220048(Q);

    cout<<"KONDISI AKHIR"<<endl;
    cout<<endl;

    ganjilGenap(Q,Q2,Q3);

    return 0;

}
