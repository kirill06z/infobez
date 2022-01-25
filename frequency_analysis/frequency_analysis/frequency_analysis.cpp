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

int quen_symb = 0;
int alf_num[32];
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
/*void perevod() {
    


    for (int t = 0; t < 32; t++) {
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
}*/
  
  // добавить в 52 строку счетчик для подсчетов символов тексте (symb) 
//добавить конечный файл текста text2;
// добавить alf_num1 для сохранение оригинального порядка
alf_pop[]="оеаинтсрвлкмдпуяыьгзбчйхжшюцщэфёъ"
char pop_num[32];
void perevod(){

for (int t=0;t<33;t++);
{  for(int j;j<33;j++){
   if(alf_num1[t]<alf_num[j]) alf_num1[t] = alf_num[j];

}
pop_num[t]+=alf_num1[t];
alf_num1[t]=0;
}
cout<<pop_num;
// по идее получим числа в порядке убывания
// и теперь надо сделать цикл для перевода одного символа в другой
for (int t=0; t<symb; t++){
   for (int n=0; n<33;n++){
    if (text[t]==alf[n]){
     for(int x=0;x<32;x++){
      if(alf_num[n]==num_pop[x])text2[t]=alf_pop[x];
      }
  
    }
   }
}
cout<<text2;
}
