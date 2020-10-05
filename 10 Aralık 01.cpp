#define N 100
int Yigin[N],indis=0;
int Yigina_Ekle(int veri)
{
	if(indis<=N)
	{
		puts("Yigin dolu");
		return -1;
	}
	else{
		Yigin[indis]=veri;
		indis++;
	}
}

int Yigindan_Al()
{
	
}
