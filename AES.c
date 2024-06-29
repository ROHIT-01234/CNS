#include <stdio.h>
#include <string.h>
#include <openssl/aes.h>
#include <openssl/rand.h>

int main() {

    unsigned char key[AES_BLOCK_SIZE] = {'k', 'e', 'y', '1', '2', '3', '4', '5', '6', '7', '8', '9', '1', '0', '1', '1'};
    unsigned char iv[AES_BLOCK_SIZE] = {'i', 'v', '1', '2', '3', '4', '5', '6', '7', '8', '9', '1', '0', '1', '1', '1'};
    

    unsigned char plainText[] = "BLACKBOARDWHITEX";
    int plainTextLength = strlen((char *)plainText);


    unsigned char cipherText[plainTextLength + AES_BLOCK_SIZE];


    AES_KEY aesKey;
    AES_set_encrypt_key(key, 128, &aesKey);
    AES_cbc_encrypt(plainText, cipherText, plainTextLength, &aesKey, iv, AES_ENCRYPT);


    printf("Encrypted Text: ");
    for (int i = 0; i < plainTextLength+AES_BLOCK_SIZE; ++i) {
        printf("%02x", cipherText[i]);
    }
    printf("\n");

    return 0;
}
