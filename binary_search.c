#include<stdio.h>
#include<stdlib.h>

int bin_search(int list[], int key, int n) {
    int pl = 0;
    int pr = n-1;
    int pc;

    while (pl <= pr){
        pc = (pl + pr) / 2;
        if (list[pc]==key) return pc;
        else if (list[pc]<key) pl = pc + 1;
        else pr = pc - 1;
    }
    return -1;
}

int main(void) {
    int n, key, i, is_find;

    puts("2分探索");
    printf("要素数：");
    scanf("%d", &n);
    int *p = malloc(sizeof(int) * n);
    printf("昇順に入力．\n");
    printf("p[0]: ");
    scanf("%d", &p[0]);
    for (i=1;i<n;i++){
        while (p[i]<p[i-1]){
            printf("p[%d]: ", i);
            scanf("%d", &p[i]);
        }
    }
    printf("探す値：");
    scanf("%d", &key);

    is_find = bin_search(p, key, n);
    if (is_find==-1)puts("探索に失敗．");
    else printf("%dをp[%d]に確認．\n", key, is_find);
    free(p);
    return 0;
}