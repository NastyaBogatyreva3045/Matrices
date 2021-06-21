# IfNDef __MATRIX__
# определить  __MATRIX__

typedef  struct {
	// количество строк в массиве данных
	беззнаковое  int     m;
	// количество столбцов в массиве данных
	беззнаковый  int     n;
	// ссылка на массив с данными
	двойной           * а;
} TMatrix;

/ * *
Освобождает память
* /
void  mx_free (TMatrix * m);

/ * *
Отображает матрицу m
* /
void  mx_print (TMatrix * m);

/ * *
Возвращает единичную матрицу размера n.
* /
TMatrix * mx_identity ( unsigned  int n);

/ * *
Возвращает матрицу, созданную из строки, где элементы строки разделены пробелом, а строки разделены прямой косой чертой.
* /
TMatrix * mx_from_text ( const  char * s);

/ * *
Возвращает результат умножения m1 и m2.
* /
TMatrix * mx_mul (TMatrix * m1, TMatrix * m2);

/ * *
Возвращает результат сложения m1 и m2
* /
TMatrix * mx_add (TMatrix * m1, TMatrix * m2);

/ * *
Возвращает результат умножения матрицы m на скаляр s.
* /
TMatrix * mx_mul_scalar (TMatrix * m, double s);

/ * *
Возвращает результат возведения матрицы m в степень s.
* /
TMatrix * mx_pow (TMatrix * m, double s);

/ * *
Возвращает результат транспонирования матрицы m
* /
TMatrix * mx_transponse (TMatrix * m);

/ * *
Возвращает определитель матрицы m.
* /
двойной  mx_det (TMatrix * m);

/ * *
Сортировать по 1-й строке
* /
void  mx_sort (TMatrix * m);

недействительный  BubbleSort ( двойная * масса, INT счетчик);

# endif
