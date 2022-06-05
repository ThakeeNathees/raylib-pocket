
// This file contains manual bindings.
// Note:
//   All class constructor must have variable args or zero
//   since generated bindings usees no argument construction.

#include <pocketlang.h>
#include <raylib.h>

extern PkHandle* cls_Color;
extern PkHandle* cls_Vector2;
extern PkHandle* cls_Vector3;
extern PkHandle* cls_Vector4;
extern PkHandle* cls_Rectangle;

static void _colorInit(PKVM* vm) {
  int argc = pkGetArgc(vm);
  if (!pkCheckArgcRange(vm, argc, 0, 4)) return;

  double r = 0, g = 0, b = 0, a = 0xff;
  Color* self = pkGetSelf(vm);
  
  if (argc >= 1) if (!pkValidateSlotNumber(vm, 1, &r)) return;
  if (argc >= 2) if (!pkValidateSlotNumber(vm, 2, &g)) return;
  if (argc >= 3) if (!pkValidateSlotNumber(vm, 3, &b)) return;
  if (argc >= 4) if (!pkValidateSlotNumber(vm, 4, &a)) return;
  
  self->r = r; self->g = g; self->b = b; self->a = a;
}

static void _vector2Init(PKVM* vm) {
  int argc = pkGetArgc(vm);
  if (!pkCheckArgcRange(vm, argc, 0, 2)) return;
  
  Vector2* self = pkGetSelf(vm);
  double x = 0, y = 0;
  if (argc >= 1) if (!pkValidateSlotNumber(vm, 1, &x)) return;
  if (argc >= 2) if (!pkValidateSlotNumber(vm, 2, &y)) return;
  self->x = x;
  self->y = y;
}

static void _vector3Init(PKVM* vm) {
  int argc = pkGetArgc(vm);
  if (!pkCheckArgcRange(vm, argc, 0, 3)) return;
  
  Vector3* self = pkGetSelf(vm);
  double x = 0, y = 0, z = 0;
  if (argc >= 1) if (!pkValidateSlotNumber(vm, 1, &x)) return;
  if (argc >= 2) if (!pkValidateSlotNumber(vm, 2, &y)) return;
  if (argc >= 3) if (!pkValidateSlotNumber(vm, 3, &z)) return;
  self->x = x;
  self->y = y;
  self->z = z;
}

static void _vector4Init(PKVM* vm) {
  int argc = pkGetArgc(vm);
  if (!pkCheckArgcRange(vm, argc, 0, 4)) return;
  
  Vector4* self = pkGetSelf(vm);
  double x = 0, y = 0, z = 0, w = 0;
  
  if (argc >= 1) if (!pkValidateSlotNumber(vm, 1, &x)) return;
  if (argc >= 2) if (!pkValidateSlotNumber(vm, 2, &y)) return;
  if (argc >= 3) if (!pkValidateSlotNumber(vm, 3, &z)) return;
  if (argc >= 4) if (!pkValidateSlotNumber(vm, 4, &w)) return;
  self->x = x;
  self->y = y;
  self->z = z;
  self->w = w;
}

static void _rectangleInit(PKVM* vm) {
  int argc = pkGetArgc(vm);
  if (!pkCheckArgcRange(vm, argc, 0, 4)) return;
  
  Rectangle* self = pkGetSelf(vm);
  double x = 0, y = 0, width = 0, height = 0;
  
  if (argc >= 1) if (!pkValidateSlotNumber(vm, 1, &x)) return;
  if (argc >= 2) if (!pkValidateSlotNumber(vm, 2, &y)) return;
  if (argc >= 3) if (!pkValidateSlotNumber(vm, 3, &width)) return;
  if (argc >= 4) if (!pkValidateSlotNumber(vm, 4, &height)) return;
  self->x = x;
  self->y = y;
  self->width = width;
  self->height = height;
}

void register_manual_bindings(PKVM* vm, PkHandle* raylib) {
  pkClassAddMethod(vm, cls_Color, "_init", _colorInit,     -1, NULL);
  pkClassAddMethod(vm, cls_Vector2, "_init", _vector2Init, -1, NULL);
  pkClassAddMethod(vm, cls_Vector3, "_init", _vector3Init, -1, NULL);
  pkClassAddMethod(vm, cls_Vector4, "_init", _vector4Init, -1, NULL);
  pkClassAddMethod(vm, cls_Rectangle, "_init", _rectangleInit, -1, NULL);
  
  pkReserveSlots(vm, 6);
  pkSetSlotHandle(vm, 0, raylib);    // slot[0] = raylib
  pkSetSlotHandle(vm, 1, cls_Color); // slot[1] = Color
  
#define DEFINE_COLOR(name, r, g, b)              \
  do {                                           \
    pkSetSlotNumber(vm, 3, r); /* slot[3] = r */ \
    pkSetSlotNumber(vm, 4, g); /* slot[4] = g */ \
    pkSetSlotNumber(vm, 5, b); /* slot[5] = b */ \
    if (!pkNewInstance(vm, 1, 2, 3, 3)) return;  \
    pkSetAttribute(vm, 0, name, 2);              \
  } while (false)
  
  DEFINE_COLOR("LIGHTGRAY", 200, 200, 200);
  DEFINE_COLOR("GRAY", 130, 130, 130);
  DEFINE_COLOR("DARKGRAY", 80, 80, 80);
  DEFINE_COLOR("YELLOW", 253, 249, 0);
  DEFINE_COLOR("GOLD", 255, 203, 0);
  DEFINE_COLOR("ORANGE", 255, 161, 0);
  DEFINE_COLOR("PINK", 255, 109, 194);
  DEFINE_COLOR("RED", 230, 41, 55);
  DEFINE_COLOR("MAROON", 190, 33, 55);
  DEFINE_COLOR("GREEN", 0, 228, 48);
  DEFINE_COLOR("LIME", 0, 158, 47);
  DEFINE_COLOR("DARKGREEN", 0, 117, 44);
  DEFINE_COLOR("SKYBLUE", 102, 191, 255);
  DEFINE_COLOR("BLUE", 0, 121, 241);
  DEFINE_COLOR("DARKBLUE", 0, 82, 172);
  DEFINE_COLOR("PURPLE", 200, 122, 255);
  DEFINE_COLOR("VIOLET", 135, 60, 190);
  DEFINE_COLOR("DARKPURPLE", 112, 31, 126);
  DEFINE_COLOR("BEIGE", 211, 176, 131);
  DEFINE_COLOR("BROWN", 127, 106, 79);
  DEFINE_COLOR("DARKBROWN", 76, 63, 47);
  DEFINE_COLOR("WHITE", 255, 255, 255);
  DEFINE_COLOR("BLACK", 0, 0, 0);
  DEFINE_COLOR("BLANK", 0, 0, 0);
  DEFINE_COLOR("MAGENTA", 255, 0, 255);
  DEFINE_COLOR("RAYWHITE", 245, 245, 245);
  
}

