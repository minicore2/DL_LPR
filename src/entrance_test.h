#ifdef OPENCV
#include <opencv2/opencv.hpp>
#include "opencv2/highgui/highgui_c.h"
#include "opencv2/imgproc/imgproc_c.h"

#endif

#ifdef __cplusplus  
#include <iostream>
#include <time.h>
#include <string>
#endif  

#ifdef __cplusplus  
extern "C"{  
#endif  

char* plate_recognise_mat(int h,int w,int c,float *data);
void print_easypr();
int test_chars_segment( const char *img_path  );
int test_chars_identify();
int test_chars_recognise();
int test_plate_locate(const char *type, const char *img_path);
void run(const char *img_path);
void plate(const char *img_path);
string plate_mat(const Mat &src);
string run_mat(const Mat &src);

  
#ifdef __cplusplus  
}  
#endif  
