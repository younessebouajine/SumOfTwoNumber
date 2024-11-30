#include <iostream>

using namespace std;

short ft_SumToNumbers(short Number1 , short Number2){
    return Number1 + Number2; 
}

int main(){
    /*
    for(short i = 0; i <= 1 ; i++){
        cout <<"\n Please enter number" << i << : ;
        cin>> i;
        cout << endl;
    }
    */
    short Sum = ft_SumToNumbers(15 , 22);
    cout << "the sum of two number is : "<< Sum << endl;
    system ("pause > 0");
    return 0;
}