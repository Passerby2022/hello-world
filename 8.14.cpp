#include <stdio.h>

int main (void)
{
    char digit_seen[100];
    int i;

    printf("Enter a sentence: ");
    
    for (i = 0; i < 100; i++){      //建立字符数字sen并输入句子
        digit_seen[i] = getchar(); 
        if (digit_seen[i] == '.' || digit_seen[i] == '?' || digit_seen[i] == '!'){
            break;       //遇到句末符号break跳出循环（i++并没有执行），此时i指向末尾的符号 
        }
    }

    int num = i;        //记录下句子的长度，以后用于输出 
    char digit_ch[100];     //建立一个数组用于存改变顺序后的句子 （一个一个单词地复制）
    int over, start;        //start为每次开始复制时的数组下标，over为复制结束时的 
    int j = 0;

    for (i = i - 1; i >= 0; i--, j++){      //从i-1的位置往前找空格，i-1表示先不处理句末符号 
        over = i;       //下次一个单词的复制就从i（i此时已经i-1）处结束 
        while (digit_ch[i] != ' ' && i > 0){        //遇到空格或者i<=0时，停止寻找
            i--;
        }
            start = i + 1;      //开始一个单词的复制，下标应该在空格后一个 
            if (i == 0){
                start--;        //这个if只针对已经复制到原句的第一个单词的情况，start需要从零开始故减1 
            }
            for (; start <= over; start++ , j++){
                digit_ch[j] = digit_seen[start];        //复制单词 
            }
            digit_ch[j] = ' ';      //每个单词后加个空格 
        }
        digit_ch[j - 1] = digit_seen[num];      //之后就是digit_ch数组的输出了！

        printf("Reversal of sentence: ");
        for (int m = 0; m < num + 1; m++){
            printf("%c", digit_ch[m]);
        }


        return 0;

}