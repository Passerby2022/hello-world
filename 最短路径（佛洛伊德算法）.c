typedef int Patharc[MAXVEX][MAXVEX];  
typedef int ShortPathTable[MAXVEX][MAXVEX]; 

void ShortestPath_Floyd (MGraph G, Pathmatirx *p, ShortPathTable *D)
{
    int v, w, k;

    //初始化p和D
    for(v = 0; v < G.numVertexes; v++)
    {
        for(w = 0; w < G.numVertexes; w++)
        {
            (*D)[v][w] = G.matirx[v][w];        //将邻接矩阵的所有权值复制到二维数组中
            (*p)[v][w] = w;         //初始化二维数组p为w
        }
    }

    //优美的佛洛伊德算法
    for(k = 0; k < G.numVertexes; k++)
    {
        for(v = 0; v < G.numVertexes; v++)
        {
            for(w = 0; w < G.numVertexes; w++)
            {
                //这里是一种遍历，测试每一个顶点是否能和其他两个顶点组成联系
                //把k作为中介变量进行遍历，如果路径更短就更新
                //如果两个顶点之间无法间接到达，那么中介变量那里会出现无穷
                if((*D)[v][w] > (*D)[v][k] + (*D)[k][w])
                {
                    (*D)[v][w] = (*D)[v][k] + (*D)[k][w];
                    (*p)[v][w] = (*p)[v][k];        //该数组的下标对应顶点的下标，该数组的下标对应的元素位置存放前驱顶点
                }
            }
        }
    }
}