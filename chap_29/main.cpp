int main(
    int x = 123;

    int *p = &x;

    int **pp = &p;

    int value1 = **p;

    int y = 456;

    *pp = &y;

    int value2 = **p;


)
