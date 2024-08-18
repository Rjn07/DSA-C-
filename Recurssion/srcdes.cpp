 #include <iostream>
using namespace std;

void reachHome( int src , int dest){
    cout <<"source"<<src<<endl<<"destination"<<dest;
    if(src==dest){
        cout<<"pahoch gya bhai me";
        return;
    }
     src++;
     reachHome(src,dest);
    
}
int main(){
    int dest=10;
    int src=1;
    
    cout<<endl;
    
    reachHome( src,dest);
    
}
