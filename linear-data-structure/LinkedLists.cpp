#include <bits/stdc++.h> 
using namespace std;

int main () {
  deque<int> dq;
  dq.push_back(4);    //inserción al final
  dq.push_back(3);
  dq.push_front(2);   //inserción al inicio
  dq.push_front(1);
  cout << dq[2] << '\n';    //acceso amortizado
  auto it = find(dq.begin(), dq.end(), 3); //búsqueda
  dq.erase(it);  //eliminación
  for(auto& e: dq) {
    cout << e << ' ';
  }
  cout << '\n';
  return 0;
}
