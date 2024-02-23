#include <iostream>

using namespace std;
int main(){
    int num=4,resp;

    cout<<"la tabla del " <<num<<" es: \n";
    for(int i=0; i<=12; i++){
        resp = num * i;
        cout<<num<<" * "<<i<<" = "<<resp<<"\n";
    }
    getchar();
}
