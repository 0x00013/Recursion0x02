#include <iostream>


using namespace std;
int Contar(int arre[],int tam,int x,int y); 

int main(){
    int tam=0;
    int arre[10];
    int x=0;
    int r=0;
    int y=0;


    cout<<"Cuantos numeros son?"<<endl;
	cin>>tam;

    for(int i=0;i<tam;i++){
        cout<<"Ingresa los numeros"<<endl;
        cin>>arre[i];
    }

    cout<<"Ingrese numero que desea ver repetido"<<endl;
    cin>>x;
    
    
    r=Contar(arre, tam-1, x, y);
    cout<<"El numero se repite:"<<" "<<r<<endl;

    return 0;
}

int Contar(int arre[], int tam, int x, int y){
    
    if(tam==-1){
        return y;
    }

    if(arre[tam]==x){
        y++;
    }   
    return Contar(arre, tam-1, x, y);
}
