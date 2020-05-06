#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	char alfabe[29]={'a','b','c','ç','d','e','f','g','ð','h','ý','i','j','k','l','m','n','o','ö','p','r','s','þ','t','u','ü','v','y','z'};
	char ktg[100],kelime[115],tire[115],a; //ktg=kategori
	int boyut=0,f=0,j,i,deneme=0,kontrol=0,h=0;
	system("color 0");
	printf("ADAM ASMACA\n");
	printf("kategoriyi girin:");
	gets(ktg);
	printf("soruyu giriniz:");
	gets(kelime);
    for(i=0;kelime[i]!='\0';i++) boyut++;
	system("CLS");
	
	for(i=0;i<boyut;i++){
		if(kelime[i]==' ') tire[i]=' ';
		
		else tire[i]='-';
	}
		
	for(i=0;kontrol!=1;i++){
		printf("ADAM ASMACA\n\n");
		printf("kategori:%s",ktg);
		printf("\n%s",tire);
       	printf("\nharf girin:");
		scanf("%c",&a);
		deneme++;

		for(j=0;j<boyut;j++){
				if(kelime[j]==a) tire[j]=a;
			    }
		
		for(j=0;j<boyut;j++){
			if(tire[j]!='-') f++;
		}
		if(f==boyut) kontrol=1;
		
		printf("\n%s",tire);
		f=0;
        system("CLS");		
	}
	
	for(i=0;i<29;i++){
		for(j=0;j<boyut;j++){
		if(alfabe[i]==tire[j]){
			h++;
			break;
			}
		
	}
	}
	
	printf("kategori--->%s\n",ktg);
	printf("cevap--->%s\n\n",tire);
	printf("%d hata ile bildiniz.Tebikler!",(((deneme-1)/2)+1)-h);
	
	
	
	
	getch();
	return 0;
	
	
}
