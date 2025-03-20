#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    FILE *file;
    FILE *output;
    int a, b, c, x = 0, y;
    int y_values[10];
    int x_values[10];  
    int count = 0;
    for (int i = 0; i < 10; i++) {
        x_values[i] = i + 1;
    }
    file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open the input file.\n");
        return 1;
    }
    output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Error: Could not open the output file.Try again\n");
        fclose(file);
        return 1;
    }
    while (fscanf(file, "%d %d %d", &a, &b, &c) == 3) {
        y = a * pow(x, 2) + b * x + c;
        if (y) {
            printf("The model's prediction if it 'Rains' tomorrow is %d%%\n", y);
            fprintf(output, "Dataset %d: y = %d%%\n", count + 1, y);
            y_values[count] = y;
        } else {
            printf("Some error has occurred, contact developer\n");
            fprintf(output, "Dataset %d: Error occurred \n", count + 1);
            y_values[count] = 0;  
        }
        count++;
        if (count >= 10) break;  
    }
    fclose(file);
    fclose(output);
    printf("Results have been written to 'output.txt'.\n");
    printf("You can use Python or another tool to plot the data.\n");
    return 0;
}
