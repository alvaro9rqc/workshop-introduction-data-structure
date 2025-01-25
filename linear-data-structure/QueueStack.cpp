#include <bits/stdc++.h> 
using namespace std;

int main () {
  queue<int> q;
  q.push(3);
  q.push(2);
  q.push(1);
  while (not q.empty()) {
    cout << q.front() << ' ';
    q.pop();
  }
  cout << '\n';
  stack<int> st;
  st.push(3);
  st.push(2);
  st.push(1);
  while (not st.empty()) {
    cout << st.top() << ' ';
    st.pop();
  }
  cout << '\n';
  return 0;
}
