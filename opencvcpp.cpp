
#include <highgui.h>
#include <stdio.h>
#include <ctype.h>
CvCapture *capture;
CvPoint point;
CvPoint tmp_point[500];
IplImage* frame,tmp_frame;
int add_point=0;
int counter = 0;
void camera_on_mouse( int event, int x, int y, int flags, void* param ); //kamera için interrupt fonksiyonu
void create_circle();//nokta oluþturma fonksiyonu
void run_cam();//program
void show_camera(); //kamerada göster
int main(int argc, char **argv) {
capture = cvCaptureFromCAM(0); // kameradan görüntü al
cvNamedWindow( "Test", CV_WINDOW_AUTOSIZE ); // Test penceresi oluþtur
cvSetMouseCallback( "Test", camera_on_mouse, 0 ); // Tesk ekranýnda mouse interrupt aktive et
run_cam(); //programý çalýþtýr
return 0;
}
void camera_on_mouse( int event, int x, int y, int flags, void* param ){
if( event == CV_EVENT_LBUTTONDOWN ) //sol mouse týklandýmý?
{
point = cvPoint(x,y); //týklanýlan noktanýn kordinatlarýný al
add_point = 1;//týklandý bilgisi
printf(" pt= %d\n",add_point);
}
}
void run_cam(){
while(1){
frame = cvQueryFrame(capture); //görüntüden frame al
if(add_point){ //týklandý mý?
tmp_point[counter++] = point; //týklanýlan noktayý kaydet
add_point = 0;//bir dahaki týklama için ayarla
}
create_circle();//týklanýlan noktayý iþaretle
show_camera();//kamerada göster
}
}
void create_circle()
{
for(int i=0; i< counter; i++)//for döngüsünün amacý aslýnda her yeni framede o noktalarýn hepsini bir daha koymamýzdan dolayýdýr.
cvCircle(frame, tmp_point[i], 3, CV_RGB(255,0,0), -1, 8,0);//iþaret oluþtur
}
void show_camera(){
cvShowImage( "Test", frame );
char c = cvWaitKey(33);
if(c== 27)exit(0);//eðer esc ye basýldýysa çýk
}
 
 
