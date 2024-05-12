#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "temp_functions.h"

int main(int argc, char *argv[]) {

    if (argc == 1 || (argc == 2 && strcmp(argv[1], "-h") == 0)) {
        print_usage();
        return 0;
    }

    char *file_name = NULL;
    int month = 0;


    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-f") == 0) {
            if (i + 1 < argc) {
                file_name = argv[i + 1];
            } else {
                printf("Ошибка: Ожидается имя файла после -f.\n");
                return 1;
            }
        } else if (strcmp(argv[i], "-m") == 0) {
            if (i + 1 < argc) {
                month = atoi(argv[i + 1]);
                if (month < 1 || month > 12) {
                    printf("Ошибка: Некорректный номер месяца.\n");
                    return 1;
                }
            } else {
                printf("Ошибка: Ожидается номер месяца после -m.\n");
                return 1;
            }
        }
    }


    if (file_name != NULL) {
        if (month == 0) {
            process_file(file_name);
        } else {
            process_file_by_month(file_name, month);
        }
    } else {
        printf("Ошибка: Не указан файл для обработки.\n");
        return 1;
    }

    return 0;
}
