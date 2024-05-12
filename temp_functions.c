#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "temp_functions.h"


typedef struct {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int temperature;
} TemperatureData;


void print_usage() {
    printf("Программа для анализа статистики температуры.\n");
    printf("Использование:\n");
    printf("report -h\t\tВывести информацию о ключах запуска.\n");
    printf("report -f <file_name>\t\tУказать файл для обработки.\n");
    printf("report -f <file_name> -m <month>\t\tУказать файл и месяц для получения статистики по конкретному месяцу.\n");
}


void process_file(char *file_name) {

    printf("Обработка файла: %s\n", file_name);
}


void process_file_by_month(char *file_name, int month) {

    printf("Обработка файла: %s для месяца %d\n", file_name, month);
}
