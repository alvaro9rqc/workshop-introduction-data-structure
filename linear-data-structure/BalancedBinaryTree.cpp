#include <bits/stdc++.h>
using namespace std;

int main() {
    // std::set: Colección ordenada única
    set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(10); // Duplicados no se permiten
    for (int x : s) cout << x << " "; // 5 10 20
    cout << endl;

    // std::map: Diccionario ordenado
    map<string, int> m;
    m["apple"] = 5;
    m["banana"] = 10;
    m["cherry"] = 15;
    for (auto &[key, value] : m) {
        cout << key << ": " << value << endl;
    }

    // Búsqueda
    if (m.find("apple") != m.end()) {
        cout << "apple encontrado con valor " << m["apple"] << endl;
    }

    return 0;
}
