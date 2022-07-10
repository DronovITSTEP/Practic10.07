#include <iostream>
#include <Windows.h>

using namespace std;

/*
//ДЗ - неделя 8. Задание 2

Написать игру «Кубики». Пользователь и компьютер по
очереди бросают 2 кубика. Победитель — тот, у кого по резуль-
татам трех бросков сумма больше. Предусмотреть красивый
интерфейс игры.


//отображение кубиков
void showCube(int a) {
	switch (a) {
	case 1:
		cout << "*******\n";
		cout << "*     *\n";
		cout << "*     *\n";
		cout << "*  *  *\n";
		cout << "*     *\n";
		cout << "*     *\n";
		cout << "*******\n";
		break;
	case 2:
		cout << "*******\n";
		cout << "*     *\n";
		cout << "*  *  *\n";
		cout << "*     *\n";
		cout << "*  *  *\n";
		cout << "*     *\n";
		cout << "*******\n";
		break;
	case 3:
		cout << "*******\n";
		cout << "*     *\n";
		cout << "*  *  *\n";
		cout << "*  *  *\n";
		cout << "*  *  *\n";
		cout << "*     *\n";
		cout << "*******\n";
		break;
	case 4:
		cout << "*******\n";
		cout << "*     *\n";
		cout << "* * * *\n";
		cout << "*     *\n";
		cout << "* * * *\n";
		cout << "*     *\n";
		cout << "*******\n";
		break;
	case 5:
		cout << "*******\n";
		cout << "*     *\n";
		cout << "* * * *\n";
		cout << "*  *  *\n";
		cout << "* * * *\n";
		cout << "*     *\n";
		cout << "*******\n";
		break;
	case 6:
		cout << "*******\n";
		cout << "*     *\n";
		cout << "* * * *\n";
		cout << "* * * *\n";
		cout << "* * * *\n";
		cout << "*     *\n";
		cout << "*******\n";
		break;
	}
}

int main()
{
	setlocale(LC_ALL, "");
	srand(time(0));

	//сумма бросков игрока/компьютера
	int summPlyer = 0, summComp = 0;
	int n = 3; // кол-во бросков
	while (n >= 0) {

		//-------------------------------
		cout << "Бросок Игрока:\n";
		int p = 1 + rand() % 6;
		showCube(p);
		summPlyer += p;
		Sleep(300);
		p = 1 + rand() % 6;
		showCube(p);
		summPlyer += p;
		//--------------------------------
		cout << "Бросок Компьютера:\n";
		int c = 1 + rand() % 6;
		showCube(c);
		summComp += c;
		Sleep(300);
		c = 1 + rand() % 6;
		showCube(c);
		summComp += c;
		//---------------------------------
		n--;

		Sleep(1000);
		system("cls");
	}
	if (summPlyer > summComp) cout << "Выиграл Игрок\n";
	else if (summPlyer < summComp) cout << "Выиграл Компьютер\n";
	else cout << "Ничья!\n";
}
*/

//---------------------------------------

/*
Напишите рекурсивную функцию, которая принимает 
двухмерный массив целых чисел и количество сдвигов 
и выполняет круговой сдвиг массива вправо.

Например:
Дан массив:
4 5 6 7
1 2 4 1
4 5 6 9
Сдвигаем на три вправо:
5 6 7 4
2 4 1 1
5 6 9 4


void stepRight(int arr[3][4], int s) {

	for (int i = 0; i < 3; i++) {
		int temp = arr[i][3];
		for (int j = 3; j >= 0; j--) {
			arr[i][j] = arr[i][j - 1];
		}
		arr[i][0] = temp;
	}
	if (s > 1)
		stepRight(arr, --s);
}


Напишите рекурсивную функцию, которая принимает 
двухмерный массив целых чисел и количество сдвигов 
и выполняет круговой сдвиг массива влево.
Например
Дан массив:
4 5 6 7
1 2 4 1
4 5 6 9
Сдвигаем на два влево:
6 7 4 5
4 1 1 2
6 9 4 5


void stepLeft(int arr[3][4], int s) {
	for (int i = 0; i < 3; i++) {
		int temp = arr[i][0];
		for (int j = 1; j < 4; j++) {
			arr[i][j-1] = arr[i][j];
		}
		arr[i][3] = temp;
	}
	if (s > 1)
		stepLeft(arr, --s);
}


Напишите рекурсивную функцию, которая принимает 
двухмерный массив целых чисел и количество сдвигов и 
выполняет круговой сдвиг массива вниз.
Например:
Дан массив:
4 5 6 7
1 2 4 1
4 3 6 8
Сдвигаем низ на один:
4 3 6 8
4 5 6 7
1 2 4 1


void stepUp(int arr[3][4], int s) {
	for (int j = 0; j < 4; j++) {
		int temp = arr[0][j];
		for (int i = 0; i < 3; i++) {
			arr[i][j] = arr[i+1][j];
		}
		arr[2][j] = temp;
	}
	if (s > 1) stepUp(arr, --s);
	
}

void show(int arr[3][4]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}


void main() {
	int arr[3][4]{
	{4, 5, 6, 7},
	{1, 2, 4, 1},
	{4, 5, 6, 9}
	};

	//stepRight(arr, 3);
	//stepLeft(arr, 2);
	//stepUp(arr, 1);
	show(arr);
}
*/

