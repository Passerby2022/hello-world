void MinSpanTree_Prim(MGrap G)
{
    int min, i, j, k;
    int adjvex[MAXVEX];     //保存相关顶点下标
    int lowcost[MAXVEX];        //保存相关顶点间边的权值

    lowcost[0] = 0;     //v0作为最小生成树的根开始遍历，权值为0
    adjvex[0] = 0;      //v0第一个加入

    //初始化操作，从第0行开始
    for(i = 1; i < G.numVertexes; i++)
    {
        lowcost[i] = G.arc[0][i];       //将邻接矩阵第0行所有权值先加入数组
        adjvex[i] = 0;      //初始化全部先为v0的下标
    }

    //真正构建最小生成树的过程
    for(i = 1; i < G.numVertexes; i++)
    {
        min = INFINITY;     //初始化最小权值为65535等不可能的数值
        j = 1;
        k = 0;

        //遍历全部顶点，除了根结点之外的顶点
        while(j < G.numVertexes)
        {
            //找出lowcost数组已存储的最小权值
            //lowcost[j] != 0不同顶点之间连线的值，而不是顶点自身连线的值
            if(lowcost[j] != 0 && lowcost[j] < min){
                min = lowcost[j];       
                k = j;      //将发现的最小权值的下标存入k，以待使用
            }
            j++;        //迭代循环遍历
        }

        //打印当前顶点边中权值最小的边
        printf("(%d,%d)", adjvex[k], k);        //adjvex[k]存放上一个顶点的下标，k存放当前顶点的下标
        lowcost[k] = 0;     //将当前顶点的权值设置为0，表示此顶点已经完成任务，进行下一个顶点的遍历

        //邻接矩阵k行逐个遍历全部顶点
        for(j = 1; j < G.numVertexes; j++)
        {
            if(lowcost[j] != 0 && < lowcost[j] > G.art[k][j]){        //该行和上一行的权值进行比较交换
                lowcost[j] = G.art[k][j];
                adjvex[j] = k;      //将当前顶点的下标存入每一个进行了交换权值的位置
            }
        }
    }
}