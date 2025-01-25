#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<string, int> umap;

    // Inserción
    umap["apple"] = 5;
    umap["banana"] = 10;
    umap["cherry"] = 15;

    // Acceso
    cout << "apple: " << umap["apple"] << endl;

    // Búsqueda
    if (umap.find("banana") != umap.end()) {
        cout << "banana encontrada con valor " << umap["banana"] << endl;
    }

    // Iteración
    for (auto &[key, value] : umap) {
        cout << key << ": " << value << endl;
    }

    return 0;
}
