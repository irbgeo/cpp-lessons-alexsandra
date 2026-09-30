#include <iostream>
#include <cmath> 

int main() {
    int n = 0, m = 0;
    cin >> n >> m;

    int r1 = 0, c1 = 0, r2 = 0, c2 = 0;
    cin >> r1 >> c1;
    cin >> r2 >> c2;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {

            
            if ((i == r1 && j == c1) || (i == r2 && j == c2)) {
                cout << 'S';
                continue;
            } 

           
            int dist1 = abs(i - r1) + abs(j - c1);
            int dist2 = abs(i - r2) + abs(j - c2);

            int target_r = r1;
            int target_c = c1;
            if (dist2 < dist1) {
                target_r = r2;
                target_c = c2;
            }

            
            if (i > target_r) {
                cout << '^';
            }
            else if (i < target_r) {
                cout << 'v';
            }
            else if (j > target_c) {
                cout << '<';
            }
            else if (j < target_c) {
                cout << '>';
            }
        } 

        cout << "\n"; 
    } 

    return 0;
}