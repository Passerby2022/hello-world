int Find (int *parent, int f)
{
    while(parent[f] > 0)
    {
        f = parent[f];
    }

    return f;
}

//Kruskal算法生成最小生成树
void MiniSpanTree_Kruskal(MGraph G)
{
    int i, n, m;
    Edge edges[MAGEDGE];        //定义编辑数组
    int parent[MAXVEX];         //定义parent数组用来判断边与边是否形成环路

    for(i = 0; i < G.numVertexes; i++)
    {
        parent[i] = 0;      //初始化parent数组
    }

    for(i = 0; i < G.numVertexes; i++)
    {
        n = Find(parent, edges[i].begin);
        m = Find(parent, edges[i].end);

        if(n != m)      //如果n=m则形成环路，不满足
        {
            parent[n] = m;      //将此边的结尾顶点放入下标为起点的parent数组中，表示此顶点已经在生成树集合中
                                //在顶点的下标位置存放另一个顶点的下标
            printf("(%d, %d) %d", edges[i].begin, edges[i].end, edges[i].weight);
        }
    }
}