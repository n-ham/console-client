#ifndef POVERLAY_H
#define POVERLAY_H

#ifndef VOID
#define VOID void
#endif

#ifndef LPVOID
#define LPVOID void*
#endif

#include "psynclib.h"

typedef struct _message {
  uint32_t type;
  uint64_t length;
  char value[];
} message;

void overlay_main_loop(VOID);
void instance_thread(LPVOID);
void get_answer_to_request(message *requesr /*IN*/, message *replay/*OUT*/);

void init_overlay_callbacks();
int psync_add_overlay_callback(int id, poverlay_callback callback);


#endif // POVERLAY_H

