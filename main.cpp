#include <iostream>
#include "Jungle.h"
#include "DomesticAnimal.h"
#include "WildAnimal.h"

using namespace std;

int main() {
    int n;
    cout << "Enter numbers of animals:\n";
    cin >> n;

    Jungle jungle(n);
    for (int i = 0; i < n / 2; ++i) {
        jungle.AddAnimal(new DomesticAnimal);
    }
    for (int i = 0; i < n / 2; ++i) {
        jungle.AddAnimal(new WildAnimal);
    }

    for (int i = 0; i < 1000; ++i) {
        jungle.movement();
    }
    cout << jungle.getTotalFall();
    return 0;
}
