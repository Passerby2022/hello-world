#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <direct.h>

#define LEN sizeof(struct student)
#define FORMAT "%-8d%-15s%-12.1lf%-12.1lf%-12.1lf%-12.1lf\n"
#define DATA stu[i].num, stu[i].name, stu[i].elec, stu[i].expe, stu[i].requ, stu[i].sum

void in();
void show();
void order();
void del();
void modify();
void menu();
void insert();
void total();
void search();

struct student
{
    int num;
    char name[15];
    double elec;
    double expe;
    double requ;
    double sum;
}stu[50];

int main (void)
{
    system("color, f0\n");
    int n;
    menu();
    scanf("%d", &n);

    while(n)
    {
        switch(n)
        {
            case 1:
                in();
                break;
            case 2:
                search();
                break;
            case 3:
                del();
                break;
            case 4:
                modify();
                break;
            case 5:
                insert();
                break;
            case 6:
                order();
                break;
            case 7:
                total();
                break;
            case 8:
                show();
                break;
            default:
                break;
        }
        getch();
        menu();                     //执行完功能再次显示菜单界面，进行下一步操作
        scanf("%d", &n);
    }

    return 0;
}

void menu()
{
    system("cls");
    printf("\n\n\n\n");
    printf("\t\t|---------------学生信息管理系统---------------|\n");
    printf("\t\t|\t\t\t\t\t |\n");
    printf("\t\t|\t\t1. 录入学生信息\t  |\n");
    printf("\t\t|\t\t2. 查找学生信息\t  |\n");
    printf("\t\t|\t\t3. 删除学生信息\t  |\n");
    printf("\t\t|\t\t4. 修改学生信息\t  |\n");
    printf("\t\t|\t\t5. 插入学生信息\t  |\n");
    printf("\t\t|\t\t6. 排序\t\t    |\n");
    printf("\t\t|\t\t7. 统计学生总数\t  |\n");
    printf("\t\t|\t\t8. 显示所有学生信息\t  |\n");
    printf("\t\t|\t\t0. 退出系统\t\t    |\n");
    printf("\t\t|\t\t\t\t\t |\n");
    printf("\t\t|---------------学生信息管理系统---------------|\n");
    printf("\t\t\t请选择(0~8):");
}

//录入学生信息
void in()
{
    int i, m = 0;
    char ch[2];
    FILE *fp;

    if((fp = fopen("data.txt", "a+")) == NULL){
        printf("文件不存在\n");
        return;
    }

    while(!feof(fp))
    {
        if(fread(&stu[m], LEN, 1, fp) == 1){
            m++;
        }
    }
    fclose(fp);

    if(m == 0){
        printf("文件中没有记录\n");
    }else{
        show();                 //调用show函数显示原有内容
    }
    
    if((fp = fopen("data.txt", "wb")) == NULL){
        printf("cannot open file\n");
        return;
    }

    printf("请输入学生信息(y/n):");
    scanf("%s", ch);

    while(strcmp(ch, "Y") == 0 || strcmp(ch, "y") == 0)
    {
        printf("number:");
        scanf("%d", &stu[m].num);
        for(i = 0; i < m; i++)
        {
            if(stu[m].num == stu[i].num){
                printf("number已经存在了,请按任意键继续");
                getch();
                fclose(fp);
                return;
            }
        }

        printf("name:");
        scanf("%s", &stu[m].name);
        printf("elective:");
        scanf("%lf", &stu[m].elec);
        printf("experiment:");
        scanf("%lf", &stu[m].expe);
        printf("required course:");
        scanf("%lf", &stu[m].requ);

        stu[m].sum = stu[m].elec + stu[m].expe + stu[m].requ;

        if(fwrite(&stu[m], LEN, 1, fp) != 1){
            printf("不能保存");
            getch();
        }else{
            printf("%s 被保存!\n", stu[m].name);
            m++;
        }

        printf("继续(y/n):");
        scanf("%s", ch);
    }

    fclose(fp);
    printf("OK!\n");
} 

