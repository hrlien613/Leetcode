//
// Created by Rou Lian on 2022/12/12.
//
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    int top=0;
    int bot=rows;
    int row;

    if (matrix.size() == 1){
        row = 0;
    }
    else{
        while(top<=bot){
            if (top>=rows)
                return false;
            else{
                row = (top+bot)/2;

                if (target>matrix[row].back()){
                    top = row+1;
                }
                else if (target<matrix[row][0]){
                    bot = row-1;
                }
                else {
                    break;
                }
            }
        }
    }


    int left = 0;
    int right = cols-1;

    if (matrix[row].size()==1){
        if (matrix[row][0] != target)
            return false;
        else
            return true;
    }
    else{
        while(left<=right){
            int mid = (left+right)/2;

            if (target>matrix[row][mid])
                left = mid+1;
            else if (target<matrix[row][mid])
                right = mid -1;
            else
                return true;
        }
    }
    return false;
}