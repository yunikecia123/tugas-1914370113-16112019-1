#include <stdio.h>
 int main ()
{
	 printf("\tBIODATA PRIBADI\n\n");
    printf("NAMA 		: ALICIA YUNIKE RIONA\n");
    printf("NPM 		: 1914370113\n");
    printf("KELAS 		: REGULER 1D\n");
    printf("PRODI 		: SISTEM KOMPUTER\n");
    printf("FAKULTAS	: SAINS & TEKNOLOGI\n");
    printf("Masukkan bilangan faktorial : ");
    scanf("%d",&bil);
    int faktorial;
    for(faktorial=1;faktorial<=bil;faktorial++)
	{
        hasil = faktorial * hasil;
    }
    printf("faktorial dari %d adalah :5*4*3*2*1= %d\n",bil,hasil);
}

