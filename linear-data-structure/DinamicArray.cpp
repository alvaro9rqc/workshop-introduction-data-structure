#include <bits/stdc++.h> 
using namespace std;

int main () {
  vector<int> v; //sin elementos iniciales
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  printf("%d\n", v[2]);
  v = {1,2,3,4,5,6,7};
  v[0] = v[6]; //acceso
  auto it = find(v.begin(), v.end(), 5); //búsqueda
  v.erase(it); //eliminación
  sort(v.begin(), v.end());
  for(auto& e: v) {
    printf("%d ", e);
  }
  printf("\n");
  return 0;
}



