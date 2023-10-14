/*
假定有如下独木桥问题：过桥时，同一方向的行人可连续过桥，当某一方有人过桥时，另一方向的行人必须等待；当某一方向无人过桥时，
另一方向的行人可以过桥,桥上最多站5人。试用信号量机制解决。

需要设置几个信号量？分别是互斥信号量还是同步信号量？初值设为多少？并说明设置它们的意义。
写出用信号量机制解决此问题的算法。
*/
typedef int semaphore;

semaphore mutex = 1;    //互斥信号量-独木桥
semaphore SA = 1;       //互斥信号量-实现对CountA的互斥访问
semaphore SB = 1;       //互斥信号量-CountB
semaphore count = 5;	//桥上最多有5人

int CountA = 0;         //A方向行人数量
int CountB = 0;         //B方向行人数量

A方向行人:
Begin 
    P(SA);      
    P(count);           //桥上人数限制信号量 
    CountA++;
    if(CountA == 1)     //左侧第一个准备上桥的人去抢夺独木桥
        P(mutex);
    V(SA);

    P(SA);
    CountA--;
    if(CountA == 0)     //左侧最后一个下桥的人去释放独木桥
        V(mutex);
    V(count);
    V(SA);

END



B方向行人:
Begin 
    P(SB);      
    P(count);           //桥上人数限制信号量 
    CountB++;
    if(CountB == 1)     //右侧第一个准备上桥的人去抢夺独木桥
        P(mutex);
    V(SB);

    P(SB);
    CountB--;
    if(CountB == 0)     //右侧最后一个下桥的人去释放独木桥
        V(mutex);
    V(count);
    V(SB);

END