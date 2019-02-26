//import library
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
 
struct tien
{
	int an;
	int tieuVat;
	int diLai;
	int dienThoai;
	struct online
	{
		int shopee;
		int tiki;
		int lazada;
		int fahasa;
	};
	struct banking
	{
		int dang_no;
		int cho_vay;
	};
	int linhTinh;
	int diChoi;
};

char* timeToString(const struct tm *timeptr)
{
	/**
	 * Source: http://www.cplusplus.com/reference/ctime/asctime/
	 * Read about time.h and asctime()
	 * -------------------------------
	 * This funtion get time from system and convert it to string
	 * This funtion edited for Vietnamese
	 */
	
	static const char wday_name[][3] = {
    	"CN", "T2", "T3", "T4", "T5", "T6", "T7"
  	};
	static const char mon_name[][5] = {
    	"Th1", "Th2", "Th3", "Th4", "Th5", "Th6",
    	"Th7", "Th8", "Th9", "Th10", "Th11", "Th12"
  	};
  	static char result[26];
  	sprintf(result, "%.9s, %.5s%3d %.2d:%.2d:%.2d %d\n",
    	wday_name[timeptr->tm_wday],
    	mon_name[timeptr->tm_mon],
    	timeptr->tm_mday, timeptr->tm_hour,
    	timeptr->tm_min, timeptr->tm_sec,
    	1900 + timeptr->tm_year);
  	return result;
}

void inThoiGian()
{
	time_t rawtime;
	struct tm * timeinfo;
	time (&rawtime);
	timeinfo = localtime (&rawtime);
	printf ("Hom nay la: %s", timeToString(timeinfo));

}

void nhapDuLieuNgay(tien *tienNgay)
{
//	i'm trying to read struct auto by list from top to down but i don't know how to do
//	toi dang thu nhap du lieu cho struct mot cach tu dong tu tren xuong nhung khong biet cach
	/*const char donVi[][11] = {
		"an", "tieu vat", "di lai", "dien thoai", "online", "banking", "linh tinh", "di choi"
	};
	int i = 0;
	while (i < 8) {
		printf("Nhap tien %s hom nay: ", donVi[i]);
		scanf("%d", &tienNgay -> )
		i++;
	};*/
//	so i did it by normal method
//	nen toi lam theo cach thong thuong
	printf("Nhap tien an: ");
	scanf("%d", &tienNgay -> an);
	printf("Nhap tien tieu vat: ");
	scanf("%d", &tienNgay -> tieuVat);
	printf("Nhap tien di lai: ");
	scanf("%d", &tienNgay -> dienThoai);
	printf("Nhap tien linh tinh");
	scanf("%d", &tienNgay -> linhTinh);
}
 
int main()
{
	tien tienNgay;
	tien *ptienNgay = &tienNgay;
	inThoiGian();
//	nhapDuLieuNgay(ptienNgay);
	FILE *fPtr;
	const char meme[][12] = {"dit me may"};
	fPtr = fopen("file1.txt", "w");
	if (fPtr == NULL) {
		/*khong tao duoc file*/
		printf("cant create file\n");
		exit(EXIT_FAILURE);
	};
	fputs(meme, fPtr);
	fclose(fPtr);
	printf("k, wellplayed\n");
//	printf ("tien an: %d \n", tienNgay.an);
return 0;
}