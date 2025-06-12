// #include<iostream>
// using namespace std;

// int main(){

//     // int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{8,5,2}}; // 2D arrays
//     int matrix[4][3];
//     int rows = 4;
//     int cols = 3;

//     // for (int i = 0; i < rows; i++)
//     // {
//     //    for (int j = 0; j < cols; j++)
//     //    {
//     //    cout << matrix[i][j] << " ";
//     //    }
//     //    cout << endl;
//     // }
    

//     for (int i = 0; i < rows; i++)
//     {
//        for (int j = 0; j < cols; j++)
//        {
//       cin>>matrix[i][j];
//        }
      
//     }
    

//     for (int i = 0; i < rows; i++)
//     {
//        for (int j = 0; j < cols; j++)
//        {
//        cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//     }
    
//     return 0;
// }


// linear search 

// #include<iostream>
// using namespace std;

// bool linearSearch(int mat[][3], int rows , int cols, int key){
//     for (int i = 0; i < rows; i++)
//     {
//        for (int j = 0; j < cols; j++)
//        {
//        if (mat[i][j] == key)
//        {
//        return true; 
//        }
       
//        }
       
//     }
//     return false;
// }

// int main(){

//      int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{8,5,2}}; // 2D arrays
//      int rows = 4;
//     int cols = 3;
//     cout << linearSearch(matrix,rows,cols,20) << endl;
//     return 0;
// }

// maximum get sum

#include<iostream>
using namespace std;

int getMaxSum(int mat[][3], int rows, int cols){
    int maxRowSum = INT32_MIN;

    for (int i = 0; i < rows; i++)
    {
        int rowSumI = 0;
        for (int j = 0; j < cols; j++)
        {
           rowSumI += mat[i][j];
        }
        maxRowSum = max(maxRowSum, rowSumI);
    }
    return maxRowSum;
}

int main(){

     int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9}}; // 2D arrays
   int rows = 3;
   int cols = 3;
   cout << getMaxSum(matrix,rows,cols) << endl;
    return 0;
}