#define MAXVEX 9
#define INFINITY 65535

typedef int Patharc[MAXVEX];        //用于存储最短路径下标的数组，说明Patharc等于int[MAXVEX]类型
typedef int ShortPathTable[MAXVEX];     //用于存储到个点最短路径的权值和，说明ShortPathTable等于int[MAXVEX]类型

//int v0表示要从哪个顶点开始
void ShortestPath_Dijkstar (MGraph G, int v0, Patharc *p, ShortPathTable *D)
{
    int v, w, k, min;
    int final[MAXVEX];      //final[w] = 1表示已经求得顶点v0到vw的最短路径，final[w] = 0表示还没求得顶点v0到vw的最短路径

    //初始化数据
    for(v = 0; i < G.numVertexes; v++)
    {
        final[v] = 0;       //全部顶点初始化为未找到最短路径
        (*D)[v] = G.arc[v0][v];     //将于v0点有连线的顶点加上权值
        (*P)[v] = 0;        //初始化路径数组p为0
    }

    (*D)[v0] = 0;       //v0至v0的路径为0
    final[v0] = 1;      //v0至v0不需要求路径

    //开始主循环，每次求得v0到某个v顶点的最短路径
    for(v = 1; v < G.numVertexes; v++)
    {
        min = INFINITY;
        for(w = 0; w < G.numVertexes; w++)
        {
            if(!final[w] && (*D)[w] < min){
                k = w;
                min = (*D)[w];
            }
        }
        final[k] = 1;       //将目前找到的最近顶点赋值为1

        //修正当前最短路径以及距离
        for(w = 0; w <  G.numVertexes; w++)
        {
            //如果经过v顶点的路径比现在这条路径的长度短的话，更新！
            if(!final[w] && (min + G.arc[k][w] < (*D)[w])){
                (*D)[w] = min + G.arc[k][w];        //修改当前路径长度
                (*p)[w] = k;        //该数组的下标对应顶点的下标，该数组的下标对应的元素位置存放前驱顶点
            }
        }
    }
}