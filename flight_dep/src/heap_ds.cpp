#include "heap_ds.h"
#include <iostream>
using namespace std;
heap_ds::heap_ds(int arr[])
{
    this->hsize = 6;//cout<<sizeof(arr)<<endl;
    harray = new int[hsize];
    for(int i=0;i<hsize;i++){
        harray[i] = arr[i];
    }
}

heap_ds::~heap_ds(){}

void heap_ds::heap_sort(){
    for (int i=(hsize/2 - 1);i>=0;i--){
        heapify(hsize,i);
    }
    for (int i=hsize-1;i>=0;i--){
        swap(harray[0],harray[i]);
        heapify(i,0);
    }
}

void heap_ds::heapify(int rsize,int i){
    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;
    if(l<rsize && harray[l]<harray[largest]){
        largest = l;
    }
    if(r<rsize && harray[r]<harray[largest]){
        largest = r;
    }
    if (largest!=i){
        swap(harray[i],harray[largest]);
        heapify(rsize,largest);
    }
}

void heap_ds::display(){
    for(int i=0;i<hsize;i++){
        cout<<harray[i]<<" ";

    }
}
