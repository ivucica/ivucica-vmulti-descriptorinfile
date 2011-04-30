#if !defined(_VMULTI_CLIENT_H_)
#define _VMULTI_CLIENT_H_

#include "vmulticommon.h"

typedef struct _vmulti_client_t* pvmulti_client;

pvmulti_client vmulti_alloc(void);

void vmulti_free(pvmulti_client vmulti);

BOOL vmulti_connect(pvmulti_client vmulti);

void vmulti_disconnect(pvmulti_client vmulti);

BOOL vmulti_update_mouse(pvmulti_client vmulti, BYTE button, USHORT x, USHORT y, BYTE wheelPosition);

BOOL vmulti_update_digi(pvmulti_client vmulti, BYTE status, USHORT x, USHORT y);

BOOL vmulti_update_multitouch(pvmulti_client vmulti, PTOUCH pTouch, BYTE actualCount);

BOOL vmulti_update_joystick(pvmulti_client vmulti, BYTE buttonsAndHat, BYTE x, BYTE y, BYTE throttle);

#endif