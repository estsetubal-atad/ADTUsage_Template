#include <stdio.h>
#include <stdlib.h>
#include "map.h" //Definição de MapKey === MapValue === int

int main() {
    int vec[17] = { 1,1,2,1,4,3,1,2,2,4,4,13,7,5,5,5,9 };

    PtMap map = mapCreate();

    int count;
    for (int i = 0; i < 17 ; i++) {
        int number = vec[i];

        if (mapContains(map, number)) { //existing number (known key)
            mapGet(map, number, &count);
            mapPut(map, number, ++count);
        }
        else {	//new number found
            mapPut(map, number, 1);
        }
    }
    mapPrint(map); // Apenas é mostrada a informação, numa ordem indefinida                 

    mapDestroy(&map);
    return EXIT_SUCCESS;
}
