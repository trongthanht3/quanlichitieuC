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

char* inThoiGian(const struct tm *timeptr)
{
	/**
	 * //source: http://www.cplusplus.com/reference/ctime/asctime/
	 * Read about time.h and asctime()
	 * This funtion will print date and time
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

void nhapDuLieuNgay(tien tienNgay)
{

}
 
int main()
{
	time_t rawtime;
		struct tm * timeinfo;
		time (&rawtime);
		timeinfo = localtime (&rawtime);
		printf ("Current local time and date: %s", inThoiGian(timeinfo));

	tien tienNgay;
	int nam;
	tienNgay.an = 100000;
	printf ("tien an: %d \n", timeinfotm_yea->nam;
return 0;
}