//查找学生信息
void search()
{
    FILE *fp;
    int snum, i, m = 0;

    if((fp = fopen("data.txt", "rb")) == NULL){
        printf("文件不存在\n");
        return;
    }

    while(!feof(fp))
    {
        if(fread(&stu[m], LEN, 1, fp) == 1){
            m++;
        }
    }

    fclose(fp);

    if(m == 0){
        printf("文件中没有记录!\n");
        return;
    }

    printf("请输入number:");
    scanf("%d", &snum);

    for(i = 0; i < m; i++)
    {
       if(snum == stu[i].num){
            printf("number   name        elective    experiment  required    sum\t\n");
            printf(FORMAT,DATA);
            break;
        } 
    }

    if(i == m){
        printf("没有找到这名学生!\n");
    }
}

//删除学生信息
void del()
{
    FILE *fp;
    int snum, i, j, m = 0;
    char ch[2];

    if((fp = fopen("data.txt", "r+")) == NULL){
        printf("文件不存在!\n");
        return;
    }

    while(!feof(fp))
    {
        if(fread(&stu[m], LEN, 1, fp) == 1){
            m++;
        }
    }

    fclose(fp);

    if(m == 0){
        printf("文件中没有记录!\n");
        return;
    }

    printf("请输入学生学号:");
    scanf("%d", &snum);

    for(i = 0; i < m; i++)
    {
        if(snum == stu[i].num){
            printf("找到了这条记录,是否删除?(y/n)");
            scanf("%s", ch);

            if(strcmp(ch, "Y") == 0 || strcmp(ch, "y") == 0){
                for(j = i; j < m; j++)
                {
                    stu[j] = stu[j + 1];
                }
                m--;

                if((fp = fopen("data.txt", "wb")) == NULL){
                    printf("文件不存在\n");
                    return;
                }

                for(j = 0; j < m; j++)
                {
                    if(fwrite(&stu[j], LEN, 1, fp) != 1){
                        printf("can not save!\n");
                        getch();
                    }   
                }

                fclose(fp);
                printf("删除成功!\n");
            }else{
                printf("找到记录,选择不删除!");
            }
            break;
        }
    }

    if(i == m){
        printf("没有找到这名学生!\n");
    }
}

//修改学生信息
void modify()
{
    FILE *fp;
    struct student t;
    int i = 0, j = 0, m = 0, snum;

    if((fp = fopen("data.txt", "r+")) == NULL){
        printf("文件不存在!\n");
        return;
    }

    while(!feof(fp))
    {
        if(fread(&stu[m], LEN, 1, fp) == 1){
            m++;
        }
    }

    if(m == 0){
        printf("文件中没有记录!\n");
        fclose(fp);
        return;
    }

    show();
    printf("请输入要修改的学生number:");
    scanf("%d", &snum);

    for(i = 0; i < m; i++)
    {
        if(snum == stu[i].num){
            printf("找到了这名学生,可以西域该他的信息!\n");
            printf("name:");
            scanf("%s", &stu[i].name);
            printf("elective:");
            scanf("%lf", &stu[i].elec);
            printf("experiment:");
            scanf("%lf", &stu[i].expe);
            printf("required course:");
            scanf("%lf", &stu[i].requ);
            printf("修改成功!");
            stu[i].sum = stu[i].elec + stu[i].expe + stu[i].requ;

            if((fp = fopen("data.txt", "wb")) == NULL){
                printf("不能打开文件\n");
                return;
            }

            for(i = 0; i < m; i++)
            {
                if(fwrite(&stu[m], LEN, 1, fp) != 1){
                    printf("不能保存文件\n");
                    getch();
                }
            }

            fclose(fp);
            break;
        }
    }

    if(m == i){
        printf("没有找到这名学生!\n");
    }
}

