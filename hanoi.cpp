#include<iostream>
using namespace std;
int step;
void hanoi(int n, char Orig, char Tem, char Tar);
int main(int argc, char const *argv[])
{
    cout<<"请输入盘子数量"<<endl;
    int disks;
    cin>>disks;
    hanoi(disks,'A','B','C');
    cout<<disks<<" 个盘子, 共移动 "<<step<<" 次"<<endl;
    return 0;
}
void hanoi(int n, char Orig, char Tem, char Tar)
{
    if (n==1)
        step++;//最后一个直接移动
    else
    {
        hanoi(n-1, Orig, Tar, Tem);//
        step++;
        hanoi(n-1, Tem, Orig, Tar);
    }
}
