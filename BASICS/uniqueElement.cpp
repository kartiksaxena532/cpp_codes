finding unique element in an array

XOR has a property when
a^a=0
0^a=0

so to find unique element in an array saare elements ko uthao aur for loop laga do
with XOR condition with each other :3^4^4^5^3 = 5 which is unique

int arrUnique(int *arr, int size){
int ans=0;
for (int i=0; i<size;i++){

 ans = ans^arr[i];


}
return ans;
}
