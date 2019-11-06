#include<iostream>

using namespace std;


void relleno(int givenNum,float **m);

void imprimecabezas(int givenNum,float **m);

void imprime(int givenNum,float **m);




int main(){

cout<<"Escriba un numero del 3 al 11."<<endl;
    

int givenNum=0;
    

cin>>givenNum;
    

if(givenNum>=3 && givenNum<=11)
{
    float ** matriz = new float *[givenNum];

    for (int i = 0; i < givenNum; i++)
    {
        matriz[i] = new float[givenNum+2];
    }

    relleno(givenNum,matriz);

    imprimecabezas(givenNum,matriz);
}

    
else
{
    cout<<"ERROR: El numero no esta en el rango indicado anteriormente."<<endl;
}



return 0;

}



void relleno(int givenNum,float **m)
{
    for(int i=0;i<givenNum+2;i++)
    {
        for(int j=0;j<givenNum;j++)
        {
            m[i][j] = i+j;
        }
    }


}

void imprimecabezas(int givenNum, float **m)
{

    float sum=0;

    for (int i =0; i <givenNum;i++) 
    {
        cout<<m[i][0]<<" ";
        sum+=m[i][0];
    }
    
    cout<<"La suma es"<<sum<<endl;
}



void imprime(int givenNum,float **m)
{

    for ( int j=0;j < givenNum+2 ;j++)
    {

        for (int i=0; i <givenNum;i++) 
    {
        cout<<" "<<m[i][j]<<" ";
    }

    cout<<endl;

    }

}