//указатели--------------------------------
/*
void main() {
	int x = 10;
	int y = 5;

	int* px;
	int* py;

	//записываем адрес перемнной х в рх
	px = &x;

	//Отображаем адрес х через указатель и операцию взятия адреса
	cout << px << " " << &x << endl;

	//Отображаем значение х через переменную и опреацию
	//разыменовывания
	cout << x << " " << *px << endl;

	// изменяем значение х используя операцию разыменовывания
	*px = 99;
	cout << x << " " << *px << endl;
}
*/

//-------------------------------------

/*
void main(){
	const int size = 5;
	int arr[size] = { 33,44,7,8,9 };

	//записываем адрес нулевого элемента массива в указатель
	int* ptr = &arr[0]; // int* ptr = arr;
	//показываем значение нулевого элемента массива через разыменовывание
	//указателя
	cout << *ptr << endl;
	//показываем значение второго элемента массива через разыменовывание
	//указателя. Для этого делаем смещение по адресу на единицу
	cout << *(ptr + 1) << endl;

	//выполним смещение на один элемент вперед и записываем новый адрес 
	//в указатель ptr
	//ptr = ptr + 1; // ptr += 1; ptr++;
	//cout << *ptr << endl;

	//отображаем весь массив через указатель
	for (int i = 0; i < size; i++) {
		//cout << *(ptr + i) << " ";
		//cout << *(arr + i) << " ";
		cout << ptr[i] << " ";
	}
	cout << endl;

	//изменяем значение второго и третьего элемента
	*(ptr + 1) = 55;
	//*(arr + 1) = 55;
	//ptr[1] = 55;
	*(ptr + 2) = 77;
	//*(arr + 2) = 77;
	//ptr[2] = 77;

	for (int i = 0; i < size; i++) {
		cout << *(ptr + i) << " ";
	}
	cout << endl;

}
*/

//------------------------------------------

/*
void ShowArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << *(arr + i) << " ";
	}
	cout << endl;
}

//подсчет суммы элементов массива
int GetAmount(int* ptr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += *(ptr + i);
	}
	//for (int i = 0; i < size; i++, ptr++) {
	//	sum += *ptr;
	//}
	return sum;
}

void main() {
	const int size = 5;
	int arr[size] = { 33,44,7,8,9 };

	//отображение массива
	ShowArray(arr, size);
	//отображение суммы элементов массива
	cout << "Summa: " << GetAmount(arr, size) << endl;
	//отображение массива. В ф-ю передаем ссылку на нулевой элемент
	ShowArray(&arr[0], size);
}*/

//-------------------------------------------

/*
void main() {
	//констатный указатель
	тип_указателя* const имя_указателя = адрес;

	int a = 5;
	int b = 7;
	int* const pa = &a;
	pa = &b;//так нельзя
	*pa = 8;// теперь a = 8

	//указатель на константу
	const тип_данных* имя_указателя = адрес;

	int a = 5;
	int b = 7;

	const int* pa = &a;
	pa = &b;//теперь указатель ссылается на переменную b
	*pa = 8;// так нельзя

	//константный указатель на константу
	const int* const ptr = &a;
	pa = &b;//так нельзя
	*pa = 8;// так нельзя

}
*/

//-------------------------------------------

/*
//<имя_типа>& <имя_ссылки> = <выражение>;
//<имя_типа>& <имя_ссылки>(<выражение>);

void main() {
	int a = 9;

	int& sa = a;
	//int& sa(a);
	cout << sa << endl << &sa << endl;

	int* pa = &a;
	cout << pa << endl << *pa << endl;
}
*/

int* f() {
	static int arr[] = {1,4,5,8,7};
	return arr;
}

void main() {
	int* arr = f();

	for (int i = 0; i < 5; i++) {
		cout <<arr[i] << " ";
	}
}
