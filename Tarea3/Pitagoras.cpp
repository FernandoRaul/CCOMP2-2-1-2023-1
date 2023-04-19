//9.Existe exactamente un triplete pitagórico para el cual a + b + c = 1000. Encuentra el producto abc .
#include <iostream>
using namespace std;

bool pitagoras(int a, int b, int c){
    if(((a*a)+(b*b))==(c*c))
        return true;
    else
        return false;
}
bool suma(int a, int b, int c) {
    if((a+b+c)==1000)
        return true;
    else
        return false;
}

int main() {

    bool x = true;
    int a1 = 0, b1 = 0, c1 = 0;

    while(x){
        for(int a=1; a<500 ;a++){
            for(int b=1; b<500 ;b++){
                for(int c=1; c < 500 ;c++){
                    if(pitagoras(a,b,c) && suma(a,b,c)){
                        a1 = a;
                        b1 = b;
                        c1 = c;
                        x=false;
                    }
                }
            }
        }
    }

    long long result = (a1*b1*c1);

    cout << "Los números que cumple con esta característica son: " << a1 << " " << b1 << " " << c1 << endl;
    cout << "El producto de abc es: " << result << endl;

    return 0;
}
