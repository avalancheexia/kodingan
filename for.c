/* ----------------------- FOR-----------------------------

1).loop statement :   perintah untuk mengulang 1 atau lebih  statement sebanyak beberapa kali

2). perintah loop mempunyai 3 perintah perulangan;
 - FOR
 - while
 - do while

######### perintah for ###

for (inisialisasi nilai; syarat pengulangan; perubahan nilai)
{
  ---------------  perintah - perintah yang akan di ulang
}

-- keterangan --

-inisialisasi nilai = pemberian nilai awal pada variabel counter (menghitung jumlah perulangan)
- syarat perulangan = syarat yg harus terpenuhi agar perulangan tetap dilakukan
- perubahan nilai = perubahan yg akan dilakukan pada tiap putaran u/ menjamin looping tidak terus menerus
*/

#include <stdio.h>
int main()
{
  int makan;

  for(makan = 1; makan < 5 ; makan = makan + 2 )
{
printf(" dia makan mie 10 x\n");
}
return 0;
}
