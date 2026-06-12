/*
 * LeetCode 2943. Maximize Area of Square Hole in Grid
 * Difficulty: Medium
 * Topics: Sorting, Array
 *
 * Time Complexity: O(hBarsSize² + vBarsSize²)
 * Space Complexity: O(hBarsSize + vBarsSize)
 */

int maximizeSquareHoleArea(int n, int m, int* hBars, int hBarsSize, int* vBars, int vBarsSize) 
{
    
    int hs = hBarsSize;
    int vs = vBarsSize;
    
    if(hs==1 || vs==1)
    {
        return 4;
    }
    int swap;
    for(int c=0; c<hs-1; c++)
    {
        for(int d=0; d<hs-c-1; d++)
        {
            if (hBars[d]> hBars[d+1])
            {
                swap=hBars[d];
                hBars[d]=hBars[d+1];
                hBars[d+1]=swap;
            }
        }
    }

    for(int c=0; c<vs-1; c++)
    {
        for(int d=0; d<vs-c-1; d++)
        {
            if (vBars[d]> vBars[d+1])
            {
                swap=vBars[d];
                vBars[d]=vBars[d+1];
                vBars[d+1]=swap;
            }
        }
    }

    int hcount[hs], vcount[vs];
    hcount[0] = 2, vcount[0] = 2;
    int i = 0;

    for(int k=0; k<hs-1; k++)
    {   

        if(hBars[k] + 1 == hBars[k+1])
        {   
            hcount[i]++;
        }
        else
        {   
            i++;
            hcount[i] = 2;
        }
    }
    
    int j=0;
    for(int k=0; k<vs - 1; k++)
    {
        if(vBars[k] + 1 == vBars[k+1])
        {
            vcount[j]++;
        }
        else
        {   
            j++;
            vcount[j] = 2;
        }
    }

    int hmax = hcount[0];
    int vmax = vcount[0];

    for(int k=0; k<=i; k++)
    {
        if(hcount[k]>hmax)
        {
            hmax = hcount[k];
        }
    }
    
    for(int k=0; k<=j; k++)
    {
        if(vcount[k]>vmax)
        {
            vmax = vcount[k];
        }
    }

    if(hmax<vmax)
    {
        return hmax*hmax;
    }
    
    return vmax*vmax;
}
    
