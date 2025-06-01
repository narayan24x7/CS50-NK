#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void xor_encrypt_decrypt(const char *inputFile, const char *outputFile, const char *key) {
    FILE *fin = fopen(inputFile, "rb");
    if (fin == NULL) {
        perror("Error opening input file");
        exit(EXIT_FAILURE);
    }

    FILE *fout = fopen(outputFile, "wb");
    if (fout == NULL) {
        perror("Error opening output file");
        fclose(fin);
        exit(EXIT_FAILURE);
    }

    size_t keyLen = strlen(key);
    size_t i = 0;
    int byte;

    while ((byte = fgetc(fin)) != EOF) {
        fputc(byte ^ key[i % keyLen], fout);
        i++;
    }

    fclose(fin);
    fclose(fout);
}

void print_usage(const char *progName) {
    printf("Usage: %s <encrypt/decrypt> <input_file> <output_file> <key>\n", progName);
}

int main(int argc, char *argv[]) {
    if (argc != 5) {
        print_usage(argv[0]);
        return EXIT_FAILURE;
    }

    const char *operation = argv[1];
    const char *inputFile = argv[2];
    const char *outputFile = argv[3];
    const char *key = argv[4];

    if (strcmp(operation, "encrypt") == 0 || strcmp(operation, "decrypt") == 0) {
        xor_encrypt_decrypt(inputFile, outputFile, key);
        printf("%s operation completed successfully.\n", operation);
    } else {
        print_usage(argv[0]);
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
