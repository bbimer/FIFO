#include <iostream>
#include "..\Array\array.h"
#include "queue.h"
using namespace std;

int main() {
    Queue<int> queue;

    queue.push(5);
    queue.push(10);
    queue.push(15);

    cout << "Stack contents (FIFO): ";
    queue.print();

    cout << "Top element: " << queue.top() << endl;

    queue.pop();
    cout << "Stack after pop: ";
    queue.print();

    queue.clear();
    cout << "Stack after clear: ";
    queue.print();

	return 0;
}