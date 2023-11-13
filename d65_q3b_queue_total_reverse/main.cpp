#include "queue.h"
#include "student.h"
#include <iostream>

int main() {
  CP::queue<int> q;
  int n;
  std::cin >> n;
  for (int i = 0; i < n; ++i) {
    int element;
    std::cin >> element;
    q.push(element);
  }
  q.reverse();
  q.push(99);
  while (!q.empty()) {
    std::cout << q.front() << " ";
    q.pop();
  }
  std::cout << std::endl;
}