#include <stdio.h>
#include <conio.h>

int main()
{
    int coff[3][3],data[3][3][2],adj[3][3];
    int temp[2],alt=0,sign,det,altr=0;

    int A[3][3];

    // TAKING INPUT OF MATRIX
    printf("Enter the matrix to find its transpose, determinant, adjoint, -\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }


    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            temp[0]=1;
            temp[1]=1;
            altr=0;
            for(int nr=0;nr<3;nr++)
            {
                for(int nc=0;nc<3;nc++)
                {
                    if(nr!=r && nc!=c)
                    {
                        if(altr<2)
                        {
                            temp[altr++]*=A[nr][nc];
                        }
                        else
                        {
                            temp[--altr]*=A[nr][nc];
                            altr--;
                        }
                        
                    }
                }
            }
            data[r][c][0]=temp[0];
            data[r][c][1]=temp[1];
            if(r==0)
            {
                // ====
                if(alt==0)
                {
                    sign=1;
                    alt++;
                }
                else
                {
                    sign=-1;
                    alt--;
                }
                det+=A[r][c]*sign*(temp[0]-temp[1]);

            }
        }
    }
    // TRANSPOSE OF A IS    
    printf("TRANSPOSE OF A IS -\n");
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            printf("%d  ",A[c][r]);
        }
        printf("\n");
    }
    printf("DETERMINANT OF A IS -\n");
    // ==printing data table =========================
    // for(int r=0;r<3;r++)
    // {
        int r=0;alt=0;
        for(int c=0;c<3;c++)
        {
            if(alt==0)
            {
                sign=1;
                alt++;
            }
            else
            {
                sign=-1;
                alt--;
            }
            printf("%d(%d-%d)=%d  ",sign*A[r][c],data[r][c][0],data[r][c][1],sign*A[r][c]*(data[r][c][0]-data[r][c][1]));
        }
        printf("\b\b\n");
        // for(int c=0;c<3;c++)
        //     printf("%d\t",data[r][c][1]);
        // printf("\n=====================\n");
    // }
    printf("|A| is %d\n",det);
    // ===============================================
    //  MINOR and COFACTORS prints
    alt=0;
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            if(alt==0)
            {
                sign=1;
                alt++;
            }
            else
            {
                sign=-1;
                alt--;
            }
            
            printf("Minor of a[%d][%d] is %d\t CoFactor of a[%d][%d] is %d\n",r,c,(data[r][c][0]-data[r][c][1]),r,c,sign*(data[r][c][0]-data[r][c][1]));
            coff[r][c]=sign*(data[r][c][0]-data[r][c][1]);
        }
        printf("\n");
    }
    // TRANSPOSE OF COFACTOR FOR ADJOINT 
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            adj[r][c]=coff[c][r];
        }
    }
    //  PRINT cofactor
    printf("matrix of cofactor is -\n");
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            printf("%d  ",coff[r][c]);
        }
        printf("\n");
    }
    //  PRINT adjoint 
    printf("matrix of adjoint is -\n");
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            printf("%d  ",adj[r][c]);
        }
        printf("\n");
    }

    //  for A inverse
    if(det!=0)
    {
        printf("\nSince |A| is %d !=0\n",det);
        printf("Therefore Matrix of A inverse is -\n");
        for(int r=0;r<3;r++)
        {
            for(int c=0;c<3;c++)
            {
                /*float num= ((float) adj[r][c])/det;
                if(num==adj[r][c]/det)
                {
                    printf("%.0f ",num);
                }
                else
                {
                    printf("%d/%d  ",adj[r][c],det);
                }*/
                if(r==1 && c==0)
                    printf("1/%d\t%d  ",det,adj[r][c]);
                else
                    printf("\t%d  ",adj[r][c]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nSince |A| is %d =0\nSorry this process is not capable to calculate inverse of the A.",det);
    }
    
    return 0;
}