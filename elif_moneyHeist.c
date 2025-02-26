#include <stdio.h>

int main() {

    int a, b, c, d, e, f, g, h, i, j;
    scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
    
    int bit1, shift1;
    scanf("%d %d", &bit1, &shift1);
    
    if (bit1 == 0) {
        a = (a + shift1) % 10;
    } 
    else if (bit1 == 1) {
        b = (b + shift1) % 10;
    } 
    else if (bit1 == 2) {
        c = (c + shift1) % 10;
    } 
    else if (bit1 == 3) {
        d = (d + shift1) % 10;
    } 
    else if (bit1 == 4) {
        e = (e + shift1) % 10;
    }
    else if (bit1 == 5) {
        f = (f + shift1) % 10;
    } 
    else if (bit1 == 6) {
        g = (g + shift1) % 10;
    } 
    else if (bit1 == 7) {
        h = (h + shift1) % 10;
    } 
    else if (bit1 == 8) {
        i = (i + shift1) % 10;
    } 
    else if (bit1 == 9) {
        j = (j + shift1) % 10;
    }
    
    
    int bit2, shift2;
scanf("%d %d", &bit2, &shift2);

if (bit2 == 0) {
    a = (a + shift2) % 10;
} 
else if (bit2 == 1) {
    b = (b + shift2) % 10;
} 
else if (bit2 == 2) {
    c = (c + shift2) % 10;
} 
else if (bit2 == 3) {
    d = (d + shift2) % 10;
} 
else if (bit2 == 4) {
    e = (e + shift2) % 10;
}
else if (bit2 == 5) {
    f = (f + shift2) % 10;
} 
else if (bit2 == 6) {
    g = (g + shift2) % 10;
} 
else if (bit2 == 7) {
    h = (h + shift2) % 10;
} 
else if (bit2 == 8) {
    i = (i + shift2) % 10;
} 
else if (bit2 == 9) {
    j = (j + shift2) % 10;
}

    
    int bit3, shift3;
scanf("%d %d", &bit3, &shift3);

if (bit3 == 0) {
    a = (a + shift3) % 10;
} 
else if (bit3 == 1) {
    b = (b + shift3) % 10;
} 
else if (bit3 == 2) {
    c = (c + shift3) % 10;
} 
else if (bit3 == 3) {
    d = (d + shift3) % 10;
} 
else if (bit3 == 4) {
    e = (e + shift3) % 10;
}
else if (bit3 == 5) {
    f = (f + shift3) % 10;
} 
else if (bit3 == 6) {
    g = (g + shift3) % 10;
} 
else if (bit3 == 7) {
    h = (h + shift3) % 10;
} 
else if (bit3 == 8) {
    i = (i + shift3) % 10;
} 
else if (bit3 == 9) {
    j = (j + shift3) % 10;
}
    
    printf("%d %d %d %d %d %d %d %d %d %d", a, b, c, d, e, f, g, h, i, j);

    
    
    

    return 0;
}
