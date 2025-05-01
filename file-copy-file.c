#include <stdio.h>

int main() {
    char source[100], dest[100];
    printf("Enter source file name: ");
    scanf("%s", source);
    printf("Enter destination file name: ");
    scanf("%s", dest);
    
    FILE *fp1 = fopen(source, "r");
    if (fp1 == NULL) {
        printf("Cannot open source file.\n");
        return 1;
    }
    
    FILE *fp2 = fopen(dest, "w");
    if (fp2 == NULL) {
        printf("Cannot open destination file.\n");
        fclose(fp1);
        return 1;
    }
    
    char ch;
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }
    
    fclose(fp1);
    fclose(fp2);
    printf("File copied successfully.\n");
    
    return 0;
}