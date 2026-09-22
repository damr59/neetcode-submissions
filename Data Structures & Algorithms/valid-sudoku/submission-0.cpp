class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for(int row=0;row<9;row++)
        {
            unordered_set<char>seen;
            for(int col=0;col<9;col++)
            {
                char ch=board[row][col];
                if(ch=='.')continue;
                if(seen.count(ch))return false;
                seen.insert(ch);
            }
        }
        for(int col=0;col<9;col++)
        {
            unordered_set<char>seen;
            for(int row=0;row<9;row++)
            {
                char ch=board[row][col];
                if(ch=='.')continue;
                if(seen.count(ch))return false;
                seen.insert(ch);
            }
        }

        for(int row=0;row<9;row+=3)
        {
            for(int col=0;col<9;col+=3)
            {
                unordered_set<char>seen;
                for(int i=0;i<3;i++)
                {
                    for(int j=0;j<3;j++)
                    {
                        char ch=board[row+i][col+j];

                        if(ch=='.')continue;
                        if(seen.count(ch))return false;
                        seen.insert(ch);
                    }
                }
            }
        }
        return true;
    }
};
