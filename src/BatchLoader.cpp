#include "BatchLoader.h"
using namespace std;

BatchLoader::BatchLoader(string path, bool recursion) {
  loading_path = path;
  dir_recursion = recursion;
}

void BatchLoader::set_path(string path, bool recursion) {
  loading_path = path;
  dir_recursion = recursion;
}

void BatchLoader::get_path() {
  cout << "[CORERAIN] Loading path ";
  if(dir_recursion == true) {
    cout << "(recursive): ";
  } else {
    cout << "(non-recursive): ";
  }
  cout << loading_path << endl;
}

void BatchLoader::load(vector<cv::Mat> &img_buf, vector<cv::String> &img_name) {
  cv::String img_path(loading_path);
  cv::glob(img_path, img_name, dir_recursion);
  while(!img_name.empty()) {
    cout << img_name.back() << endl;
    img_name.pop_back();
  }

}
