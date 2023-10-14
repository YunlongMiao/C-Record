#include<bits/stdc++.h>
using namespace std;

const int N = 500, M = 1000,INF = 0x3f3f3f3f;

int n,m; //n个结点，m条边
int g[N][N];
int dist[N], p[N]; //p[N]为并查集 ,dist为prim算法中的距离数组
bool st[N];
unordered_map<int, string> d;

//函数声明
//int find(int x);//并查集

void printCityInfo();//打印城市信息
int prim();//普里姆算法
int kruskal();//克鲁斯卡尔算法
void shuru();//输入城市信息

//kruskal算法存边
struct Edge
{
    int a,b,w;

    //重载<运算符
    bool operator< (const Edge &W)const
    {
        return w < W.w;
    }
}edges[M];

//功能1：打印城市信息和城市之间的直接可达距离
void printCityInfo()
{
    cout << "城市的列表如下，共有" << n << "个城市：" << endl;
    for(int i = 1; i <= n; i++)
    {
        cout << "(" << i << ")" << d[i] << "    ";
        if(i % 3 == 0) cout << endl;
    }

    cout << endl;
    for(int i = 0; i < m; i++)
    {
        int a = edges[i].a, b = edges[i].b, w = edges[i].w;

        cout << d[a] << "到" << d[b] << "距离" << w << "万公里" << endl;
    }

}
//prim算法部分
int prim()
{
    //1.dist[i] = 0x3f3f3f3f

    memset(dist, 0x3f, sizeof dist);

    int res = 0; //res存的是最小生成树里所有边的长度之和
    for(int i = 0; i < n; i++)
    {
        //2.每次找到当前集合外的所有点中距离最小的点
        int t = -1;
        for(int j = 1; j <= n; j++)
            if(!st[j] && (t == -1 || dist[t] > dist[j]))
                t = j;

        if(i && dist[t] == INF) return INF; //如果不是第一个点且dist为正无穷,说明当前图是不连通的，即不存在最小生成树
        if(i) res += dist[t]; //如果不是第一条边，则加到res中去

        //3.用t更新其他点到集合的距离
        for(int j = 1; j <= n; j++) dist[j] = min(dist[j], g[t][j]);

        //4.将t加入集合
        st[t] = true;
    }
    return res;
}

//kruskal算法部分
int find(int x) //并查集 + 路径压缩， find函数返回的是x的父结点
{
    if(p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int kruskal()
{
    //1.将所有边按权重大小排序
    sort(edges, edges + m);

    for(int i = 1; i <= n; i++) p[i] = i; //初始化并查集结点编号为1~n;

    //2.枚举每条边a->b，权重为c,如果a,b不连通，则将这条边加入集合中
    int res = 0, cnt = 0;//res存的是最小生成树中每条边的和，cnt存的是最小生成树中的边数
    for(int i = 0; i < m; i++)
    {
        int a = edges[i].a, b= edges[i].b, w = edges[i].w;

        a = find(a), b = find(b);
        if(a != b) //这一步可以自动排除掉回路的情况，因为a=b的话就不会继续在ab之间加边了
        {
            p[a] = b; //并查集的知识，将a加入到b集合中去
            res += w;// 加上该边的权值
            cnt ++; //更新最小生成树中的边数
        }
    }
    if(cnt < n - 1) return INF; //如果最小生成树的边数小于n - 1，说明不连通，距离为无穷大
    return res; //否则返回最小生成树的权重
}


void shuru()
{
    memset(g, 0x3f, sizeof g);//初始化邻接矩阵

    printf("请输入城市数n和边数m：\n");
    scanf("%d%d",&n,&m); //输入城市数和边数：


    //请输入n个城市名称，用空格隔开：
    printf("请输入n个城市名称，用空格隔开：\n");
    for(int i = 1; i <= n; i++)
    {
        string cityname;
        cin >> cityname;
        d[i] = cityname;
    }

    printf("接下来的m行：\n");
    printf("请输入三个整数a,b,w,表示a城市和b城市之间存在一条权值为w的边\n");
    //接下来 m 行，每行包含三个整数 u,v,w，表示点 u 和点 v 之间存在一条权值为 w 的边。
    for(int i = 0; i < m; i ++)
    {
        int a,b,w;
        scanf("%d%d%d",&a,&b,&w);
        g[a][b] = g[b][a] = min(g[a][b], w);//如果用prim算法则用邻接矩阵存，可以处理重边
        edges[i] = {a,b,w};//如果用kruskal算法，则用结构体存
    }
}


int main()
{

    while(1)
    {
        cout << "功能模块：" << endl;
        cout << "1.输入城市信息" << endl;
        cout << "2.打印城市信息和城市之间的直接可达距离" << endl;
        cout << "3.用prim算法求最小生成树并显示最小生成树的代价（如果图不连通输出impossible）" << endl;
        cout << "4.用kruskal算法求最小生成树并显示最小生成树的代价（如果图不连通输出impossible)" << endl;
        cout << "5.退出" << endl;

        while(1)
        {
            cout << "请输入您要使用的功能序号:" << endl;
            //这里巧妙使用string读入数据，再转换成数字，提高程序容错率
            string str;
            cin >> str;
            int num = 0;
            for(int i = 0; i < str.size(); i++)
            {
                int x = str[i] - '0';
                num = num * 10 + x;
            }
            if(num > 6 || num < 1)
            {
                cout << "只能输入1-5之间的数，请重新输入！" << endl;
            }
            else if(num == 1)
            {
                shuru();
                cout << "输入成功，您现在可以使用2,3,4功能查看相应结果！" << endl;
                break;
            }
            else if(num == 2)
            {
                if(n == 0)
                {
                    cout << "您还未输入城市信息，请先输入城市信息！" << endl;
                }
                else
                {
                    printCityInfo();
                    cout << endl;
                }
                break;
            }
            else if(num == 3)
            {
                if(n == 0)
                {
                    cout << "您还未输入城市信息，请先输入城市信息！" << endl;
                }
                else
                {
                    int t = prim();
                    if(t == INF) puts("impossible(图不连通)");
                    else printf("使用Prim算法求得的最小生成树的代价：%d\n", t);
                }
                break;
            }
            else if(num == 4)
            {
                if(n == 0)
                {
                    cout << "您还未输入城市信息，请先输入城市信息！" << endl;
                }
                else
                {
                    int t = kruskal();
                    if(t == INF) puts("impossible(图不连通)");
                    else printf("使用Kruskal算法求得的最小生成树的代价：%d\n", t);
                }
                break;
            }
            else if(num == 5)
            {
                cout << "感谢使用！" << endl;
                return 0;
            }
        }

    }
    return 0;
}
