#include <stdio.h>
#include <locale.h>

int mlt(int mmHg, int Pa, int bar);




int main()
{
    setlocale(LC_ALL, "RUS");
    double mmHg, Pa, bar;
    printf("\n--- Вариант 33 (мм рт. ст. → бары, паскали) ---\n");
    printf("Введите давление в мм рт. ст.: ");
    scanf("%lf", &mmHg);

    Pa = mmHg * 133.322;
    bar = Pa / 100000.0;

    printf("Результат: %.3f Па, %.6f бар\n", Pa, bar);

}

int mlt(int mmHg, int Pa, int bar)

{
    int умножение = Pa = mmHg * 133.322;
    int деление = bar = Pa / 10000.0;
    return деление, умножение;

}
