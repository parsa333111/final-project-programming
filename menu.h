#include <stdio.h>

void print_first_menu() {
    system("cls");
    printf("Welcome to mr.jack\n");
    printf("1)start new game\n2)load\n3)create custom map\n4)exit\nenter number: ");
}

void print_custom_map_menu() {
    system("cls");
    printf("Select your custom map number in range of 1 and 9\n");
    printf("10)back\n");
    printf("select your custom map your previous data in your selected custom map may lost: ");
}

void print_start_new_game_map() {
    system("cls");
    printf("choose your game map in range [1, 9] or enter 0 for default map\n");
    printf("10)back\n");
}

void print_load_game_map() {
    system("cls");
    printf("choose your saved game number in range [1, 9]\n");
    printf("10)back\n");
}
