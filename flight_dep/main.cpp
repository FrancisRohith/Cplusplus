#include <iostream>
#include "heap_ds.h"
using namespace std;

int main()
{
    int arr[] = {2300,1330,845,1215,2359,500,1845};
    heap_ds H(arr);
    H.display();
    H.heap_sort();
    cout<<endl;
    H.display();
    return 0;
}
