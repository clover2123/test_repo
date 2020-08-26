

#include <stdio.h>
#include <stdint.h>

using namespace std;

enum Sample {
    ONE,
    TWO,
};

class Test {
    public:
        enum Type : uint16_t{
            TypeOne,
            TypeTwo,
        };

        static void printType() {
            printf("Size of default enum : %lu\n", sizeof(Type));
        }
};

int main(){
    printf("Size of intptr_t : %lu\n", sizeof(intptr_t));
    printf("Size of int : %lu\n", sizeof(int));
    printf("Size of int32_t : %lu\n", sizeof(int32_t));
    printf("Size of size_t : %lu\n", sizeof(size_t));
    printf("Size of long : %lu\n", sizeof(long));
    printf("Size of long long : %lu\n", sizeof(long long));
    printf("Size of unsigned : %lu\n", sizeof(unsigned));
    printf("Size of unsigned long : %lu\n", sizeof(unsigned long));
    printf("Size of unsigned long long : %lu\n", sizeof(unsigned long long));
    printf("Size of enum : %lu\n", sizeof(Sample));

    printf("Binary 0x1000000000000 : %lx\n", 0x1000000000000L);
    printf("Size of 0x1000000000000 : %lu\n", sizeof(0x1000000000000));

    printf("binary form : %x\n", 82);

    printf("SIZE_MAX : %lu\n", SIZE_MAX);
    Test::printType();
    return 0;
}
