class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex ==0){
            return {1};
        }
        vector<int>curRow ={1};
        vector<int>PrevRow= getRow(rowIndex -1);
        for(int i =1; i<rowIndex; i++){
            curRow.push_back(PrevRow[i-1]+PrevRow[i]);
        }
        curRow.push_back(1);
        return curRow;
    }
};