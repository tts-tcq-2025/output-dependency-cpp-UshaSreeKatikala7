#include <iostream>
#include <assert.h>
using namespace std;
char size(int cms) {
    char sizeName = '\0';
    if(cms < 38) {
        sizeName = 'S';
    } else if(cms > 38 && cms < 42) {
        sizeName = 'M';
    } else if(cms > 42) {
        sizeName = 'L';
    }
    return sizeName;
}

void testTshirtSize() {
    cout << "\nTshirt size test\n";
    assert(size(37) == 'S');
    assert(size(40) == 'M');
    assert(size(43) == 'L');
    assert(size(38) != 'S');  
    assert(size(38) != 'M');  
    assert(size(38) == '\0'); 
    assert(size(42) != 'M');  
    assert(size(42) != 'L');  
    assert(size(42) == '\0'); 
    assert(size(39) == 'M');  
    assert(size(41) == 'M');     
    cout << "All is well (maybe!)\n";
}


