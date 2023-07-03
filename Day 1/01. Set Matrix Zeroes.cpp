//Case-1 : Space Complexity - O(1)
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        bool flag1 = false;
        bool flag2 = false;
        for(int i = 0; i<n; i++)
        {
            if(matrix[i][0] == 0)
            {
                flag1 = true;
            }
        }
        for(int j = 0; j<m; j++)
        {
            if(matrix[0][j] == 0) 
            {
                flag2 = true;
            }
        }
        for(int i = 1;i<n;i++)
        {
            for(int j = 1;j<m;j++)
            {
                if(matrix[i][j] == 0)
                {
                    matrix[i][0] = matrix[0][j] = 0;
                }
            }
        }
        for(int i = 1;i<n;i++)
        {
            for(int j = 1;j<m;j++)
            {
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
        if(flag1 == true)
        {
            for(int i=0; i<n; i++)
            {
                matrix[i][0] = 0;
            }
        }
        if(flag2 == true)
        {
            for(int j=0; j<m; j++)
            {
                matrix[0][j] = 0;
            }
        }
    }
};

//Case-2: Space Complexity - O(n)
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        queue<pair<int,int>>q;
        int row = matrix.size();
        int col = matrix[0].size();
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]==0) q.push(make_pair(i,j));
            }
        }
        while(!q.empty())
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for(int i=0;i<col;i++)
            {
                if(matrix[x][i]==0) 
                {
                    continue;    
                }
                else if(matrix[x][i]!=0)
                {
                    matrix[x][i]=0;
                }
            }
            for(int i=0;i<row;i++)
            {
                if(matrix[i][y]==0) 
                {
                    continue;
                }
                else if(matrix[i][y]!=0)
                {
                    matrix[i][y]=0;
                }
            }
        }
    }
};