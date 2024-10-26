// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() 
// {
//  char ch;
//     char s[20], sen[100];
//     scanf("%c", &ch);
//     scanf("%s", s);
//     scanf("\n");
//     scanf("%[^\n]%*c", sen);
//     printf("%c\n", ch);
//     printf("%s\n", s);
//     printf("%s\n", sen);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {
// 	int a,b;
//     float c,d;
//     scanf("%d%d",&a,&b);
//     scanf("%f%f",&c,&d);
//     printf("%d %d",a+b,a-b);
//     printf("\n");
//     printf("%.1f %.1f",c+d,c-d);
    
//     return 0;
// }

// #include <stdio.h>
// int max_of_four(int a, int b, int c, int d)
// {
//     int m1,m2;
//     return (m1=a>b?a:b)>(m2=c>d?c:d)?m1:m2;
// }

// int main() {
//     int a, b, c, d;
//     scanf("%d %d %d %d", &a, &b, &c, &d);
//     int ans = max_of_four(a, b, c, d);
//     printf("\n%d", ans);
    
//     return 0;
// }

#include <stdio.h>

void update(int *a,int *b) {
    int add, sub;
    add = *a + *b;
    if (*a > *b) {
        sub = *a - *b;
    }
    else sub = *b - *a;
    *a = add;
    *b = sub;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}