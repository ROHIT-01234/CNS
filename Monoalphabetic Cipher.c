#include<stdio.h>
char monocipher_encr(char);
char monocipher_dencr(char);
char alpha[27][3] = { { 'a', 'q' }, { 'b', 'w' }, { 'c', 'e' }, { 'd', 'r' }, {
        'e', 't' }, { 'f', 'y' }, { 'g', 'u' }, { 'h', 'i' }, { 'i', 'o' }, {
        'j', 'p' }, { 'k', 'a' }, { 'l', 's' }, { 'm', 'd' }, { 'n', 'f' }, {
        'o', 'g' }, { 'p', 'h' }, { 'q', 'j' }, { 'r', 'k' }, { 's', 'l' }, {
        't', 'z' }, { 'u', 'x' }, { 'v', 'c' }, { 'w', 'v' }, { 'x', 'b' }, {
        'y', 'n' }, { 'z', 'm' } }
;
char str[100];
int main() {
    char str[100], str2[100],str3[100];
    int i;
    printf("\n Enter String : ");
    scanf("%s",str);
    for (i = 0; str[i]; i++) {
        str2[i] = monocipher_encr(str[i]);
    }
    for (i = 0; str2[i]; i++) {
        str3[i] = monocipher_dencr(str2[i]);
    }
    
    str2[i] = '\0';
    str3[i] = '\0';
    printf("\n After Encryption : %s\n", str2);
    printf("\n After Decryption : %s\n", str3);
    
}
char monocipher_encr(char a) {
    int i;
    for (i = 0; i < 27; i++) {
        if (a == alpha[i][0])
            break;
    }
    return alpha[i][1];
}

char monocipher_dencr(char a) {
    int i;
    for (i = 0; i < 27; i++) {
        if (a == alpha[i][1])
            break;
    }
    return alpha[i][0];
}
