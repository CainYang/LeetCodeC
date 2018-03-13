int islandPerimeter(int** grid, int gridRowSize, int gridColSize) {
    int i,j;
    int result = 0;
    for(i=0;i<gridRowSize;i++)
    {
        for(j=0;j<gridColSize;j++)
        {
            if(grid[i][j] == 1)
            {
                result+=4;
                if(i-1>=0)
                if(grid[i-1][j] == 1)
                    result--;
                if(i+1<gridRowSize)
                if(grid[i+1][j] == 1)
                    result--;
                if(j-1>=0)
                if(grid[i][j-1] == 1)
                    result--;
                if(j+1<gridColSize)
                if(grid[i][j+1] == 1)
                    result--;
            }
        }
    }
    return result;
}
