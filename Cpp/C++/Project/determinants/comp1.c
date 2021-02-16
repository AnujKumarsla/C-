#include <stdio.h>
#include <conio.h>
void take(int *a,int r,int c);
void out(int *a,int r,int c,char s[12]);
void trnsps(int *a,int r,int c);
void deter(int *A,int *data,int det,int r,int c);
void minor(int *coff,int *data,int i,int j);
void adjoin(int *coff,int *adj);
int main()
{
    int coff[3][3],data[3][3][2],adj[3][3];
    int temp[2],alt=0,sign,det,altr=0;

    int A[3][3];

    // TAKING INPUT OF MATRIX
    take(&A[0][0],3,3);

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
    trnsps(&A[0][0],3,3);
    // Print Determinant
    deter(&A[0][0],&data[0][0][0],det,0,3);
    //  MINOR and COFACTORS prints
    minor(&coff[0][0],&data[0][0][0],3,3);
    // TRANSPOSE OF COFACTOR FOR ADJOINT 
    adjoin(&coff[0][0],&adj[0][0]);
    //  PRINT cofactor
    out(&coff[0][0],3,3,"coffactor");
    //  PRINT adjoint 
    out(&adj[0][0],3,3,"Adjoin");
    //  for A inverse
    if(det!=0)
    {
        printf("\nSince |A| is %d !=0\n",det);
        printf("Therefore Matrix of A inverse is -\n");
        for(int r=0;r<3;r++)
        {
            for(int c=0;c<3;c++)
            {
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

// ==================================================================
void take(int *a,int r,int c)
{
    printf("Enter the matrix of %d X %d : \n",r,c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",(a++));
        }
    }
}
// ==================================================================
void out(int *a,int r,int c,char s[12])
{
    printf("matrix of %s : \n",s);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",*(a++));
        }
        printf("\n");
    }
}
// ==================================================================
void trnsps(int *a,int r,int c)
{
    printf("TRANSPOSE -\n");
    for(int i=0;i<r;i++)
    {
        int x=0;
        for(int j=0;j<c;j++)
        {
            printf("%d  ",*(a+i+x));
            x+=3;
        }
        printf("\n");
    }
}
// ==================================================================
void deter(int *A,int *data,int det,int r,int c)
{
    printf("DETERMINANT OF A IS -\n");
    int i=0,alt=0,sign;
    for(int j=0;j<c;j++)
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
        printf("%d(%d-%d)=%d  ",sign**A,*data,*(data+1),sign**A*(*data-*(data+1)));
        A++;data+=2;
    }
    printf("\n");
    printf("|A| is %d\n",det);
}
// ==================================================================
void minor(int *coff,int *data,int i,int j)
{
    int alt=0,sign;
    for(int r=0;r<i;r++)
    {
        for(int c=0;c<j;c++)
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
            
            printf("Minor of a[%d][%d] is %d\t CoFactor of a[%d][%d] is %d\n",r,c,(*data-*(data+1)),r,c,sign*(*data-*(data+1)));
            *coff=sign*(*data-*(data+1));
            coff++;data+=2;
        }
        printf("\n");
    }
}

void adjoin(int *coff,int *adj)
{
    int x;
    for(int r=0;r<3;r++)
    {
        x=0;
        for(int c=0;c<3;c++)
        {
            *adj = *(coff+x+r);
            x+=3;
            adj++;
        }
    }
}