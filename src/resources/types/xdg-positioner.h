#ifndef _WLC_XDG_POSITIONER_H_
#define _WLC_XDG_POSITIONER_H_

#include <wayland-server.h>
#include <wlc/geometry.h>
#include "wayland-xdg-shell-unstable-v6-server-protocol.h"

const struct zxdg_positioner_v6_interface* wlc_xdg_positioner_implementation(void);

#define WLC_XDG_POSITIONER_HAS_POSITION    (1<<0)
#define WLC_XDG_POSITIONER_HAS_OFFSET      (1<<1)
#define WLC_XDG_POSITIONER_HAS_SIZE        (1<<2)
#define WLC_XDG_POSITIONER_HAS_ANCHOR_RECT (1<<3)
#define WLC_XDG_POSITIONER_HAS_ANCHOR      (1<<4)
#define WLC_XDG_POSITIONER_HAS_GRAVITY     (1<<5)
#define WLC_XDG_POSITIONER_HAS_CONSTRAINT  (1<<6)

struct wlc_xdg_positioner {
   uint32_t flags;
   struct wlc_point position;
   struct wlc_point offset;
   struct wlc_size size;
   struct wlc_geometry anchor_rect;
   enum zxdg_positioner_v6_anchor anchor;
   enum zxdg_positioner_v6_gravity gravity;
   enum zxdg_positioner_v6_constraint_adjustment constraint_adjustment;
};

#endif /* _WLC_XDG_POSITIONER_H_ */
