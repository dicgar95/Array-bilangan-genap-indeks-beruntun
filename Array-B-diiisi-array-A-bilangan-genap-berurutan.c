//Oleh Muhammad Dicky Garcia
//STT PELITA BANGSA
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int array_A[5]={10,8,6,4,2};
  int i,cari,flag=0;

  for ( i = 0; i < 5; i++) {
    /* code */printf("Data ke-%d = %d \n",i,array_A[i] );
  }
  printf("Masukahn data yang ingin dicari :\n");
  scanf("%i",&cari );
  for (i = 0; i < 5; i++) {
    /* code */if (array_A[i]==cari) {
      /* code */flag=1;
      break;
    }
  }
  if (flag==1) {
    /* code */printf("Data yang anda cari ditemukan pada indeks ke-%i\n",i );
  } else {
    /* code */printf("Data tidak ditemukan\n");
  }
  return 0;
}
