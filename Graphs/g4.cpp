class Solution {
public:
    void dfs(int row,int col,vector<vector<int>>& image,int original,int color){
        image[row][col]=color;
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow>=0 && nrow<image.size() && ncol>=0 && ncol<image[0].size() && image[nrow][ncol]==original){
                dfs(nrow,ncol,image,original,color);

            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int original=image[sr][sc];
        if(original==color){
            return image;
        }
        dfs(sr,sc,image,original,color);
        return image;
        
    }
};
