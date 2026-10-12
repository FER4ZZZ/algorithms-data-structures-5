/*
#include <iostream>
using namespace std;
int main() {
    int A,B;
    cout << "Введите A и B\n";
    cin >> A >> B;
    while (A > B) {
        if (A % 2 == 0 && A / 2 >= B) {
            cout << ":2\n";
            A /= 2;
        }
        else {
            cout << "-1";
            A -= 1;
        }


        

    }
    return 0;

}


*/
/*
#include <iostream>

int main() {
    int A, B;
    cout << "Введите A и B\n";
    std::cin >> A >> B;

    for (; A > B; ) {
        if (A % 2 == 0 && A / 2 >= B) {
            std::cout << ":2\n";
            A /= 2;
        } 
        else {
            std::cout << "-1";
            A -= 1;
        }
    }

    return 0;
}

*/
#include <iostream>
using namespace std;
int main() {
    int A,B;
    cout << "Введите A и B\n";
    cin >> A >> B;
    do {
        if (A % 2 == 0 && A / 2 >= B) {
            cout << ":2\n";
            A /= 2;
        }
        else {
            cout << "-1";
            A -= 1;
        }


        

    } while (A > B);
    return 0;

}

