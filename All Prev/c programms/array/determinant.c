#include <stdio.h>
#include <conio.h>
#include <math.h>

            // det[c] = pow(-1,(r+c)) * det
int main()
{
    int temp[2],det[3],A[3][3],i=0,x=0;
    int r=0,order;
    float sum=0;
    // A[3][3] matric inputs
    printf("Enter the order of matrix : ");
    scanf("%d",&order);
    printf("Enter the matrix : ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    // ===============================================================

    // for(int r=0;r<3;r++)
    // {
        for(int c=0;c<3;c++)
        {
            temp[0]=1;
            temp[1]=1;
            i=0;
            for(int a=0;a<3;a++)
            {
                for(int b=0;b<3;b++)
                {
                    if(a!=r && b!=c)
                    {
                        if(i<2)
                        {
                            temp[i++] *= A[a][b];
                            // printf("A[%d][%d] = %d \tt[%d]=%d\t",a,b,A[a][b],i-1,temp[i-1]);
                        }
                        else
                        {
                            temp[--i] *= A[a][b];
                            // printf("A[%d][%d] = %d \tt[%d]=%d\t",a,b,A[a][b],i,temp[i]);
                            i--;
                        }
                    }
                }
            }
            det[c] = temp[0]-temp[1];
            // printf("\n%d %d %d\n",pow(-1,(x)),(A[0][x++]),(temp[0]-temp[1]));
        }
        
        printf("\n==========================\n");
    
        for(int j=0;j<3;j++)
        {
            float pwr= pow(-1.0,(j*1.0)),
            val=A[r][j],
            trm=det[j];
            // printf("sign=%.0f X a%d%d=%.0f term=%.0f    =%.0f\t",pwr,r,j,val,trm,(pwr*trm*val));
            printf("%.0f \bX%.0f=%.0f\n",(pwr*val),trm,(pwr*trm*val));
            det[j]= (int)(pwr*trm*val);
            // printf("%d ",det[j]);
            sum+=det[j];
        }
        printf("\n\tDeterminant is %.0f",sum);

    // }
    return 0;
}