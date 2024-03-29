#include <iostream>
using namespace std;
int c[5];
void acceptingInput();
int locateElementByBinarySearch(int);

int main() {
    acceptingInput();
    int temp = 0;
    cout << "enter the element to locate: ";
    cin >> temp;
    int location = locateElementByBinarySearch(temp);
    cout << "located at: "<< location << endl;
    return 0;
}

void acceptingInput() {
    int i = 0;
    for(i=0; i<5; i++) {
        cin >> c[i];
    }
}

int locateElementByBinarySearch(int temp) {
    int low = 0;
    int high = 4;
    int local = 0;
    while(low < high) {
        local = (low+high)/2;
        if(temp > c[local]) {
            low = local + 1;
        } else {
            high = local;
        }
    }
    return low;
}
