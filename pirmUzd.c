// LSP - 2213783, pastas - povilas.pliuskus@mif.stud.vu.lt
// uzduotis - 1.1
#include<stdio.h>
#include<stdbool.h>

int main()
{
    int sum = 0, numberCount = 0, number = 0, previousNumber = 0;
    bool validation = false;

    printf("Iveskite sveikuju skaiciu seka:\n");
    printf("Sveikasis skaicius: ");
    while (validation == false) {
        if ((scanf("%d", &number)) == 1 && (getchar() == '\n')) {
            numberCount++;
            sum += number;
            previousNumber = number;
            validation = true;
        }
        else {
            printf("Netinkama ivestis! Iveskite sveikaji skaiciu: ");
            while (getchar() != '\n') {

            }
        }
    }

    // Ciklas suksis tol, kol ivestis bus nemazejanti
    while (1) {
        printf("Sveikasis skaicius: ");
        if ((scanf("%d", &number) == 1) && getchar() == '\n') {
            if (number < previousNumber) {
                break;
            }
            else {
                numberCount++;
                sum += number;
                previousNumber = number;
            }
        }
        else {
            printf("Netinkama ivestis! Iveskite sveikaji skaiciu: ");
            while (getchar() != '\n') {

            }
        }
    }
    printf("%s%d\n", "Sekos nariu skaicius: ", numberCount);
    printf("%s%.2f", "Skaiciu aritmetinis vidurkis: ", (sum * 1.0 / numberCount));
}
