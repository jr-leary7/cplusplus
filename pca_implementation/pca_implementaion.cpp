#include <iostream>
#include <cmath>
#include <cfloat>
#include <stdlib.h>

// remember, arrays are initialized with i.e. int x[2][3] (2 rows and 3 columns)

int x[10][10];

for i in 0 to last array index; {
    for j in 0 to last array index; {
        x[i][j] = rand() % 100;
    }
}

print(x[1]);