
#define MaxSize 100
typedef int ElementType;
typedef struct LNode *List;

struct LNode{
    ElementType Element[MaxSize];
    int Length;
}

//顺序查找,数组升序
int SequentialSearch(List Tbl,ElementType K)//在Element[0]~Element[n]中查找K
{
    int i;
    Tbl->Element[0] = K;    //建立哨兵
    for(i = Tbl->Length; Tbl->Element[i] != K; i--);    //循环至Element[i] = K处结束
    return i;               //找到则返回K的位置，未找到返回0
}


//二分查找,数组升序
int BinarySearch(List Tbl,ElementType K)//在表Tbl中寻找关键字为K的数据元素
{
    int left,right,mid,NoSearch = -1;
    left = 1;               //左边界
    right = Tbl->Length;    //右边界
    while(left<=right)
    {
        mid = (left+right)/2;             //计算中间元素坐标
        if(Tbl->Element[mid] > K)         //K在mid左侧，调整右边界
            right = mid-1;
        else if(Tbl->Element[mid] < K)    //K在mid右侧，调整左边界
            left = mid+1;
        else return mid;
    }
    return NoSearch;    //未找到，返回-1
}