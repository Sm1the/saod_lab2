#include <iostream>
#include <stdio.h>

//Константа массива
const  int sizeMassive = 10;
int mainMassive[sizeMassive];
int comparison, transfer = 0;
int M,C = 0;

//Метод прямой сортировки
void SelectSort(int *number, int size){
    int minElement, temp;
    for (int i = 0; i < size - 1; i++)
    {
        minElement = i; //Получаем индект текущего элемента
        // ищем минимальный элемент чтобы заменить его на место i
        for (int j = i + 1; j < size; j++)
        {
            comparison++; // инкремент сравнений
            if (number[j] < number[minElement])
                 minElement = j;
        }
        // меняем местами i и минимальный элементы
        temp = number[i];
        number[i] = number[minElement];
        number[minElement] = temp;
        transfer++; // инкремент пересылок
    }
}

//Метод из 1 лабораторной работы
void FillRand(int massive[]) {
    for (int i = 0; i < sizeMassive; i++) {
        massive[i] = rand() % 100;
    }
}
//Метод из 1 лабораторной работы
void PrintMas(int massive[]) {
    for (int i = 0; i < sizeMassive; i++) {
        printf_s(" %d",massive[i]);
    }
}

void RunNumber(int massive[]) {
  int number=0;
  for (int i = 0; i < sizeMassive; i++) {
    if (massive[i] > (massive[i+1])) {
      number = number + 1;
    }
  }
  printf("\n Seriya v massive : %d", number);
}

void CheckSum(int massive[]) {
  int count_A = 0;
  for (int i = 0; i < sizeMassive; i++) {
    count_A += massive[i];
  }
  printf_s("\n Kontrolnaya symma %d",count_A);
}

int main() {
    M = 3 * (sizeMassive-1);
    C = ((sizeMassive*sizeMassive)-sizeMassive)/2;
    FillRand(mainMassive);
    PrintMas(mainMassive);
    CheckSum(mainMassive);
    RunNumber(mainMassive);
    printf("\n");
    SelectSort(mainMassive,sizeMassive);
    PrintMas(mainMassive);
    CheckSum(mainMassive);
    RunNumber(mainMassive);
    printf("\n Kol-vo sravneniy %d \n Kol-vo peresilok %d",comparison ,transfer*3);
    printf("\n Po formyle M = %d, C = %d",M,C);

}
