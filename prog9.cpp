/*#include <iostream>
using namespace std;

int main() {

    int max;
    int step;
    int divisorOne;
    int divisorTwo;

    cin>> max;
    cin>> step;
    cin>> divisorOne;
    cin>> divisorTwo;

    if(max<=0||step<=0||divisorOne<=2||divisorTwo<=2||divisorOne==divisorTwo){
            cout<<"Bad Input"<<endl;
            return 0;
        }

    for(i=1; i<=max; i+=step) {

            if(i%divisorOne==0 && i%divisorTwo==0){
            cout<<"FizzBuzz"<<endl;
            }
            else if(i%divisorOne==0){
                cout<<"Fizz"<<endl;
            }
            else if(i%divisorTwo==0){
                cout<<"Buzz"<<endl;
            }
            else{
                cout<< i << endl;
            }
            if (i == 42) {
            cout << "Answered" << endl;
            break;
            }
            
        }
        return 0;

        
    }
}*/
#include <iostream>

using namespace std;

int main() {
    int max, step, divisorOne, divisorTwo;

    cin >> max >> step >> divisorOne >> divisorTwo;

 
    if (max <= 0 || step <= 0 || divisorOne < 2 || divisorTwo < 2 || divisorOne == divisorTwo) {
        cout << "Bad Input" << endl;
        return 0;
    }

    for (int i = 1; i <= max; i += step) {
        if (i%42==0) {
            cout << "Answered" << endl;
            break;
        }
        else if (i % divisorOne == 0 && i % divisorTwo == 0) {
            cout << "FizzBuzz" << endl;
        } else if (i % divisorOne == 0) {
            cout << "Fizz" << endl;
        } else if (i % divisorTwo == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }

     
        
    }

    return 0;
}