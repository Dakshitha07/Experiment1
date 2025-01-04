#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    FILE *file;
    int a, b, c, x = 1;
    int y;
    file = fopen("singleinput.text", "r");
    if (file == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }
    if (fscanf(file, "%d", &a) != 1 ||
        fscanf(file, "%d", &b) != 1 ||
        fscanf(file, "%d", &c) != 1) {
        printf("Error: Failed to read values from file.\n");
        fclose(file);
        return 1;
    }
    fclose(file);
    y = a * pow(x, 2) + b * x + c;
    if (y) {
        printf("The model's prediction if it 'Rains' tomorrow is %d%%\n", y);
    } else {
        printf("Unknown error occured\n");
    }
    return 0;
}
