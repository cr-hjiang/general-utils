#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <opencv2/opencv.hpp>

#include "BatchLoader.h"

using namespace std;

#define LOGO_ENABLE 1
int main() {
  vector<cv::Mat> img;
  vector<cv::String> name;
  vector<cv::String> path;
  BatchLoader loader("../data", true);
  loader.load(img, path, name);

  loader.save(img, path, name);

  return 0;
}
