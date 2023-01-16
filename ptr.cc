#include <iostream>

using namespace std;
int main(){


int * ptr;
int i;
cout<<"how many numbers you want to enter?"<<endl;
cin>>i;
ptr =new int[i];
for(int j =0 ; j<i ;j++){
    cout<<"enter the number..."<<endl;
    cin>>ptr[j];
}
cout<<endl<<endl;
for(int z=0 ; z<i ;z++){
    cout<<ptr[z];
    delete[] ptr;
}

    return 0;
}