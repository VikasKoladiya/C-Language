#include<stdio.h>
#pragma pack(1)   // jo aa no lakhvi to compiler auto matic padding lai ley and jo lakhvi to packing ley
struct abc
{
    char w;
    int b; 
    char a;   
    float c;     
}s1;
void main()
{
    printf("%d",sizeof(struct abc));
}
// padding = padding ma compiler each element mate 4 byte aape
// packing = packing ma compiler each element ma je jagaya rahi hoi te saf kari nakhe etle ke te bija ne
//           provide kari dey etel each element na byte no sum male and padding ma 4*howmany datatype
//           e rite male