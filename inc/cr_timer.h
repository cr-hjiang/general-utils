#ifndef CR_TIMER_H
#define CR_TIMER_H

#include <iostream>
#include <string>
#include <string.h>
#include <unistd.h>
#include <time.h>

class Proctimer
{
public:
  void get_start_time();
  float get_end_time(std::string proc_name = "Execution");
private:
  long time_ms, time_us, time_ns, dt_ns;
  time_t time_s, dt_s;
  float time;
  timespec t_start, t_end;
};


#endif //CR_TIMER_H
