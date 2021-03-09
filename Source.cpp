#include <iostream>
using namespace std;

class integer
{

private:
    int a;

public:
    int getA() { return a; }
    void setA(int valueA) { a = valueA; }

    integer(int valueA)
    {
        a = valueA;

    }
    ~integer()
    {

    }

    void checkPrimeNumber(int a) {

        int isPrime = 1;

        if (a == 0 || a == 1) {
            isPrime = 0;
        }
        else {
            for (int i = 2; i <= a / 2; ++i) {
                if (a % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime == 1)
            cout << a << " Є простим число.\n";
        else
            cout << a << " Не є простим числом.\n";
    }
    int addition(integer& numb) { return (a + numb.getA()); };
    int subtraction(integer& numb) { return (a - numb.getA()); };
    int multiplication(integer& numb) { return (a * numb.getA()); };
    int division(integer& numb) { return(a / numb.getA()); };

};


int main() {
    system("chcp 1251");
    int n, b;
    cout << "Перше число" << endl;
    integer prime1(15);
    prime1.checkPrimeNumber(prime1.getA());
    cout << "Друге число" << endl;
    cin >> b;
    integer prime2(b);
    prime2.checkPrimeNumber(b);

    cout << prime1.getA() << " + " << prime2.getA() << " = " << prime1.addition(prime2) << '\n';
    cout << prime1.getA() << " - " << prime2.getA() << " = " << prime1.subtraction(prime2) << '\n';
    cout << prime1.getA() << " * " << prime2.getA() << " = " << prime1.multiplication(prime2) << '\n';
    cout << prime1.getA() << " / " << prime2.getA() << " = " << prime1.division(prime2) << '\n';
    return 0;
}