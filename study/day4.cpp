#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int num_of_pod,peas_per_pod,total_peas;

    cout <<"Press return after entering a num.\n";
    cout <<"Enter the number of pods:\n";
    cin >>peas_per_pod;
    cout <<"Enter the number of peas in mod.\n";
    cin >>num_of_pod;
    total_peas = peas_per_pod*num_of_pod;
    cout<<"you have:";
    cout<<total_peas;
    return 0;
 
}