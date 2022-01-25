// frequency_analysis.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <ctype.h>

using namespace std;
  
char text[1000];
char text_reg[1000];
char alf[] = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя";
char txt[1000];
char n[32];
char alf_pop[] = "оеаинтсрвлкмдпуяыьгзбчйхжшюцщэфёъ";
int symb;
int pop_num[33];

int quen_symb = 0;
int alf_num[33];
int alf_num1[33];
int i=0;
void raschet();
void podschet();
void perevod();

int main()
{
    raschet();
   
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

   
    setlocale(LC_ALL, "Russian");
  
       
        
        for (int h = 0; h < 1000;h++) {
            text[h] = tolower(text[h]);
            cout << text[h];
        }
        
    podschet();
    cout << "zapusk perevod";
    perevod();
}

void raschet() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
   
    cout << "Введите текст" << endl;
    cin.getline(text, 1000);
    while (1) {
        symb++;
        if (text[i] != '\0') {
            if (text[i] == ' ' || text[i] == ',' || text[i] == '.' || text[i]=='!' || text[i]=='?') {
                i++;
            }

            else {
                quen_symb++;
                i++;
            }
        }
        
        else { cout << "!"<<endl; break; }
    }
    cout << quen_symb;
    
}

void podschet() {
    int t = 0;
    while (text[t] != '\0') {
        for (int x = 0; x < 33; x++) {
            if (text[t]==alf[x]) {
                alf_num[x] = alf_num[x] + 1;

            }
        }
       
        
        t++;

 }
   for (int x = 0; x < 33; x++) {
        cout <<alf[x]<< alf_num[x]<<endl;
    }
  
}
void perevod() {



    /*  for (int t = 0; t < 33; t++) {
          int maxj = 0;
          for (int j = 0; j < 1000; j++) {
              if (alf_num[maxj] < alf_num[j]) alf_num[maxj] = alf_num[j];

          }
          n[t] += alf_num[maxj];
          alf_num[maxj] = -1;
          cout << n[t];
      }

      /*int t = 0;
      for (int k = 0;k<32;k++) {
          for (int a = 0; a < 32;a++) {


          }

      }
      /*while (text[t] != '\0') {
          for (int x = 0; x < 32; x++) {

          }
          t++;
      }*/
      // добавить в 52 строку счетчик для подсчетов символов тексте (symb) 
  //добавить конечный файл текста text2;
  // добавить alf_num1 для сохранение оригинального порядка
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251); 

    for (int s = 0; s < 33; s++) {
        alf_num1[s] = alf_num[s]; 
        cout << alf_num1[s];
        
    }
  cout << endl;
   
  int num = 0;
  int o = 0;
        for ( int t = 0; t < 33; t++)
        {
            num = alf_num1[t];
            for (int j=0; j < 33; j++) {
           
                if (num < alf_num1[j]) {
                   num = alf_num1[j];
                   o = j;
                }
        }
        //cout << t;
        pop_num[t] += num;
        alf_num1[o] = -1;
       cout << pop_num[t]<<" ";
        }
      
        
        // по идее получим числа в порядке убывания
        // и теперь надо сделать цикл для перевода одного символа в другой
        
        for (int t = 0; t < symb; t++) {
           
            for (int n = 0; n < 33; n++) {
                if (text[t] == alf[n]) {
                    for (int x = 0; x < 32; x++) {
                        if (alf_num[n] == pop_num[x])txt[t] = alf_pop[x];
                    }

                }
            }
            cout <<txt[t];
        }
       
       // cout << symb;
}