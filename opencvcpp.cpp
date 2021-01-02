
#include <highgui.h>
#include <stdio.h>
#include <ctype.h>
CvCapture *capture;
CvPoint point;
CvPoint tmp_point[500];
IplImage* frame,tmp_frame;
int add_point=0;
int counter = 0;
void camera_on_mouse( int event, int x, int y, int flags, void* param ); //kamera i�in interrupt fonksiyonu
void create_circle();//nokta olu�turma fonksiyonu
void run_cam();//program
void show_camera(); //kamerada g�ster
int main(int argc, char **argv) {
capture = cvCaptureFromCAM(0); // kameradan g�r�nt� al
cvNamedWindow( "Test", CV_WINDOW_AUTOSIZE ); // Test penceresi olu�tur
cvSetMouseCallback( "Test", camera_on_mouse, 0 ); // Tesk ekran�nda mouse interrupt aktive et
run_cam(); //program� �al��t�r
return 0;
}
void camera_on_mouse( int event, int x, int y, int flags, void* param ){
if( event == CV_EVENT_LBUTTONDOWN ) //sol mouse t�kland�m�?
{
point = cvPoint(x,y); //t�klan�lan noktan�n kordinatlar�n� al
add_point = 1;//t�kland� bilgisi
printf(" pt= %d\n",add_point);
}
}
void run_cam(){
while(1){
frame = cvQueryFrame(capture); //g�r�nt�den frame al
if(add_point){ //t�kland� m�?
tmp_point[counter++] = point; //t�klan�lan noktay� kaydet
add_point = 0;//bir dahaki t�klama i�in ayarla
}
create_circle();//t�klan�lan noktay� i�aretle
show_camera();//kamerada g�ster
}
}
void create_circle()
{
for(int i=0; i< counter; i++)//for d�ng�s�n�n amac� asl�nda her yeni framede o noktalar�n hepsini bir daha koymam�zdan dolay�d�r.
cvCircle(frame, tmp_point[i], 3, CV_RGB(255,0,0), -1, 8,0);//i�aret olu�tur
}
void show_camera(){
cvShowImage( "Test", frame );
char c = cvWaitKey(33);
if(c== 27)exit(0);//e�er esc ye bas�ld�ysa ��k
}
 
 
