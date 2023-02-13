#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // this is lecter number 17
    // 2D vector is vector of vector
    vector<vector<int>> v;

    // if we want to initialized size of vector 
    // vector<vector<int>> v(3); -> here we have 3 row 

    // if we want to creat 3*4 matrix
    // vector<vector<int> v(3,vector<int>(4)); -> here 3 is row and 4 is column

    // if we want to intialized with own value
    // vector<vector<int> v;
    // v = { {1,2,3},
    //         {1,2,3,4},
    //         {5,6}                ---> here it not mandator to intialized fix number of column
    //     };


    // if we want to creat 3*4 matrix
    // vector<vector<int> v(3,vector<int>(4)); -> here 3 is row and 4 is column
    // here ve have 3 default vector which is indicate every single roe
    // ahiya apde 3 row lidhi eno meaning evo thai seke apdi pase 3 alag alag vector che jema apde 4 
    // element add kari sakiye chiye jo apde tema ele. add ke evu karvu hoi to kari sakitye
    // and ama badha ele. add karav farjiyat nathi hota apde jetla add karav hoi etle apde add kari sakiye
    return 0;
}