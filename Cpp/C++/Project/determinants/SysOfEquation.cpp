#include <stdio.h>
#include <conio.h>

int main()
{
    int coff[3][3],data[3][3][2],adj[3][3];
    int temp[2],alt=0,sign,det,altr=0;
    int A[3][3];
    // for multiply
    int comm=3,cM2=1,val,b[3][1],rM1=3,sum,result[3][1];

    // TAKING INPUT OF MATRIX
    printf("Enter the matrix A -\n");
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
    printf("|A| is %d\n",det);
    // ===============================================
    //  COFACTORS matric is build
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
            coff[r][c]=sign*(data[r][c][0]-data[r][c][1]);
        }
    }
    // TRANSPOSE OF COFACTOR FOR
    // ADJOINT matric is build
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            adj[r][c]=coff[c][r];
        }
    }
    // MULTIPLY ADJOINT AND MATRIC B
    printf("Enter the matrix of %d X %d\n",comm,cM2);
    for(int i=0;i<comm;i++)
    {
        for(int p=0;p<cM2;p++)
        {
            scanf("%d",&val);
            b[i][p]=val;
        }
    }
    // print result
    for (int r = 0; r < rM1; r++)
    {
        for (int c=0; c < cM2; c++)
        {
            sum = 0;
            for (int x = 0; x < comm; x++)
            {
                sum += adj[r][x] * b[x][c];
                // printf("%d X %d + ", a[r][x], b[x][c]);
            }
            // printf("\b\b= %d\t", sum);
            result[r][c] = sum;
        }
    }
    /*for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            float num= ((float) adj[r][c])/det;
            if(num==adj[r][c]/det)
            {
                printf("%.0f ",num);
            }
            else
            {
                printf("%d/%d  ",adj[r][c],det);
            }
            if(r==1 && c==0)
                printf("1/%d\t%d  ",det,adj[r][c]);
            else
                printf("\t%d  ",adj[r][c]);
        }
        printf("\n");
    }*/

    for (int r = 0; r < rM1; r++)
    {
        for (int c = 0; c < cM2; c++)
        {
            float num= ((float) result[r][c])/det;
            if(num==result[r][c]/det)
            {
                printf("%.0f ",num);
            }
            else
            {
                printf("%d/%d  ",result[r][c],det);
            }
            /*if(r==1 && c==0) (2)
                printf("1/%d\t%d  ",det,result[r][c]);
            else
                printf("\t%d  ",result[r][c]);*/
            // printf("%d\t", result[r][c]); (1)
        } 
        printf("\n");
    }
    return 0;
}