
#include <iostream>
using namespace std;
/*Pattern-2
1
22
333
4444
*/

int main() {
  int n;
  cout << "Enter the number of rows" << endl;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << i + 1 << " ";
    }
    cout << endl;
  }

  return 0;
}