//插入学生信息
void insert()
{
    FILE *fp;
    int i, j, k, m = 0, snum;

    if((fp = fopen("data.txt", "r+")) == NULL){
        printf("文件不存在!\n");
        return;
    }

    while(!feof(fp))
    {
        if(fread(&stu[m], LEN, 1, fp) == 1){
            m++;
        }
    }

    if(m == 0){
        printf("文件中没有记录!\n");
        fclose(fp);
        return;
    }

    printf("请输入要插入的位置(number):");
    scanf("%d", &snum);

    for(i = 0; i < m; i++)
    {
        if(snum == stu[i].num){
            break;
        }
        for(j = m - 1; j > i; j--)
        {
            stu[j + 1] = stu[j];
        }
    }

    printf("现在请输入要插入的学生信息\n");
    printf("number:");
    scanf("%d", &stu[i + 1].num);

    for(k = 0; k < m; k++)
    {
        if(stu[k].num == stu[m].num){
            printf("number已经存在,按任意键继续!");
            getch();
            fclose(fp);
            return;
        }
    }

    printf("name:");
    scanf("%s", &stu[i + 1].name);
    printf("elective:");
    scanf("%lf", &stu[i + 1].elec);
    printf("experiment:");
    scanf("%lf", &stu[i + 1].expe);
    printf("required course:");
    scanf("%lf", &stu[i + 1].requ);
    stu[i + 1].sum = stu[i + 1].elec + stu[i + 1].expe + stu[i + 1].requ;

    printf("插入成功!按任意键返回主界面!");

    if((fp = fopen("data.txt", "wb")) == NULL){
        printf("不能打开!\n");
        return;
    }
    for(k = 0; k <= m; k++){
        if(fwrite(&stu[k], LEN, 1, fp) != 1){
            printf("不能保存!");
            getch();
        }
    }

    fclose(fp);
}

//学生成绩排名
void order()
{
    FILE *fp;
    //struct student t;
    double t;
    int i = 0, j = 0, m = 0;

    if((fp = fopen("data.txt", "r+")) == NULL){
        printf("文件不存在!\n");
        return;
    }

    while(!feof(fp))
    {
        if(fread(&stu[m], LEN, 1, fp) == 1){
            m++;
        }
    }
    fclose(fp);

    if(m == 0){
        printf("文件中没有记录!\n");
        return;
    }

    if((fp = fopen("data.txt", "wb")) == NULL){
        printf("文件不存在!\n");
        return;
    }

    for(i = 0; i < m - 1; i++)
    {
        for(j = i + 1; j < m; j++)
        {
            if(stu[i].sum < stu[j].sum){
                t = stu[i].sum;
                stu[i].sum = stu[j].sum;
                stu[j].sum = t;
            }
        }
    }

    if((fp = fopen("data.txt", "wb")) == NULL){
        printf("文件不存在!\n");
        return;
    }

    for(i = 0; i < m; i++)
    {
        if(fwrite(&stu[m], LEN, 1, fp) != 1){
            printf("%s不能保存文件!\n");
            getch();
        }
    }

    fclose(fp);
    printf("保存成功\n");
    //show();
}

//统计学生总数
void total()
{
    FILE *fp;
    int m = 0;
    if((fp = fopen("data.txt", "r+")) == NULL){
        printf("文件不存在!\n");
        return;
    }

    while(!feof(fp))
    {
        if(fread(&stu[m], LEN, 1, fp) == 1){
            m++;
        }
    }

    if(m == 0){
        printf("文件无内容!\n");
        fclose(fp);
        return;
    }

    printf("这个班级一共有%d名学生\n", m);
    fclose(fp);
}

//显示所有学生信息
void show()
{
    FILE *fp;
    int i, m = 0;
    
    fp = fopen("data.txt", "rb");
    while(!feof(fp))
    {
        if(fread(&stu[m], LEN, 1, fp) == 1){
            m++;
        }
    }

    fclose(fp);
    printf("number  name        elective    experiment  required    sum\t\n");

    for(i = 0; i < m; i++)
    {
        printf(FORMAT,DATA);
    }
}