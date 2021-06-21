# включить  < stdio.h >
# включить  < stdlib.h >
# включить  " matrices.h "

# define  BUFFER_SIZE  5

/ * *
Считывает матрицу из текстового файла
первая строка содержит размеры матрицы
пример:
3 3
1 2 3
4 5 6
7 8 9
* /
TMatrix * mx_from_file ( char * filename) {
 ФАЙЛ * f;
 int colCount, rowCount;
 int n;
 int i, j;
 двойное значение;
 TMatrix * M;

f = fopen (имя файла, « rt » );

n = fscanf (f, « % d  % d \ n » , & rowCount, & colCount);
 // TODO: проверяем, не равно ли количество параметров 2

 // TODO: проверить malloc на NULL
M = (TMatrix *) malloc ( sizeof (TMatrix));

M-> m = colCount;
M-> n = rowCount;
M-> a = ( double *) malloc ( sizeof ( double ) * colCount * rowCount);

 для (я = 0 ; я <rowCount; я ++)
 {
  для (j = 0 ; j <colCount; j ++)
  {
   fscanf (f, " % lf " , & значение);
// вывод промежуточных результатов только в отладочной конфигурации
# ifdef _DEBUG
   printf ( " % lf  " , значение);
# endif
   M-> a [i * colCount + j] = значение;
  }

# ifdef _DEBUG
  printf ( " \ п " );
# endif

 }

 fclose (f);

 return M;

}

int  main ( int argc, char ** argv) {
 TMatrix * m;

 if (argc! = 2 ) {
  printf ( " Использование: .exe <input.txt> \ n " );
  возврат - 1 ;
 }

 if (! (m = mx_from_file (argv [ 1 ]))) {
  printf ( " Невозможно прочитать файл % s \ n " , argv [ 1 ]);
  возврат - 1 ;
 }

 mx_print (м);
 printf ( " \ n " );

 mx_sort (м);

 mx_print (м);

 mx_free (м);

 возврат  0 ;
}