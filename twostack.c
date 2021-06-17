#include<stdio.h>
struct DoubleStack {
    int pl;
    int pr;
    int *stk;
    int max;
};

int IsFull(struct DoubleStack *s){
    if(s->pl>s->pr) return 1;
    else return 0;
}

int IsEmptyl(struct DoubleStack *s){
    if(s->pl==0) return 1;
    else return 0;
}

int IsEmptyr(struct DoubleStack *s){
    if(s->pr==s->max) return 1;
    else return 0;
}

int pushl(struct DoubleStack *s, int x){
    if (IsFull(s)) return -1;
    s->stk[s->pl] = x;
    s->pl++;
    return 0;
}

int popl(struct DoubleStack *s){
    if (IsEmptyl) return -1;
    else return s->stk[--s->pl];
}

int pushr(struct DoubleStack *s, int x){
    if (IsFull(s)) return -1;
    s->stk[s->pr] = x;
    s->pl--;
    return 0;
}

int popr(struct DoubleStack *s){
    if (IsEmptyr) return -1;
    else return s->stk[++s->pr];
}