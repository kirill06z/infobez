// Цезарь.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

    #include <iostream>
    #include <clocale>
    #include <cstdlib>
 
    #include <windows.h>


using namespace std;

char alf[] = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя ";
char alf1[33];
char alf2[33];//алфавит шифра
char mess[256];// текст
char mess1[256];//зашифрованный текст
int keystep;// запись шага
char key1 [33];//запись ключа
int t;
int c;
int n;
int test;
void cezar1(); //Шифр Цезаря (шаг+ключ)
void cezar2(); //Шифр Цезаря (ключ)


int main()
{
    cezar1();//УДАЛИТЬ
    setlocale(LC_ALL, "RUS");
   /* int mode = 0;
    cout << "Выбире режим шифрования:" << endl;
    cout << "1.Шифр Цезаря (шаг+ключ)" << endl;
    cout << "2.Шифр Цезаря (модифицированный)" << endl;
    cin >> mode;
    if (mode==1) {
        cout << "**Режим 2:Шифр Цезаря (шаг+ключ)**" << endl;
        cezar1 ();
    }
    if(mode==2){
        cout << "**Режим 2:Шифр Цезаря (ключ)**" << endl;
    }*/
}

void cezar1() {
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Введите текст для зашифровки: " << endl;
   cin.getline(mess,256);

    cout << "Введите шаг: ";
    cin >> keystep;

    cout << "Введите кодовое слово (без повторения и не больше 32 символов): ";
    cin >> key1;
    int povtor = 0;
    for (int a=0; a < 33;a++) {
        if (key1[a]=='\0') {
            break;
        }
        povtor = 0;
        for (int b = 0; b < 33;b++) {
            if (key1[a]==key1[b]) {
                povtor++;
                if (povtor > 1) {
                    cout << "Читать умеешь, написанно же, СЛОВО БЕЗ ПОВТОРА БУКВ! За это начинай с начало." << endl;
                    cezar1();
                }
            }
        }
    }
    /*Формируем новый алфавит (alf1), без букв входящих в состав ключа*/
    for (int i = 0; i < 33; i++) {// берет букву из алфавита
        for (int d = 0; d < 32; d++) {//букву из ключа
            c = 0;
            if (key1[d] == alf[i]) {
                c++;
                break;
            }
        }
        if (c == 1) {
        }
        else {
            alf1[i] = alf[i];
        }
    }  
    n = 0;
    test = 0;
    /*Преобразуем alf1 в alf2 доюавляя в алфавит сдвиг и ключ*/
    for (t = 0; t < 33; t++) {
        

        if (key1[t] != '\0') {//вводим ключ в новый алфавит со сдвигом
            alf2[t + keystep] = key1[t];
            test++;
      
        }
        if (key1[t] == '\0') {
            if (alf1[t-test+n] == '\0') {
                n = n + 1;
                alf2[t + keystep] = alf1[t - test+n];
               
            }
            if (t + keystep >= 33) {
                alf2[t + keystep - 33] = alf1[t -test + n];
                
            }
            else {//проверка массива alf2 на схожие элементы с массивом key1
                alf2[t + keystep] = alf1[t - test + n];

            }

        }
       
    }

   /*Преобразуем сообщение по новому алфавиту */
    for (t = 0; t < 256;t++) {
        for (int r = 0; r < 33; r++) {
            if (mess[t]==alf[r]) {
                mess1[t] = alf2[r];
            }
        }
        if (mess[t]=='\0') {
           
            if(mess[t+1]=='\0'){
                
                break;
                
            }
        }
    }
    cout << alf << endl;
    cout << alf2 << endl;
   
   
       for (t = 0; t < 256; t++) {

           cout << mess1[t];
           if (mess1[t] == '\0') {
               cout << " ";

               if (mess[t + 1] == '\0') {
                   break;
               }
           }
       }
}

void cezar2() {
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Введите текст для зашифровки: " << endl;
    cin >> mess;

    cout << "Введите кодовое слово : ";
    cin >> key1;
    //Посчитать кол-во элементов в массиве mess1.

    //посчитать кол во элементов массива key1

    //Задаем в массив INT(длинна равна кол во элементов) адреса букв в алфавите для СООБЩЕНИЯ

    //Задаем в массив INT(длинна равна кол во элементов) адреса букв в алфавите для ключа

    //Цикл по сложению чисел 

    //перевод int символы из алфавита и запись их в char mess2
}