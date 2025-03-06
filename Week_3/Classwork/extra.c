#include <unistd.h>

int main(){
    write(1, "ABC ", 14);
    return 0;
}