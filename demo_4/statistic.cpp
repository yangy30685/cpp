// 随机梯度下降实验：
// 训练集输入为矩阵：
// 1,4
// 2,5
// 5,1
// 4,2
// 输出结果为：
// 19
// 26
// 19
// 20
// 需要参数为 w：
// ？
// ？
// 目标函数:y=w0*x0+w1*x1;
 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    double matrix[4][2]={{1,4},{2,5},{5,1},{4,2}};
    double result[4]={19,26,19,20};
    // 初始为零向量
    double w[2]={0,0};
    double loss=10.0;

    // 步长 
    
    const double n = 0.01;        
    for(int i=0;i<100&&loss>0.001;i++)
    {
        double error_sum=0;
        int j=i%4;
        { 
            double h=0;
            for(int k=0;k<2;k++)
            {
                h+=matrix[j][k]*w[k];
            }
            error_sum = h - result[j];
            for(int k=0;k<2;k++)
            {
                w[k]-= n * (error_sum) * matrix[j][k];//这里是关键
            }
         }
        printf("%lf,%lf\n",w[0],w[1]);
        double loss=0;
        for(int j=0;j<4;j++)
        {
            double sum=0;
            for(int k=0;k<2;k++)
            {
                sum += matrix[j][k] * w[k];
        }
        loss += (sum - result[j]) * (sum-result[j]);
     }
        printf("%lf\n",loss);
    }

    system("pause");
    return 0;
}