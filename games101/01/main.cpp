#include <eigen3/Eigen/Eigen>
#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv4/opencv2/opencv.hpp>

using namespace std;
using namespace cv;
int main(){
  string filename = "output.png";
  std::vector<Eigen::Vector3f> pos (490000,{25.f,155.f,205.f});
  int key = 0;
  Mat image(700, 700, CV_32FC3, pos.data());
  while(key!=27){
    
    image.convertTo(image, CV_8UC3, 1.f);
    imshow("image", image);
    key = cv::waitKey(10);
  }
  cv::imwrite(filename, image);
  return 0;
}
