#include<stdio.h>


/*****************************************
 * スタックの問題
 * 再帰で渡す部分配列はメモリ中に確保されていない
******************************************/


// int *QuickSort(int *array){
//     int pivot, array1[10], array2[10], i;
//     int c1=0, c2=0, *p;

//     if(sizeof(array)<=1) return array;
//     pivot = array[0];
//     if(pivot < array[1]) pivot = array[1];

//     for(i=0;i<sizeof(array);i++){
//         if(pivot<array[i]){
//             array1[c1] = array[i];
//             c1++;
//         }else{
//             array2[c2] = array[i];
//             c2++;
//         }
//     }
//     QuickSort(array1);
//     QuickSort(array2);
//     p = array1;
//     for(i=0;i<c1;i++){
//         array[i] = p[i];
//     }
//     p = array2;
//     for(i=0;i<c2;i++){
//         array[i+c1] = p[i];
//     }
//     while(*p){
//         printf("%d", *p);
//         p++;
//     }
//     return array;
// }

void swap(int A[], int l, int r){
    int x;
    x = A[l];
    A[l] = A[r];
    A[r] = x;
    return;
}

int partition(int A[], int l, int r, int pivot){
    while(1){
        while(A[l]<pivot) l++;
        while(A[r]>=pivot) r--;
        if(l>=r) return l;
        swap(A, l, r);
    }
}

void QuickSort(int array[], int l, int r){
    if(r<=l || l<0) return;

    int pivot, k;

    pivot = array[l];
    if(pivot < array[l+1]) pivot = array[l+1];

    k = partition(array, l, r, pivot);
    // printf("k: %d\n", k);
    if(k>0) QuickSort(array, l, k-1);
    QuickSort(array, k, r);
    return;
}

int main(void){
    int array[10] = {5, 6, 3, 9, 2, 4, 8, 7}, i;

    QuickSort(array, 0, 7);
    for(i=0;i<8;i++) printf("%d", array[i]);
    printf("\n");
    return 0;
}