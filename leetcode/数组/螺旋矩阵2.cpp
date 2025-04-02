class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int d[4][2]={{0,1},{1,0},{0,-1},{-1,0}};  //右下左上
        vector<vector<int>> ans(n,vector<int>(n,0));
        int x=0,y=0,di=0,shu=1;
        for(int k=0;k<n*n;k++){  //走m*n步
            ans[y][x]=shu;
            shu++;
            int tx=x+d[di][1],ty=y+d[di][0];
            if(ty<0||ty>=n||tx<0||tx>=n||ans[ty][tx]!=0){
                di=(di+1)%4;
            }
            x+=d[di][1];
            y+=d[di][0];
        }
        return ans;
    }
};