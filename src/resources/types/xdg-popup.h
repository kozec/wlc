#ifndef _WLC_XDG_POPUP_H_
#define _WLC_XDG_POPUP_H_

#include "resources/types/xdg-positioner.h"

struct wlc_xdg_popup {
   struct wlc_xdg_positioner* xdg_positioner;
   wlc_handle parent;
};

#endif /* _WLC_XDG_POPUP_H_ */
