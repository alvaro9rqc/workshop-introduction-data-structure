#include <bits/stdc++.h>
using namespace std;

int main() {
    // Ejemplo con priority_queue (heap máximo por defecto)
    priority_queue<int> pq;
    pq.push(10);
    pq.push(5);
    pq.push(20);
    cout << "Elemento máximo: " << pq.top() << endl; // 20
    pq.pop();

    // Heap mínimo
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(10);
    minHeap.push(5);
    minHeap.push(20);
    cout << "Elemento mínimo: " << minHeap.top() << endl; // 5

    // Implementación manual usando make_heap
    vector<int> vec = {10, 5, 20};
    make_heap(vec.begin(), vec.end()); // Convierte el vector en un heap máximo
    cout << "Elemento máximo manual: " << vec.front() << endl; // 20

    return 0;
}
