
#include <pocketlang.h>
#include <raylib.h>
#include <string.h>

/*****************************************************************************/
/* CONSTRUCTORS AND DISTRUCTORS                                              */
/*****************************************************************************/

static void* _Vector2New(PKVM* vm) {
  Vector2* ptr = pkRealloc(vm, NULL, sizeof(Vector2));
  memset(ptr, 0, sizeof(Vector2));
  return ptr;
}

static void _Vector2Delete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _Vector3New(PKVM* vm) {
  Vector3* ptr = pkRealloc(vm, NULL, sizeof(Vector3));
  memset(ptr, 0, sizeof(Vector3));
  return ptr;
}

static void _Vector3Delete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _Vector4New(PKVM* vm) {
  Vector4* ptr = pkRealloc(vm, NULL, sizeof(Vector4));
  memset(ptr, 0, sizeof(Vector4));
  return ptr;
}

static void _Vector4Delete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _MatrixNew(PKVM* vm) {
  Matrix* ptr = pkRealloc(vm, NULL, sizeof(Matrix));
  memset(ptr, 0, sizeof(Matrix));
  return ptr;
}

static void _MatrixDelete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _ColorNew(PKVM* vm) {
  Color* ptr = pkRealloc(vm, NULL, sizeof(Color));
  memset(ptr, 0, sizeof(Color));
  return ptr;
}

static void _ColorDelete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _RectangleNew(PKVM* vm) {
  Rectangle* ptr = pkRealloc(vm, NULL, sizeof(Rectangle));
  memset(ptr, 0, sizeof(Rectangle));
  return ptr;
}

static void _RectangleDelete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _ImageNew(PKVM* vm) {
  Image* ptr = pkRealloc(vm, NULL, sizeof(Image));
  memset(ptr, 0, sizeof(Image));
  return ptr;
}

static void _ImageDelete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _TextureNew(PKVM* vm) {
  Texture* ptr = pkRealloc(vm, NULL, sizeof(Texture));
  memset(ptr, 0, sizeof(Texture));
  return ptr;
}

static void _TextureDelete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _RenderTextureNew(PKVM* vm) {
  RenderTexture* ptr = pkRealloc(vm, NULL, sizeof(RenderTexture));
  memset(ptr, 0, sizeof(RenderTexture));
  return ptr;
}

static void _RenderTextureDelete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _NPatchInfoNew(PKVM* vm) {
  NPatchInfo* ptr = pkRealloc(vm, NULL, sizeof(NPatchInfo));
  memset(ptr, 0, sizeof(NPatchInfo));
  return ptr;
}

static void _NPatchInfoDelete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _GlyphInfoNew(PKVM* vm) {
  GlyphInfo* ptr = pkRealloc(vm, NULL, sizeof(GlyphInfo));
  memset(ptr, 0, sizeof(GlyphInfo));
  return ptr;
}

static void _GlyphInfoDelete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _FontNew(PKVM* vm) {
  Font* ptr = pkRealloc(vm, NULL, sizeof(Font));
  memset(ptr, 0, sizeof(Font));
  return ptr;
}

static void _FontDelete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _Camera3DNew(PKVM* vm) {
  Camera3D* ptr = pkRealloc(vm, NULL, sizeof(Camera3D));
  memset(ptr, 0, sizeof(Camera3D));
  return ptr;
}

static void _Camera3DDelete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _Camera2DNew(PKVM* vm) {
  Camera2D* ptr = pkRealloc(vm, NULL, sizeof(Camera2D));
  memset(ptr, 0, sizeof(Camera2D));
  return ptr;
}

static void _Camera2DDelete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _MeshNew(PKVM* vm) {
  Mesh* ptr = pkRealloc(vm, NULL, sizeof(Mesh));
  memset(ptr, 0, sizeof(Mesh));
  return ptr;
}

static void _MeshDelete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _ShaderNew(PKVM* vm) {
  Shader* ptr = pkRealloc(vm, NULL, sizeof(Shader));
  memset(ptr, 0, sizeof(Shader));
  return ptr;
}

static void _ShaderDelete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _MaterialMapNew(PKVM* vm) {
  MaterialMap* ptr = pkRealloc(vm, NULL, sizeof(MaterialMap));
  memset(ptr, 0, sizeof(MaterialMap));
  return ptr;
}

static void _MaterialMapDelete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _MaterialNew(PKVM* vm) {
  Material* ptr = pkRealloc(vm, NULL, sizeof(Material));
  memset(ptr, 0, sizeof(Material));
  return ptr;
}

static void _MaterialDelete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _TransformNew(PKVM* vm) {
  Transform* ptr = pkRealloc(vm, NULL, sizeof(Transform));
  memset(ptr, 0, sizeof(Transform));
  return ptr;
}

static void _TransformDelete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _BoneInfoNew(PKVM* vm) {
  BoneInfo* ptr = pkRealloc(vm, NULL, sizeof(BoneInfo));
  memset(ptr, 0, sizeof(BoneInfo));
  return ptr;
}

static void _BoneInfoDelete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _ModelNew(PKVM* vm) {
  Model* ptr = pkRealloc(vm, NULL, sizeof(Model));
  memset(ptr, 0, sizeof(Model));
  return ptr;
}

static void _ModelDelete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _ModelAnimationNew(PKVM* vm) {
  ModelAnimation* ptr = pkRealloc(vm, NULL, sizeof(ModelAnimation));
  memset(ptr, 0, sizeof(ModelAnimation));
  return ptr;
}

static void _ModelAnimationDelete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _RayNew(PKVM* vm) {
  Ray* ptr = pkRealloc(vm, NULL, sizeof(Ray));
  memset(ptr, 0, sizeof(Ray));
  return ptr;
}

static void _RayDelete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _RayCollisionNew(PKVM* vm) {
  RayCollision* ptr = pkRealloc(vm, NULL, sizeof(RayCollision));
  memset(ptr, 0, sizeof(RayCollision));
  return ptr;
}

static void _RayCollisionDelete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _BoundingBoxNew(PKVM* vm) {
  BoundingBox* ptr = pkRealloc(vm, NULL, sizeof(BoundingBox));
  memset(ptr, 0, sizeof(BoundingBox));
  return ptr;
}

static void _BoundingBoxDelete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _WaveNew(PKVM* vm) {
  Wave* ptr = pkRealloc(vm, NULL, sizeof(Wave));
  memset(ptr, 0, sizeof(Wave));
  return ptr;
}

static void _WaveDelete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _AudioStreamNew(PKVM* vm) {
  AudioStream* ptr = pkRealloc(vm, NULL, sizeof(AudioStream));
  memset(ptr, 0, sizeof(AudioStream));
  return ptr;
}

static void _AudioStreamDelete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _SoundNew(PKVM* vm) {
  Sound* ptr = pkRealloc(vm, NULL, sizeof(Sound));
  memset(ptr, 0, sizeof(Sound));
  return ptr;
}

static void _SoundDelete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _MusicNew(PKVM* vm) {
  Music* ptr = pkRealloc(vm, NULL, sizeof(Music));
  memset(ptr, 0, sizeof(Music));
  return ptr;
}

static void _MusicDelete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _VrDeviceInfoNew(PKVM* vm) {
  VrDeviceInfo* ptr = pkRealloc(vm, NULL, sizeof(VrDeviceInfo));
  memset(ptr, 0, sizeof(VrDeviceInfo));
  return ptr;
}

static void _VrDeviceInfoDelete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

static void* _VrStereoConfigNew(PKVM* vm) {
  VrStereoConfig* ptr = pkRealloc(vm, NULL, sizeof(VrStereoConfig));
  memset(ptr, 0, sizeof(VrStereoConfig));
  return ptr;
}

static void _VrStereoConfigDelete(PKVM* vm, void* ptr) {
  pkRealloc(vm, ptr, 0);
}

/*****************************************************************************/
/* POCKET CLASS HANDLES                                                      */
/*****************************************************************************/

PkHandle* cls_Vector2 = NULL;
PkHandle* cls_Vector3 = NULL;
PkHandle* cls_Vector4 = NULL;
PkHandle* cls_Matrix = NULL;
PkHandle* cls_Color = NULL;
PkHandle* cls_Rectangle = NULL;
PkHandle* cls_Image = NULL;
PkHandle* cls_Texture = NULL;
PkHandle* cls_RenderTexture = NULL;
PkHandle* cls_NPatchInfo = NULL;
PkHandle* cls_GlyphInfo = NULL;
PkHandle* cls_Font = NULL;
PkHandle* cls_Camera3D = NULL;
PkHandle* cls_Camera2D = NULL;
PkHandle* cls_Mesh = NULL;
PkHandle* cls_Shader = NULL;
PkHandle* cls_MaterialMap = NULL;
PkHandle* cls_Material = NULL;
PkHandle* cls_Transform = NULL;
PkHandle* cls_BoneInfo = NULL;
PkHandle* cls_Model = NULL;
PkHandle* cls_ModelAnimation = NULL;
PkHandle* cls_Ray = NULL;
PkHandle* cls_RayCollision = NULL;
PkHandle* cls_BoundingBox = NULL;
PkHandle* cls_Wave = NULL;
PkHandle* cls_AudioStream = NULL;
PkHandle* cls_Sound = NULL;
PkHandle* cls_Music = NULL;
PkHandle* cls_VrDeviceInfo = NULL;
PkHandle* cls_VrStereoConfig = NULL;

/*****************************************************************************/
/* GETTERS AND SETTERS                                                       */
/*****************************************************************************/

void _Vector2Getter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Vector2* self = pkGetSelf(vm);

  switch (hash) {
    case 4245442695: { // float x
      pkSetSlotNumber(vm, 0, self->x);
      return;
    }
    case 4228665076: { // float y
      pkSetSlotNumber(vm, 0, self->y);
      return;
    }
  }
}

void _Vector2Setter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Vector2* self = pkGetSelf(vm);

  switch (hash) {
    case 4245442695: { // float x
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->x = value;
      return;
    }
    case 4228665076: { // float y
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->y = value;
      return;
    }
  }
}

void _Vector3Getter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Vector3* self = pkGetSelf(vm);

  switch (hash) {
    case 4245442695: { // float x
      pkSetSlotNumber(vm, 0, self->x);
      return;
    }
    case 4228665076: { // float y
      pkSetSlotNumber(vm, 0, self->y);
      return;
    }
    case 4278997933: { // float z
      pkSetSlotNumber(vm, 0, self->z);
      return;
    }
  }
}

void _Vector3Setter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Vector3* self = pkGetSelf(vm);

  switch (hash) {
    case 4245442695: { // float x
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->x = value;
      return;
    }
    case 4228665076: { // float y
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->y = value;
      return;
    }
    case 4278997933: { // float z
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->z = value;
      return;
    }
  }
}

void _Vector4Getter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Vector4* self = pkGetSelf(vm);

  switch (hash) {
    case 4245442695: { // float x
      pkSetSlotNumber(vm, 0, self->x);
      return;
    }
    case 4228665076: { // float y
      pkSetSlotNumber(vm, 0, self->y);
      return;
    }
    case 4278997933: { // float z
      pkSetSlotNumber(vm, 0, self->z);
      return;
    }
    case 4060888886: { // float w
      pkSetSlotNumber(vm, 0, self->w);
      return;
    }
  }
}

void _Vector4Setter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Vector4* self = pkGetSelf(vm);

  switch (hash) {
    case 4245442695: { // float x
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->x = value;
      return;
    }
    case 4228665076: { // float y
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->y = value;
      return;
    }
    case 4278997933: { // float z
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->z = value;
      return;
    }
    case 4060888886: { // float w
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->w = value;
      return;
    }
  }
}

void _MatrixGetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Matrix* self = pkGetSelf(vm);

  switch (hash) {
    case 2469293656: { // float m0
      pkSetSlotNumber(vm, 0, self->m0);
      return;
    }
    case 2536404132: { // float m4
      pkSetSlotNumber(vm, 0, self->m4);
      return;
    }
    case 2335072704: { // float m8
      pkSetSlotNumber(vm, 0, self->m8);
      return;
    }
    case 505025179: { // float m12
      pkSetSlotNumber(vm, 0, self->m12);
      return;
    }
    case 2486071275: { // float m1
      pkSetSlotNumber(vm, 0, self->m1);
      return;
    }
    case 2553181751: { // float m5
      pkSetSlotNumber(vm, 0, self->m5);
      return;
    }
    case 2351850323: { // float m9
      pkSetSlotNumber(vm, 0, self->m9);
      return;
    }
    case 488247560: { // float m13
      pkSetSlotNumber(vm, 0, self->m13);
      return;
    }
    case 2502848894: { // float m2
      pkSetSlotNumber(vm, 0, self->m2);
      return;
    }
    case 2569959370: { // float m6
      pkSetSlotNumber(vm, 0, self->m6);
      return;
    }
    case 538580417: { // float m10
      pkSetSlotNumber(vm, 0, self->m10);
      return;
    }
    case 605690893: { // float m14
      pkSetSlotNumber(vm, 0, self->m14);
      return;
    }
    case 2519626513: { // float m3
      pkSetSlotNumber(vm, 0, self->m3);
      return;
    }
    case 2586736989: { // float m7
      pkSetSlotNumber(vm, 0, self->m7);
      return;
    }
    case 521802798: { // float m11
      pkSetSlotNumber(vm, 0, self->m11);
      return;
    }
    case 588913274: { // float m15
      pkSetSlotNumber(vm, 0, self->m15);
      return;
    }
  }
}

void _MatrixSetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Matrix* self = pkGetSelf(vm);

  switch (hash) {
    case 2469293656: { // float m0
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->m0 = value;
      return;
    }
    case 2536404132: { // float m4
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->m4 = value;
      return;
    }
    case 2335072704: { // float m8
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->m8 = value;
      return;
    }
    case 505025179: { // float m12
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->m12 = value;
      return;
    }
    case 2486071275: { // float m1
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->m1 = value;
      return;
    }
    case 2553181751: { // float m5
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->m5 = value;
      return;
    }
    case 2351850323: { // float m9
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->m9 = value;
      return;
    }
    case 488247560: { // float m13
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->m13 = value;
      return;
    }
    case 2502848894: { // float m2
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->m2 = value;
      return;
    }
    case 2569959370: { // float m6
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->m6 = value;
      return;
    }
    case 538580417: { // float m10
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->m10 = value;
      return;
    }
    case 605690893: { // float m14
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->m14 = value;
      return;
    }
    case 2519626513: { // float m3
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->m3 = value;
      return;
    }
    case 2586736989: { // float m7
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->m7 = value;
      return;
    }
    case 521802798: { // float m11
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->m11 = value;
      return;
    }
    case 588913274: { // float m15
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->m15 = value;
      return;
    }
  }
}

void _ColorGetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Color* self = pkGetSelf(vm);

  switch (hash) {
    case 4144776981: { // unsigned char r
      pkSetSlotNumber(vm, 0, self->r);
      return;
    }
    case 3792446982: { // unsigned char g
      pkSetSlotNumber(vm, 0, self->g);
      return;
    }
    case 3876335077: { // unsigned char b
      pkSetSlotNumber(vm, 0, self->b);
      return;
    }
    case 3826002220: { // unsigned char a
      pkSetSlotNumber(vm, 0, self->a);
      return;
    }
  }
}

void _ColorSetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Color* self = pkGetSelf(vm);

  switch (hash) {
    case 4144776981: { // unsigned char r
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->r = value;
      return;
    }
    case 3792446982: { // unsigned char g
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->g = value;
      return;
    }
    case 3876335077: { // unsigned char b
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->b = value;
      return;
    }
    case 3826002220: { // unsigned char a
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->a = value;
      return;
    }
  }
}

void _RectangleGetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Rectangle* self = pkGetSelf(vm);

  switch (hash) {
    case 4245442695: { // float x
      pkSetSlotNumber(vm, 0, self->x);
      return;
    }
    case 4228665076: { // float y
      pkSetSlotNumber(vm, 0, self->y);
      return;
    }
    case 2508680735: { // float width
      pkSetSlotNumber(vm, 0, self->width);
      return;
    }
    case 3585981250: { // float height
      pkSetSlotNumber(vm, 0, self->height);
      return;
    }
  }
}

void _RectangleSetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Rectangle* self = pkGetSelf(vm);

  switch (hash) {
    case 4245442695: { // float x
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->x = value;
      return;
    }
    case 4228665076: { // float y
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->y = value;
      return;
    }
    case 2508680735: { // float width
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->width = value;
      return;
    }
    case 3585981250: { // float height
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->height = value;
      return;
    }
  }
}

void _ImageGetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Image* self = pkGetSelf(vm);

  switch (hash) {
    case 2508680735: { // int width
      pkSetSlotNumber(vm, 0, self->width);
      return;
    }
    case 3585981250: { // int height
      pkSetSlotNumber(vm, 0, self->height);
      return;
    }
    case 1039351938: { // int mipmaps
      pkSetSlotNumber(vm, 0, self->mipmaps);
      return;
    }
    case 3114108242: { // int format
      pkSetSlotNumber(vm, 0, self->format);
      return;
    }
  }
}

void _ImageSetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Image* self = pkGetSelf(vm);

  switch (hash) {
    case 2508680735: { // int width
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->width = value;
      return;
    }
    case 3585981250: { // int height
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->height = value;
      return;
    }
    case 1039351938: { // int mipmaps
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->mipmaps = value;
      return;
    }
    case 3114108242: { // int format
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->format = value;
      return;
    }
  }
}

void _TextureGetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Texture* self = pkGetSelf(vm);

  switch (hash) {
    case 926444256: { // unsigned int id
      pkSetSlotNumber(vm, 0, self->id);
      return;
    }
    case 2508680735: { // int width
      pkSetSlotNumber(vm, 0, self->width);
      return;
    }
    case 3585981250: { // int height
      pkSetSlotNumber(vm, 0, self->height);
      return;
    }
    case 1039351938: { // int mipmaps
      pkSetSlotNumber(vm, 0, self->mipmaps);
      return;
    }
    case 3114108242: { // int format
      pkSetSlotNumber(vm, 0, self->format);
      return;
    }
  }
}

void _TextureSetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Texture* self = pkGetSelf(vm);

  switch (hash) {
    case 926444256: { // unsigned int id
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->id = value;
      return;
    }
    case 2508680735: { // int width
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->width = value;
      return;
    }
    case 3585981250: { // int height
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->height = value;
      return;
    }
    case 1039351938: { // int mipmaps
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->mipmaps = value;
      return;
    }
    case 3114108242: { // int format
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->format = value;
      return;
    }
  }
}

void _RenderTextureGetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  RenderTexture* self = pkGetSelf(vm);

  switch (hash) {
    case 926444256: { // unsigned int id
      pkSetSlotNumber(vm, 0, self->id);
      return;
    }
    case 1013213428: { // Texture texture
      pkSetSlotHandle(vm, 0, cls_Texture);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Texture* texture = pkGetSlotNativeInstance(vm, 0);
      *texture = self->texture;
      return;
    }
    case 4269121258: { // Texture depth
      pkSetSlotHandle(vm, 0, cls_Texture);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Texture* depth = pkGetSlotNativeInstance(vm, 0);
      *depth = self->depth;
      return;
    }
  }
}

void _RenderTextureSetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  RenderTexture* self = pkGetSelf(vm);

  switch (hash) {
    case 926444256: { // unsigned int id
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->id = value;
      return;
    }
    case 1013213428: { // Texture texture
      pkSetSlotHandle(vm, 0, cls_Texture);
      if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
      Texture* value = pkGetSlotNativeInstance(vm, 2);
      self->texture = *value;
      return;
    }
    case 4269121258: { // Texture depth
      pkSetSlotHandle(vm, 0, cls_Texture);
      if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
      Texture* value = pkGetSlotNativeInstance(vm, 2);
      self->depth = *value;
      return;
    }
  }
}

void _NPatchInfoGetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  NPatchInfo* self = pkGetSelf(vm);

  switch (hash) {
    case 466561496: { // Rectangle source
      pkSetSlotHandle(vm, 0, cls_Rectangle);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Rectangle* source = pkGetSlotNativeInstance(vm, 0);
      *source = self->source;
      return;
    }
    case 306900080: { // int left
      pkSetSlotNumber(vm, 0, self->left);
      return;
    }
    case 2802900028: { // int top
      pkSetSlotNumber(vm, 0, self->top);
      return;
    }
    case 2028154341: { // int right
      pkSetSlotNumber(vm, 0, self->right);
      return;
    }
    case 1319594794: { // int bottom
      pkSetSlotNumber(vm, 0, self->bottom);
      return;
    }
    case 3401678079: { // int layout
      pkSetSlotNumber(vm, 0, self->layout);
      return;
    }
  }
}

void _NPatchInfoSetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  NPatchInfo* self = pkGetSelf(vm);

  switch (hash) {
    case 466561496: { // Rectangle source
      pkSetSlotHandle(vm, 0, cls_Rectangle);
      if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
      Rectangle* value = pkGetSlotNativeInstance(vm, 2);
      self->source = *value;
      return;
    }
    case 306900080: { // int left
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->left = value;
      return;
    }
    case 2802900028: { // int top
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->top = value;
      return;
    }
    case 2028154341: { // int right
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->right = value;
      return;
    }
    case 1319594794: { // int bottom
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->bottom = value;
      return;
    }
    case 3401678079: { // int layout
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->layout = value;
      return;
    }
  }
}

void _GlyphInfoGetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  GlyphInfo* self = pkGetSelf(vm);

  switch (hash) {
    case 1113510858: { // int value
      pkSetSlotNumber(vm, 0, self->value);
      return;
    }
    case 1243942614: { // int offsetX
      pkSetSlotNumber(vm, 0, self->offsetX);
      return;
    }
    case 1260720233: { // int offsetY
      pkSetSlotNumber(vm, 0, self->offsetY);
      return;
    }
    case 3420013375: { // int advanceX
      pkSetSlotNumber(vm, 0, self->advanceX);
      return;
    }
    case 3008443898: { // Image image
      pkSetSlotHandle(vm, 0, cls_Image);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Image* image = pkGetSlotNativeInstance(vm, 0);
      *image = self->image;
      return;
    }
  }
}

void _GlyphInfoSetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  GlyphInfo* self = pkGetSelf(vm);

  switch (hash) {
    case 1113510858: { // int value
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->value = value;
      return;
    }
    case 1243942614: { // int offsetX
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->offsetX = value;
      return;
    }
    case 1260720233: { // int offsetY
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->offsetY = value;
      return;
    }
    case 3420013375: { // int advanceX
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->advanceX = value;
      return;
    }
    case 3008443898: { // Image image
      pkSetSlotHandle(vm, 0, cls_Image);
      if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
      Image* value = pkGetSlotNativeInstance(vm, 2);
      self->image = *value;
      return;
    }
  }
}

void _FontGetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Font* self = pkGetSelf(vm);

  switch (hash) {
    case 3505993609: { // int baseSize
      pkSetSlotNumber(vm, 0, self->baseSize);
      return;
    }
    case 1132236212: { // int glyphCount
      pkSetSlotNumber(vm, 0, self->glyphCount);
      return;
    }
    case 1316889206: { // int glyphPadding
      pkSetSlotNumber(vm, 0, self->glyphPadding);
      return;
    }
    case 1013213428: { // Texture2D texture
      pkSetSlotHandle(vm, 0, cls_Texture);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Texture* texture = pkGetSlotNativeInstance(vm, 0);
      *texture = self->texture;
      return;
    }
  }
}

void _FontSetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Font* self = pkGetSelf(vm);

  switch (hash) {
    case 3505993609: { // int baseSize
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->baseSize = value;
      return;
    }
    case 1132236212: { // int glyphCount
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->glyphCount = value;
      return;
    }
    case 1316889206: { // int glyphPadding
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->glyphPadding = value;
      return;
    }
    case 1013213428: { // Texture2D texture
      pkSetSlotHandle(vm, 0, cls_Texture);
      if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
      Texture* value = pkGetSlotNativeInstance(vm, 2);
      self->texture = *value;
      return;
    }
  }
}

void _Camera3DGetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Camera3D* self = pkGetSelf(vm);

  switch (hash) {
    case 2471448074: { // Vector3 position
      pkSetSlotHandle(vm, 0, cls_Vector3);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector3* position = pkGetSlotNativeInstance(vm, 0);
      *position = self->position;
      return;
    }
    case 845187144: { // Vector3 target
      pkSetSlotHandle(vm, 0, cls_Vector3);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector3* target = pkGetSlotNativeInstance(vm, 0);
      *target = self->target;
      return;
    }
    case 1128467232: { // Vector3 up
      pkSetSlotHandle(vm, 0, cls_Vector3);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector3* up = pkGetSlotNativeInstance(vm, 0);
      *up = self->up;
      return;
    }
    case 878816959: { // float fovy
      pkSetSlotNumber(vm, 0, self->fovy);
      return;
    }
    case 3830020480: { // int projection
      pkSetSlotNumber(vm, 0, self->projection);
      return;
    }
  }
}

void _Camera3DSetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Camera3D* self = pkGetSelf(vm);

  switch (hash) {
    case 2471448074: { // Vector3 position
      pkSetSlotHandle(vm, 0, cls_Vector3);
      if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
      Vector3* value = pkGetSlotNativeInstance(vm, 2);
      self->position = *value;
      return;
    }
    case 845187144: { // Vector3 target
      pkSetSlotHandle(vm, 0, cls_Vector3);
      if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
      Vector3* value = pkGetSlotNativeInstance(vm, 2);
      self->target = *value;
      return;
    }
    case 1128467232: { // Vector3 up
      pkSetSlotHandle(vm, 0, cls_Vector3);
      if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
      Vector3* value = pkGetSlotNativeInstance(vm, 2);
      self->up = *value;
      return;
    }
    case 878816959: { // float fovy
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->fovy = value;
      return;
    }
    case 3830020480: { // int projection
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->projection = value;
      return;
    }
  }
}

void _Camera2DGetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Camera2D* self = pkGetSelf(vm);

  switch (hash) {
    case 348705738: { // Vector2 offset
      pkSetSlotHandle(vm, 0, cls_Vector2);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector2* offset = pkGetSlotNativeInstance(vm, 0);
      *offset = self->offset;
      return;
    }
    case 845187144: { // Vector2 target
      pkSetSlotHandle(vm, 0, cls_Vector2);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector2* target = pkGetSlotNativeInstance(vm, 0);
      *target = self->target;
      return;
    }
    case 564937055: { // float rotation
      pkSetSlotNumber(vm, 0, self->rotation);
      return;
    }
    case 3750945330: { // float zoom
      pkSetSlotNumber(vm, 0, self->zoom);
      return;
    }
  }
}

void _Camera2DSetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Camera2D* self = pkGetSelf(vm);

  switch (hash) {
    case 348705738: { // Vector2 offset
      pkSetSlotHandle(vm, 0, cls_Vector2);
      if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
      Vector2* value = pkGetSlotNativeInstance(vm, 2);
      self->offset = *value;
      return;
    }
    case 845187144: { // Vector2 target
      pkSetSlotHandle(vm, 0, cls_Vector2);
      if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
      Vector2* value = pkGetSlotNativeInstance(vm, 2);
      self->target = *value;
      return;
    }
    case 564937055: { // float rotation
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->rotation = value;
      return;
    }
    case 3750945330: { // float zoom
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->zoom = value;
      return;
    }
  }
}

void _MeshGetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Mesh* self = pkGetSelf(vm);

  switch (hash) {
    case 879445054: { // int vertexCount
      pkSetSlotNumber(vm, 0, self->vertexCount);
      return;
    }
    case 2665445972: { // int triangleCount
      pkSetSlotNumber(vm, 0, self->triangleCount);
      return;
    }
    case 2514473712: { // unsigned int vaoId
      pkSetSlotNumber(vm, 0, self->vaoId);
      return;
    }
  }
}

void _MeshSetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Mesh* self = pkGetSelf(vm);

  switch (hash) {
    case 879445054: { // int vertexCount
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->vertexCount = value;
      return;
    }
    case 2665445972: { // int triangleCount
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->triangleCount = value;
      return;
    }
    case 2514473712: { // unsigned int vaoId
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->vaoId = value;
      return;
    }
  }
}

void _ShaderGetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Shader* self = pkGetSelf(vm);

  switch (hash) {
    case 926444256: { // unsigned int id
      pkSetSlotNumber(vm, 0, self->id);
      return;
    }
  }
}

void _ShaderSetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Shader* self = pkGetSelf(vm);

  switch (hash) {
    case 926444256: { // unsigned int id
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->id = value;
      return;
    }
  }
}

void _MaterialMapGetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  MaterialMap* self = pkGetSelf(vm);

  switch (hash) {
    case 1013213428: { // Texture2D texture
      pkSetSlotHandle(vm, 0, cls_Texture);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Texture* texture = pkGetSlotNativeInstance(vm, 0);
      *texture = self->texture;
      return;
    }
    case 1031692888: { // Color color
      pkSetSlotHandle(vm, 0, cls_Color);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Color* color = pkGetSlotNativeInstance(vm, 0);
      *color = self->color;
      return;
    }
    case 1113510858: { // float value
      pkSetSlotNumber(vm, 0, self->value);
      return;
    }
  }
}

void _MaterialMapSetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  MaterialMap* self = pkGetSelf(vm);

  switch (hash) {
    case 1013213428: { // Texture2D texture
      pkSetSlotHandle(vm, 0, cls_Texture);
      if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
      Texture* value = pkGetSlotNativeInstance(vm, 2);
      self->texture = *value;
      return;
    }
    case 1031692888: { // Color color
      pkSetSlotHandle(vm, 0, cls_Color);
      if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
      Color* value = pkGetSlotNativeInstance(vm, 2);
      self->color = *value;
      return;
    }
    case 1113510858: { // float value
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->value = value;
      return;
    }
  }
}

void _MaterialGetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Material* self = pkGetSelf(vm);

  switch (hash) {
    case 895309160: { // Shader shader
      pkSetSlotHandle(vm, 0, cls_Shader);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Shader* shader = pkGetSlotNativeInstance(vm, 0);
      *shader = self->shader;
      return;
    }
    case 559900755: { // float[4] params
      pkSetSlotHandle(vm, 0, cls_Vector4);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector4* vector4 = pkGetSlotNativeInstance(vm, 0);
      vector4->x = self->params[0];
      vector4->y = self->params[1];
      vector4->z = self->params[2];
      vector4->w = self->params[3];
      return;
    }
  }
}

void _MaterialSetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Material* self = pkGetSelf(vm);

  switch (hash) {
    case 895309160: { // Shader shader
      pkSetSlotHandle(vm, 0, cls_Shader);
      if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
      Shader* value = pkGetSlotNativeInstance(vm, 2);
      self->shader = *value;
      return;
    }
    case 559900755: { // float[4] params
      pkSetSlotHandle(vm, 0, cls_Vector4);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector4* vector4 = pkGetSlotNativeInstance(vm, 0);
      self->params[0] = vector4->x;
      self->params[1] = vector4->y;
      self->params[2] = vector4->z;
      self->params[3] = vector4->w;
      return;
    }
  }
}

void _TransformGetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Transform* self = pkGetSelf(vm);

  switch (hash) {
    case 3419592236: { // Vector3 translation
      pkSetSlotHandle(vm, 0, cls_Vector3);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector3* translation = pkGetSlotNativeInstance(vm, 0);
      *translation = self->translation;
      return;
    }
    case 564937055: { // Quaternion rotation
      pkSetSlotHandle(vm, 0, cls_Vector4);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector4* rotation = pkGetSlotNativeInstance(vm, 0);
      *rotation = self->rotation;
      return;
    }
    case 2190941297: { // Vector3 scale
      pkSetSlotHandle(vm, 0, cls_Vector3);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector3* scale = pkGetSlotNativeInstance(vm, 0);
      *scale = self->scale;
      return;
    }
  }
}

void _TransformSetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Transform* self = pkGetSelf(vm);

  switch (hash) {
    case 3419592236: { // Vector3 translation
      pkSetSlotHandle(vm, 0, cls_Vector3);
      if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
      Vector3* value = pkGetSlotNativeInstance(vm, 2);
      self->translation = *value;
      return;
    }
    case 564937055: { // Quaternion rotation
      pkSetSlotHandle(vm, 0, cls_Vector4);
      if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
      Vector4* value = pkGetSlotNativeInstance(vm, 2);
      self->rotation = *value;
      return;
    }
    case 2190941297: { // Vector3 scale
      pkSetSlotHandle(vm, 0, cls_Vector3);
      if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
      Vector3* value = pkGetSlotNativeInstance(vm, 2);
      self->scale = *value;
      return;
    }
  }
}

void _BoneInfoGetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  BoneInfo* self = pkGetSelf(vm);

  switch (hash) {
    case 2369371622: { // char[32] name
      pkSetSlotString(vm, 0, self->name);
      return;
    }
    case 3939368189: { // int parent
      pkSetSlotNumber(vm, 0, self->parent);
      return;
    }
  }
}

void _BoneInfoSetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  BoneInfo* self = pkGetSelf(vm);

  switch (hash) {
    case 2369371622: { // char[32] name
      // String setter not suppoted.
      return;
    }
    case 3939368189: { // int parent
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->parent = value;
      return;
    }
  }
}

void _ModelGetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Model* self = pkGetSelf(vm);

  switch (hash) {
    case 3786248987: { // Matrix transform
      pkSetSlotHandle(vm, 0, cls_Matrix);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Matrix* transform = pkGetSlotNativeInstance(vm, 0);
      *transform = self->transform;
      return;
    }
    case 389846563: { // int meshCount
      pkSetSlotNumber(vm, 0, self->meshCount);
      return;
    }
    case 939494479: { // int materialCount
      pkSetSlotNumber(vm, 0, self->materialCount);
      return;
    }
    case 2358437142: { // int boneCount
      pkSetSlotNumber(vm, 0, self->boneCount);
      return;
    }
  }
}

void _ModelSetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Model* self = pkGetSelf(vm);

  switch (hash) {
    case 3786248987: { // Matrix transform
      pkSetSlotHandle(vm, 0, cls_Matrix);
      if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
      Matrix* value = pkGetSlotNativeInstance(vm, 2);
      self->transform = *value;
      return;
    }
    case 389846563: { // int meshCount
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->meshCount = value;
      return;
    }
    case 939494479: { // int materialCount
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->materialCount = value;
      return;
    }
    case 2358437142: { // int boneCount
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->boneCount = value;
      return;
    }
  }
}

void _ModelAnimationGetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  ModelAnimation* self = pkGetSelf(vm);

  switch (hash) {
    case 2358437142: { // int boneCount
      pkSetSlotNumber(vm, 0, self->boneCount);
      return;
    }
    case 343301941: { // int frameCount
      pkSetSlotNumber(vm, 0, self->frameCount);
      return;
    }
  }
}

void _ModelAnimationSetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  ModelAnimation* self = pkGetSelf(vm);

  switch (hash) {
    case 2358437142: { // int boneCount
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->boneCount = value;
      return;
    }
    case 343301941: { // int frameCount
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->frameCount = value;
      return;
    }
  }
}

void _RayGetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Ray* self = pkGetSelf(vm);

  switch (hash) {
    case 2471448074: { // Vector3 position
      pkSetSlotHandle(vm, 0, cls_Vector3);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector3* position = pkGetSlotNativeInstance(vm, 0);
      *position = self->position;
      return;
    }
    case 3748513642: { // Vector3 direction
      pkSetSlotHandle(vm, 0, cls_Vector3);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector3* direction = pkGetSlotNativeInstance(vm, 0);
      *direction = self->direction;
      return;
    }
  }
}

void _RaySetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Ray* self = pkGetSelf(vm);

  switch (hash) {
    case 2471448074: { // Vector3 position
      pkSetSlotHandle(vm, 0, cls_Vector3);
      if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
      Vector3* value = pkGetSlotNativeInstance(vm, 2);
      self->position = *value;
      return;
    }
    case 3748513642: { // Vector3 direction
      pkSetSlotHandle(vm, 0, cls_Vector3);
      if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
      Vector3* value = pkGetSlotNativeInstance(vm, 2);
      self->direction = *value;
      return;
    }
  }
}

void _RayCollisionGetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  RayCollision* self = pkGetSelf(vm);

  switch (hash) {
    case 47364266: { // bool hit
      pkSetSlotNumber(vm, 0, self->hit);
      return;
    }
    case 783488098: { // float distance
      pkSetSlotNumber(vm, 0, self->distance);
      return;
    }
    case 414084241: { // Vector3 point
      pkSetSlotHandle(vm, 0, cls_Vector3);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector3* point = pkGetSlotNativeInstance(vm, 0);
      *point = self->point;
      return;
    }
    case 3867909202: { // Vector3 normal
      pkSetSlotHandle(vm, 0, cls_Vector3);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector3* normal = pkGetSlotNativeInstance(vm, 0);
      *normal = self->normal;
      return;
    }
  }
}

void _RayCollisionSetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  RayCollision* self = pkGetSelf(vm);

  switch (hash) {
    case 47364266: { // bool hit
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->hit = value;
      return;
    }
    case 783488098: { // float distance
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->distance = value;
      return;
    }
    case 414084241: { // Vector3 point
      pkSetSlotHandle(vm, 0, cls_Vector3);
      if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
      Vector3* value = pkGetSlotNativeInstance(vm, 2);
      self->point = *value;
      return;
    }
    case 3867909202: { // Vector3 normal
      pkSetSlotHandle(vm, 0, cls_Vector3);
      if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
      Vector3* value = pkGetSlotNativeInstance(vm, 2);
      self->normal = *value;
      return;
    }
  }
}

void _BoundingBoxGetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  BoundingBox* self = pkGetSelf(vm);

  switch (hash) {
    case 3381609815: { // Vector3 min
      pkSetSlotHandle(vm, 0, cls_Vector3);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector3* min = pkGetSlotNativeInstance(vm, 0);
      *min = self->min;
      return;
    }
    case 3617776409: { // Vector3 max
      pkSetSlotHandle(vm, 0, cls_Vector3);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector3* max = pkGetSlotNativeInstance(vm, 0);
      *max = self->max;
      return;
    }
  }
}

void _BoundingBoxSetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  BoundingBox* self = pkGetSelf(vm);

  switch (hash) {
    case 3381609815: { // Vector3 min
      pkSetSlotHandle(vm, 0, cls_Vector3);
      if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
      Vector3* value = pkGetSlotNativeInstance(vm, 2);
      self->min = *value;
      return;
    }
    case 3617776409: { // Vector3 max
      pkSetSlotHandle(vm, 0, cls_Vector3);
      if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
      Vector3* value = pkGetSlotNativeInstance(vm, 2);
      self->max = *value;
      return;
    }
  }
}

void _WaveGetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Wave* self = pkGetSelf(vm);

  switch (hash) {
    case 343301941: { // unsigned int frameCount
      pkSetSlotNumber(vm, 0, self->frameCount);
      return;
    }
    case 1329894765: { // unsigned int sampleRate
      pkSetSlotNumber(vm, 0, self->sampleRate);
      return;
    }
    case 567805086: { // unsigned int sampleSize
      pkSetSlotNumber(vm, 0, self->sampleSize);
      return;
    }
    case 4226312309: { // unsigned int channels
      pkSetSlotNumber(vm, 0, self->channels);
      return;
    }
  }
}

void _WaveSetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Wave* self = pkGetSelf(vm);

  switch (hash) {
    case 343301941: { // unsigned int frameCount
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->frameCount = value;
      return;
    }
    case 1329894765: { // unsigned int sampleRate
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->sampleRate = value;
      return;
    }
    case 567805086: { // unsigned int sampleSize
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->sampleSize = value;
      return;
    }
    case 4226312309: { // unsigned int channels
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->channels = value;
      return;
    }
  }
}

void _AudioStreamGetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  AudioStream* self = pkGetSelf(vm);

  switch (hash) {
    case 1329894765: { // unsigned int sampleRate
      pkSetSlotNumber(vm, 0, self->sampleRate);
      return;
    }
    case 567805086: { // unsigned int sampleSize
      pkSetSlotNumber(vm, 0, self->sampleSize);
      return;
    }
    case 4226312309: { // unsigned int channels
      pkSetSlotNumber(vm, 0, self->channels);
      return;
    }
  }
}

void _AudioStreamSetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  AudioStream* self = pkGetSelf(vm);

  switch (hash) {
    case 1329894765: { // unsigned int sampleRate
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->sampleRate = value;
      return;
    }
    case 567805086: { // unsigned int sampleSize
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->sampleSize = value;
      return;
    }
    case 4226312309: { // unsigned int channels
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->channels = value;
      return;
    }
  }
}

void _SoundGetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Sound* self = pkGetSelf(vm);

  switch (hash) {
    case 1601138021: { // AudioStream stream
      pkSetSlotHandle(vm, 0, cls_AudioStream);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      AudioStream* stream = pkGetSlotNativeInstance(vm, 0);
      *stream = self->stream;
      return;
    }
    case 343301941: { // unsigned int frameCount
      pkSetSlotNumber(vm, 0, self->frameCount);
      return;
    }
  }
}

void _SoundSetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Sound* self = pkGetSelf(vm);

  switch (hash) {
    case 1601138021: { // AudioStream stream
      pkSetSlotHandle(vm, 0, cls_AudioStream);
      if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
      AudioStream* value = pkGetSlotNativeInstance(vm, 2);
      self->stream = *value;
      return;
    }
    case 343301941: { // unsigned int frameCount
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->frameCount = value;
      return;
    }
  }
}

void _MusicGetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Music* self = pkGetSelf(vm);

  switch (hash) {
    case 1601138021: { // AudioStream stream
      pkSetSlotHandle(vm, 0, cls_AudioStream);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      AudioStream* stream = pkGetSlotNativeInstance(vm, 0);
      *stream = self->stream;
      return;
    }
    case 343301941: { // unsigned int frameCount
      pkSetSlotNumber(vm, 0, self->frameCount);
      return;
    }
    case 1972607277: { // bool looping
      pkSetSlotNumber(vm, 0, self->looping);
      return;
    }
    case 3445464062: { // int ctxType
      pkSetSlotNumber(vm, 0, self->ctxType);
      return;
    }
  }
}

void _MusicSetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  Music* self = pkGetSelf(vm);

  switch (hash) {
    case 1601138021: { // AudioStream stream
      pkSetSlotHandle(vm, 0, cls_AudioStream);
      if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
      AudioStream* value = pkGetSlotNativeInstance(vm, 2);
      self->stream = *value;
      return;
    }
    case 343301941: { // unsigned int frameCount
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->frameCount = value;
      return;
    }
    case 1972607277: { // bool looping
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->looping = value;
      return;
    }
    case 3445464062: { // int ctxType
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->ctxType = value;
      return;
    }
  }
}

void _VrDeviceInfoGetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  VrDeviceInfo* self = pkGetSelf(vm);

  switch (hash) {
    case 3513247669: { // int hResolution
      pkSetSlotNumber(vm, 0, self->hResolution);
      return;
    }
    case 1739207483: { // int vResolution
      pkSetSlotNumber(vm, 0, self->vResolution);
      return;
    }
    case 652643866: { // float hScreenSize
      pkSetSlotNumber(vm, 0, self->hScreenSize);
      return;
    }
    case 2283344612: { // float vScreenSize
      pkSetSlotNumber(vm, 0, self->vScreenSize);
      return;
    }
    case 2440730748: { // float vScreenCenter
      pkSetSlotNumber(vm, 0, self->vScreenCenter);
      return;
    }
    case 3074821516: { // float eyeToScreenDistance
      pkSetSlotNumber(vm, 0, self->eyeToScreenDistance);
      return;
    }
    case 3474313162: { // float lensSeparationDistance
      pkSetSlotNumber(vm, 0, self->lensSeparationDistance);
      return;
    }
    case 720866262: { // float interpupillaryDistance
      pkSetSlotNumber(vm, 0, self->interpupillaryDistance);
      return;
    }
    case 772542728: { // float[4] lensDistortionValues
      pkSetSlotHandle(vm, 0, cls_Vector4);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector4* vector4 = pkGetSlotNativeInstance(vm, 0);
      vector4->x = self->lensDistortionValues[0];
      vector4->y = self->lensDistortionValues[1];
      vector4->z = self->lensDistortionValues[2];
      vector4->w = self->lensDistortionValues[3];
      return;
    }
    case 3661840472: { // float[4] chromaAbCorrection
      pkSetSlotHandle(vm, 0, cls_Vector4);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector4* vector4 = pkGetSlotNativeInstance(vm, 0);
      vector4->x = self->chromaAbCorrection[0];
      vector4->y = self->chromaAbCorrection[1];
      vector4->z = self->chromaAbCorrection[2];
      vector4->w = self->chromaAbCorrection[3];
      return;
    }
  }
}

void _VrDeviceInfoSetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  VrDeviceInfo* self = pkGetSelf(vm);

  switch (hash) {
    case 3513247669: { // int hResolution
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->hResolution = value;
      return;
    }
    case 1739207483: { // int vResolution
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->vResolution = value;
      return;
    }
    case 652643866: { // float hScreenSize
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->hScreenSize = value;
      return;
    }
    case 2283344612: { // float vScreenSize
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->vScreenSize = value;
      return;
    }
    case 2440730748: { // float vScreenCenter
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->vScreenCenter = value;
      return;
    }
    case 3074821516: { // float eyeToScreenDistance
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->eyeToScreenDistance = value;
      return;
    }
    case 3474313162: { // float lensSeparationDistance
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->lensSeparationDistance = value;
      return;
    }
    case 720866262: { // float interpupillaryDistance
      double value;
      if (!pkValidateSlotNumber(vm, 2, &value)) return;
      self->interpupillaryDistance = value;
      return;
    }
    case 772542728: { // float[4] lensDistortionValues
      pkSetSlotHandle(vm, 0, cls_Vector4);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector4* vector4 = pkGetSlotNativeInstance(vm, 0);
      self->lensDistortionValues[0] = vector4->x;
      self->lensDistortionValues[1] = vector4->y;
      self->lensDistortionValues[2] = vector4->z;
      self->lensDistortionValues[3] = vector4->w;
      return;
    }
    case 3661840472: { // float[4] chromaAbCorrection
      pkSetSlotHandle(vm, 0, cls_Vector4);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector4* vector4 = pkGetSlotNativeInstance(vm, 0);
      self->chromaAbCorrection[0] = vector4->x;
      self->chromaAbCorrection[1] = vector4->y;
      self->chromaAbCorrection[2] = vector4->z;
      self->chromaAbCorrection[3] = vector4->w;
      return;
    }
  }
}

void _VrStereoConfigGetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  VrStereoConfig* self = pkGetSelf(vm);

  switch (hash) {
    case 2845776613: { // float[2] leftLensCenter
      pkSetSlotHandle(vm, 0, cls_Vector2);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector2* vector2 = pkGetSlotNativeInstance(vm, 0);
      vector2->x = self->leftLensCenter[0];
      vector2->y = self->leftLensCenter[1];
      return;
    }
    case 2137115292: { // float[2] rightLensCenter
      pkSetSlotHandle(vm, 0, cls_Vector2);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector2* vector2 = pkGetSlotNativeInstance(vm, 0);
      vector2->x = self->rightLensCenter[0];
      vector2->y = self->rightLensCenter[1];
      return;
    }
    case 2335565245: { // float[2] leftScreenCenter
      pkSetSlotHandle(vm, 0, cls_Vector2);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector2* vector2 = pkGetSlotNativeInstance(vm, 0);
      vector2->x = self->leftScreenCenter[0];
      vector2->y = self->leftScreenCenter[1];
      return;
    }
    case 3496396320: { // float[2] rightScreenCenter
      pkSetSlotHandle(vm, 0, cls_Vector2);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector2* vector2 = pkGetSlotNativeInstance(vm, 0);
      vector2->x = self->rightScreenCenter[0];
      vector2->y = self->rightScreenCenter[1];
      return;
    }
    case 2190941297: { // float[2] scale
      pkSetSlotHandle(vm, 0, cls_Vector2);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector2* vector2 = pkGetSlotNativeInstance(vm, 0);
      vector2->x = self->scale[0];
      vector2->y = self->scale[1];
      return;
    }
    case 970814002: { // float[2] scaleIn
      pkSetSlotHandle(vm, 0, cls_Vector2);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector2* vector2 = pkGetSlotNativeInstance(vm, 0);
      vector2->x = self->scaleIn[0];
      vector2->y = self->scaleIn[1];
      return;
    }
  }
}

void _VrStereoConfigSetter(PKVM* vm) {
  uint32_t hash = pkGetSlotHash(vm, 1);
  VrStereoConfig* self = pkGetSelf(vm);

  switch (hash) {
    case 2845776613: { // float[2] leftLensCenter
      pkSetSlotHandle(vm, 0, cls_Vector2);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector2* vector2 = pkGetSlotNativeInstance(vm, 0);
      self->leftLensCenter[0] = vector2->x;
      self->leftLensCenter[1] = vector2->y;
      return;
    }
    case 2137115292: { // float[2] rightLensCenter
      pkSetSlotHandle(vm, 0, cls_Vector2);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector2* vector2 = pkGetSlotNativeInstance(vm, 0);
      self->rightLensCenter[0] = vector2->x;
      self->rightLensCenter[1] = vector2->y;
      return;
    }
    case 2335565245: { // float[2] leftScreenCenter
      pkSetSlotHandle(vm, 0, cls_Vector2);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector2* vector2 = pkGetSlotNativeInstance(vm, 0);
      self->leftScreenCenter[0] = vector2->x;
      self->leftScreenCenter[1] = vector2->y;
      return;
    }
    case 3496396320: { // float[2] rightScreenCenter
      pkSetSlotHandle(vm, 0, cls_Vector2);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector2* vector2 = pkGetSlotNativeInstance(vm, 0);
      self->rightScreenCenter[0] = vector2->x;
      self->rightScreenCenter[1] = vector2->y;
      return;
    }
    case 2190941297: { // float[2] scale
      pkSetSlotHandle(vm, 0, cls_Vector2);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector2* vector2 = pkGetSlotNativeInstance(vm, 0);
      self->scale[0] = vector2->x;
      self->scale[1] = vector2->y;
      return;
    }
    case 970814002: { // float[2] scaleIn
      pkSetSlotHandle(vm, 0, cls_Vector2);
      if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
      Vector2* vector2 = pkGetSlotNativeInstance(vm, 0);
      self->scaleIn[0] = vector2->x;
      self->scaleIn[1] = vector2->y;
      return;
    }
  }
}
// Initialize window and OpenGL context
static void _InitWindow(PKVM* vm) {

  double width;
  if (!pkValidateSlotNumber(vm, 1, &width)) return;
  double height;
  if (!pkValidateSlotNumber(vm, 2, &height)) return;
  const char* title;
  if (!pkValidateSlotString(vm, 3, &title, NULL)) return;

InitWindow(width, height, title);

}

// Check if KEY_ESCAPE pressed or Close icon pressed
static void _WindowShouldClose(PKVM* vm) {


  double ret = (double) WindowShouldClose();

  pkSetSlotNumber(vm, 0, ret);
}

// Close window and unload OpenGL context
static void _CloseWindow(PKVM* vm) {


CloseWindow();

}

// Check if window has been initialized successfully
static void _IsWindowReady(PKVM* vm) {


  double ret = (double) IsWindowReady();

  pkSetSlotNumber(vm, 0, ret);
}

// Check if window is currently fullscreen
static void _IsWindowFullscreen(PKVM* vm) {


  double ret = (double) IsWindowFullscreen();

  pkSetSlotNumber(vm, 0, ret);
}

// Check if window is currently hidden (only PLATFORM_DESKTOP)
static void _IsWindowHidden(PKVM* vm) {


  double ret = (double) IsWindowHidden();

  pkSetSlotNumber(vm, 0, ret);
}

// Check if window is currently minimized (only PLATFORM_DESKTOP)
static void _IsWindowMinimized(PKVM* vm) {


  double ret = (double) IsWindowMinimized();

  pkSetSlotNumber(vm, 0, ret);
}

// Check if window is currently maximized (only PLATFORM_DESKTOP)
static void _IsWindowMaximized(PKVM* vm) {


  double ret = (double) IsWindowMaximized();

  pkSetSlotNumber(vm, 0, ret);
}

// Check if window is currently focused (only PLATFORM_DESKTOP)
static void _IsWindowFocused(PKVM* vm) {


  double ret = (double) IsWindowFocused();

  pkSetSlotNumber(vm, 0, ret);
}

// Check if window has been resized last frame
static void _IsWindowResized(PKVM* vm) {


  double ret = (double) IsWindowResized();

  pkSetSlotNumber(vm, 0, ret);
}

// Check if one specific window flag is enabled
static void _IsWindowState(PKVM* vm) {

  double flag;
  if (!pkValidateSlotNumber(vm, 1, &flag)) return;

  double ret = (double) IsWindowState(flag);

  pkSetSlotNumber(vm, 0, ret);
}

// Set window configuration state using flags
static void _SetWindowState(PKVM* vm) {

  double flags;
  if (!pkValidateSlotNumber(vm, 1, &flags)) return;

SetWindowState(flags);

}

// Clear window configuration state flags
static void _ClearWindowState(PKVM* vm) {

  double flags;
  if (!pkValidateSlotNumber(vm, 1, &flags)) return;

ClearWindowState(flags);

}

// Toggle window state: fullscreen/windowed (only PLATFORM_DESKTOP)
static void _ToggleFullscreen(PKVM* vm) {


ToggleFullscreen();

}

// Set window state: maximized, if resizable (only PLATFORM_DESKTOP)
static void _MaximizeWindow(PKVM* vm) {


MaximizeWindow();

}

// Set window state: minimized, if resizable (only PLATFORM_DESKTOP)
static void _MinimizeWindow(PKVM* vm) {


MinimizeWindow();

}

// Set window state: not minimized/maximized (only PLATFORM_DESKTOP)
static void _RestoreWindow(PKVM* vm) {


RestoreWindow();

}

// Set icon for window (only PLATFORM_DESKTOP)
static void _SetWindowIcon(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);

SetWindowIcon(*image);

}

// Set title for window (only PLATFORM_DESKTOP)
static void _SetWindowTitle(PKVM* vm) {

  const char* title;
  if (!pkValidateSlotString(vm, 1, &title, NULL)) return;

SetWindowTitle(title);

}

// Set window position on screen (only PLATFORM_DESKTOP)
static void _SetWindowPosition(PKVM* vm) {

  double x;
  if (!pkValidateSlotNumber(vm, 1, &x)) return;
  double y;
  if (!pkValidateSlotNumber(vm, 2, &y)) return;

SetWindowPosition(x, y);

}

// Set monitor for the current window (fullscreen mode)
static void _SetWindowMonitor(PKVM* vm) {

  double monitor;
  if (!pkValidateSlotNumber(vm, 1, &monitor)) return;

SetWindowMonitor(monitor);

}

// Set window minimum dimensions (for FLAG_WINDOW_RESIZABLE)
static void _SetWindowMinSize(PKVM* vm) {

  double width;
  if (!pkValidateSlotNumber(vm, 1, &width)) return;
  double height;
  if (!pkValidateSlotNumber(vm, 2, &height)) return;

SetWindowMinSize(width, height);

}

// Set window dimensions
static void _SetWindowSize(PKVM* vm) {

  double width;
  if (!pkValidateSlotNumber(vm, 1, &width)) return;
  double height;
  if (!pkValidateSlotNumber(vm, 2, &height)) return;

SetWindowSize(width, height);

}

// Get current screen width
static void _GetScreenWidth(PKVM* vm) {


  double ret = (double) GetScreenWidth();

  pkSetSlotNumber(vm, 0, ret);
}

// Get current screen height
static void _GetScreenHeight(PKVM* vm) {


  double ret = (double) GetScreenHeight();

  pkSetSlotNumber(vm, 0, ret);
}

// Get number of connected monitors
static void _GetMonitorCount(PKVM* vm) {


  double ret = (double) GetMonitorCount();

  pkSetSlotNumber(vm, 0, ret);
}

// Get current connected monitor
static void _GetCurrentMonitor(PKVM* vm) {


  double ret = (double) GetCurrentMonitor();

  pkSetSlotNumber(vm, 0, ret);
}

// Get specified monitor position
static void _GetMonitorPosition(PKVM* vm) {

  double monitor;
  if (!pkValidateSlotNumber(vm, 1, &monitor)) return;

  Vector2 ret = GetMonitorPosition(monitor);

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Vector2* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get specified monitor width (max available by monitor)
static void _GetMonitorWidth(PKVM* vm) {

  double monitor;
  if (!pkValidateSlotNumber(vm, 1, &monitor)) return;

  double ret = (double) GetMonitorWidth(monitor);

  pkSetSlotNumber(vm, 0, ret);
}

// Get specified monitor height (max available by monitor)
static void _GetMonitorHeight(PKVM* vm) {

  double monitor;
  if (!pkValidateSlotNumber(vm, 1, &monitor)) return;

  double ret = (double) GetMonitorHeight(monitor);

  pkSetSlotNumber(vm, 0, ret);
}

// Get specified monitor physical width in millimetres
static void _GetMonitorPhysicalWidth(PKVM* vm) {

  double monitor;
  if (!pkValidateSlotNumber(vm, 1, &monitor)) return;

  double ret = (double) GetMonitorPhysicalWidth(monitor);

  pkSetSlotNumber(vm, 0, ret);
}

// Get specified monitor physical height in millimetres
static void _GetMonitorPhysicalHeight(PKVM* vm) {

  double monitor;
  if (!pkValidateSlotNumber(vm, 1, &monitor)) return;

  double ret = (double) GetMonitorPhysicalHeight(monitor);

  pkSetSlotNumber(vm, 0, ret);
}

// Get specified monitor refresh rate
static void _GetMonitorRefreshRate(PKVM* vm) {

  double monitor;
  if (!pkValidateSlotNumber(vm, 1, &monitor)) return;

  double ret = (double) GetMonitorRefreshRate(monitor);

  pkSetSlotNumber(vm, 0, ret);
}

// Get window position XY on monitor
static void _GetWindowPosition(PKVM* vm) {


  Vector2 ret = GetWindowPosition();

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Vector2* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get window scale DPI factor
static void _GetWindowScaleDPI(PKVM* vm) {


  Vector2 ret = GetWindowScaleDPI();

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Vector2* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get the human-readable, UTF-8 encoded name of the primary monitor
static void _GetMonitorName(PKVM* vm) {

  double monitor;
  if (!pkValidateSlotNumber(vm, 1, &monitor)) return;

  const char* ret = GetMonitorName(monitor);

  pkSetSlotString(vm, 0, ret);
}

// Set clipboard text content
static void _SetClipboardText(PKVM* vm) {

  const char* text;
  if (!pkValidateSlotString(vm, 1, &text, NULL)) return;

SetClipboardText(text);

}

// Get clipboard text content
static void _GetClipboardText(PKVM* vm) {


  const char* ret = GetClipboardText();

  pkSetSlotString(vm, 0, ret);
}

// Swap back buffer with front buffer (screen drawing)
static void _SwapScreenBuffer(PKVM* vm) {


SwapScreenBuffer();

}

// Register all input events
static void _PollInputEvents(PKVM* vm) {


PollInputEvents();

}

// Wait for some milliseconds (halt program execution)
static void _WaitTime(PKVM* vm) {

  double ms;
  if (!pkValidateSlotNumber(vm, 1, &ms)) return;

WaitTime(ms);

}

// Shows cursor
static void _ShowCursor(PKVM* vm) {


ShowCursor();

}

// Hides cursor
static void _HideCursor(PKVM* vm) {


HideCursor();

}

// Check if cursor is not visible
static void _IsCursorHidden(PKVM* vm) {


  double ret = (double) IsCursorHidden();

  pkSetSlotNumber(vm, 0, ret);
}

// Enables cursor (unlock cursor)
static void _EnableCursor(PKVM* vm) {


EnableCursor();

}

// Disables cursor (lock cursor)
static void _DisableCursor(PKVM* vm) {


DisableCursor();

}

// Check if cursor is on the screen
static void _IsCursorOnScreen(PKVM* vm) {


  double ret = (double) IsCursorOnScreen();

  pkSetSlotNumber(vm, 0, ret);
}

// Set background color (framebuffer clear color)
static void _ClearBackground(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 1);

ClearBackground(*color);

}

// Setup canvas (framebuffer) to start drawing
static void _BeginDrawing(PKVM* vm) {


BeginDrawing();

}

// End canvas drawing and swap buffers (double buffering)
static void _EndDrawing(PKVM* vm) {


EndDrawing();

}

// Begin 2D mode with custom camera (2D)
static void _BeginMode2D(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Camera2D);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Camera2D* camera = pkGetSlotNativeInstance(vm, 1);

BeginMode2D(*camera);

}

// Ends 2D mode with custom camera
static void _EndMode2D(PKVM* vm) {


EndMode2D();

}

// Begin 3D mode with custom camera (3D)
static void _BeginMode3D(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Camera3D);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Camera3D* camera = pkGetSlotNativeInstance(vm, 1);

BeginMode3D(*camera);

}

// Ends 3D mode and returns to default 2D orthographic mode
static void _EndMode3D(PKVM* vm) {


EndMode3D();

}

// Begin drawing to render texture
static void _BeginTextureMode(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_RenderTexture);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  RenderTexture* target = pkGetSlotNativeInstance(vm, 1);

BeginTextureMode(*target);

}

// Ends drawing to render texture
static void _EndTextureMode(PKVM* vm) {


EndTextureMode();

}

// Begin custom shader drawing
static void _BeginShaderMode(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Shader);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Shader* shader = pkGetSlotNativeInstance(vm, 1);

BeginShaderMode(*shader);

}

// End custom shader drawing (use default shader)
static void _EndShaderMode(PKVM* vm) {


EndShaderMode();

}

// Begin blending mode (alpha, additive, multiplied, subtract, custom)
static void _BeginBlendMode(PKVM* vm) {

  double mode;
  if (!pkValidateSlotNumber(vm, 1, &mode)) return;

BeginBlendMode(mode);

}

// End blending mode (reset to default: alpha blending)
static void _EndBlendMode(PKVM* vm) {


EndBlendMode();

}

// Begin scissor mode (define screen area for following drawing)
static void _BeginScissorMode(PKVM* vm) {

  double x;
  if (!pkValidateSlotNumber(vm, 1, &x)) return;
  double y;
  if (!pkValidateSlotNumber(vm, 2, &y)) return;
  double width;
  if (!pkValidateSlotNumber(vm, 3, &width)) return;
  double height;
  if (!pkValidateSlotNumber(vm, 4, &height)) return;

BeginScissorMode(x, y, width, height);

}

// End scissor mode
static void _EndScissorMode(PKVM* vm) {


EndScissorMode();

}

// Begin stereo rendering (requires VR simulator)
static void _BeginVrStereoMode(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_VrStereoConfig);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  VrStereoConfig* config = pkGetSlotNativeInstance(vm, 1);

BeginVrStereoMode(*config);

}

// End stereo rendering (requires VR simulator)
static void _EndVrStereoMode(PKVM* vm) {


EndVrStereoMode();

}

// Load VR stereo config for VR simulator device parameters
static void _LoadVrStereoConfig(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_VrDeviceInfo);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  VrDeviceInfo* device = pkGetSlotNativeInstance(vm, 1);

  VrStereoConfig ret = LoadVrStereoConfig(*device);

  pkSetSlotHandle(vm, 0, cls_VrStereoConfig);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  VrStereoConfig* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Unload VR stereo config
static void _UnloadVrStereoConfig(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_VrStereoConfig);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  VrStereoConfig* config = pkGetSlotNativeInstance(vm, 1);

UnloadVrStereoConfig(*config);

}

// Load shader from files and bind default locations
static void _LoadShader(PKVM* vm) {

  const char* vsFileName;
  if (!pkValidateSlotString(vm, 1, &vsFileName, NULL)) return;
  const char* fsFileName;
  if (!pkValidateSlotString(vm, 2, &fsFileName, NULL)) return;

  Shader ret = LoadShader(vsFileName, fsFileName);

  pkSetSlotHandle(vm, 0, cls_Shader);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Shader* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Load shader from code strings and bind default locations
static void _LoadShaderFromMemory(PKVM* vm) {

  const char* vsCode;
  if (!pkValidateSlotString(vm, 1, &vsCode, NULL)) return;
  const char* fsCode;
  if (!pkValidateSlotString(vm, 2, &fsCode, NULL)) return;

  Shader ret = LoadShaderFromMemory(vsCode, fsCode);

  pkSetSlotHandle(vm, 0, cls_Shader);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Shader* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get shader uniform location
static void _GetShaderLocation(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Shader);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Shader* shader = pkGetSlotNativeInstance(vm, 1);
  const char* uniformName;
  if (!pkValidateSlotString(vm, 2, &uniformName, NULL)) return;

  double ret = (double) GetShaderLocation(*shader, uniformName);

  pkSetSlotNumber(vm, 0, ret);
}

// Get shader attribute location
static void _GetShaderLocationAttrib(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Shader);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Shader* shader = pkGetSlotNativeInstance(vm, 1);
  const char* attribName;
  if (!pkValidateSlotString(vm, 2, &attribName, NULL)) return;

  double ret = (double) GetShaderLocationAttrib(*shader, attribName);

  pkSetSlotNumber(vm, 0, ret);
}

// Set shader uniform value (matrix 4x4)
static void _SetShaderValueMatrix(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Shader);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Shader* shader = pkGetSlotNativeInstance(vm, 1);
  double locIndex;
  if (!pkValidateSlotNumber(vm, 2, &locIndex)) return;
  pkSetSlotHandle(vm, 0, cls_Matrix);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Matrix* mat = pkGetSlotNativeInstance(vm, 3);

SetShaderValueMatrix(*shader, locIndex, *mat);

}

// Set shader uniform value for texture (sampler2d)
static void _SetShaderValueTexture(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Shader);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Shader* shader = pkGetSlotNativeInstance(vm, 1);
  double locIndex;
  if (!pkValidateSlotNumber(vm, 2, &locIndex)) return;
  pkSetSlotHandle(vm, 0, cls_Texture);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Texture* texture = pkGetSlotNativeInstance(vm, 3);

SetShaderValueTexture(*shader, locIndex, *texture);

}

// Unload shader from GPU memory (VRAM)
static void _UnloadShader(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Shader);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Shader* shader = pkGetSlotNativeInstance(vm, 1);

UnloadShader(*shader);

}

// Get a ray trace from mouse position
static void _GetMouseRay(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* mousePosition = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Camera3D);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Camera3D* camera = pkGetSlotNativeInstance(vm, 2);

  Ray ret = GetMouseRay(*mousePosition, *camera);

  pkSetSlotHandle(vm, 0, cls_Ray);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Ray* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get camera transform matrix (view matrix)
static void _GetCameraMatrix(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Camera3D);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Camera3D* camera = pkGetSlotNativeInstance(vm, 1);

  Matrix ret = GetCameraMatrix(*camera);

  pkSetSlotHandle(vm, 0, cls_Matrix);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Matrix* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get camera 2d transform matrix
static void _GetCameraMatrix2D(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Camera2D);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Camera2D* camera = pkGetSlotNativeInstance(vm, 1);

  Matrix ret = GetCameraMatrix2D(*camera);

  pkSetSlotHandle(vm, 0, cls_Matrix);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Matrix* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get the screen space position for a 3d world space position
static void _GetWorldToScreen(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector3* position = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Camera3D);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Camera3D* camera = pkGetSlotNativeInstance(vm, 2);

  Vector2 ret = GetWorldToScreen(*position, *camera);

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Vector2* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get size position for a 3d world space position
static void _GetWorldToScreenEx(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector3* position = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Camera3D);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Camera3D* camera = pkGetSlotNativeInstance(vm, 2);
  double width;
  if (!pkValidateSlotNumber(vm, 3, &width)) return;
  double height;
  if (!pkValidateSlotNumber(vm, 4, &height)) return;

  Vector2 ret = GetWorldToScreenEx(*position, *camera, width, height);

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Vector2* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get the screen space position for a 2d camera world space position
static void _GetWorldToScreen2D(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* position = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Camera2D);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Camera2D* camera = pkGetSlotNativeInstance(vm, 2);

  Vector2 ret = GetWorldToScreen2D(*position, *camera);

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Vector2* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get the world space position for a 2d camera screen space position
static void _GetScreenToWorld2D(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* position = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Camera2D);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Camera2D* camera = pkGetSlotNativeInstance(vm, 2);

  Vector2 ret = GetScreenToWorld2D(*position, *camera);

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Vector2* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Set target FPS (maximum)
static void _SetTargetFPS(PKVM* vm) {

  double fps;
  if (!pkValidateSlotNumber(vm, 1, &fps)) return;

SetTargetFPS(fps);

}

// Get current FPS
static void _GetFPS(PKVM* vm) {


  double ret = (double) GetFPS();

  pkSetSlotNumber(vm, 0, ret);
}

// Get time in seconds for last frame drawn (delta time)
static void _GetFrameTime(PKVM* vm) {


  double ret = (double) GetFrameTime();

  pkSetSlotNumber(vm, 0, ret);
}

// Get elapsed time in seconds since InitWindow()
static void _GetTime(PKVM* vm) {


  double ret = (double) GetTime();

  pkSetSlotNumber(vm, 0, ret);
}

// Get a random value between min and max (both included)
static void _GetRandomValue(PKVM* vm) {

  double min;
  if (!pkValidateSlotNumber(vm, 1, &min)) return;
  double max;
  if (!pkValidateSlotNumber(vm, 2, &max)) return;

  double ret = (double) GetRandomValue(min, max);

  pkSetSlotNumber(vm, 0, ret);
}

// Set the seed for the random number generator
static void _SetRandomSeed(PKVM* vm) {

  double seed;
  if (!pkValidateSlotNumber(vm, 1, &seed)) return;

SetRandomSeed(seed);

}

// Takes a screenshot of current screen (filename extension defines format)
static void _TakeScreenshot(PKVM* vm) {

  const char* fileName;
  if (!pkValidateSlotString(vm, 1, &fileName, NULL)) return;

TakeScreenshot(fileName);

}

// Setup init configuration flags (view FLAGS)
static void _SetConfigFlags(PKVM* vm) {

  double flags;
  if (!pkValidateSlotNumber(vm, 1, &flags)) return;

SetConfigFlags(flags);

}

// Set the current threshold (minimum) log level
static void _SetTraceLogLevel(PKVM* vm) {

  double logLevel;
  if (!pkValidateSlotNumber(vm, 1, &logLevel)) return;

SetTraceLogLevel(logLevel);

}

// Check if file exists
static void _FileExists(PKVM* vm) {

  const char* fileName;
  if (!pkValidateSlotString(vm, 1, &fileName, NULL)) return;

  double ret = (double) FileExists(fileName);

  pkSetSlotNumber(vm, 0, ret);
}

// Check if a directory path exists
static void _DirectoryExists(PKVM* vm) {

  const char* dirPath;
  if (!pkValidateSlotString(vm, 1, &dirPath, NULL)) return;

  double ret = (double) DirectoryExists(dirPath);

  pkSetSlotNumber(vm, 0, ret);
}

// Check file extension (including point: .png, .wav)
static void _IsFileExtension(PKVM* vm) {

  const char* fileName;
  if (!pkValidateSlotString(vm, 1, &fileName, NULL)) return;
  const char* ext;
  if (!pkValidateSlotString(vm, 2, &ext, NULL)) return;

  double ret = (double) IsFileExtension(fileName, ext);

  pkSetSlotNumber(vm, 0, ret);
}

// Get pointer to extension for a filename string (includes dot: '.png')
static void _GetFileExtension(PKVM* vm) {

  const char* fileName;
  if (!pkValidateSlotString(vm, 1, &fileName, NULL)) return;

  const char* ret = GetFileExtension(fileName);

  pkSetSlotString(vm, 0, ret);
}

// Get pointer to filename for a path string
static void _GetFileName(PKVM* vm) {

  const char* filePath;
  if (!pkValidateSlotString(vm, 1, &filePath, NULL)) return;

  const char* ret = GetFileName(filePath);

  pkSetSlotString(vm, 0, ret);
}

// Get filename string without extension (uses static string)
static void _GetFileNameWithoutExt(PKVM* vm) {

  const char* filePath;
  if (!pkValidateSlotString(vm, 1, &filePath, NULL)) return;

  const char* ret = GetFileNameWithoutExt(filePath);

  pkSetSlotString(vm, 0, ret);
}

// Get full path for a given fileName with path (uses static string)
static void _GetDirectoryPath(PKVM* vm) {

  const char* filePath;
  if (!pkValidateSlotString(vm, 1, &filePath, NULL)) return;

  const char* ret = GetDirectoryPath(filePath);

  pkSetSlotString(vm, 0, ret);
}

// Get previous directory path for a given path (uses static string)
static void _GetPrevDirectoryPath(PKVM* vm) {

  const char* dirPath;
  if (!pkValidateSlotString(vm, 1, &dirPath, NULL)) return;

  const char* ret = GetPrevDirectoryPath(dirPath);

  pkSetSlotString(vm, 0, ret);
}

// Get current working directory (uses static string)
static void _GetWorkingDirectory(PKVM* vm) {


  const char* ret = GetWorkingDirectory();

  pkSetSlotString(vm, 0, ret);
}

// Clear directory files paths buffers (free memory)
static void _ClearDirectoryFiles(PKVM* vm) {


ClearDirectoryFiles();

}

// Change working directory, return true on success
static void _ChangeDirectory(PKVM* vm) {

  const char* dir;
  if (!pkValidateSlotString(vm, 1, &dir, NULL)) return;

  double ret = (double) ChangeDirectory(dir);

  pkSetSlotNumber(vm, 0, ret);
}

// Check if a file has been dropped into window
static void _IsFileDropped(PKVM* vm) {


  double ret = (double) IsFileDropped();

  pkSetSlotNumber(vm, 0, ret);
}

// Clear dropped files paths buffer (free memory)
static void _ClearDroppedFiles(PKVM* vm) {


ClearDroppedFiles();

}

// Get file modification time (last write time)
static void _GetFileModTime(PKVM* vm) {

  const char* fileName;
  if (!pkValidateSlotString(vm, 1, &fileName, NULL)) return;

  double ret = (double) GetFileModTime(fileName);

  pkSetSlotNumber(vm, 0, ret);
}

// Save integer value to storage file (to defined position), returns true on success
static void _SaveStorageValue(PKVM* vm) {

  double position;
  if (!pkValidateSlotNumber(vm, 1, &position)) return;
  double value;
  if (!pkValidateSlotNumber(vm, 2, &value)) return;

  double ret = (double) SaveStorageValue(position, value);

  pkSetSlotNumber(vm, 0, ret);
}

// Load integer value from storage file (from defined position)
static void _LoadStorageValue(PKVM* vm) {

  double position;
  if (!pkValidateSlotNumber(vm, 1, &position)) return;

  double ret = (double) LoadStorageValue(position);

  pkSetSlotNumber(vm, 0, ret);
}

// Open URL with default system browser (if available)
static void _OpenURL(PKVM* vm) {

  const char* url;
  if (!pkValidateSlotString(vm, 1, &url, NULL)) return;

OpenURL(url);

}

// Check if a key has been pressed once
static void _IsKeyPressed(PKVM* vm) {

  double key;
  if (!pkValidateSlotNumber(vm, 1, &key)) return;

  double ret = (double) IsKeyPressed(key);

  pkSetSlotNumber(vm, 0, ret);
}

// Check if a key is being pressed
static void _IsKeyDown(PKVM* vm) {

  double key;
  if (!pkValidateSlotNumber(vm, 1, &key)) return;

  double ret = (double) IsKeyDown(key);

  pkSetSlotNumber(vm, 0, ret);
}

// Check if a key has been released once
static void _IsKeyReleased(PKVM* vm) {

  double key;
  if (!pkValidateSlotNumber(vm, 1, &key)) return;

  double ret = (double) IsKeyReleased(key);

  pkSetSlotNumber(vm, 0, ret);
}

// Check if a key is NOT being pressed
static void _IsKeyUp(PKVM* vm) {

  double key;
  if (!pkValidateSlotNumber(vm, 1, &key)) return;

  double ret = (double) IsKeyUp(key);

  pkSetSlotNumber(vm, 0, ret);
}

// Set a custom key to exit program (default is ESC)
static void _SetExitKey(PKVM* vm) {

  double key;
  if (!pkValidateSlotNumber(vm, 1, &key)) return;

SetExitKey(key);

}

// Get key pressed (keycode), call it multiple times for keys queued, returns 0 when the queue is empty
static void _GetKeyPressed(PKVM* vm) {


  double ret = (double) GetKeyPressed();

  pkSetSlotNumber(vm, 0, ret);
}

// Get char pressed (unicode), call it multiple times for chars queued, returns 0 when the queue is empty
static void _GetCharPressed(PKVM* vm) {


  double ret = (double) GetCharPressed();

  pkSetSlotNumber(vm, 0, ret);
}

// Check if a gamepad is available
static void _IsGamepadAvailable(PKVM* vm) {

  double gamepad;
  if (!pkValidateSlotNumber(vm, 1, &gamepad)) return;

  double ret = (double) IsGamepadAvailable(gamepad);

  pkSetSlotNumber(vm, 0, ret);
}

// Get gamepad internal name id
static void _GetGamepadName(PKVM* vm) {

  double gamepad;
  if (!pkValidateSlotNumber(vm, 1, &gamepad)) return;

  const char* ret = GetGamepadName(gamepad);

  pkSetSlotString(vm, 0, ret);
}

// Check if a gamepad button has been pressed once
static void _IsGamepadButtonPressed(PKVM* vm) {

  double gamepad;
  if (!pkValidateSlotNumber(vm, 1, &gamepad)) return;
  double button;
  if (!pkValidateSlotNumber(vm, 2, &button)) return;

  double ret = (double) IsGamepadButtonPressed(gamepad, button);

  pkSetSlotNumber(vm, 0, ret);
}

// Check if a gamepad button is being pressed
static void _IsGamepadButtonDown(PKVM* vm) {

  double gamepad;
  if (!pkValidateSlotNumber(vm, 1, &gamepad)) return;
  double button;
  if (!pkValidateSlotNumber(vm, 2, &button)) return;

  double ret = (double) IsGamepadButtonDown(gamepad, button);

  pkSetSlotNumber(vm, 0, ret);
}

// Check if a gamepad button has been released once
static void _IsGamepadButtonReleased(PKVM* vm) {

  double gamepad;
  if (!pkValidateSlotNumber(vm, 1, &gamepad)) return;
  double button;
  if (!pkValidateSlotNumber(vm, 2, &button)) return;

  double ret = (double) IsGamepadButtonReleased(gamepad, button);

  pkSetSlotNumber(vm, 0, ret);
}

// Check if a gamepad button is NOT being pressed
static void _IsGamepadButtonUp(PKVM* vm) {

  double gamepad;
  if (!pkValidateSlotNumber(vm, 1, &gamepad)) return;
  double button;
  if (!pkValidateSlotNumber(vm, 2, &button)) return;

  double ret = (double) IsGamepadButtonUp(gamepad, button);

  pkSetSlotNumber(vm, 0, ret);
}

// Get the last gamepad button pressed
static void _GetGamepadButtonPressed(PKVM* vm) {


  double ret = (double) GetGamepadButtonPressed();

  pkSetSlotNumber(vm, 0, ret);
}

// Get gamepad axis count for a gamepad
static void _GetGamepadAxisCount(PKVM* vm) {

  double gamepad;
  if (!pkValidateSlotNumber(vm, 1, &gamepad)) return;

  double ret = (double) GetGamepadAxisCount(gamepad);

  pkSetSlotNumber(vm, 0, ret);
}

// Get axis movement value for a gamepad axis
static void _GetGamepadAxisMovement(PKVM* vm) {

  double gamepad;
  if (!pkValidateSlotNumber(vm, 1, &gamepad)) return;
  double axis;
  if (!pkValidateSlotNumber(vm, 2, &axis)) return;

  double ret = (double) GetGamepadAxisMovement(gamepad, axis);

  pkSetSlotNumber(vm, 0, ret);
}

// Set internal gamepad mappings (SDL_GameControllerDB)
static void _SetGamepadMappings(PKVM* vm) {

  const char* mappings;
  if (!pkValidateSlotString(vm, 1, &mappings, NULL)) return;

  double ret = (double) SetGamepadMappings(mappings);

  pkSetSlotNumber(vm, 0, ret);
}

// Check if a mouse button has been pressed once
static void _IsMouseButtonPressed(PKVM* vm) {

  double button;
  if (!pkValidateSlotNumber(vm, 1, &button)) return;

  double ret = (double) IsMouseButtonPressed(button);

  pkSetSlotNumber(vm, 0, ret);
}

// Check if a mouse button is being pressed
static void _IsMouseButtonDown(PKVM* vm) {

  double button;
  if (!pkValidateSlotNumber(vm, 1, &button)) return;

  double ret = (double) IsMouseButtonDown(button);

  pkSetSlotNumber(vm, 0, ret);
}

// Check if a mouse button has been released once
static void _IsMouseButtonReleased(PKVM* vm) {

  double button;
  if (!pkValidateSlotNumber(vm, 1, &button)) return;

  double ret = (double) IsMouseButtonReleased(button);

  pkSetSlotNumber(vm, 0, ret);
}

// Check if a mouse button is NOT being pressed
static void _IsMouseButtonUp(PKVM* vm) {

  double button;
  if (!pkValidateSlotNumber(vm, 1, &button)) return;

  double ret = (double) IsMouseButtonUp(button);

  pkSetSlotNumber(vm, 0, ret);
}

// Get mouse position X
static void _GetMouseX(PKVM* vm) {


  double ret = (double) GetMouseX();

  pkSetSlotNumber(vm, 0, ret);
}

// Get mouse position Y
static void _GetMouseY(PKVM* vm) {


  double ret = (double) GetMouseY();

  pkSetSlotNumber(vm, 0, ret);
}

// Get mouse position XY
static void _GetMousePosition(PKVM* vm) {


  Vector2 ret = GetMousePosition();

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Vector2* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get mouse delta between frames
static void _GetMouseDelta(PKVM* vm) {


  Vector2 ret = GetMouseDelta();

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Vector2* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Set mouse position XY
static void _SetMousePosition(PKVM* vm) {

  double x;
  if (!pkValidateSlotNumber(vm, 1, &x)) return;
  double y;
  if (!pkValidateSlotNumber(vm, 2, &y)) return;

SetMousePosition(x, y);

}

// Set mouse offset
static void _SetMouseOffset(PKVM* vm) {

  double offsetX;
  if (!pkValidateSlotNumber(vm, 1, &offsetX)) return;
  double offsetY;
  if (!pkValidateSlotNumber(vm, 2, &offsetY)) return;

SetMouseOffset(offsetX, offsetY);

}

// Set mouse scaling
static void _SetMouseScale(PKVM* vm) {

  double scaleX;
  if (!pkValidateSlotNumber(vm, 1, &scaleX)) return;
  double scaleY;
  if (!pkValidateSlotNumber(vm, 2, &scaleY)) return;

SetMouseScale(scaleX, scaleY);

}

// Get mouse wheel movement Y
static void _GetMouseWheelMove(PKVM* vm) {


  double ret = (double) GetMouseWheelMove();

  pkSetSlotNumber(vm, 0, ret);
}

// Set mouse cursor
static void _SetMouseCursor(PKVM* vm) {

  double cursor;
  if (!pkValidateSlotNumber(vm, 1, &cursor)) return;

SetMouseCursor(cursor);

}

// Get touch position X for touch point 0 (relative to screen size)
static void _GetTouchX(PKVM* vm) {


  double ret = (double) GetTouchX();

  pkSetSlotNumber(vm, 0, ret);
}

// Get touch position Y for touch point 0 (relative to screen size)
static void _GetTouchY(PKVM* vm) {


  double ret = (double) GetTouchY();

  pkSetSlotNumber(vm, 0, ret);
}

// Get touch position XY for a touch point index (relative to screen size)
static void _GetTouchPosition(PKVM* vm) {

  double index;
  if (!pkValidateSlotNumber(vm, 1, &index)) return;

  Vector2 ret = GetTouchPosition(index);

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Vector2* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get touch point identifier for given index
static void _GetTouchPointId(PKVM* vm) {

  double index;
  if (!pkValidateSlotNumber(vm, 1, &index)) return;

  double ret = (double) GetTouchPointId(index);

  pkSetSlotNumber(vm, 0, ret);
}

// Get number of touch points
static void _GetTouchPointCount(PKVM* vm) {


  double ret = (double) GetTouchPointCount();

  pkSetSlotNumber(vm, 0, ret);
}

// Enable a set of gestures using flags
static void _SetGesturesEnabled(PKVM* vm) {

  double flags;
  if (!pkValidateSlotNumber(vm, 1, &flags)) return;

SetGesturesEnabled(flags);

}

// Check if a gesture have been detected
static void _IsGestureDetected(PKVM* vm) {

  double gesture;
  if (!pkValidateSlotNumber(vm, 1, &gesture)) return;

  double ret = (double) IsGestureDetected(gesture);

  pkSetSlotNumber(vm, 0, ret);
}

// Get latest detected gesture
static void _GetGestureDetected(PKVM* vm) {


  double ret = (double) GetGestureDetected();

  pkSetSlotNumber(vm, 0, ret);
}

// Get gesture hold time in milliseconds
static void _GetGestureHoldDuration(PKVM* vm) {


  double ret = (double) GetGestureHoldDuration();

  pkSetSlotNumber(vm, 0, ret);
}

// Get gesture drag vector
static void _GetGestureDragVector(PKVM* vm) {


  Vector2 ret = GetGestureDragVector();

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Vector2* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get gesture drag angle
static void _GetGestureDragAngle(PKVM* vm) {


  double ret = (double) GetGestureDragAngle();

  pkSetSlotNumber(vm, 0, ret);
}

// Get gesture pinch delta
static void _GetGesturePinchVector(PKVM* vm) {


  Vector2 ret = GetGesturePinchVector();

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Vector2* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get gesture pinch angle
static void _GetGesturePinchAngle(PKVM* vm) {


  double ret = (double) GetGesturePinchAngle();

  pkSetSlotNumber(vm, 0, ret);
}

// Set camera mode (multiple camera modes available)
static void _SetCameraMode(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Camera3D);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Camera3D* camera = pkGetSlotNativeInstance(vm, 1);
  double mode;
  if (!pkValidateSlotNumber(vm, 2, &mode)) return;

SetCameraMode(*camera, mode);

}

// Update camera position for selected mode
static void _UpdateCamera(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Camera3D);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Camera3D* camera = pkGetSlotNativeInstance(vm, 1);

UpdateCamera(camera);

}

// Set camera pan key to combine with mouse movement (free camera)
static void _SetCameraPanControl(PKVM* vm) {

  double keyPan;
  if (!pkValidateSlotNumber(vm, 1, &keyPan)) return;

SetCameraPanControl(keyPan);

}

// Set camera alt key to combine with mouse movement (free camera)
static void _SetCameraAltControl(PKVM* vm) {

  double keyAlt;
  if (!pkValidateSlotNumber(vm, 1, &keyAlt)) return;

SetCameraAltControl(keyAlt);

}

// Set camera smooth zoom key to combine with mouse (free camera)
static void _SetCameraSmoothZoomControl(PKVM* vm) {

  double keySmoothZoom;
  if (!pkValidateSlotNumber(vm, 1, &keySmoothZoom)) return;

SetCameraSmoothZoomControl(keySmoothZoom);

}

// Set camera move controls (1st person and 3rd person cameras)
static void _SetCameraMoveControls(PKVM* vm) {

  double keyFront;
  if (!pkValidateSlotNumber(vm, 1, &keyFront)) return;
  double keyBack;
  if (!pkValidateSlotNumber(vm, 2, &keyBack)) return;
  double keyRight;
  if (!pkValidateSlotNumber(vm, 3, &keyRight)) return;
  double keyLeft;
  if (!pkValidateSlotNumber(vm, 4, &keyLeft)) return;
  double keyUp;
  if (!pkValidateSlotNumber(vm, 5, &keyUp)) return;
  double keyDown;
  if (!pkValidateSlotNumber(vm, 6, &keyDown)) return;

SetCameraMoveControls(keyFront, keyBack, keyRight, keyLeft, keyUp, keyDown);

}

// Set texture and rectangle to be used on shapes drawing
static void _SetShapesTexture(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Texture);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Texture* texture = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Rectangle* source = pkGetSlotNativeInstance(vm, 2);

SetShapesTexture(*texture, *source);

}

// Draw a pixel
static void _DrawPixel(PKVM* vm) {

  double posX;
  if (!pkValidateSlotNumber(vm, 1, &posX)) return;
  double posY;
  if (!pkValidateSlotNumber(vm, 2, &posY)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 3);

DrawPixel(posX, posY, *color);

}

// Draw a pixel (Vector version)
static void _DrawPixelV(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* position = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 2);

DrawPixelV(*position, *color);

}

// Draw a line
static void _DrawLine(PKVM* vm) {

  double startPosX;
  if (!pkValidateSlotNumber(vm, 1, &startPosX)) return;
  double startPosY;
  if (!pkValidateSlotNumber(vm, 2, &startPosY)) return;
  double endPosX;
  if (!pkValidateSlotNumber(vm, 3, &endPosX)) return;
  double endPosY;
  if (!pkValidateSlotNumber(vm, 4, &endPosY)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 5);

DrawLine(startPosX, startPosY, endPosX, endPosY, *color);

}

// Draw a line (Vector version)
static void _DrawLineV(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* startPos = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector2* endPos = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 3);

DrawLineV(*startPos, *endPos, *color);

}

// Draw a line defining thickness
static void _DrawLineEx(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* startPos = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector2* endPos = pkGetSlotNativeInstance(vm, 2);
  double thick;
  if (!pkValidateSlotNumber(vm, 3, &thick)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 4);

DrawLineEx(*startPos, *endPos, thick, *color);

}

// Draw a line using cubic-bezier curves in-out
static void _DrawLineBezier(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* startPos = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector2* endPos = pkGetSlotNativeInstance(vm, 2);
  double thick;
  if (!pkValidateSlotNumber(vm, 3, &thick)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 4);

DrawLineBezier(*startPos, *endPos, thick, *color);

}

// Draw line using quadratic bezier curves with a control point
static void _DrawLineBezierQuad(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* startPos = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector2* endPos = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Vector2* controlPos = pkGetSlotNativeInstance(vm, 3);
  double thick;
  if (!pkValidateSlotNumber(vm, 4, &thick)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 5);

DrawLineBezierQuad(*startPos, *endPos, *controlPos, thick, *color);

}

// Draw line using cubic bezier curves with 2 control points
static void _DrawLineBezierCubic(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* startPos = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector2* endPos = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Vector2* startControlPos = pkGetSlotNativeInstance(vm, 3);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Vector2* endControlPos = pkGetSlotNativeInstance(vm, 4);
  double thick;
  if (!pkValidateSlotNumber(vm, 5, &thick)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 6, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 6);

DrawLineBezierCubic(*startPos, *endPos, *startControlPos, *endControlPos, thick, *color);

}

// Draw lines sequence
static void _DrawLineStrip(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* points = pkGetSlotNativeInstance(vm, 1);
  double pointCount;
  if (!pkValidateSlotNumber(vm, 2, &pointCount)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 3);

DrawLineStrip(points, pointCount, *color);

}

// Draw a color-filled circle
static void _DrawCircle(PKVM* vm) {

  double centerX;
  if (!pkValidateSlotNumber(vm, 1, &centerX)) return;
  double centerY;
  if (!pkValidateSlotNumber(vm, 2, &centerY)) return;
  double radius;
  if (!pkValidateSlotNumber(vm, 3, &radius)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 4);

DrawCircle(centerX, centerY, radius, *color);

}

// Draw a piece of a circle
static void _DrawCircleSector(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* center = pkGetSlotNativeInstance(vm, 1);
  double radius;
  if (!pkValidateSlotNumber(vm, 2, &radius)) return;
  double startAngle;
  if (!pkValidateSlotNumber(vm, 3, &startAngle)) return;
  double endAngle;
  if (!pkValidateSlotNumber(vm, 4, &endAngle)) return;
  double segments;
  if (!pkValidateSlotNumber(vm, 5, &segments)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 6, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 6);

DrawCircleSector(*center, radius, startAngle, endAngle, segments, *color);

}

// Draw circle sector outline
static void _DrawCircleSectorLines(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* center = pkGetSlotNativeInstance(vm, 1);
  double radius;
  if (!pkValidateSlotNumber(vm, 2, &radius)) return;
  double startAngle;
  if (!pkValidateSlotNumber(vm, 3, &startAngle)) return;
  double endAngle;
  if (!pkValidateSlotNumber(vm, 4, &endAngle)) return;
  double segments;
  if (!pkValidateSlotNumber(vm, 5, &segments)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 6, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 6);

DrawCircleSectorLines(*center, radius, startAngle, endAngle, segments, *color);

}

// Draw a gradient-filled circle
static void _DrawCircleGradient(PKVM* vm) {

  double centerX;
  if (!pkValidateSlotNumber(vm, 1, &centerX)) return;
  double centerY;
  if (!pkValidateSlotNumber(vm, 2, &centerY)) return;
  double radius;
  if (!pkValidateSlotNumber(vm, 3, &radius)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Color* color1 = pkGetSlotNativeInstance(vm, 4);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Color* color2 = pkGetSlotNativeInstance(vm, 5);

DrawCircleGradient(centerX, centerY, radius, *color1, *color2);

}

// Draw a color-filled circle (Vector version)
static void _DrawCircleV(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* center = pkGetSlotNativeInstance(vm, 1);
  double radius;
  if (!pkValidateSlotNumber(vm, 2, &radius)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 3);

DrawCircleV(*center, radius, *color);

}

// Draw circle outline
static void _DrawCircleLines(PKVM* vm) {

  double centerX;
  if (!pkValidateSlotNumber(vm, 1, &centerX)) return;
  double centerY;
  if (!pkValidateSlotNumber(vm, 2, &centerY)) return;
  double radius;
  if (!pkValidateSlotNumber(vm, 3, &radius)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 4);

DrawCircleLines(centerX, centerY, radius, *color);

}

// Draw ellipse
static void _DrawEllipse(PKVM* vm) {

  double centerX;
  if (!pkValidateSlotNumber(vm, 1, &centerX)) return;
  double centerY;
  if (!pkValidateSlotNumber(vm, 2, &centerY)) return;
  double radiusH;
  if (!pkValidateSlotNumber(vm, 3, &radiusH)) return;
  double radiusV;
  if (!pkValidateSlotNumber(vm, 4, &radiusV)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 5);

DrawEllipse(centerX, centerY, radiusH, radiusV, *color);

}

// Draw ellipse outline
static void _DrawEllipseLines(PKVM* vm) {

  double centerX;
  if (!pkValidateSlotNumber(vm, 1, &centerX)) return;
  double centerY;
  if (!pkValidateSlotNumber(vm, 2, &centerY)) return;
  double radiusH;
  if (!pkValidateSlotNumber(vm, 3, &radiusH)) return;
  double radiusV;
  if (!pkValidateSlotNumber(vm, 4, &radiusV)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 5);

DrawEllipseLines(centerX, centerY, radiusH, radiusV, *color);

}

// Draw ring
static void _DrawRing(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* center = pkGetSlotNativeInstance(vm, 1);
  double innerRadius;
  if (!pkValidateSlotNumber(vm, 2, &innerRadius)) return;
  double outerRadius;
  if (!pkValidateSlotNumber(vm, 3, &outerRadius)) return;
  double startAngle;
  if (!pkValidateSlotNumber(vm, 4, &startAngle)) return;
  double endAngle;
  if (!pkValidateSlotNumber(vm, 5, &endAngle)) return;
  double segments;
  if (!pkValidateSlotNumber(vm, 6, &segments)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 7, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 7);

DrawRing(*center, innerRadius, outerRadius, startAngle, endAngle, segments, *color);

}

// Draw ring outline
static void _DrawRingLines(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* center = pkGetSlotNativeInstance(vm, 1);
  double innerRadius;
  if (!pkValidateSlotNumber(vm, 2, &innerRadius)) return;
  double outerRadius;
  if (!pkValidateSlotNumber(vm, 3, &outerRadius)) return;
  double startAngle;
  if (!pkValidateSlotNumber(vm, 4, &startAngle)) return;
  double endAngle;
  if (!pkValidateSlotNumber(vm, 5, &endAngle)) return;
  double segments;
  if (!pkValidateSlotNumber(vm, 6, &segments)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 7, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 7);

DrawRingLines(*center, innerRadius, outerRadius, startAngle, endAngle, segments, *color);

}

// Draw a color-filled rectangle
static void _DrawRectangle(PKVM* vm) {

  double posX;
  if (!pkValidateSlotNumber(vm, 1, &posX)) return;
  double posY;
  if (!pkValidateSlotNumber(vm, 2, &posY)) return;
  double width;
  if (!pkValidateSlotNumber(vm, 3, &width)) return;
  double height;
  if (!pkValidateSlotNumber(vm, 4, &height)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 5);

DrawRectangle(posX, posY, width, height, *color);

}

// Draw a color-filled rectangle (Vector version)
static void _DrawRectangleV(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* position = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector2* size = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 3);

DrawRectangleV(*position, *size, *color);

}

// Draw a color-filled rectangle
static void _DrawRectangleRec(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Rectangle* rec = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 2);

DrawRectangleRec(*rec, *color);

}

// Draw a color-filled rectangle with pro parameters
static void _DrawRectanglePro(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Rectangle* rec = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector2* origin = pkGetSlotNativeInstance(vm, 2);
  double rotation;
  if (!pkValidateSlotNumber(vm, 3, &rotation)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 4);

DrawRectanglePro(*rec, *origin, rotation, *color);

}

// Draw a vertical-gradient-filled rectangle
static void _DrawRectangleGradientV(PKVM* vm) {

  double posX;
  if (!pkValidateSlotNumber(vm, 1, &posX)) return;
  double posY;
  if (!pkValidateSlotNumber(vm, 2, &posY)) return;
  double width;
  if (!pkValidateSlotNumber(vm, 3, &width)) return;
  double height;
  if (!pkValidateSlotNumber(vm, 4, &height)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Color* color1 = pkGetSlotNativeInstance(vm, 5);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 6, 0)) return;
  Color* color2 = pkGetSlotNativeInstance(vm, 6);

DrawRectangleGradientV(posX, posY, width, height, *color1, *color2);

}

// Draw a horizontal-gradient-filled rectangle
static void _DrawRectangleGradientH(PKVM* vm) {

  double posX;
  if (!pkValidateSlotNumber(vm, 1, &posX)) return;
  double posY;
  if (!pkValidateSlotNumber(vm, 2, &posY)) return;
  double width;
  if (!pkValidateSlotNumber(vm, 3, &width)) return;
  double height;
  if (!pkValidateSlotNumber(vm, 4, &height)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Color* color1 = pkGetSlotNativeInstance(vm, 5);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 6, 0)) return;
  Color* color2 = pkGetSlotNativeInstance(vm, 6);

DrawRectangleGradientH(posX, posY, width, height, *color1, *color2);

}

// Draw a gradient-filled rectangle with custom vertex colors
static void _DrawRectangleGradientEx(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Rectangle* rec = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Color* col1 = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Color* col2 = pkGetSlotNativeInstance(vm, 3);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Color* col3 = pkGetSlotNativeInstance(vm, 4);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Color* col4 = pkGetSlotNativeInstance(vm, 5);

DrawRectangleGradientEx(*rec, *col1, *col2, *col3, *col4);

}

// Draw rectangle outline
static void _DrawRectangleLines(PKVM* vm) {

  double posX;
  if (!pkValidateSlotNumber(vm, 1, &posX)) return;
  double posY;
  if (!pkValidateSlotNumber(vm, 2, &posY)) return;
  double width;
  if (!pkValidateSlotNumber(vm, 3, &width)) return;
  double height;
  if (!pkValidateSlotNumber(vm, 4, &height)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 5);

DrawRectangleLines(posX, posY, width, height, *color);

}

// Draw rectangle outline with extended parameters
static void _DrawRectangleLinesEx(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Rectangle* rec = pkGetSlotNativeInstance(vm, 1);
  double lineThick;
  if (!pkValidateSlotNumber(vm, 2, &lineThick)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 3);

DrawRectangleLinesEx(*rec, lineThick, *color);

}

// Draw rectangle with rounded edges
static void _DrawRectangleRounded(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Rectangle* rec = pkGetSlotNativeInstance(vm, 1);
  double roundness;
  if (!pkValidateSlotNumber(vm, 2, &roundness)) return;
  double segments;
  if (!pkValidateSlotNumber(vm, 3, &segments)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 4);

DrawRectangleRounded(*rec, roundness, segments, *color);

}

// Draw rectangle with rounded edges outline
static void _DrawRectangleRoundedLines(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Rectangle* rec = pkGetSlotNativeInstance(vm, 1);
  double roundness;
  if (!pkValidateSlotNumber(vm, 2, &roundness)) return;
  double segments;
  if (!pkValidateSlotNumber(vm, 3, &segments)) return;
  double lineThick;
  if (!pkValidateSlotNumber(vm, 4, &lineThick)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 5);

DrawRectangleRoundedLines(*rec, roundness, segments, lineThick, *color);

}

// Draw a color-filled triangle (vertex in counter-clockwise order!)
static void _DrawTriangle(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* v1 = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector2* v2 = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Vector2* v3 = pkGetSlotNativeInstance(vm, 3);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 4);

DrawTriangle(*v1, *v2, *v3, *color);

}

// Draw triangle outline (vertex in counter-clockwise order!)
static void _DrawTriangleLines(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* v1 = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector2* v2 = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Vector2* v3 = pkGetSlotNativeInstance(vm, 3);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 4);

DrawTriangleLines(*v1, *v2, *v3, *color);

}

// Draw a triangle fan defined by points (first vertex is the center)
static void _DrawTriangleFan(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* points = pkGetSlotNativeInstance(vm, 1);
  double pointCount;
  if (!pkValidateSlotNumber(vm, 2, &pointCount)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 3);

DrawTriangleFan(points, pointCount, *color);

}

// Draw a triangle strip defined by points
static void _DrawTriangleStrip(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* points = pkGetSlotNativeInstance(vm, 1);
  double pointCount;
  if (!pkValidateSlotNumber(vm, 2, &pointCount)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 3);

DrawTriangleStrip(points, pointCount, *color);

}

// Draw a regular polygon (Vector version)
static void _DrawPoly(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* center = pkGetSlotNativeInstance(vm, 1);
  double sides;
  if (!pkValidateSlotNumber(vm, 2, &sides)) return;
  double radius;
  if (!pkValidateSlotNumber(vm, 3, &radius)) return;
  double rotation;
  if (!pkValidateSlotNumber(vm, 4, &rotation)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 5);

DrawPoly(*center, sides, radius, rotation, *color);

}

// Draw a polygon outline of n sides
static void _DrawPolyLines(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* center = pkGetSlotNativeInstance(vm, 1);
  double sides;
  if (!pkValidateSlotNumber(vm, 2, &sides)) return;
  double radius;
  if (!pkValidateSlotNumber(vm, 3, &radius)) return;
  double rotation;
  if (!pkValidateSlotNumber(vm, 4, &rotation)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 5);

DrawPolyLines(*center, sides, radius, rotation, *color);

}

// Draw a polygon outline of n sides with extended parameters
static void _DrawPolyLinesEx(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* center = pkGetSlotNativeInstance(vm, 1);
  double sides;
  if (!pkValidateSlotNumber(vm, 2, &sides)) return;
  double radius;
  if (!pkValidateSlotNumber(vm, 3, &radius)) return;
  double rotation;
  if (!pkValidateSlotNumber(vm, 4, &rotation)) return;
  double lineThick;
  if (!pkValidateSlotNumber(vm, 5, &lineThick)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 6, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 6);

DrawPolyLinesEx(*center, sides, radius, rotation, lineThick, *color);

}

// Check collision between two rectangles
static void _CheckCollisionRecs(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Rectangle* rec1 = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Rectangle* rec2 = pkGetSlotNativeInstance(vm, 2);

  double ret = (double) CheckCollisionRecs(*rec1, *rec2);

  pkSetSlotNumber(vm, 0, ret);
}

// Check collision between two circles
static void _CheckCollisionCircles(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* center1 = pkGetSlotNativeInstance(vm, 1);
  double radius1;
  if (!pkValidateSlotNumber(vm, 2, &radius1)) return;
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Vector2* center2 = pkGetSlotNativeInstance(vm, 3);
  double radius2;
  if (!pkValidateSlotNumber(vm, 4, &radius2)) return;

  double ret = (double) CheckCollisionCircles(*center1, radius1, *center2, radius2);

  pkSetSlotNumber(vm, 0, ret);
}

// Check collision between circle and rectangle
static void _CheckCollisionCircleRec(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* center = pkGetSlotNativeInstance(vm, 1);
  double radius;
  if (!pkValidateSlotNumber(vm, 2, &radius)) return;
  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Rectangle* rec = pkGetSlotNativeInstance(vm, 3);

  double ret = (double) CheckCollisionCircleRec(*center, radius, *rec);

  pkSetSlotNumber(vm, 0, ret);
}

// Check if point is inside rectangle
static void _CheckCollisionPointRec(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* point = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Rectangle* rec = pkGetSlotNativeInstance(vm, 2);

  double ret = (double) CheckCollisionPointRec(*point, *rec);

  pkSetSlotNumber(vm, 0, ret);
}

// Check if point is inside circle
static void _CheckCollisionPointCircle(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* point = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector2* center = pkGetSlotNativeInstance(vm, 2);
  double radius;
  if (!pkValidateSlotNumber(vm, 3, &radius)) return;

  double ret = (double) CheckCollisionPointCircle(*point, *center, radius);

  pkSetSlotNumber(vm, 0, ret);
}

// Check if point is inside a triangle
static void _CheckCollisionPointTriangle(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* point = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector2* p1 = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Vector2* p2 = pkGetSlotNativeInstance(vm, 3);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Vector2* p3 = pkGetSlotNativeInstance(vm, 4);

  double ret = (double) CheckCollisionPointTriangle(*point, *p1, *p2, *p3);

  pkSetSlotNumber(vm, 0, ret);
}

// Check the collision between two lines defined by two points each, returns collision point by reference
static void _CheckCollisionLines(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* startPos1 = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector2* endPos1 = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Vector2* startPos2 = pkGetSlotNativeInstance(vm, 3);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Vector2* endPos2 = pkGetSlotNativeInstance(vm, 4);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Vector2* collisionPoint = pkGetSlotNativeInstance(vm, 5);

  double ret = (double) CheckCollisionLines(*startPos1, *endPos1, *startPos2, *endPos2, collisionPoint);

  pkSetSlotNumber(vm, 0, ret);
}

// Check if point belongs to line created between two points [p1] and [p2] with defined margin in pixels [threshold]
static void _CheckCollisionPointLine(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector2* point = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector2* p1 = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Vector2* p2 = pkGetSlotNativeInstance(vm, 3);
  double threshold;
  if (!pkValidateSlotNumber(vm, 4, &threshold)) return;

  double ret = (double) CheckCollisionPointLine(*point, *p1, *p2, threshold);

  pkSetSlotNumber(vm, 0, ret);
}

// Get collision rectangle for two rectangles collision
static void _GetCollisionRec(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Rectangle* rec1 = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Rectangle* rec2 = pkGetSlotNativeInstance(vm, 2);

  Rectangle ret = GetCollisionRec(*rec1, *rec2);

  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Rectangle* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Load image from file into CPU memory (RAM)
static void _LoadImage(PKVM* vm) {

  const char* fileName;
  if (!pkValidateSlotString(vm, 1, &fileName, NULL)) return;

  Image ret = LoadImage(fileName);

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Image* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Load image from RAW file data
static void _LoadImageRaw(PKVM* vm) {

  const char* fileName;
  if (!pkValidateSlotString(vm, 1, &fileName, NULL)) return;
  double width;
  if (!pkValidateSlotNumber(vm, 2, &width)) return;
  double height;
  if (!pkValidateSlotNumber(vm, 3, &height)) return;
  double format;
  if (!pkValidateSlotNumber(vm, 4, &format)) return;
  double headerSize;
  if (!pkValidateSlotNumber(vm, 5, &headerSize)) return;

  Image ret = LoadImageRaw(fileName, width, height, format, headerSize);

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Image* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Load image from GPU texture data
static void _LoadImageFromTexture(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Texture);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Texture* texture = pkGetSlotNativeInstance(vm, 1);

  Image ret = LoadImageFromTexture(*texture);

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Image* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Load image from screen buffer and (screenshot)
static void _LoadImageFromScreen(PKVM* vm) {


  Image ret = LoadImageFromScreen();

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Image* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Unload image from CPU memory (RAM)
static void _UnloadImage(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);

UnloadImage(*image);

}

// Export image data to file, returns true on success
static void _ExportImage(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);
  const char* fileName;
  if (!pkValidateSlotString(vm, 2, &fileName, NULL)) return;

  double ret = (double) ExportImage(*image, fileName);

  pkSetSlotNumber(vm, 0, ret);
}

// Export image as code file defining an array of bytes, returns true on success
static void _ExportImageAsCode(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);
  const char* fileName;
  if (!pkValidateSlotString(vm, 2, &fileName, NULL)) return;

  double ret = (double) ExportImageAsCode(*image, fileName);

  pkSetSlotNumber(vm, 0, ret);
}

// Generate image: plain color
static void _GenImageColor(PKVM* vm) {

  double width;
  if (!pkValidateSlotNumber(vm, 1, &width)) return;
  double height;
  if (!pkValidateSlotNumber(vm, 2, &height)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 3);

  Image ret = GenImageColor(width, height, *color);

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Image* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Generate image: vertical gradient
static void _GenImageGradientV(PKVM* vm) {

  double width;
  if (!pkValidateSlotNumber(vm, 1, &width)) return;
  double height;
  if (!pkValidateSlotNumber(vm, 2, &height)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Color* top = pkGetSlotNativeInstance(vm, 3);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Color* bottom = pkGetSlotNativeInstance(vm, 4);

  Image ret = GenImageGradientV(width, height, *top, *bottom);

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Image* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Generate image: horizontal gradient
static void _GenImageGradientH(PKVM* vm) {

  double width;
  if (!pkValidateSlotNumber(vm, 1, &width)) return;
  double height;
  if (!pkValidateSlotNumber(vm, 2, &height)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Color* left = pkGetSlotNativeInstance(vm, 3);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Color* right = pkGetSlotNativeInstance(vm, 4);

  Image ret = GenImageGradientH(width, height, *left, *right);

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Image* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Generate image: radial gradient
static void _GenImageGradientRadial(PKVM* vm) {

  double width;
  if (!pkValidateSlotNumber(vm, 1, &width)) return;
  double height;
  if (!pkValidateSlotNumber(vm, 2, &height)) return;
  double density;
  if (!pkValidateSlotNumber(vm, 3, &density)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Color* inner = pkGetSlotNativeInstance(vm, 4);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Color* outer = pkGetSlotNativeInstance(vm, 5);

  Image ret = GenImageGradientRadial(width, height, density, *inner, *outer);

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Image* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Generate image: checked
static void _GenImageChecked(PKVM* vm) {

  double width;
  if (!pkValidateSlotNumber(vm, 1, &width)) return;
  double height;
  if (!pkValidateSlotNumber(vm, 2, &height)) return;
  double checksX;
  if (!pkValidateSlotNumber(vm, 3, &checksX)) return;
  double checksY;
  if (!pkValidateSlotNumber(vm, 4, &checksY)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Color* col1 = pkGetSlotNativeInstance(vm, 5);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 6, 0)) return;
  Color* col2 = pkGetSlotNativeInstance(vm, 6);

  Image ret = GenImageChecked(width, height, checksX, checksY, *col1, *col2);

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Image* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Generate image: white noise
static void _GenImageWhiteNoise(PKVM* vm) {

  double width;
  if (!pkValidateSlotNumber(vm, 1, &width)) return;
  double height;
  if (!pkValidateSlotNumber(vm, 2, &height)) return;
  double factor;
  if (!pkValidateSlotNumber(vm, 3, &factor)) return;

  Image ret = GenImageWhiteNoise(width, height, factor);

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Image* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Generate image: cellular algorithm, bigger tileSize means bigger cells
static void _GenImageCellular(PKVM* vm) {

  double width;
  if (!pkValidateSlotNumber(vm, 1, &width)) return;
  double height;
  if (!pkValidateSlotNumber(vm, 2, &height)) return;
  double tileSize;
  if (!pkValidateSlotNumber(vm, 3, &tileSize)) return;

  Image ret = GenImageCellular(width, height, tileSize);

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Image* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Create an image duplicate (useful for transformations)
static void _ImageCopy(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);

  Image ret = ImageCopy(*image);

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Image* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Create an image from another image piece
static void _ImageFromImage(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Rectangle* rec = pkGetSlotNativeInstance(vm, 2);

  Image ret = ImageFromImage(*image, *rec);

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Image* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Create an image from text (default font)
static void _ImageText(PKVM* vm) {

  const char* text;
  if (!pkValidateSlotString(vm, 1, &text, NULL)) return;
  double fontSize;
  if (!pkValidateSlotNumber(vm, 2, &fontSize)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 3);

  Image ret = ImageText(text, fontSize, *color);

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Image* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Create an image from text (custom sprite font)
static void _ImageTextEx(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Font);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Font* font = pkGetSlotNativeInstance(vm, 1);
  const char* text;
  if (!pkValidateSlotString(vm, 2, &text, NULL)) return;
  double fontSize;
  if (!pkValidateSlotNumber(vm, 3, &fontSize)) return;
  double spacing;
  if (!pkValidateSlotNumber(vm, 4, &spacing)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Color* tint = pkGetSlotNativeInstance(vm, 5);

  Image ret = ImageTextEx(*font, text, fontSize, spacing, *tint);

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Image* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Convert image data to desired format
static void _ImageFormat(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);
  double newFormat;
  if (!pkValidateSlotNumber(vm, 2, &newFormat)) return;

ImageFormat(image, newFormat);

}

// Convert image to POT (power-of-two)
static void _ImageToPOT(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Color* fill = pkGetSlotNativeInstance(vm, 2);

ImageToPOT(image, *fill);

}

// Crop an image to a defined rectangle
static void _ImageCrop(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Rectangle* crop = pkGetSlotNativeInstance(vm, 2);

ImageCrop(image, *crop);

}

// Crop image depending on alpha value
static void _ImageAlphaCrop(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);
  double threshold;
  if (!pkValidateSlotNumber(vm, 2, &threshold)) return;

ImageAlphaCrop(image, threshold);

}

// Clear alpha channel to desired color
static void _ImageAlphaClear(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 2);
  double threshold;
  if (!pkValidateSlotNumber(vm, 3, &threshold)) return;

ImageAlphaClear(image, *color, threshold);

}

// Apply alpha mask to image
static void _ImageAlphaMask(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Image* alphaMask = pkGetSlotNativeInstance(vm, 2);

ImageAlphaMask(image, *alphaMask);

}

// Premultiply alpha channel
static void _ImageAlphaPremultiply(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);

ImageAlphaPremultiply(image);

}

// Resize image (Bicubic scaling algorithm)
static void _ImageResize(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);
  double newWidth;
  if (!pkValidateSlotNumber(vm, 2, &newWidth)) return;
  double newHeight;
  if (!pkValidateSlotNumber(vm, 3, &newHeight)) return;

ImageResize(image, newWidth, newHeight);

}

// Resize image (Nearest-Neighbor scaling algorithm)
static void _ImageResizeNN(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);
  double newWidth;
  if (!pkValidateSlotNumber(vm, 2, &newWidth)) return;
  double newHeight;
  if (!pkValidateSlotNumber(vm, 3, &newHeight)) return;

ImageResizeNN(image, newWidth, newHeight);

}

// Resize canvas and fill with color
static void _ImageResizeCanvas(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);
  double newWidth;
  if (!pkValidateSlotNumber(vm, 2, &newWidth)) return;
  double newHeight;
  if (!pkValidateSlotNumber(vm, 3, &newHeight)) return;
  double offsetX;
  if (!pkValidateSlotNumber(vm, 4, &offsetX)) return;
  double offsetY;
  if (!pkValidateSlotNumber(vm, 5, &offsetY)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 6, 0)) return;
  Color* fill = pkGetSlotNativeInstance(vm, 6);

ImageResizeCanvas(image, newWidth, newHeight, offsetX, offsetY, *fill);

}

// Compute all mipmap levels for a provided image
static void _ImageMipmaps(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);

ImageMipmaps(image);

}

// Dither image data to 16bpp or lower (Floyd-Steinberg dithering)
static void _ImageDither(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);
  double rBpp;
  if (!pkValidateSlotNumber(vm, 2, &rBpp)) return;
  double gBpp;
  if (!pkValidateSlotNumber(vm, 3, &gBpp)) return;
  double bBpp;
  if (!pkValidateSlotNumber(vm, 4, &bBpp)) return;
  double aBpp;
  if (!pkValidateSlotNumber(vm, 5, &aBpp)) return;

ImageDither(image, rBpp, gBpp, bBpp, aBpp);

}

// Flip image vertically
static void _ImageFlipVertical(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);

ImageFlipVertical(image);

}

// Flip image horizontally
static void _ImageFlipHorizontal(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);

ImageFlipHorizontal(image);

}

// Rotate image clockwise 90deg
static void _ImageRotateCW(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);

ImageRotateCW(image);

}

// Rotate image counter-clockwise 90deg
static void _ImageRotateCCW(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);

ImageRotateCCW(image);

}

// Modify image color: tint
static void _ImageColorTint(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 2);

ImageColorTint(image, *color);

}

// Modify image color: invert
static void _ImageColorInvert(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);

ImageColorInvert(image);

}

// Modify image color: grayscale
static void _ImageColorGrayscale(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);

ImageColorGrayscale(image);

}

// Modify image color: contrast (-100 to 100)
static void _ImageColorContrast(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);
  double contrast;
  if (!pkValidateSlotNumber(vm, 2, &contrast)) return;

ImageColorContrast(image, contrast);

}

// Modify image color: brightness (-255 to 255)
static void _ImageColorBrightness(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);
  double brightness;
  if (!pkValidateSlotNumber(vm, 2, &brightness)) return;

ImageColorBrightness(image, brightness);

}

// Modify image color: replace color
static void _ImageColorReplace(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Color* replace = pkGetSlotNativeInstance(vm, 3);

ImageColorReplace(image, *color, *replace);

}

// Unload color data loaded with LoadImageColors()
static void _UnloadImageColors(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Color* colors = pkGetSlotNativeInstance(vm, 1);

UnloadImageColors(colors);

}

// Unload colors palette loaded with LoadImagePalette()
static void _UnloadImagePalette(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Color* colors = pkGetSlotNativeInstance(vm, 1);

UnloadImagePalette(colors);

}

// Get image alpha border rectangle
static void _GetImageAlphaBorder(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);
  double threshold;
  if (!pkValidateSlotNumber(vm, 2, &threshold)) return;

  Rectangle ret = GetImageAlphaBorder(*image, threshold);

  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Rectangle* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get image pixel color at (x, y) position
static void _GetImageColor(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);
  double x;
  if (!pkValidateSlotNumber(vm, 2, &x)) return;
  double y;
  if (!pkValidateSlotNumber(vm, 3, &y)) return;

  Color ret = GetImageColor(*image, x, y);

  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Color* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Clear image background with given color
static void _ImageClearBackground(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* dst = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 2);

ImageClearBackground(dst, *color);

}

// Draw pixel within an image
static void _ImageDrawPixel(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* dst = pkGetSlotNativeInstance(vm, 1);
  double posX;
  if (!pkValidateSlotNumber(vm, 2, &posX)) return;
  double posY;
  if (!pkValidateSlotNumber(vm, 3, &posY)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 4);

ImageDrawPixel(dst, posX, posY, *color);

}

// Draw pixel within an image (Vector version)
static void _ImageDrawPixelV(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* dst = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector2* position = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 3);

ImageDrawPixelV(dst, *position, *color);

}

// Draw line within an image
static void _ImageDrawLine(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* dst = pkGetSlotNativeInstance(vm, 1);
  double startPosX;
  if (!pkValidateSlotNumber(vm, 2, &startPosX)) return;
  double startPosY;
  if (!pkValidateSlotNumber(vm, 3, &startPosY)) return;
  double endPosX;
  if (!pkValidateSlotNumber(vm, 4, &endPosX)) return;
  double endPosY;
  if (!pkValidateSlotNumber(vm, 5, &endPosY)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 6, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 6);

ImageDrawLine(dst, startPosX, startPosY, endPosX, endPosY, *color);

}

// Draw line within an image (Vector version)
static void _ImageDrawLineV(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* dst = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector2* start = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Vector2* end = pkGetSlotNativeInstance(vm, 3);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 4);

ImageDrawLineV(dst, *start, *end, *color);

}

// Draw circle within an image
static void _ImageDrawCircle(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* dst = pkGetSlotNativeInstance(vm, 1);
  double centerX;
  if (!pkValidateSlotNumber(vm, 2, &centerX)) return;
  double centerY;
  if (!pkValidateSlotNumber(vm, 3, &centerY)) return;
  double radius;
  if (!pkValidateSlotNumber(vm, 4, &radius)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 5);

ImageDrawCircle(dst, centerX, centerY, radius, *color);

}

// Draw circle within an image (Vector version)
static void _ImageDrawCircleV(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* dst = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector2* center = pkGetSlotNativeInstance(vm, 2);
  double radius;
  if (!pkValidateSlotNumber(vm, 3, &radius)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 4);

ImageDrawCircleV(dst, *center, radius, *color);

}

// Draw rectangle within an image
static void _ImageDrawRectangle(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* dst = pkGetSlotNativeInstance(vm, 1);
  double posX;
  if (!pkValidateSlotNumber(vm, 2, &posX)) return;
  double posY;
  if (!pkValidateSlotNumber(vm, 3, &posY)) return;
  double width;
  if (!pkValidateSlotNumber(vm, 4, &width)) return;
  double height;
  if (!pkValidateSlotNumber(vm, 5, &height)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 6, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 6);

ImageDrawRectangle(dst, posX, posY, width, height, *color);

}

// Draw rectangle within an image (Vector version)
static void _ImageDrawRectangleV(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* dst = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector2* position = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Vector2* size = pkGetSlotNativeInstance(vm, 3);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 4);

ImageDrawRectangleV(dst, *position, *size, *color);

}

// Draw rectangle within an image
static void _ImageDrawRectangleRec(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* dst = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Rectangle* rec = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 3);

ImageDrawRectangleRec(dst, *rec, *color);

}

// Draw rectangle lines within an image
static void _ImageDrawRectangleLines(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* dst = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Rectangle* rec = pkGetSlotNativeInstance(vm, 2);
  double thick;
  if (!pkValidateSlotNumber(vm, 3, &thick)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 4);

ImageDrawRectangleLines(dst, *rec, thick, *color);

}

// Draw a source image within a destination image (tint applied to source)
static void _ImageDraw(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* dst = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Image* src = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Rectangle* srcRec = pkGetSlotNativeInstance(vm, 3);
  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Rectangle* dstRec = pkGetSlotNativeInstance(vm, 4);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Color* tint = pkGetSlotNativeInstance(vm, 5);

ImageDraw(dst, *src, *srcRec, *dstRec, *tint);

}

// Draw text (using default font) within an image (destination)
static void _ImageDrawText(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* dst = pkGetSlotNativeInstance(vm, 1);
  const char* text;
  if (!pkValidateSlotString(vm, 2, &text, NULL)) return;
  double posX;
  if (!pkValidateSlotNumber(vm, 3, &posX)) return;
  double posY;
  if (!pkValidateSlotNumber(vm, 4, &posY)) return;
  double fontSize;
  if (!pkValidateSlotNumber(vm, 5, &fontSize)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 6, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 6);

ImageDrawText(dst, text, posX, posY, fontSize, *color);

}

// Draw text (custom sprite font) within an image (destination)
static void _ImageDrawTextEx(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* dst = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Font);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Font* font = pkGetSlotNativeInstance(vm, 2);
  const char* text;
  if (!pkValidateSlotString(vm, 3, &text, NULL)) return;
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Vector2* position = pkGetSlotNativeInstance(vm, 4);
  double fontSize;
  if (!pkValidateSlotNumber(vm, 5, &fontSize)) return;
  double spacing;
  if (!pkValidateSlotNumber(vm, 6, &spacing)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 7, 0)) return;
  Color* tint = pkGetSlotNativeInstance(vm, 7);

ImageDrawTextEx(dst, *font, text, *position, fontSize, spacing, *tint);

}

// Load texture from file into GPU memory (VRAM)
static void _LoadTexture(PKVM* vm) {

  const char* fileName;
  if (!pkValidateSlotString(vm, 1, &fileName, NULL)) return;

  Texture ret = LoadTexture(fileName);

  pkSetSlotHandle(vm, 0, cls_Texture);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Texture* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Load texture from image data
static void _LoadTextureFromImage(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);

  Texture ret = LoadTextureFromImage(*image);

  pkSetSlotHandle(vm, 0, cls_Texture);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Texture* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Load cubemap from image, multiple image cubemap layouts supported
static void _LoadTextureCubemap(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);
  double layout;
  if (!pkValidateSlotNumber(vm, 2, &layout)) return;

  Texture ret = LoadTextureCubemap(*image, layout);

  pkSetSlotHandle(vm, 0, cls_Texture);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Texture* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Load texture for rendering (framebuffer)
static void _LoadRenderTexture(PKVM* vm) {

  double width;
  if (!pkValidateSlotNumber(vm, 1, &width)) return;
  double height;
  if (!pkValidateSlotNumber(vm, 2, &height)) return;

  RenderTexture ret = LoadRenderTexture(width, height);

  pkSetSlotHandle(vm, 0, cls_RenderTexture);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  RenderTexture* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Unload texture from GPU memory (VRAM)
static void _UnloadTexture(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Texture);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Texture* texture = pkGetSlotNativeInstance(vm, 1);

UnloadTexture(*texture);

}

// Unload render texture from GPU memory (VRAM)
static void _UnloadRenderTexture(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_RenderTexture);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  RenderTexture* target = pkGetSlotNativeInstance(vm, 1);

UnloadRenderTexture(*target);

}

// Generate GPU mipmaps for a texture
static void _GenTextureMipmaps(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Texture);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Texture* texture = pkGetSlotNativeInstance(vm, 1);

GenTextureMipmaps(texture);

}

// Set texture scaling filter mode
static void _SetTextureFilter(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Texture);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Texture* texture = pkGetSlotNativeInstance(vm, 1);
  double filter;
  if (!pkValidateSlotNumber(vm, 2, &filter)) return;

SetTextureFilter(*texture, filter);

}

// Set texture wrapping mode
static void _SetTextureWrap(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Texture);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Texture* texture = pkGetSlotNativeInstance(vm, 1);
  double wrap;
  if (!pkValidateSlotNumber(vm, 2, &wrap)) return;

SetTextureWrap(*texture, wrap);

}

// Draw a Texture2D
static void _DrawTexture(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Texture);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Texture* texture = pkGetSlotNativeInstance(vm, 1);
  double posX;
  if (!pkValidateSlotNumber(vm, 2, &posX)) return;
  double posY;
  if (!pkValidateSlotNumber(vm, 3, &posY)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Color* tint = pkGetSlotNativeInstance(vm, 4);

DrawTexture(*texture, posX, posY, *tint);

}

// Draw a Texture2D with position defined as Vector2
static void _DrawTextureV(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Texture);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Texture* texture = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector2* position = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Color* tint = pkGetSlotNativeInstance(vm, 3);

DrawTextureV(*texture, *position, *tint);

}

// Draw a Texture2D with extended parameters
static void _DrawTextureEx(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Texture);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Texture* texture = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector2* position = pkGetSlotNativeInstance(vm, 2);
  double rotation;
  if (!pkValidateSlotNumber(vm, 3, &rotation)) return;
  double scale;
  if (!pkValidateSlotNumber(vm, 4, &scale)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Color* tint = pkGetSlotNativeInstance(vm, 5);

DrawTextureEx(*texture, *position, rotation, scale, *tint);

}

// Draw a part of a texture defined by a rectangle
static void _DrawTextureRec(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Texture);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Texture* texture = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Rectangle* source = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Vector2* position = pkGetSlotNativeInstance(vm, 3);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Color* tint = pkGetSlotNativeInstance(vm, 4);

DrawTextureRec(*texture, *source, *position, *tint);

}

// Draw texture quad with tiling and offset parameters
static void _DrawTextureQuad(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Texture);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Texture* texture = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector2* tiling = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Vector2* offset = pkGetSlotNativeInstance(vm, 3);
  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Rectangle* quad = pkGetSlotNativeInstance(vm, 4);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Color* tint = pkGetSlotNativeInstance(vm, 5);

DrawTextureQuad(*texture, *tiling, *offset, *quad, *tint);

}

// Draw part of a texture (defined by a rectangle) with rotation and scale tiled into dest.
static void _DrawTextureTiled(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Texture);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Texture* texture = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Rectangle* source = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Rectangle* dest = pkGetSlotNativeInstance(vm, 3);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Vector2* origin = pkGetSlotNativeInstance(vm, 4);
  double rotation;
  if (!pkValidateSlotNumber(vm, 5, &rotation)) return;
  double scale;
  if (!pkValidateSlotNumber(vm, 6, &scale)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 7, 0)) return;
  Color* tint = pkGetSlotNativeInstance(vm, 7);

DrawTextureTiled(*texture, *source, *dest, *origin, rotation, scale, *tint);

}

// Draw a part of a texture defined by a rectangle with 'pro' parameters
static void _DrawTexturePro(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Texture);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Texture* texture = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Rectangle* source = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Rectangle* dest = pkGetSlotNativeInstance(vm, 3);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Vector2* origin = pkGetSlotNativeInstance(vm, 4);
  double rotation;
  if (!pkValidateSlotNumber(vm, 5, &rotation)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 6, 0)) return;
  Color* tint = pkGetSlotNativeInstance(vm, 6);

DrawTexturePro(*texture, *source, *dest, *origin, rotation, *tint);

}

// Draws a texture (or part of it) that stretches or shrinks nicely
static void _DrawTextureNPatch(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Texture);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Texture* texture = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_NPatchInfo);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  NPatchInfo* nPatchInfo = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Rectangle* dest = pkGetSlotNativeInstance(vm, 3);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Vector2* origin = pkGetSlotNativeInstance(vm, 4);
  double rotation;
  if (!pkValidateSlotNumber(vm, 5, &rotation)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 6, 0)) return;
  Color* tint = pkGetSlotNativeInstance(vm, 6);

DrawTextureNPatch(*texture, *nPatchInfo, *dest, *origin, rotation, *tint);

}

// Draw a textured polygon
static void _DrawTexturePoly(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Texture);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Texture* texture = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector2* center = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Vector2* points = pkGetSlotNativeInstance(vm, 3);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Vector2* texcoords = pkGetSlotNativeInstance(vm, 4);
  double pointCount;
  if (!pkValidateSlotNumber(vm, 5, &pointCount)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 6, 0)) return;
  Color* tint = pkGetSlotNativeInstance(vm, 6);

DrawTexturePoly(*texture, *center, points, texcoords, pointCount, *tint);

}

// Get color with alpha applied, alpha goes from 0.0f to 1.0f
static void _Fade(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 1);
  double alpha;
  if (!pkValidateSlotNumber(vm, 2, &alpha)) return;

  Color ret = Fade(*color, alpha);

  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Color* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get hexadecimal value for a Color
static void _ColorToInt(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 1);

  double ret = (double) ColorToInt(*color);

  pkSetSlotNumber(vm, 0, ret);
}

// Get Color normalized as float [0..1]
static void _ColorNormalize(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 1);

  Vector4 ret = ColorNormalize(*color);

  pkSetSlotHandle(vm, 0, cls_Vector4);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Vector4* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get Color from normalized values [0..1]
static void _ColorFromNormalized(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector4);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector4* normalized = pkGetSlotNativeInstance(vm, 1);

  Color ret = ColorFromNormalized(*normalized);

  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Color* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get HSV values for a Color, hue [0..360], saturation/value [0..1]
static void _ColorToHSV(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 1);

  Vector3 ret = ColorToHSV(*color);

  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Vector3* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get a Color from HSV values, hue [0..360], saturation/value [0..1]
static void _ColorFromHSV(PKVM* vm) {

  double hue;
  if (!pkValidateSlotNumber(vm, 1, &hue)) return;
  double saturation;
  if (!pkValidateSlotNumber(vm, 2, &saturation)) return;
  double value;
  if (!pkValidateSlotNumber(vm, 3, &value)) return;

  Color ret = ColorFromHSV(hue, saturation, value);

  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Color* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get color with alpha applied, alpha goes from 0.0f to 1.0f
static void _ColorAlpha(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 1);
  double alpha;
  if (!pkValidateSlotNumber(vm, 2, &alpha)) return;

  Color ret = ColorAlpha(*color, alpha);

  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Color* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get src alpha-blended into dst color with tint
static void _ColorAlphaBlend(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Color* dst = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Color* src = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Color* tint = pkGetSlotNativeInstance(vm, 3);

  Color ret = ColorAlphaBlend(*dst, *src, *tint);

  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Color* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get Color structure from hexadecimal value
static void _GetColor(PKVM* vm) {

  double hexValue;
  if (!pkValidateSlotNumber(vm, 1, &hexValue)) return;

  Color ret = GetColor(hexValue);

  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Color* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get pixel data size in bytes for certain format
static void _GetPixelDataSize(PKVM* vm) {

  double width;
  if (!pkValidateSlotNumber(vm, 1, &width)) return;
  double height;
  if (!pkValidateSlotNumber(vm, 2, &height)) return;
  double format;
  if (!pkValidateSlotNumber(vm, 3, &format)) return;

  double ret = (double) GetPixelDataSize(width, height, format);

  pkSetSlotNumber(vm, 0, ret);
}

// Get the default Font
static void _GetFontDefault(PKVM* vm) {


  Font ret = GetFontDefault();

  pkSetSlotHandle(vm, 0, cls_Font);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Font* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Load font from file into GPU memory (VRAM)
static void _LoadFont(PKVM* vm) {

  const char* fileName;
  if (!pkValidateSlotString(vm, 1, &fileName, NULL)) return;

  Font ret = LoadFont(fileName);

  pkSetSlotHandle(vm, 0, cls_Font);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Font* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Load font from Image (XNA style)
static void _LoadFontFromImage(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* image = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Color* key = pkGetSlotNativeInstance(vm, 2);
  double firstChar;
  if (!pkValidateSlotNumber(vm, 3, &firstChar)) return;

  Font ret = LoadFontFromImage(*image, *key, firstChar);

  pkSetSlotHandle(vm, 0, cls_Font);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Font* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Unload font chars info data (RAM)
static void _UnloadFontData(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_GlyphInfo);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  GlyphInfo* chars = pkGetSlotNativeInstance(vm, 1);
  double glyphCount;
  if (!pkValidateSlotNumber(vm, 2, &glyphCount)) return;

UnloadFontData(chars, glyphCount);

}

// Unload Font from GPU memory (VRAM)
static void _UnloadFont(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Font);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Font* font = pkGetSlotNativeInstance(vm, 1);

UnloadFont(*font);

}

// Draw current FPS
static void _DrawFPS(PKVM* vm) {

  double posX;
  if (!pkValidateSlotNumber(vm, 1, &posX)) return;
  double posY;
  if (!pkValidateSlotNumber(vm, 2, &posY)) return;

DrawFPS(posX, posY);

}

// Draw text (using default font)
static void _DrawText(PKVM* vm) {

  const char* text;
  if (!pkValidateSlotString(vm, 1, &text, NULL)) return;
  double posX;
  if (!pkValidateSlotNumber(vm, 2, &posX)) return;
  double posY;
  if (!pkValidateSlotNumber(vm, 3, &posY)) return;
  double fontSize;
  if (!pkValidateSlotNumber(vm, 4, &fontSize)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 5);

DrawText(text, posX, posY, fontSize, *color);

}

// Draw text using font and additional parameters
static void _DrawTextEx(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Font);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Font* font = pkGetSlotNativeInstance(vm, 1);
  const char* text;
  if (!pkValidateSlotString(vm, 2, &text, NULL)) return;
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Vector2* position = pkGetSlotNativeInstance(vm, 3);
  double fontSize;
  if (!pkValidateSlotNumber(vm, 4, &fontSize)) return;
  double spacing;
  if (!pkValidateSlotNumber(vm, 5, &spacing)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 6, 0)) return;
  Color* tint = pkGetSlotNativeInstance(vm, 6);

DrawTextEx(*font, text, *position, fontSize, spacing, *tint);

}

// Draw text using Font and pro parameters (rotation)
static void _DrawTextPro(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Font);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Font* font = pkGetSlotNativeInstance(vm, 1);
  const char* text;
  if (!pkValidateSlotString(vm, 2, &text, NULL)) return;
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Vector2* position = pkGetSlotNativeInstance(vm, 3);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Vector2* origin = pkGetSlotNativeInstance(vm, 4);
  double rotation;
  if (!pkValidateSlotNumber(vm, 5, &rotation)) return;
  double fontSize;
  if (!pkValidateSlotNumber(vm, 6, &fontSize)) return;
  double spacing;
  if (!pkValidateSlotNumber(vm, 7, &spacing)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 8, 0)) return;
  Color* tint = pkGetSlotNativeInstance(vm, 8);

DrawTextPro(*font, text, *position, *origin, rotation, fontSize, spacing, *tint);

}

// Draw one character (codepoint)
static void _DrawTextCodepoint(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Font);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Font* font = pkGetSlotNativeInstance(vm, 1);
  double codepoint;
  if (!pkValidateSlotNumber(vm, 2, &codepoint)) return;
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Vector2* position = pkGetSlotNativeInstance(vm, 3);
  double fontSize;
  if (!pkValidateSlotNumber(vm, 4, &fontSize)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Color* tint = pkGetSlotNativeInstance(vm, 5);

DrawTextCodepoint(*font, codepoint, *position, fontSize, *tint);

}

// Measure string width for default font
static void _MeasureText(PKVM* vm) {

  const char* text;
  if (!pkValidateSlotString(vm, 1, &text, NULL)) return;
  double fontSize;
  if (!pkValidateSlotNumber(vm, 2, &fontSize)) return;

  double ret = (double) MeasureText(text, fontSize);

  pkSetSlotNumber(vm, 0, ret);
}

// Measure string size for Font
static void _MeasureTextEx(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Font);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Font* font = pkGetSlotNativeInstance(vm, 1);
  const char* text;
  if (!pkValidateSlotString(vm, 2, &text, NULL)) return;
  double fontSize;
  if (!pkValidateSlotNumber(vm, 3, &fontSize)) return;
  double spacing;
  if (!pkValidateSlotNumber(vm, 4, &spacing)) return;

  Vector2 ret = MeasureTextEx(*font, text, fontSize, spacing);

  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Vector2* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get glyph index position in font for a codepoint (unicode character), fallback to '?' if not found
static void _GetGlyphIndex(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Font);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Font* font = pkGetSlotNativeInstance(vm, 1);
  double codepoint;
  if (!pkValidateSlotNumber(vm, 2, &codepoint)) return;

  double ret = (double) GetGlyphIndex(*font, codepoint);

  pkSetSlotNumber(vm, 0, ret);
}

// Get glyph font info data for a codepoint (unicode character), fallback to '?' if not found
static void _GetGlyphInfo(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Font);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Font* font = pkGetSlotNativeInstance(vm, 1);
  double codepoint;
  if (!pkValidateSlotNumber(vm, 2, &codepoint)) return;

  GlyphInfo ret = GetGlyphInfo(*font, codepoint);

  pkSetSlotHandle(vm, 0, cls_GlyphInfo);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  GlyphInfo* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get glyph rectangle in font atlas for a codepoint (unicode character), fallback to '?' if not found
static void _GetGlyphAtlasRec(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Font);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Font* font = pkGetSlotNativeInstance(vm, 1);
  double codepoint;
  if (!pkValidateSlotNumber(vm, 2, &codepoint)) return;

  Rectangle ret = GetGlyphAtlasRec(*font, codepoint);

  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Rectangle* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get total number of codepoints in a UTF-8 encoded string
static void _GetCodepointCount(PKVM* vm) {

  const char* text;
  if (!pkValidateSlotString(vm, 1, &text, NULL)) return;

  double ret = (double) GetCodepointCount(text);

  pkSetSlotNumber(vm, 0, ret);
}

// Check if two text string are equal
static void _TextIsEqual(PKVM* vm) {

  const char* text1;
  if (!pkValidateSlotString(vm, 1, &text1, NULL)) return;
  const char* text2;
  if (!pkValidateSlotString(vm, 2, &text2, NULL)) return;

  double ret = (double) TextIsEqual(text1, text2);

  pkSetSlotNumber(vm, 0, ret);
}

// Get text length, checks for '\0' ending
static void _TextLength(PKVM* vm) {

  const char* text;
  if (!pkValidateSlotString(vm, 1, &text, NULL)) return;

  double ret = (double) TextLength(text);

  pkSetSlotNumber(vm, 0, ret);
}

// Get a piece of a text string
static void _TextSubtext(PKVM* vm) {

  const char* text;
  if (!pkValidateSlotString(vm, 1, &text, NULL)) return;
  double position;
  if (!pkValidateSlotNumber(vm, 2, &position)) return;
  double length;
  if (!pkValidateSlotNumber(vm, 3, &length)) return;

  const char* ret = TextSubtext(text, position, length);

  pkSetSlotString(vm, 0, ret);
}

// Find first text occurrence within a string
static void _TextFindIndex(PKVM* vm) {

  const char* text;
  if (!pkValidateSlotString(vm, 1, &text, NULL)) return;
  const char* find;
  if (!pkValidateSlotString(vm, 2, &find, NULL)) return;

  double ret = (double) TextFindIndex(text, find);

  pkSetSlotNumber(vm, 0, ret);
}

// Get upper case version of provided string
static void _TextToUpper(PKVM* vm) {

  const char* text;
  if (!pkValidateSlotString(vm, 1, &text, NULL)) return;

  const char* ret = TextToUpper(text);

  pkSetSlotString(vm, 0, ret);
}

// Get lower case version of provided string
static void _TextToLower(PKVM* vm) {

  const char* text;
  if (!pkValidateSlotString(vm, 1, &text, NULL)) return;

  const char* ret = TextToLower(text);

  pkSetSlotString(vm, 0, ret);
}

// Get Pascal case notation version of provided string
static void _TextToPascal(PKVM* vm) {

  const char* text;
  if (!pkValidateSlotString(vm, 1, &text, NULL)) return;

  const char* ret = TextToPascal(text);

  pkSetSlotString(vm, 0, ret);
}

// Get integer value from text (negative values not supported)
static void _TextToInteger(PKVM* vm) {

  const char* text;
  if (!pkValidateSlotString(vm, 1, &text, NULL)) return;

  double ret = (double) TextToInteger(text);

  pkSetSlotNumber(vm, 0, ret);
}

// Draw a line in 3D world space
static void _DrawLine3D(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector3* startPos = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector3* endPos = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 3);

DrawLine3D(*startPos, *endPos, *color);

}

// Draw a point in 3D space, actually a small line
static void _DrawPoint3D(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector3* position = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 2);

DrawPoint3D(*position, *color);

}

// Draw a circle in 3D world space
static void _DrawCircle3D(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector3* center = pkGetSlotNativeInstance(vm, 1);
  double radius;
  if (!pkValidateSlotNumber(vm, 2, &radius)) return;
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Vector3* rotationAxis = pkGetSlotNativeInstance(vm, 3);
  double rotationAngle;
  if (!pkValidateSlotNumber(vm, 4, &rotationAngle)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 5);

DrawCircle3D(*center, radius, *rotationAxis, rotationAngle, *color);

}

// Draw a color-filled triangle (vertex in counter-clockwise order!)
static void _DrawTriangle3D(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector3* v1 = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector3* v2 = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Vector3* v3 = pkGetSlotNativeInstance(vm, 3);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 4);

DrawTriangle3D(*v1, *v2, *v3, *color);

}

// Draw a triangle strip defined by points
static void _DrawTriangleStrip3D(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector3* points = pkGetSlotNativeInstance(vm, 1);
  double pointCount;
  if (!pkValidateSlotNumber(vm, 2, &pointCount)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 3);

DrawTriangleStrip3D(points, pointCount, *color);

}

// Draw cube
static void _DrawCube(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector3* position = pkGetSlotNativeInstance(vm, 1);
  double width;
  if (!pkValidateSlotNumber(vm, 2, &width)) return;
  double height;
  if (!pkValidateSlotNumber(vm, 3, &height)) return;
  double length;
  if (!pkValidateSlotNumber(vm, 4, &length)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 5);

DrawCube(*position, width, height, length, *color);

}

// Draw cube (Vector version)
static void _DrawCubeV(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector3* position = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector3* size = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 3);

DrawCubeV(*position, *size, *color);

}

// Draw cube wires
static void _DrawCubeWires(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector3* position = pkGetSlotNativeInstance(vm, 1);
  double width;
  if (!pkValidateSlotNumber(vm, 2, &width)) return;
  double height;
  if (!pkValidateSlotNumber(vm, 3, &height)) return;
  double length;
  if (!pkValidateSlotNumber(vm, 4, &length)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 5);

DrawCubeWires(*position, width, height, length, *color);

}

// Draw cube wires (Vector version)
static void _DrawCubeWiresV(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector3* position = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector3* size = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 3);

DrawCubeWiresV(*position, *size, *color);

}

// Draw cube textured
static void _DrawCubeTexture(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Texture);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Texture* texture = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector3* position = pkGetSlotNativeInstance(vm, 2);
  double width;
  if (!pkValidateSlotNumber(vm, 3, &width)) return;
  double height;
  if (!pkValidateSlotNumber(vm, 4, &height)) return;
  double length;
  if (!pkValidateSlotNumber(vm, 5, &length)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 6, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 6);

DrawCubeTexture(*texture, *position, width, height, length, *color);

}

// Draw cube with a region of a texture
static void _DrawCubeTextureRec(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Texture);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Texture* texture = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Rectangle* source = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Vector3* position = pkGetSlotNativeInstance(vm, 3);
  double width;
  if (!pkValidateSlotNumber(vm, 4, &width)) return;
  double height;
  if (!pkValidateSlotNumber(vm, 5, &height)) return;
  double length;
  if (!pkValidateSlotNumber(vm, 6, &length)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 7, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 7);

DrawCubeTextureRec(*texture, *source, *position, width, height, length, *color);

}

// Draw sphere
static void _DrawSphere(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector3* centerPos = pkGetSlotNativeInstance(vm, 1);
  double radius;
  if (!pkValidateSlotNumber(vm, 2, &radius)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 3);

DrawSphere(*centerPos, radius, *color);

}

// Draw sphere with extended parameters
static void _DrawSphereEx(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector3* centerPos = pkGetSlotNativeInstance(vm, 1);
  double radius;
  if (!pkValidateSlotNumber(vm, 2, &radius)) return;
  double rings;
  if (!pkValidateSlotNumber(vm, 3, &rings)) return;
  double slices;
  if (!pkValidateSlotNumber(vm, 4, &slices)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 5);

DrawSphereEx(*centerPos, radius, rings, slices, *color);

}

// Draw sphere wires
static void _DrawSphereWires(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector3* centerPos = pkGetSlotNativeInstance(vm, 1);
  double radius;
  if (!pkValidateSlotNumber(vm, 2, &radius)) return;
  double rings;
  if (!pkValidateSlotNumber(vm, 3, &rings)) return;
  double slices;
  if (!pkValidateSlotNumber(vm, 4, &slices)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 5);

DrawSphereWires(*centerPos, radius, rings, slices, *color);

}

// Draw a cylinder/cone
static void _DrawCylinder(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector3* position = pkGetSlotNativeInstance(vm, 1);
  double radiusTop;
  if (!pkValidateSlotNumber(vm, 2, &radiusTop)) return;
  double radiusBottom;
  if (!pkValidateSlotNumber(vm, 3, &radiusBottom)) return;
  double height;
  if (!pkValidateSlotNumber(vm, 4, &height)) return;
  double slices;
  if (!pkValidateSlotNumber(vm, 5, &slices)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 6, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 6);

DrawCylinder(*position, radiusTop, radiusBottom, height, slices, *color);

}

// Draw a cylinder with base at startPos and top at endPos
static void _DrawCylinderEx(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector3* startPos = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector3* endPos = pkGetSlotNativeInstance(vm, 2);
  double startRadius;
  if (!pkValidateSlotNumber(vm, 3, &startRadius)) return;
  double endRadius;
  if (!pkValidateSlotNumber(vm, 4, &endRadius)) return;
  double sides;
  if (!pkValidateSlotNumber(vm, 5, &sides)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 6, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 6);

DrawCylinderEx(*startPos, *endPos, startRadius, endRadius, sides, *color);

}

// Draw a cylinder/cone wires
static void _DrawCylinderWires(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector3* position = pkGetSlotNativeInstance(vm, 1);
  double radiusTop;
  if (!pkValidateSlotNumber(vm, 2, &radiusTop)) return;
  double radiusBottom;
  if (!pkValidateSlotNumber(vm, 3, &radiusBottom)) return;
  double height;
  if (!pkValidateSlotNumber(vm, 4, &height)) return;
  double slices;
  if (!pkValidateSlotNumber(vm, 5, &slices)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 6, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 6);

DrawCylinderWires(*position, radiusTop, radiusBottom, height, slices, *color);

}

// Draw a cylinder wires with base at startPos and top at endPos
static void _DrawCylinderWiresEx(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector3* startPos = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector3* endPos = pkGetSlotNativeInstance(vm, 2);
  double startRadius;
  if (!pkValidateSlotNumber(vm, 3, &startRadius)) return;
  double endRadius;
  if (!pkValidateSlotNumber(vm, 4, &endRadius)) return;
  double sides;
  if (!pkValidateSlotNumber(vm, 5, &sides)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 6, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 6);

DrawCylinderWiresEx(*startPos, *endPos, startRadius, endRadius, sides, *color);

}

// Draw a plane XZ
static void _DrawPlane(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector3* centerPos = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector2* size = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 3);

DrawPlane(*centerPos, *size, *color);

}

// Draw a ray line
static void _DrawRay(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Ray);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Ray* ray = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 2);

DrawRay(*ray, *color);

}

// Draw a grid (centered at (0, 0, 0))
static void _DrawGrid(PKVM* vm) {

  double slices;
  if (!pkValidateSlotNumber(vm, 1, &slices)) return;
  double spacing;
  if (!pkValidateSlotNumber(vm, 2, &spacing)) return;

DrawGrid(slices, spacing);

}

// Load model from files (meshes and materials)
static void _LoadModel(PKVM* vm) {

  const char* fileName;
  if (!pkValidateSlotString(vm, 1, &fileName, NULL)) return;

  Model ret = LoadModel(fileName);

  pkSetSlotHandle(vm, 0, cls_Model);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Model* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Load model from generated mesh (default material)
static void _LoadModelFromMesh(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Mesh);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Mesh* mesh = pkGetSlotNativeInstance(vm, 1);

  Model ret = LoadModelFromMesh(*mesh);

  pkSetSlotHandle(vm, 0, cls_Model);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Model* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Unload model (including meshes) from memory (RAM and/or VRAM)
static void _UnloadModel(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Model);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Model* model = pkGetSlotNativeInstance(vm, 1);

UnloadModel(*model);

}

// Unload model (but not meshes) from memory (RAM and/or VRAM)
static void _UnloadModelKeepMeshes(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Model);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Model* model = pkGetSlotNativeInstance(vm, 1);

UnloadModelKeepMeshes(*model);

}

// Compute model bounding box limits (considers all meshes)
static void _GetModelBoundingBox(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Model);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Model* model = pkGetSlotNativeInstance(vm, 1);

  BoundingBox ret = GetModelBoundingBox(*model);

  pkSetSlotHandle(vm, 0, cls_BoundingBox);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  BoundingBox* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Draw a model (with texture if set)
static void _DrawModel(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Model);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Model* model = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector3* position = pkGetSlotNativeInstance(vm, 2);
  double scale;
  if (!pkValidateSlotNumber(vm, 3, &scale)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Color* tint = pkGetSlotNativeInstance(vm, 4);

DrawModel(*model, *position, scale, *tint);

}

// Draw a model with extended parameters
static void _DrawModelEx(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Model);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Model* model = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector3* position = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Vector3* rotationAxis = pkGetSlotNativeInstance(vm, 3);
  double rotationAngle;
  if (!pkValidateSlotNumber(vm, 4, &rotationAngle)) return;
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Vector3* scale = pkGetSlotNativeInstance(vm, 5);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 6, 0)) return;
  Color* tint = pkGetSlotNativeInstance(vm, 6);

DrawModelEx(*model, *position, *rotationAxis, rotationAngle, *scale, *tint);

}

// Draw a model wires (with texture if set)
static void _DrawModelWires(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Model);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Model* model = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector3* position = pkGetSlotNativeInstance(vm, 2);
  double scale;
  if (!pkValidateSlotNumber(vm, 3, &scale)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Color* tint = pkGetSlotNativeInstance(vm, 4);

DrawModelWires(*model, *position, scale, *tint);

}

// Draw a model wires (with texture if set) with extended parameters
static void _DrawModelWiresEx(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Model);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Model* model = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector3* position = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Vector3* rotationAxis = pkGetSlotNativeInstance(vm, 3);
  double rotationAngle;
  if (!pkValidateSlotNumber(vm, 4, &rotationAngle)) return;
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Vector3* scale = pkGetSlotNativeInstance(vm, 5);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 6, 0)) return;
  Color* tint = pkGetSlotNativeInstance(vm, 6);

DrawModelWiresEx(*model, *position, *rotationAxis, rotationAngle, *scale, *tint);

}

// Draw bounding box (wires)
static void _DrawBoundingBox(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_BoundingBox);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  BoundingBox* box = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Color* color = pkGetSlotNativeInstance(vm, 2);

DrawBoundingBox(*box, *color);

}

// Draw a billboard texture
static void _DrawBillboard(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Camera3D);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Camera3D* camera = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Texture);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Texture* texture = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Vector3* position = pkGetSlotNativeInstance(vm, 3);
  double size;
  if (!pkValidateSlotNumber(vm, 4, &size)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Color* tint = pkGetSlotNativeInstance(vm, 5);

DrawBillboard(*camera, *texture, *position, size, *tint);

}

// Draw a billboard texture defined by source
static void _DrawBillboardRec(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Camera3D);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Camera3D* camera = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Texture);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Texture* texture = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Rectangle* source = pkGetSlotNativeInstance(vm, 3);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Vector3* position = pkGetSlotNativeInstance(vm, 4);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Vector2* size = pkGetSlotNativeInstance(vm, 5);
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 6, 0)) return;
  Color* tint = pkGetSlotNativeInstance(vm, 6);

DrawBillboardRec(*camera, *texture, *source, *position, *size, *tint);

}

// Draw a billboard texture defined by source and rotation
static void _DrawBillboardPro(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Camera3D);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Camera3D* camera = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Texture);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Texture* texture = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Rectangle);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Rectangle* source = pkGetSlotNativeInstance(vm, 3);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Vector3* position = pkGetSlotNativeInstance(vm, 4);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Vector3* up = pkGetSlotNativeInstance(vm, 5);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 6, 0)) return;
  Vector2* size = pkGetSlotNativeInstance(vm, 6);
  pkSetSlotHandle(vm, 0, cls_Vector2);
  if (!pkValidateSlotInstanceOf(vm, 7, 0)) return;
  Vector2* origin = pkGetSlotNativeInstance(vm, 7);
  double rotation;
  if (!pkValidateSlotNumber(vm, 8, &rotation)) return;
  pkSetSlotHandle(vm, 0, cls_Color);
  if (!pkValidateSlotInstanceOf(vm, 9, 0)) return;
  Color* tint = pkGetSlotNativeInstance(vm, 9);

DrawBillboardPro(*camera, *texture, *source, *position, *up, *size, *origin, rotation, *tint);

}

// Upload mesh vertex data in GPU and provide VAO/VBO ids
static void _UploadMesh(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Mesh);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Mesh* mesh = pkGetSlotNativeInstance(vm, 1);
  double dynamic;
  if (!pkValidateSlotNumber(vm, 2, &dynamic)) return;

UploadMesh(mesh, dynamic);

}

// Unload mesh data from CPU and GPU
static void _UnloadMesh(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Mesh);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Mesh* mesh = pkGetSlotNativeInstance(vm, 1);

UnloadMesh(*mesh);

}

// Draw a 3d mesh with material and transform
static void _DrawMesh(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Mesh);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Mesh* mesh = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Material);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Material* material = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Matrix);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Matrix* transform = pkGetSlotNativeInstance(vm, 3);

DrawMesh(*mesh, *material, *transform);

}

// Draw multiple mesh instances with material and different transforms
static void _DrawMeshInstanced(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Mesh);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Mesh* mesh = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Material);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Material* material = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Matrix);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Matrix* transforms = pkGetSlotNativeInstance(vm, 3);
  double instances;
  if (!pkValidateSlotNumber(vm, 4, &instances)) return;

DrawMeshInstanced(*mesh, *material, transforms, instances);

}

// Export mesh data to file, returns true on success
static void _ExportMesh(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Mesh);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Mesh* mesh = pkGetSlotNativeInstance(vm, 1);
  const char* fileName;
  if (!pkValidateSlotString(vm, 2, &fileName, NULL)) return;

  double ret = (double) ExportMesh(*mesh, fileName);

  pkSetSlotNumber(vm, 0, ret);
}

// Compute mesh bounding box limits
static void _GetMeshBoundingBox(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Mesh);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Mesh* mesh = pkGetSlotNativeInstance(vm, 1);

  BoundingBox ret = GetMeshBoundingBox(*mesh);

  pkSetSlotHandle(vm, 0, cls_BoundingBox);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  BoundingBox* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Compute mesh tangents
static void _GenMeshTangents(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Mesh);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Mesh* mesh = pkGetSlotNativeInstance(vm, 1);

GenMeshTangents(mesh);

}

// Compute mesh binormals
static void _GenMeshBinormals(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Mesh);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Mesh* mesh = pkGetSlotNativeInstance(vm, 1);

GenMeshBinormals(mesh);

}

// Generate polygonal mesh
static void _GenMeshPoly(PKVM* vm) {

  double sides;
  if (!pkValidateSlotNumber(vm, 1, &sides)) return;
  double radius;
  if (!pkValidateSlotNumber(vm, 2, &radius)) return;

  Mesh ret = GenMeshPoly(sides, radius);

  pkSetSlotHandle(vm, 0, cls_Mesh);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Mesh* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Generate plane mesh (with subdivisions)
static void _GenMeshPlane(PKVM* vm) {

  double width;
  if (!pkValidateSlotNumber(vm, 1, &width)) return;
  double length;
  if (!pkValidateSlotNumber(vm, 2, &length)) return;
  double resX;
  if (!pkValidateSlotNumber(vm, 3, &resX)) return;
  double resZ;
  if (!pkValidateSlotNumber(vm, 4, &resZ)) return;

  Mesh ret = GenMeshPlane(width, length, resX, resZ);

  pkSetSlotHandle(vm, 0, cls_Mesh);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Mesh* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Generate cuboid mesh
static void _GenMeshCube(PKVM* vm) {

  double width;
  if (!pkValidateSlotNumber(vm, 1, &width)) return;
  double height;
  if (!pkValidateSlotNumber(vm, 2, &height)) return;
  double length;
  if (!pkValidateSlotNumber(vm, 3, &length)) return;

  Mesh ret = GenMeshCube(width, height, length);

  pkSetSlotHandle(vm, 0, cls_Mesh);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Mesh* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Generate sphere mesh (standard sphere)
static void _GenMeshSphere(PKVM* vm) {

  double radius;
  if (!pkValidateSlotNumber(vm, 1, &radius)) return;
  double rings;
  if (!pkValidateSlotNumber(vm, 2, &rings)) return;
  double slices;
  if (!pkValidateSlotNumber(vm, 3, &slices)) return;

  Mesh ret = GenMeshSphere(radius, rings, slices);

  pkSetSlotHandle(vm, 0, cls_Mesh);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Mesh* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Generate half-sphere mesh (no bottom cap)
static void _GenMeshHemiSphere(PKVM* vm) {

  double radius;
  if (!pkValidateSlotNumber(vm, 1, &radius)) return;
  double rings;
  if (!pkValidateSlotNumber(vm, 2, &rings)) return;
  double slices;
  if (!pkValidateSlotNumber(vm, 3, &slices)) return;

  Mesh ret = GenMeshHemiSphere(radius, rings, slices);

  pkSetSlotHandle(vm, 0, cls_Mesh);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Mesh* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Generate cylinder mesh
static void _GenMeshCylinder(PKVM* vm) {

  double radius;
  if (!pkValidateSlotNumber(vm, 1, &radius)) return;
  double height;
  if (!pkValidateSlotNumber(vm, 2, &height)) return;
  double slices;
  if (!pkValidateSlotNumber(vm, 3, &slices)) return;

  Mesh ret = GenMeshCylinder(radius, height, slices);

  pkSetSlotHandle(vm, 0, cls_Mesh);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Mesh* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Generate cone/pyramid mesh
static void _GenMeshCone(PKVM* vm) {

  double radius;
  if (!pkValidateSlotNumber(vm, 1, &radius)) return;
  double height;
  if (!pkValidateSlotNumber(vm, 2, &height)) return;
  double slices;
  if (!pkValidateSlotNumber(vm, 3, &slices)) return;

  Mesh ret = GenMeshCone(radius, height, slices);

  pkSetSlotHandle(vm, 0, cls_Mesh);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Mesh* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Generate torus mesh
static void _GenMeshTorus(PKVM* vm) {

  double radius;
  if (!pkValidateSlotNumber(vm, 1, &radius)) return;
  double size;
  if (!pkValidateSlotNumber(vm, 2, &size)) return;
  double radSeg;
  if (!pkValidateSlotNumber(vm, 3, &radSeg)) return;
  double sides;
  if (!pkValidateSlotNumber(vm, 4, &sides)) return;

  Mesh ret = GenMeshTorus(radius, size, radSeg, sides);

  pkSetSlotHandle(vm, 0, cls_Mesh);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Mesh* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Generate trefoil knot mesh
static void _GenMeshKnot(PKVM* vm) {

  double radius;
  if (!pkValidateSlotNumber(vm, 1, &radius)) return;
  double size;
  if (!pkValidateSlotNumber(vm, 2, &size)) return;
  double radSeg;
  if (!pkValidateSlotNumber(vm, 3, &radSeg)) return;
  double sides;
  if (!pkValidateSlotNumber(vm, 4, &sides)) return;

  Mesh ret = GenMeshKnot(radius, size, radSeg, sides);

  pkSetSlotHandle(vm, 0, cls_Mesh);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Mesh* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Generate heightmap mesh from image data
static void _GenMeshHeightmap(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* heightmap = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector3* size = pkGetSlotNativeInstance(vm, 2);

  Mesh ret = GenMeshHeightmap(*heightmap, *size);

  pkSetSlotHandle(vm, 0, cls_Mesh);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Mesh* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Generate cubes-based map mesh from image data
static void _GenMeshCubicmap(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Image);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Image* cubicmap = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector3* cubeSize = pkGetSlotNativeInstance(vm, 2);

  Mesh ret = GenMeshCubicmap(*cubicmap, *cubeSize);

  pkSetSlotHandle(vm, 0, cls_Mesh);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Mesh* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Load default material (Supports: DIFFUSE, SPECULAR, NORMAL maps)
static void _LoadMaterialDefault(PKVM* vm) {


  Material ret = LoadMaterialDefault();

  pkSetSlotHandle(vm, 0, cls_Material);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Material* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Unload material from GPU memory (VRAM)
static void _UnloadMaterial(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Material);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Material* material = pkGetSlotNativeInstance(vm, 1);

UnloadMaterial(*material);

}

// Set texture for a material map type (MATERIAL_MAP_DIFFUSE, MATERIAL_MAP_SPECULAR...)
static void _SetMaterialTexture(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Material);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Material* material = pkGetSlotNativeInstance(vm, 1);
  double mapType;
  if (!pkValidateSlotNumber(vm, 2, &mapType)) return;
  pkSetSlotHandle(vm, 0, cls_Texture);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Texture* texture = pkGetSlotNativeInstance(vm, 3);

SetMaterialTexture(material, mapType, *texture);

}

// Set material for a mesh
static void _SetModelMeshMaterial(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Model);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Model* model = pkGetSlotNativeInstance(vm, 1);
  double meshId;
  if (!pkValidateSlotNumber(vm, 2, &meshId)) return;
  double materialId;
  if (!pkValidateSlotNumber(vm, 3, &materialId)) return;

SetModelMeshMaterial(model, meshId, materialId);

}

// Update model animation pose
static void _UpdateModelAnimation(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Model);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Model* model = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_ModelAnimation);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  ModelAnimation* anim = pkGetSlotNativeInstance(vm, 2);
  double frame;
  if (!pkValidateSlotNumber(vm, 3, &frame)) return;

UpdateModelAnimation(*model, *anim, frame);

}

// Unload animation data
static void _UnloadModelAnimation(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_ModelAnimation);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  ModelAnimation* anim = pkGetSlotNativeInstance(vm, 1);

UnloadModelAnimation(*anim);

}

// Unload animation array data
static void _UnloadModelAnimations(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_ModelAnimation);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  ModelAnimation* animations = pkGetSlotNativeInstance(vm, 1);
  double count;
  if (!pkValidateSlotNumber(vm, 2, &count)) return;

UnloadModelAnimations(animations, count);

}

// Check model animation skeleton match
static void _IsModelAnimationValid(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Model);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Model* model = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_ModelAnimation);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  ModelAnimation* anim = pkGetSlotNativeInstance(vm, 2);

  double ret = (double) IsModelAnimationValid(*model, *anim);

  pkSetSlotNumber(vm, 0, ret);
}

// Check collision between two spheres
static void _CheckCollisionSpheres(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Vector3* center1 = pkGetSlotNativeInstance(vm, 1);
  double radius1;
  if (!pkValidateSlotNumber(vm, 2, &radius1)) return;
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Vector3* center2 = pkGetSlotNativeInstance(vm, 3);
  double radius2;
  if (!pkValidateSlotNumber(vm, 4, &radius2)) return;

  double ret = (double) CheckCollisionSpheres(*center1, radius1, *center2, radius2);

  pkSetSlotNumber(vm, 0, ret);
}

// Check collision between two bounding boxes
static void _CheckCollisionBoxes(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_BoundingBox);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  BoundingBox* box1 = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_BoundingBox);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  BoundingBox* box2 = pkGetSlotNativeInstance(vm, 2);

  double ret = (double) CheckCollisionBoxes(*box1, *box2);

  pkSetSlotNumber(vm, 0, ret);
}

// Check collision between box and sphere
static void _CheckCollisionBoxSphere(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_BoundingBox);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  BoundingBox* box = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector3* center = pkGetSlotNativeInstance(vm, 2);
  double radius;
  if (!pkValidateSlotNumber(vm, 3, &radius)) return;

  double ret = (double) CheckCollisionBoxSphere(*box, *center, radius);

  pkSetSlotNumber(vm, 0, ret);
}

// Get collision info between ray and sphere
static void _GetRayCollisionSphere(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Ray);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Ray* ray = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector3* center = pkGetSlotNativeInstance(vm, 2);
  double radius;
  if (!pkValidateSlotNumber(vm, 3, &radius)) return;

  RayCollision ret = GetRayCollisionSphere(*ray, *center, radius);

  pkSetSlotHandle(vm, 0, cls_RayCollision);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  RayCollision* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get collision info between ray and box
static void _GetRayCollisionBox(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Ray);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Ray* ray = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_BoundingBox);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  BoundingBox* box = pkGetSlotNativeInstance(vm, 2);

  RayCollision ret = GetRayCollisionBox(*ray, *box);

  pkSetSlotHandle(vm, 0, cls_RayCollision);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  RayCollision* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get collision info between ray and model
static void _GetRayCollisionModel(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Ray);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Ray* ray = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Model);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Model* model = pkGetSlotNativeInstance(vm, 2);

  RayCollision ret = GetRayCollisionModel(*ray, *model);

  pkSetSlotHandle(vm, 0, cls_RayCollision);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  RayCollision* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get collision info between ray and mesh
static void _GetRayCollisionMesh(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Ray);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Ray* ray = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Mesh);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Mesh* mesh = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Matrix);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Matrix* transform = pkGetSlotNativeInstance(vm, 3);

  RayCollision ret = GetRayCollisionMesh(*ray, *mesh, *transform);

  pkSetSlotHandle(vm, 0, cls_RayCollision);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  RayCollision* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get collision info between ray and triangle
static void _GetRayCollisionTriangle(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Ray);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Ray* ray = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector3* p1 = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Vector3* p2 = pkGetSlotNativeInstance(vm, 3);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Vector3* p3 = pkGetSlotNativeInstance(vm, 4);

  RayCollision ret = GetRayCollisionTriangle(*ray, *p1, *p2, *p3);

  pkSetSlotHandle(vm, 0, cls_RayCollision);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  RayCollision* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Get collision info between ray and quad
static void _GetRayCollisionQuad(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Ray);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Ray* ray = pkGetSlotNativeInstance(vm, 1);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 2, 0)) return;
  Vector3* p1 = pkGetSlotNativeInstance(vm, 2);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 3, 0)) return;
  Vector3* p2 = pkGetSlotNativeInstance(vm, 3);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 4, 0)) return;
  Vector3* p3 = pkGetSlotNativeInstance(vm, 4);
  pkSetSlotHandle(vm, 0, cls_Vector3);
  if (!pkValidateSlotInstanceOf(vm, 5, 0)) return;
  Vector3* p4 = pkGetSlotNativeInstance(vm, 5);

  RayCollision ret = GetRayCollisionQuad(*ray, *p1, *p2, *p3, *p4);

  pkSetSlotHandle(vm, 0, cls_RayCollision);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  RayCollision* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Initialize audio device and context
static void _InitAudioDevice(PKVM* vm) {


InitAudioDevice();

}

// Close the audio device and context
static void _CloseAudioDevice(PKVM* vm) {


CloseAudioDevice();

}

// Check if audio device has been initialized successfully
static void _IsAudioDeviceReady(PKVM* vm) {


  double ret = (double) IsAudioDeviceReady();

  pkSetSlotNumber(vm, 0, ret);
}

// Set master volume (listener)
static void _SetMasterVolume(PKVM* vm) {

  double volume;
  if (!pkValidateSlotNumber(vm, 1, &volume)) return;

SetMasterVolume(volume);

}

// Load wave data from file
static void _LoadWave(PKVM* vm) {

  const char* fileName;
  if (!pkValidateSlotString(vm, 1, &fileName, NULL)) return;

  Wave ret = LoadWave(fileName);

  pkSetSlotHandle(vm, 0, cls_Wave);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Wave* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Load sound from file
static void _LoadSound(PKVM* vm) {

  const char* fileName;
  if (!pkValidateSlotString(vm, 1, &fileName, NULL)) return;

  Sound ret = LoadSound(fileName);

  pkSetSlotHandle(vm, 0, cls_Sound);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Sound* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Load sound from wave data
static void _LoadSoundFromWave(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Wave);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Wave* wave = pkGetSlotNativeInstance(vm, 1);

  Sound ret = LoadSoundFromWave(*wave);

  pkSetSlotHandle(vm, 0, cls_Sound);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Sound* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Unload wave data
static void _UnloadWave(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Wave);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Wave* wave = pkGetSlotNativeInstance(vm, 1);

UnloadWave(*wave);

}

// Unload sound
static void _UnloadSound(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Sound);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Sound* sound = pkGetSlotNativeInstance(vm, 1);

UnloadSound(*sound);

}

// Export wave data to file, returns true on success
static void _ExportWave(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Wave);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Wave* wave = pkGetSlotNativeInstance(vm, 1);
  const char* fileName;
  if (!pkValidateSlotString(vm, 2, &fileName, NULL)) return;

  double ret = (double) ExportWave(*wave, fileName);

  pkSetSlotNumber(vm, 0, ret);
}

// Export wave sample data to code (.h), returns true on success
static void _ExportWaveAsCode(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Wave);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Wave* wave = pkGetSlotNativeInstance(vm, 1);
  const char* fileName;
  if (!pkValidateSlotString(vm, 2, &fileName, NULL)) return;

  double ret = (double) ExportWaveAsCode(*wave, fileName);

  pkSetSlotNumber(vm, 0, ret);
}

// Play a sound
static void _PlaySound(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Sound);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Sound* sound = pkGetSlotNativeInstance(vm, 1);

PlaySound(*sound);

}

// Stop playing a sound
static void _StopSound(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Sound);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Sound* sound = pkGetSlotNativeInstance(vm, 1);

StopSound(*sound);

}

// Pause a sound
static void _PauseSound(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Sound);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Sound* sound = pkGetSlotNativeInstance(vm, 1);

PauseSound(*sound);

}

// Resume a paused sound
static void _ResumeSound(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Sound);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Sound* sound = pkGetSlotNativeInstance(vm, 1);

ResumeSound(*sound);

}

// Play a sound (using multichannel buffer pool)
static void _PlaySoundMulti(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Sound);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Sound* sound = pkGetSlotNativeInstance(vm, 1);

PlaySoundMulti(*sound);

}

// Stop any sound playing (using multichannel buffer pool)
static void _StopSoundMulti(PKVM* vm) {


StopSoundMulti();

}

// Get number of sounds playing in the multichannel
static void _GetSoundsPlaying(PKVM* vm) {


  double ret = (double) GetSoundsPlaying();

  pkSetSlotNumber(vm, 0, ret);
}

// Check if a sound is currently playing
static void _IsSoundPlaying(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Sound);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Sound* sound = pkGetSlotNativeInstance(vm, 1);

  double ret = (double) IsSoundPlaying(*sound);

  pkSetSlotNumber(vm, 0, ret);
}

// Set volume for a sound (1.0 is max level)
static void _SetSoundVolume(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Sound);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Sound* sound = pkGetSlotNativeInstance(vm, 1);
  double volume;
  if (!pkValidateSlotNumber(vm, 2, &volume)) return;

SetSoundVolume(*sound, volume);

}

// Set pitch for a sound (1.0 is base level)
static void _SetSoundPitch(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Sound);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Sound* sound = pkGetSlotNativeInstance(vm, 1);
  double pitch;
  if (!pkValidateSlotNumber(vm, 2, &pitch)) return;

SetSoundPitch(*sound, pitch);

}

// Convert wave data to desired format
static void _WaveFormat(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Wave);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Wave* wave = pkGetSlotNativeInstance(vm, 1);
  double sampleRate;
  if (!pkValidateSlotNumber(vm, 2, &sampleRate)) return;
  double sampleSize;
  if (!pkValidateSlotNumber(vm, 3, &sampleSize)) return;
  double channels;
  if (!pkValidateSlotNumber(vm, 4, &channels)) return;

WaveFormat(wave, sampleRate, sampleSize, channels);

}

// Copy a wave to a new wave
static void _WaveCopy(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Wave);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Wave* wave = pkGetSlotNativeInstance(vm, 1);

  Wave ret = WaveCopy(*wave);

  pkSetSlotHandle(vm, 0, cls_Wave);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Wave* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Crop a wave to defined samples range
static void _WaveCrop(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Wave);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Wave* wave = pkGetSlotNativeInstance(vm, 1);
  double initSample;
  if (!pkValidateSlotNumber(vm, 2, &initSample)) return;
  double finalSample;
  if (!pkValidateSlotNumber(vm, 3, &finalSample)) return;

WaveCrop(wave, initSample, finalSample);

}

// Load music stream from file
static void _LoadMusicStream(PKVM* vm) {

  const char* fileName;
  if (!pkValidateSlotString(vm, 1, &fileName, NULL)) return;

  Music ret = LoadMusicStream(fileName);

  pkSetSlotHandle(vm, 0, cls_Music);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  Music* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Unload music stream
static void _UnloadMusicStream(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Music);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Music* music = pkGetSlotNativeInstance(vm, 1);

UnloadMusicStream(*music);

}

// Start music playing
static void _PlayMusicStream(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Music);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Music* music = pkGetSlotNativeInstance(vm, 1);

PlayMusicStream(*music);

}

// Check if music is playing
static void _IsMusicStreamPlaying(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Music);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Music* music = pkGetSlotNativeInstance(vm, 1);

  double ret = (double) IsMusicStreamPlaying(*music);

  pkSetSlotNumber(vm, 0, ret);
}

// Updates buffers for music streaming
static void _UpdateMusicStream(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Music);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Music* music = pkGetSlotNativeInstance(vm, 1);

UpdateMusicStream(*music);

}

// Stop music playing
static void _StopMusicStream(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Music);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Music* music = pkGetSlotNativeInstance(vm, 1);

StopMusicStream(*music);

}

// Pause music playing
static void _PauseMusicStream(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Music);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Music* music = pkGetSlotNativeInstance(vm, 1);

PauseMusicStream(*music);

}

// Resume playing paused music
static void _ResumeMusicStream(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Music);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Music* music = pkGetSlotNativeInstance(vm, 1);

ResumeMusicStream(*music);

}

// Seek music to a position (in seconds)
static void _SeekMusicStream(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Music);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Music* music = pkGetSlotNativeInstance(vm, 1);
  double position;
  if (!pkValidateSlotNumber(vm, 2, &position)) return;

SeekMusicStream(*music, position);

}

// Set volume for music (1.0 is max level)
static void _SetMusicVolume(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Music);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Music* music = pkGetSlotNativeInstance(vm, 1);
  double volume;
  if (!pkValidateSlotNumber(vm, 2, &volume)) return;

SetMusicVolume(*music, volume);

}

// Set pitch for a music (1.0 is base level)
static void _SetMusicPitch(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Music);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Music* music = pkGetSlotNativeInstance(vm, 1);
  double pitch;
  if (!pkValidateSlotNumber(vm, 2, &pitch)) return;

SetMusicPitch(*music, pitch);

}

// Get music time length (in seconds)
static void _GetMusicTimeLength(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Music);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Music* music = pkGetSlotNativeInstance(vm, 1);

  double ret = (double) GetMusicTimeLength(*music);

  pkSetSlotNumber(vm, 0, ret);
}

// Get current music time played (in seconds)
static void _GetMusicTimePlayed(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_Music);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  Music* music = pkGetSlotNativeInstance(vm, 1);

  double ret = (double) GetMusicTimePlayed(*music);

  pkSetSlotNumber(vm, 0, ret);
}

// Load audio stream (to stream raw audio pcm data)
static void _LoadAudioStream(PKVM* vm) {

  double sampleRate;
  if (!pkValidateSlotNumber(vm, 1, &sampleRate)) return;
  double sampleSize;
  if (!pkValidateSlotNumber(vm, 2, &sampleSize)) return;
  double channels;
  if (!pkValidateSlotNumber(vm, 3, &channels)) return;

  AudioStream ret = LoadAudioStream(sampleRate, sampleSize, channels);

  pkSetSlotHandle(vm, 0, cls_AudioStream);
  if (!pkNewInstance(vm, 0, 0, 0, 0)) return;
  AudioStream* r = pkGetSlotNativeInstance(vm, 0);
  *r = ret;
}

// Unload audio stream and free memory
static void _UnloadAudioStream(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_AudioStream);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  AudioStream* stream = pkGetSlotNativeInstance(vm, 1);

UnloadAudioStream(*stream);

}

// Check if any audio stream buffers requires refill
static void _IsAudioStreamProcessed(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_AudioStream);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  AudioStream* stream = pkGetSlotNativeInstance(vm, 1);

  double ret = (double) IsAudioStreamProcessed(*stream);

  pkSetSlotNumber(vm, 0, ret);
}

// Play audio stream
static void _PlayAudioStream(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_AudioStream);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  AudioStream* stream = pkGetSlotNativeInstance(vm, 1);

PlayAudioStream(*stream);

}

// Pause audio stream
static void _PauseAudioStream(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_AudioStream);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  AudioStream* stream = pkGetSlotNativeInstance(vm, 1);

PauseAudioStream(*stream);

}

// Resume audio stream
static void _ResumeAudioStream(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_AudioStream);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  AudioStream* stream = pkGetSlotNativeInstance(vm, 1);

ResumeAudioStream(*stream);

}

// Check if audio stream is playing
static void _IsAudioStreamPlaying(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_AudioStream);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  AudioStream* stream = pkGetSlotNativeInstance(vm, 1);

  double ret = (double) IsAudioStreamPlaying(*stream);

  pkSetSlotNumber(vm, 0, ret);
}

// Stop audio stream
static void _StopAudioStream(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_AudioStream);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  AudioStream* stream = pkGetSlotNativeInstance(vm, 1);

StopAudioStream(*stream);

}

// Set volume for audio stream (1.0 is max level)
static void _SetAudioStreamVolume(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_AudioStream);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  AudioStream* stream = pkGetSlotNativeInstance(vm, 1);
  double volume;
  if (!pkValidateSlotNumber(vm, 2, &volume)) return;

SetAudioStreamVolume(*stream, volume);

}

// Set pitch for audio stream (1.0 is base level)
static void _SetAudioStreamPitch(PKVM* vm) {

  pkSetSlotHandle(vm, 0, cls_AudioStream);
  if (!pkValidateSlotInstanceOf(vm, 1, 0)) return;
  AudioStream* stream = pkGetSlotNativeInstance(vm, 1);
  double pitch;
  if (!pkValidateSlotNumber(vm, 2, &pitch)) return;

SetAudioStreamPitch(*stream, pitch);

}

// Default size for new audio streams
static void _SetAudioStreamBufferSizeDefault(PKVM* vm) {

  double size;
  if (!pkValidateSlotNumber(vm, 1, &size)) return;

SetAudioStreamBufferSizeDefault(size);

}


/*****************************************************************************/
/* MODULE REGISTER                                                           */
/*****************************************************************************/

void register_manual_bindings(PKVM* vm, PkHandle* raylib);

PK_EXPORT PkHandle* pkExportModule(PKVM* vm) {
  PkHandle* raylib = pkNewModule(vm, "raylib");

  pkReserveSlots(vm, 2);
  pkSetSlotHandle(vm, 0, raylib);

  // ConfigFlags
  pkSetSlotNumber(vm, 1, 64);
  pkSetAttribute(vm, 0, "FLAG_VSYNC_HINT", 1);
  pkSetSlotNumber(vm, 1, 2);
  pkSetAttribute(vm, 0, "FLAG_FULLSCREEN_MODE", 1);
  pkSetSlotNumber(vm, 1, 4);
  pkSetAttribute(vm, 0, "FLAG_WINDOW_RESIZABLE", 1);
  pkSetSlotNumber(vm, 1, 8);
  pkSetAttribute(vm, 0, "FLAG_WINDOW_UNDECORATED", 1);
  pkSetSlotNumber(vm, 1, 128);
  pkSetAttribute(vm, 0, "FLAG_WINDOW_HIDDEN", 1);
  pkSetSlotNumber(vm, 1, 512);
  pkSetAttribute(vm, 0, "FLAG_WINDOW_MINIMIZED", 1);
  pkSetSlotNumber(vm, 1, 1024);
  pkSetAttribute(vm, 0, "FLAG_WINDOW_MAXIMIZED", 1);
  pkSetSlotNumber(vm, 1, 2048);
  pkSetAttribute(vm, 0, "FLAG_WINDOW_UNFOCUSED", 1);
  pkSetSlotNumber(vm, 1, 4096);
  pkSetAttribute(vm, 0, "FLAG_WINDOW_TOPMOST", 1);
  pkSetSlotNumber(vm, 1, 256);
  pkSetAttribute(vm, 0, "FLAG_WINDOW_ALWAYS_RUN", 1);
  pkSetSlotNumber(vm, 1, 16);
  pkSetAttribute(vm, 0, "FLAG_WINDOW_TRANSPARENT", 1);
  pkSetSlotNumber(vm, 1, 8192);
  pkSetAttribute(vm, 0, "FLAG_WINDOW_HIGHDPI", 1);
  pkSetSlotNumber(vm, 1, 32);
  pkSetAttribute(vm, 0, "FLAG_MSAA_4X_HINT", 1);
  pkSetSlotNumber(vm, 1, 65536);
  pkSetAttribute(vm, 0, "FLAG_INTERLACED_HINT", 1);

  // TraceLogLevel
  pkSetSlotNumber(vm, 1, 0);
  pkSetAttribute(vm, 0, "LOG_ALL", 1);
  pkSetSlotNumber(vm, 1, 1);
  pkSetAttribute(vm, 0, "LOG_TRACE", 1);
  pkSetSlotNumber(vm, 1, 2);
  pkSetAttribute(vm, 0, "LOG_DEBUG", 1);
  pkSetSlotNumber(vm, 1, 3);
  pkSetAttribute(vm, 0, "LOG_INFO", 1);
  pkSetSlotNumber(vm, 1, 4);
  pkSetAttribute(vm, 0, "LOG_WARNING", 1);
  pkSetSlotNumber(vm, 1, 5);
  pkSetAttribute(vm, 0, "LOG_ERROR", 1);
  pkSetSlotNumber(vm, 1, 6);
  pkSetAttribute(vm, 0, "LOG_FATAL", 1);
  pkSetSlotNumber(vm, 1, 7);
  pkSetAttribute(vm, 0, "LOG_NONE", 1);

  // KeyboardKey
  pkSetSlotNumber(vm, 1, 0);
  pkSetAttribute(vm, 0, "KEY_NULL", 1);
  pkSetSlotNumber(vm, 1, 39);
  pkSetAttribute(vm, 0, "KEY_APOSTROPHE", 1);
  pkSetSlotNumber(vm, 1, 44);
  pkSetAttribute(vm, 0, "KEY_COMMA", 1);
  pkSetSlotNumber(vm, 1, 45);
  pkSetAttribute(vm, 0, "KEY_MINUS", 1);
  pkSetSlotNumber(vm, 1, 46);
  pkSetAttribute(vm, 0, "KEY_PERIOD", 1);
  pkSetSlotNumber(vm, 1, 47);
  pkSetAttribute(vm, 0, "KEY_SLASH", 1);
  pkSetSlotNumber(vm, 1, 48);
  pkSetAttribute(vm, 0, "KEY_ZERO", 1);
  pkSetSlotNumber(vm, 1, 49);
  pkSetAttribute(vm, 0, "KEY_ONE", 1);
  pkSetSlotNumber(vm, 1, 50);
  pkSetAttribute(vm, 0, "KEY_TWO", 1);
  pkSetSlotNumber(vm, 1, 51);
  pkSetAttribute(vm, 0, "KEY_THREE", 1);
  pkSetSlotNumber(vm, 1, 52);
  pkSetAttribute(vm, 0, "KEY_FOUR", 1);
  pkSetSlotNumber(vm, 1, 53);
  pkSetAttribute(vm, 0, "KEY_FIVE", 1);
  pkSetSlotNumber(vm, 1, 54);
  pkSetAttribute(vm, 0, "KEY_SIX", 1);
  pkSetSlotNumber(vm, 1, 55);
  pkSetAttribute(vm, 0, "KEY_SEVEN", 1);
  pkSetSlotNumber(vm, 1, 56);
  pkSetAttribute(vm, 0, "KEY_EIGHT", 1);
  pkSetSlotNumber(vm, 1, 57);
  pkSetAttribute(vm, 0, "KEY_NINE", 1);
  pkSetSlotNumber(vm, 1, 59);
  pkSetAttribute(vm, 0, "KEY_SEMICOLON", 1);
  pkSetSlotNumber(vm, 1, 61);
  pkSetAttribute(vm, 0, "KEY_EQUAL", 1);
  pkSetSlotNumber(vm, 1, 65);
  pkSetAttribute(vm, 0, "KEY_A", 1);
  pkSetSlotNumber(vm, 1, 66);
  pkSetAttribute(vm, 0, "KEY_B", 1);
  pkSetSlotNumber(vm, 1, 67);
  pkSetAttribute(vm, 0, "KEY_C", 1);
  pkSetSlotNumber(vm, 1, 68);
  pkSetAttribute(vm, 0, "KEY_D", 1);
  pkSetSlotNumber(vm, 1, 69);
  pkSetAttribute(vm, 0, "KEY_E", 1);
  pkSetSlotNumber(vm, 1, 70);
  pkSetAttribute(vm, 0, "KEY_F", 1);
  pkSetSlotNumber(vm, 1, 71);
  pkSetAttribute(vm, 0, "KEY_G", 1);
  pkSetSlotNumber(vm, 1, 72);
  pkSetAttribute(vm, 0, "KEY_H", 1);
  pkSetSlotNumber(vm, 1, 73);
  pkSetAttribute(vm, 0, "KEY_I", 1);
  pkSetSlotNumber(vm, 1, 74);
  pkSetAttribute(vm, 0, "KEY_J", 1);
  pkSetSlotNumber(vm, 1, 75);
  pkSetAttribute(vm, 0, "KEY_K", 1);
  pkSetSlotNumber(vm, 1, 76);
  pkSetAttribute(vm, 0, "KEY_L", 1);
  pkSetSlotNumber(vm, 1, 77);
  pkSetAttribute(vm, 0, "KEY_M", 1);
  pkSetSlotNumber(vm, 1, 78);
  pkSetAttribute(vm, 0, "KEY_N", 1);
  pkSetSlotNumber(vm, 1, 79);
  pkSetAttribute(vm, 0, "KEY_O", 1);
  pkSetSlotNumber(vm, 1, 80);
  pkSetAttribute(vm, 0, "KEY_P", 1);
  pkSetSlotNumber(vm, 1, 81);
  pkSetAttribute(vm, 0, "KEY_Q", 1);
  pkSetSlotNumber(vm, 1, 82);
  pkSetAttribute(vm, 0, "KEY_R", 1);
  pkSetSlotNumber(vm, 1, 83);
  pkSetAttribute(vm, 0, "KEY_S", 1);
  pkSetSlotNumber(vm, 1, 84);
  pkSetAttribute(vm, 0, "KEY_T", 1);
  pkSetSlotNumber(vm, 1, 85);
  pkSetAttribute(vm, 0, "KEY_U", 1);
  pkSetSlotNumber(vm, 1, 86);
  pkSetAttribute(vm, 0, "KEY_V", 1);
  pkSetSlotNumber(vm, 1, 87);
  pkSetAttribute(vm, 0, "KEY_W", 1);
  pkSetSlotNumber(vm, 1, 88);
  pkSetAttribute(vm, 0, "KEY_X", 1);
  pkSetSlotNumber(vm, 1, 89);
  pkSetAttribute(vm, 0, "KEY_Y", 1);
  pkSetSlotNumber(vm, 1, 90);
  pkSetAttribute(vm, 0, "KEY_Z", 1);
  pkSetSlotNumber(vm, 1, 91);
  pkSetAttribute(vm, 0, "KEY_LEFT_BRACKET", 1);
  pkSetSlotNumber(vm, 1, 92);
  pkSetAttribute(vm, 0, "KEY_BACKSLASH", 1);
  pkSetSlotNumber(vm, 1, 93);
  pkSetAttribute(vm, 0, "KEY_RIGHT_BRACKET", 1);
  pkSetSlotNumber(vm, 1, 96);
  pkSetAttribute(vm, 0, "KEY_GRAVE", 1);
  pkSetSlotNumber(vm, 1, 32);
  pkSetAttribute(vm, 0, "KEY_SPACE", 1);
  pkSetSlotNumber(vm, 1, 256);
  pkSetAttribute(vm, 0, "KEY_ESCAPE", 1);
  pkSetSlotNumber(vm, 1, 257);
  pkSetAttribute(vm, 0, "KEY_ENTER", 1);
  pkSetSlotNumber(vm, 1, 258);
  pkSetAttribute(vm, 0, "KEY_TAB", 1);
  pkSetSlotNumber(vm, 1, 259);
  pkSetAttribute(vm, 0, "KEY_BACKSPACE", 1);
  pkSetSlotNumber(vm, 1, 260);
  pkSetAttribute(vm, 0, "KEY_INSERT", 1);
  pkSetSlotNumber(vm, 1, 261);
  pkSetAttribute(vm, 0, "KEY_DELETE", 1);
  pkSetSlotNumber(vm, 1, 262);
  pkSetAttribute(vm, 0, "KEY_RIGHT", 1);
  pkSetSlotNumber(vm, 1, 263);
  pkSetAttribute(vm, 0, "KEY_LEFT", 1);
  pkSetSlotNumber(vm, 1, 264);
  pkSetAttribute(vm, 0, "KEY_DOWN", 1);
  pkSetSlotNumber(vm, 1, 265);
  pkSetAttribute(vm, 0, "KEY_UP", 1);
  pkSetSlotNumber(vm, 1, 266);
  pkSetAttribute(vm, 0, "KEY_PAGE_UP", 1);
  pkSetSlotNumber(vm, 1, 267);
  pkSetAttribute(vm, 0, "KEY_PAGE_DOWN", 1);
  pkSetSlotNumber(vm, 1, 268);
  pkSetAttribute(vm, 0, "KEY_HOME", 1);
  pkSetSlotNumber(vm, 1, 269);
  pkSetAttribute(vm, 0, "KEY_END", 1);
  pkSetSlotNumber(vm, 1, 280);
  pkSetAttribute(vm, 0, "KEY_CAPS_LOCK", 1);
  pkSetSlotNumber(vm, 1, 281);
  pkSetAttribute(vm, 0, "KEY_SCROLL_LOCK", 1);
  pkSetSlotNumber(vm, 1, 282);
  pkSetAttribute(vm, 0, "KEY_NUM_LOCK", 1);
  pkSetSlotNumber(vm, 1, 283);
  pkSetAttribute(vm, 0, "KEY_PRINT_SCREEN", 1);
  pkSetSlotNumber(vm, 1, 284);
  pkSetAttribute(vm, 0, "KEY_PAUSE", 1);
  pkSetSlotNumber(vm, 1, 290);
  pkSetAttribute(vm, 0, "KEY_F1", 1);
  pkSetSlotNumber(vm, 1, 291);
  pkSetAttribute(vm, 0, "KEY_F2", 1);
  pkSetSlotNumber(vm, 1, 292);
  pkSetAttribute(vm, 0, "KEY_F3", 1);
  pkSetSlotNumber(vm, 1, 293);
  pkSetAttribute(vm, 0, "KEY_F4", 1);
  pkSetSlotNumber(vm, 1, 294);
  pkSetAttribute(vm, 0, "KEY_F5", 1);
  pkSetSlotNumber(vm, 1, 295);
  pkSetAttribute(vm, 0, "KEY_F6", 1);
  pkSetSlotNumber(vm, 1, 296);
  pkSetAttribute(vm, 0, "KEY_F7", 1);
  pkSetSlotNumber(vm, 1, 297);
  pkSetAttribute(vm, 0, "KEY_F8", 1);
  pkSetSlotNumber(vm, 1, 298);
  pkSetAttribute(vm, 0, "KEY_F9", 1);
  pkSetSlotNumber(vm, 1, 299);
  pkSetAttribute(vm, 0, "KEY_F10", 1);
  pkSetSlotNumber(vm, 1, 300);
  pkSetAttribute(vm, 0, "KEY_F11", 1);
  pkSetSlotNumber(vm, 1, 301);
  pkSetAttribute(vm, 0, "KEY_F12", 1);
  pkSetSlotNumber(vm, 1, 340);
  pkSetAttribute(vm, 0, "KEY_LEFT_SHIFT", 1);
  pkSetSlotNumber(vm, 1, 341);
  pkSetAttribute(vm, 0, "KEY_LEFT_CONTROL", 1);
  pkSetSlotNumber(vm, 1, 342);
  pkSetAttribute(vm, 0, "KEY_LEFT_ALT", 1);
  pkSetSlotNumber(vm, 1, 343);
  pkSetAttribute(vm, 0, "KEY_LEFT_SUPER", 1);
  pkSetSlotNumber(vm, 1, 344);
  pkSetAttribute(vm, 0, "KEY_RIGHT_SHIFT", 1);
  pkSetSlotNumber(vm, 1, 345);
  pkSetAttribute(vm, 0, "KEY_RIGHT_CONTROL", 1);
  pkSetSlotNumber(vm, 1, 346);
  pkSetAttribute(vm, 0, "KEY_RIGHT_ALT", 1);
  pkSetSlotNumber(vm, 1, 347);
  pkSetAttribute(vm, 0, "KEY_RIGHT_SUPER", 1);
  pkSetSlotNumber(vm, 1, 348);
  pkSetAttribute(vm, 0, "KEY_KB_MENU", 1);
  pkSetSlotNumber(vm, 1, 320);
  pkSetAttribute(vm, 0, "KEY_KP_0", 1);
  pkSetSlotNumber(vm, 1, 321);
  pkSetAttribute(vm, 0, "KEY_KP_1", 1);
  pkSetSlotNumber(vm, 1, 322);
  pkSetAttribute(vm, 0, "KEY_KP_2", 1);
  pkSetSlotNumber(vm, 1, 323);
  pkSetAttribute(vm, 0, "KEY_KP_3", 1);
  pkSetSlotNumber(vm, 1, 324);
  pkSetAttribute(vm, 0, "KEY_KP_4", 1);
  pkSetSlotNumber(vm, 1, 325);
  pkSetAttribute(vm, 0, "KEY_KP_5", 1);
  pkSetSlotNumber(vm, 1, 326);
  pkSetAttribute(vm, 0, "KEY_KP_6", 1);
  pkSetSlotNumber(vm, 1, 327);
  pkSetAttribute(vm, 0, "KEY_KP_7", 1);
  pkSetSlotNumber(vm, 1, 328);
  pkSetAttribute(vm, 0, "KEY_KP_8", 1);
  pkSetSlotNumber(vm, 1, 329);
  pkSetAttribute(vm, 0, "KEY_KP_9", 1);
  pkSetSlotNumber(vm, 1, 330);
  pkSetAttribute(vm, 0, "KEY_KP_DECIMAL", 1);
  pkSetSlotNumber(vm, 1, 331);
  pkSetAttribute(vm, 0, "KEY_KP_DIVIDE", 1);
  pkSetSlotNumber(vm, 1, 332);
  pkSetAttribute(vm, 0, "KEY_KP_MULTIPLY", 1);
  pkSetSlotNumber(vm, 1, 333);
  pkSetAttribute(vm, 0, "KEY_KP_SUBTRACT", 1);
  pkSetSlotNumber(vm, 1, 334);
  pkSetAttribute(vm, 0, "KEY_KP_ADD", 1);
  pkSetSlotNumber(vm, 1, 335);
  pkSetAttribute(vm, 0, "KEY_KP_ENTER", 1);
  pkSetSlotNumber(vm, 1, 336);
  pkSetAttribute(vm, 0, "KEY_KP_EQUAL", 1);
  pkSetSlotNumber(vm, 1, 4);
  pkSetAttribute(vm, 0, "KEY_BACK", 1);
  pkSetSlotNumber(vm, 1, 82);
  pkSetAttribute(vm, 0, "KEY_MENU", 1);
  pkSetSlotNumber(vm, 1, 24);
  pkSetAttribute(vm, 0, "KEY_VOLUME_UP", 1);
  pkSetSlotNumber(vm, 1, 25);
  pkSetAttribute(vm, 0, "KEY_VOLUME_DOWN", 1);

  // MouseButton
  pkSetSlotNumber(vm, 1, 0);
  pkSetAttribute(vm, 0, "MOUSE_BUTTON_LEFT", 1);
  pkSetSlotNumber(vm, 1, 1);
  pkSetAttribute(vm, 0, "MOUSE_BUTTON_RIGHT", 1);
  pkSetSlotNumber(vm, 1, 2);
  pkSetAttribute(vm, 0, "MOUSE_BUTTON_MIDDLE", 1);
  pkSetSlotNumber(vm, 1, 3);
  pkSetAttribute(vm, 0, "MOUSE_BUTTON_SIDE", 1);
  pkSetSlotNumber(vm, 1, 4);
  pkSetAttribute(vm, 0, "MOUSE_BUTTON_EXTRA", 1);
  pkSetSlotNumber(vm, 1, 5);
  pkSetAttribute(vm, 0, "MOUSE_BUTTON_FORWARD", 1);
  pkSetSlotNumber(vm, 1, 6);
  pkSetAttribute(vm, 0, "MOUSE_BUTTON_BACK", 1);

  // MouseCursor
  pkSetSlotNumber(vm, 1, 0);
  pkSetAttribute(vm, 0, "MOUSE_CURSOR_DEFAULT", 1);
  pkSetSlotNumber(vm, 1, 1);
  pkSetAttribute(vm, 0, "MOUSE_CURSOR_ARROW", 1);
  pkSetSlotNumber(vm, 1, 2);
  pkSetAttribute(vm, 0, "MOUSE_CURSOR_IBEAM", 1);
  pkSetSlotNumber(vm, 1, 3);
  pkSetAttribute(vm, 0, "MOUSE_CURSOR_CROSSHAIR", 1);
  pkSetSlotNumber(vm, 1, 4);
  pkSetAttribute(vm, 0, "MOUSE_CURSOR_POINTING_HAND", 1);
  pkSetSlotNumber(vm, 1, 5);
  pkSetAttribute(vm, 0, "MOUSE_CURSOR_RESIZE_EW", 1);
  pkSetSlotNumber(vm, 1, 6);
  pkSetAttribute(vm, 0, "MOUSE_CURSOR_RESIZE_NS", 1);
  pkSetSlotNumber(vm, 1, 7);
  pkSetAttribute(vm, 0, "MOUSE_CURSOR_RESIZE_NWSE", 1);
  pkSetSlotNumber(vm, 1, 8);
  pkSetAttribute(vm, 0, "MOUSE_CURSOR_RESIZE_NESW", 1);
  pkSetSlotNumber(vm, 1, 9);
  pkSetAttribute(vm, 0, "MOUSE_CURSOR_RESIZE_ALL", 1);
  pkSetSlotNumber(vm, 1, 10);
  pkSetAttribute(vm, 0, "MOUSE_CURSOR_NOT_ALLOWED", 1);

  // GamepadButton
  pkSetSlotNumber(vm, 1, 0);
  pkSetAttribute(vm, 0, "GAMEPAD_BUTTON_UNKNOWN", 1);
  pkSetSlotNumber(vm, 1, 1);
  pkSetAttribute(vm, 0, "GAMEPAD_BUTTON_LEFT_FACE_UP", 1);
  pkSetSlotNumber(vm, 1, 2);
  pkSetAttribute(vm, 0, "GAMEPAD_BUTTON_LEFT_FACE_RIGHT", 1);
  pkSetSlotNumber(vm, 1, 3);
  pkSetAttribute(vm, 0, "GAMEPAD_BUTTON_LEFT_FACE_DOWN", 1);
  pkSetSlotNumber(vm, 1, 4);
  pkSetAttribute(vm, 0, "GAMEPAD_BUTTON_LEFT_FACE_LEFT", 1);
  pkSetSlotNumber(vm, 1, 5);
  pkSetAttribute(vm, 0, "GAMEPAD_BUTTON_RIGHT_FACE_UP", 1);
  pkSetSlotNumber(vm, 1, 6);
  pkSetAttribute(vm, 0, "GAMEPAD_BUTTON_RIGHT_FACE_RIGHT", 1);
  pkSetSlotNumber(vm, 1, 7);
  pkSetAttribute(vm, 0, "GAMEPAD_BUTTON_RIGHT_FACE_DOWN", 1);
  pkSetSlotNumber(vm, 1, 8);
  pkSetAttribute(vm, 0, "GAMEPAD_BUTTON_RIGHT_FACE_LEFT", 1);
  pkSetSlotNumber(vm, 1, 9);
  pkSetAttribute(vm, 0, "GAMEPAD_BUTTON_LEFT_TRIGGER_1", 1);
  pkSetSlotNumber(vm, 1, 10);
  pkSetAttribute(vm, 0, "GAMEPAD_BUTTON_LEFT_TRIGGER_2", 1);
  pkSetSlotNumber(vm, 1, 11);
  pkSetAttribute(vm, 0, "GAMEPAD_BUTTON_RIGHT_TRIGGER_1", 1);
  pkSetSlotNumber(vm, 1, 12);
  pkSetAttribute(vm, 0, "GAMEPAD_BUTTON_RIGHT_TRIGGER_2", 1);
  pkSetSlotNumber(vm, 1, 13);
  pkSetAttribute(vm, 0, "GAMEPAD_BUTTON_MIDDLE_LEFT", 1);
  pkSetSlotNumber(vm, 1, 14);
  pkSetAttribute(vm, 0, "GAMEPAD_BUTTON_MIDDLE", 1);
  pkSetSlotNumber(vm, 1, 15);
  pkSetAttribute(vm, 0, "GAMEPAD_BUTTON_MIDDLE_RIGHT", 1);
  pkSetSlotNumber(vm, 1, 16);
  pkSetAttribute(vm, 0, "GAMEPAD_BUTTON_LEFT_THUMB", 1);
  pkSetSlotNumber(vm, 1, 17);
  pkSetAttribute(vm, 0, "GAMEPAD_BUTTON_RIGHT_THUMB", 1);

  // GamepadAxis
  pkSetSlotNumber(vm, 1, 0);
  pkSetAttribute(vm, 0, "GAMEPAD_AXIS_LEFT_X", 1);
  pkSetSlotNumber(vm, 1, 1);
  pkSetAttribute(vm, 0, "GAMEPAD_AXIS_LEFT_Y", 1);
  pkSetSlotNumber(vm, 1, 2);
  pkSetAttribute(vm, 0, "GAMEPAD_AXIS_RIGHT_X", 1);
  pkSetSlotNumber(vm, 1, 3);
  pkSetAttribute(vm, 0, "GAMEPAD_AXIS_RIGHT_Y", 1);
  pkSetSlotNumber(vm, 1, 4);
  pkSetAttribute(vm, 0, "GAMEPAD_AXIS_LEFT_TRIGGER", 1);
  pkSetSlotNumber(vm, 1, 5);
  pkSetAttribute(vm, 0, "GAMEPAD_AXIS_RIGHT_TRIGGER", 1);

  // MaterialMapIndex
  pkSetSlotNumber(vm, 1, 0);
  pkSetAttribute(vm, 0, "MATERIAL_MAP_ALBEDO", 1);
  pkSetSlotNumber(vm, 1, 1);
  pkSetAttribute(vm, 0, "MATERIAL_MAP_METALNESS", 1);
  pkSetSlotNumber(vm, 1, 2);
  pkSetAttribute(vm, 0, "MATERIAL_MAP_NORMAL", 1);
  pkSetSlotNumber(vm, 1, 3);
  pkSetAttribute(vm, 0, "MATERIAL_MAP_ROUGHNESS", 1);
  pkSetSlotNumber(vm, 1, 4);
  pkSetAttribute(vm, 0, "MATERIAL_MAP_OCCLUSION", 1);
  pkSetSlotNumber(vm, 1, 5);
  pkSetAttribute(vm, 0, "MATERIAL_MAP_EMISSION", 1);
  pkSetSlotNumber(vm, 1, 6);
  pkSetAttribute(vm, 0, "MATERIAL_MAP_HEIGHT", 1);
  pkSetSlotNumber(vm, 1, 7);
  pkSetAttribute(vm, 0, "MATERIAL_MAP_CUBEMAP", 1);
  pkSetSlotNumber(vm, 1, 8);
  pkSetAttribute(vm, 0, "MATERIAL_MAP_IRRADIANCE", 1);
  pkSetSlotNumber(vm, 1, 9);
  pkSetAttribute(vm, 0, "MATERIAL_MAP_PREFILTER", 1);
  pkSetSlotNumber(vm, 1, 10);
  pkSetAttribute(vm, 0, "MATERIAL_MAP_BRDF", 1);

  // ShaderLocationIndex
  pkSetSlotNumber(vm, 1, 0);
  pkSetAttribute(vm, 0, "SHADER_LOC_VERTEX_POSITION", 1);
  pkSetSlotNumber(vm, 1, 1);
  pkSetAttribute(vm, 0, "SHADER_LOC_VERTEX_TEXCOORD01", 1);
  pkSetSlotNumber(vm, 1, 2);
  pkSetAttribute(vm, 0, "SHADER_LOC_VERTEX_TEXCOORD02", 1);
  pkSetSlotNumber(vm, 1, 3);
  pkSetAttribute(vm, 0, "SHADER_LOC_VERTEX_NORMAL", 1);
  pkSetSlotNumber(vm, 1, 4);
  pkSetAttribute(vm, 0, "SHADER_LOC_VERTEX_TANGENT", 1);
  pkSetSlotNumber(vm, 1, 5);
  pkSetAttribute(vm, 0, "SHADER_LOC_VERTEX_COLOR", 1);
  pkSetSlotNumber(vm, 1, 6);
  pkSetAttribute(vm, 0, "SHADER_LOC_MATRIX_MVP", 1);
  pkSetSlotNumber(vm, 1, 7);
  pkSetAttribute(vm, 0, "SHADER_LOC_MATRIX_VIEW", 1);
  pkSetSlotNumber(vm, 1, 8);
  pkSetAttribute(vm, 0, "SHADER_LOC_MATRIX_PROJECTION", 1);
  pkSetSlotNumber(vm, 1, 9);
  pkSetAttribute(vm, 0, "SHADER_LOC_MATRIX_MODEL", 1);
  pkSetSlotNumber(vm, 1, 10);
  pkSetAttribute(vm, 0, "SHADER_LOC_MATRIX_NORMAL", 1);
  pkSetSlotNumber(vm, 1, 11);
  pkSetAttribute(vm, 0, "SHADER_LOC_VECTOR_VIEW", 1);
  pkSetSlotNumber(vm, 1, 12);
  pkSetAttribute(vm, 0, "SHADER_LOC_COLOR_DIFFUSE", 1);
  pkSetSlotNumber(vm, 1, 13);
  pkSetAttribute(vm, 0, "SHADER_LOC_COLOR_SPECULAR", 1);
  pkSetSlotNumber(vm, 1, 14);
  pkSetAttribute(vm, 0, "SHADER_LOC_COLOR_AMBIENT", 1);
  pkSetSlotNumber(vm, 1, 15);
  pkSetAttribute(vm, 0, "SHADER_LOC_MAP_ALBEDO", 1);
  pkSetSlotNumber(vm, 1, 16);
  pkSetAttribute(vm, 0, "SHADER_LOC_MAP_METALNESS", 1);
  pkSetSlotNumber(vm, 1, 17);
  pkSetAttribute(vm, 0, "SHADER_LOC_MAP_NORMAL", 1);
  pkSetSlotNumber(vm, 1, 18);
  pkSetAttribute(vm, 0, "SHADER_LOC_MAP_ROUGHNESS", 1);
  pkSetSlotNumber(vm, 1, 19);
  pkSetAttribute(vm, 0, "SHADER_LOC_MAP_OCCLUSION", 1);
  pkSetSlotNumber(vm, 1, 20);
  pkSetAttribute(vm, 0, "SHADER_LOC_MAP_EMISSION", 1);
  pkSetSlotNumber(vm, 1, 21);
  pkSetAttribute(vm, 0, "SHADER_LOC_MAP_HEIGHT", 1);
  pkSetSlotNumber(vm, 1, 22);
  pkSetAttribute(vm, 0, "SHADER_LOC_MAP_CUBEMAP", 1);
  pkSetSlotNumber(vm, 1, 23);
  pkSetAttribute(vm, 0, "SHADER_LOC_MAP_IRRADIANCE", 1);
  pkSetSlotNumber(vm, 1, 24);
  pkSetAttribute(vm, 0, "SHADER_LOC_MAP_PREFILTER", 1);
  pkSetSlotNumber(vm, 1, 25);
  pkSetAttribute(vm, 0, "SHADER_LOC_MAP_BRDF", 1);

  // ShaderUniformDataType
  pkSetSlotNumber(vm, 1, 0);
  pkSetAttribute(vm, 0, "SHADER_UNIFORM_FLOAT", 1);
  pkSetSlotNumber(vm, 1, 1);
  pkSetAttribute(vm, 0, "SHADER_UNIFORM_VEC2", 1);
  pkSetSlotNumber(vm, 1, 2);
  pkSetAttribute(vm, 0, "SHADER_UNIFORM_VEC3", 1);
  pkSetSlotNumber(vm, 1, 3);
  pkSetAttribute(vm, 0, "SHADER_UNIFORM_VEC4", 1);
  pkSetSlotNumber(vm, 1, 4);
  pkSetAttribute(vm, 0, "SHADER_UNIFORM_INT", 1);
  pkSetSlotNumber(vm, 1, 5);
  pkSetAttribute(vm, 0, "SHADER_UNIFORM_IVEC2", 1);
  pkSetSlotNumber(vm, 1, 6);
  pkSetAttribute(vm, 0, "SHADER_UNIFORM_IVEC3", 1);
  pkSetSlotNumber(vm, 1, 7);
  pkSetAttribute(vm, 0, "SHADER_UNIFORM_IVEC4", 1);
  pkSetSlotNumber(vm, 1, 8);
  pkSetAttribute(vm, 0, "SHADER_UNIFORM_SAMPLER2D", 1);

  // ShaderAttributeDataType
  pkSetSlotNumber(vm, 1, 0);
  pkSetAttribute(vm, 0, "SHADER_ATTRIB_FLOAT", 1);
  pkSetSlotNumber(vm, 1, 1);
  pkSetAttribute(vm, 0, "SHADER_ATTRIB_VEC2", 1);
  pkSetSlotNumber(vm, 1, 2);
  pkSetAttribute(vm, 0, "SHADER_ATTRIB_VEC3", 1);
  pkSetSlotNumber(vm, 1, 3);
  pkSetAttribute(vm, 0, "SHADER_ATTRIB_VEC4", 1);

  // PixelFormat
  pkSetSlotNumber(vm, 1, 1);
  pkSetAttribute(vm, 0, "PIXELFORMAT_UNCOMPRESSED_GRAYSCALE", 1);
  pkSetSlotNumber(vm, 1, 2);
  pkSetAttribute(vm, 0, "PIXELFORMAT_UNCOMPRESSED_GRAY_ALPHA", 1);
  pkSetSlotNumber(vm, 1, 3);
  pkSetAttribute(vm, 0, "PIXELFORMAT_UNCOMPRESSED_R5G6B5", 1);
  pkSetSlotNumber(vm, 1, 4);
  pkSetAttribute(vm, 0, "PIXELFORMAT_UNCOMPRESSED_R8G8B8", 1);
  pkSetSlotNumber(vm, 1, 5);
  pkSetAttribute(vm, 0, "PIXELFORMAT_UNCOMPRESSED_R5G5B5A1", 1);
  pkSetSlotNumber(vm, 1, 6);
  pkSetAttribute(vm, 0, "PIXELFORMAT_UNCOMPRESSED_R4G4B4A4", 1);
  pkSetSlotNumber(vm, 1, 7);
  pkSetAttribute(vm, 0, "PIXELFORMAT_UNCOMPRESSED_R8G8B8A8", 1);
  pkSetSlotNumber(vm, 1, 8);
  pkSetAttribute(vm, 0, "PIXELFORMAT_UNCOMPRESSED_R32", 1);
  pkSetSlotNumber(vm, 1, 9);
  pkSetAttribute(vm, 0, "PIXELFORMAT_UNCOMPRESSED_R32G32B32", 1);
  pkSetSlotNumber(vm, 1, 10);
  pkSetAttribute(vm, 0, "PIXELFORMAT_UNCOMPRESSED_R32G32B32A32", 1);
  pkSetSlotNumber(vm, 1, 11);
  pkSetAttribute(vm, 0, "PIXELFORMAT_COMPRESSED_DXT1_RGB", 1);
  pkSetSlotNumber(vm, 1, 12);
  pkSetAttribute(vm, 0, "PIXELFORMAT_COMPRESSED_DXT1_RGBA", 1);
  pkSetSlotNumber(vm, 1, 13);
  pkSetAttribute(vm, 0, "PIXELFORMAT_COMPRESSED_DXT3_RGBA", 1);
  pkSetSlotNumber(vm, 1, 14);
  pkSetAttribute(vm, 0, "PIXELFORMAT_COMPRESSED_DXT5_RGBA", 1);
  pkSetSlotNumber(vm, 1, 15);
  pkSetAttribute(vm, 0, "PIXELFORMAT_COMPRESSED_ETC1_RGB", 1);
  pkSetSlotNumber(vm, 1, 16);
  pkSetAttribute(vm, 0, "PIXELFORMAT_COMPRESSED_ETC2_RGB", 1);
  pkSetSlotNumber(vm, 1, 17);
  pkSetAttribute(vm, 0, "PIXELFORMAT_COMPRESSED_ETC2_EAC_RGBA", 1);
  pkSetSlotNumber(vm, 1, 18);
  pkSetAttribute(vm, 0, "PIXELFORMAT_COMPRESSED_PVRT_RGB", 1);
  pkSetSlotNumber(vm, 1, 19);
  pkSetAttribute(vm, 0, "PIXELFORMAT_COMPRESSED_PVRT_RGBA", 1);
  pkSetSlotNumber(vm, 1, 20);
  pkSetAttribute(vm, 0, "PIXELFORMAT_COMPRESSED_ASTC_4x4_RGBA", 1);
  pkSetSlotNumber(vm, 1, 21);
  pkSetAttribute(vm, 0, "PIXELFORMAT_COMPRESSED_ASTC_8x8_RGBA", 1);

  // TextureFilter
  pkSetSlotNumber(vm, 1, 0);
  pkSetAttribute(vm, 0, "TEXTURE_FILTER_POINT", 1);
  pkSetSlotNumber(vm, 1, 1);
  pkSetAttribute(vm, 0, "TEXTURE_FILTER_BILINEAR", 1);
  pkSetSlotNumber(vm, 1, 2);
  pkSetAttribute(vm, 0, "TEXTURE_FILTER_TRILINEAR", 1);
  pkSetSlotNumber(vm, 1, 3);
  pkSetAttribute(vm, 0, "TEXTURE_FILTER_ANISOTROPIC_4X", 1);
  pkSetSlotNumber(vm, 1, 4);
  pkSetAttribute(vm, 0, "TEXTURE_FILTER_ANISOTROPIC_8X", 1);
  pkSetSlotNumber(vm, 1, 5);
  pkSetAttribute(vm, 0, "TEXTURE_FILTER_ANISOTROPIC_16X", 1);

  // TextureWrap
  pkSetSlotNumber(vm, 1, 0);
  pkSetAttribute(vm, 0, "TEXTURE_WRAP_REPEAT", 1);
  pkSetSlotNumber(vm, 1, 1);
  pkSetAttribute(vm, 0, "TEXTURE_WRAP_CLAMP", 1);
  pkSetSlotNumber(vm, 1, 2);
  pkSetAttribute(vm, 0, "TEXTURE_WRAP_MIRROR_REPEAT", 1);
  pkSetSlotNumber(vm, 1, 3);
  pkSetAttribute(vm, 0, "TEXTURE_WRAP_MIRROR_CLAMP", 1);

  // CubemapLayout
  pkSetSlotNumber(vm, 1, 0);
  pkSetAttribute(vm, 0, "CUBEMAP_LAYOUT_AUTO_DETECT", 1);
  pkSetSlotNumber(vm, 1, 1);
  pkSetAttribute(vm, 0, "CUBEMAP_LAYOUT_LINE_VERTICAL", 1);
  pkSetSlotNumber(vm, 1, 2);
  pkSetAttribute(vm, 0, "CUBEMAP_LAYOUT_LINE_HORIZONTAL", 1);
  pkSetSlotNumber(vm, 1, 3);
  pkSetAttribute(vm, 0, "CUBEMAP_LAYOUT_CROSS_THREE_BY_FOUR", 1);
  pkSetSlotNumber(vm, 1, 4);
  pkSetAttribute(vm, 0, "CUBEMAP_LAYOUT_CROSS_FOUR_BY_THREE", 1);
  pkSetSlotNumber(vm, 1, 5);
  pkSetAttribute(vm, 0, "CUBEMAP_LAYOUT_PANORAMA", 1);

  // FontType
  pkSetSlotNumber(vm, 1, 0);
  pkSetAttribute(vm, 0, "FONT_DEFAULT", 1);
  pkSetSlotNumber(vm, 1, 1);
  pkSetAttribute(vm, 0, "FONT_BITMAP", 1);
  pkSetSlotNumber(vm, 1, 2);
  pkSetAttribute(vm, 0, "FONT_SDF", 1);

  // BlendMode
  pkSetSlotNumber(vm, 1, 0);
  pkSetAttribute(vm, 0, "BLEND_ALPHA", 1);
  pkSetSlotNumber(vm, 1, 1);
  pkSetAttribute(vm, 0, "BLEND_ADDITIVE", 1);
  pkSetSlotNumber(vm, 1, 2);
  pkSetAttribute(vm, 0, "BLEND_MULTIPLIED", 1);
  pkSetSlotNumber(vm, 1, 3);
  pkSetAttribute(vm, 0, "BLEND_ADD_COLORS", 1);
  pkSetSlotNumber(vm, 1, 4);
  pkSetAttribute(vm, 0, "BLEND_SUBTRACT_COLORS", 1);
  pkSetSlotNumber(vm, 1, 5);
  pkSetAttribute(vm, 0, "BLEND_CUSTOM", 1);

  // Gesture
  pkSetSlotNumber(vm, 1, 0);
  pkSetAttribute(vm, 0, "GESTURE_NONE", 1);
  pkSetSlotNumber(vm, 1, 1);
  pkSetAttribute(vm, 0, "GESTURE_TAP", 1);
  pkSetSlotNumber(vm, 1, 2);
  pkSetAttribute(vm, 0, "GESTURE_DOUBLETAP", 1);
  pkSetSlotNumber(vm, 1, 4);
  pkSetAttribute(vm, 0, "GESTURE_HOLD", 1);
  pkSetSlotNumber(vm, 1, 8);
  pkSetAttribute(vm, 0, "GESTURE_DRAG", 1);
  pkSetSlotNumber(vm, 1, 16);
  pkSetAttribute(vm, 0, "GESTURE_SWIPE_RIGHT", 1);
  pkSetSlotNumber(vm, 1, 32);
  pkSetAttribute(vm, 0, "GESTURE_SWIPE_LEFT", 1);
  pkSetSlotNumber(vm, 1, 64);
  pkSetAttribute(vm, 0, "GESTURE_SWIPE_UP", 1);
  pkSetSlotNumber(vm, 1, 128);
  pkSetAttribute(vm, 0, "GESTURE_SWIPE_DOWN", 1);
  pkSetSlotNumber(vm, 1, 256);
  pkSetAttribute(vm, 0, "GESTURE_PINCH_IN", 1);
  pkSetSlotNumber(vm, 1, 512);
  pkSetAttribute(vm, 0, "GESTURE_PINCH_OUT", 1);

  // CameraMode
  pkSetSlotNumber(vm, 1, 0);
  pkSetAttribute(vm, 0, "CAMERA_CUSTOM", 1);
  pkSetSlotNumber(vm, 1, 1);
  pkSetAttribute(vm, 0, "CAMERA_FREE", 1);
  pkSetSlotNumber(vm, 1, 2);
  pkSetAttribute(vm, 0, "CAMERA_ORBITAL", 1);
  pkSetSlotNumber(vm, 1, 3);
  pkSetAttribute(vm, 0, "CAMERA_FIRST_PERSON", 1);
  pkSetSlotNumber(vm, 1, 4);
  pkSetAttribute(vm, 0, "CAMERA_THIRD_PERSON", 1);

  // CameraProjection
  pkSetSlotNumber(vm, 1, 0);
  pkSetAttribute(vm, 0, "CAMERA_PERSPECTIVE", 1);
  pkSetSlotNumber(vm, 1, 1);
  pkSetAttribute(vm, 0, "CAMERA_ORTHOGRAPHIC", 1);

  // NPatchLayout
  pkSetSlotNumber(vm, 1, 0);
  pkSetAttribute(vm, 0, "NPATCH_NINE_PATCH", 1);
  pkSetSlotNumber(vm, 1, 1);
  pkSetAttribute(vm, 0, "NPATCH_THREE_PATCH_VERTICAL", 1);
  pkSetSlotNumber(vm, 1, 2);
  pkSetAttribute(vm, 0, "NPATCH_THREE_PATCH_HORIZONTAL", 1);

  cls_Vector2 = pkNewClass(vm, "Vector2", NULL, raylib, _Vector2New, _Vector2Delete);
  pkClassAddMethod(vm, cls_Vector2, "@getter",  _Vector2Getter, 1);
  pkClassAddMethod(vm, cls_Vector2, "@setter",  _Vector2Setter, 2);

  cls_Vector3 = pkNewClass(vm, "Vector3", NULL, raylib, _Vector3New, _Vector3Delete);
  pkClassAddMethod(vm, cls_Vector3, "@getter",  _Vector3Getter, 1);
  pkClassAddMethod(vm, cls_Vector3, "@setter",  _Vector3Setter, 2);

  cls_Vector4 = pkNewClass(vm, "Vector4", NULL, raylib, _Vector4New, _Vector4Delete);
  pkClassAddMethod(vm, cls_Vector4, "@getter",  _Vector4Getter, 1);
  pkClassAddMethod(vm, cls_Vector4, "@setter",  _Vector4Setter, 2);

  cls_Matrix = pkNewClass(vm, "Matrix", NULL, raylib, _MatrixNew, _MatrixDelete);
  pkClassAddMethod(vm, cls_Matrix, "@getter",  _MatrixGetter, 1);
  pkClassAddMethod(vm, cls_Matrix, "@setter",  _MatrixSetter, 2);

  cls_Color = pkNewClass(vm, "Color", NULL, raylib, _ColorNew, _ColorDelete);
  pkClassAddMethod(vm, cls_Color, "@getter",  _ColorGetter, 1);
  pkClassAddMethod(vm, cls_Color, "@setter",  _ColorSetter, 2);

  cls_Rectangle = pkNewClass(vm, "Rectangle", NULL, raylib, _RectangleNew, _RectangleDelete);
  pkClassAddMethod(vm, cls_Rectangle, "@getter",  _RectangleGetter, 1);
  pkClassAddMethod(vm, cls_Rectangle, "@setter",  _RectangleSetter, 2);

  cls_Image = pkNewClass(vm, "Image", NULL, raylib, _ImageNew, _ImageDelete);
  pkClassAddMethod(vm, cls_Image, "@getter",  _ImageGetter, 1);
  pkClassAddMethod(vm, cls_Image, "@setter",  _ImageSetter, 2);

  cls_Texture = pkNewClass(vm, "Texture", NULL, raylib, _TextureNew, _TextureDelete);
  pkClassAddMethod(vm, cls_Texture, "@getter",  _TextureGetter, 1);
  pkClassAddMethod(vm, cls_Texture, "@setter",  _TextureSetter, 2);

  cls_RenderTexture = pkNewClass(vm, "RenderTexture", NULL, raylib, _RenderTextureNew, _RenderTextureDelete);
  pkClassAddMethod(vm, cls_RenderTexture, "@getter",  _RenderTextureGetter, 1);
  pkClassAddMethod(vm, cls_RenderTexture, "@setter",  _RenderTextureSetter, 2);

  cls_NPatchInfo = pkNewClass(vm, "NPatchInfo", NULL, raylib, _NPatchInfoNew, _NPatchInfoDelete);
  pkClassAddMethod(vm, cls_NPatchInfo, "@getter",  _NPatchInfoGetter, 1);
  pkClassAddMethod(vm, cls_NPatchInfo, "@setter",  _NPatchInfoSetter, 2);

  cls_GlyphInfo = pkNewClass(vm, "GlyphInfo", NULL, raylib, _GlyphInfoNew, _GlyphInfoDelete);
  pkClassAddMethod(vm, cls_GlyphInfo, "@getter",  _GlyphInfoGetter, 1);
  pkClassAddMethod(vm, cls_GlyphInfo, "@setter",  _GlyphInfoSetter, 2);

  cls_Font = pkNewClass(vm, "Font", NULL, raylib, _FontNew, _FontDelete);
  pkClassAddMethod(vm, cls_Font, "@getter",  _FontGetter, 1);
  pkClassAddMethod(vm, cls_Font, "@setter",  _FontSetter, 2);

  cls_Camera3D = pkNewClass(vm, "Camera3D", NULL, raylib, _Camera3DNew, _Camera3DDelete);
  pkClassAddMethod(vm, cls_Camera3D, "@getter",  _Camera3DGetter, 1);
  pkClassAddMethod(vm, cls_Camera3D, "@setter",  _Camera3DSetter, 2);

  cls_Camera2D = pkNewClass(vm, "Camera2D", NULL, raylib, _Camera2DNew, _Camera2DDelete);
  pkClassAddMethod(vm, cls_Camera2D, "@getter",  _Camera2DGetter, 1);
  pkClassAddMethod(vm, cls_Camera2D, "@setter",  _Camera2DSetter, 2);

  cls_Mesh = pkNewClass(vm, "Mesh", NULL, raylib, _MeshNew, _MeshDelete);
  pkClassAddMethod(vm, cls_Mesh, "@getter",  _MeshGetter, 1);
  pkClassAddMethod(vm, cls_Mesh, "@setter",  _MeshSetter, 2);

  cls_Shader = pkNewClass(vm, "Shader", NULL, raylib, _ShaderNew, _ShaderDelete);
  pkClassAddMethod(vm, cls_Shader, "@getter",  _ShaderGetter, 1);
  pkClassAddMethod(vm, cls_Shader, "@setter",  _ShaderSetter, 2);

  cls_MaterialMap = pkNewClass(vm, "MaterialMap", NULL, raylib, _MaterialMapNew, _MaterialMapDelete);
  pkClassAddMethod(vm, cls_MaterialMap, "@getter",  _MaterialMapGetter, 1);
  pkClassAddMethod(vm, cls_MaterialMap, "@setter",  _MaterialMapSetter, 2);

  cls_Material = pkNewClass(vm, "Material", NULL, raylib, _MaterialNew, _MaterialDelete);
  pkClassAddMethod(vm, cls_Material, "@getter",  _MaterialGetter, 1);
  pkClassAddMethod(vm, cls_Material, "@setter",  _MaterialSetter, 2);

  cls_Transform = pkNewClass(vm, "Transform", NULL, raylib, _TransformNew, _TransformDelete);
  pkClassAddMethod(vm, cls_Transform, "@getter",  _TransformGetter, 1);
  pkClassAddMethod(vm, cls_Transform, "@setter",  _TransformSetter, 2);

  cls_BoneInfo = pkNewClass(vm, "BoneInfo", NULL, raylib, _BoneInfoNew, _BoneInfoDelete);
  pkClassAddMethod(vm, cls_BoneInfo, "@getter",  _BoneInfoGetter, 1);
  pkClassAddMethod(vm, cls_BoneInfo, "@setter",  _BoneInfoSetter, 2);

  cls_Model = pkNewClass(vm, "Model", NULL, raylib, _ModelNew, _ModelDelete);
  pkClassAddMethod(vm, cls_Model, "@getter",  _ModelGetter, 1);
  pkClassAddMethod(vm, cls_Model, "@setter",  _ModelSetter, 2);

  cls_ModelAnimation = pkNewClass(vm, "ModelAnimation", NULL, raylib, _ModelAnimationNew, _ModelAnimationDelete);
  pkClassAddMethod(vm, cls_ModelAnimation, "@getter",  _ModelAnimationGetter, 1);
  pkClassAddMethod(vm, cls_ModelAnimation, "@setter",  _ModelAnimationSetter, 2);

  cls_Ray = pkNewClass(vm, "Ray", NULL, raylib, _RayNew, _RayDelete);
  pkClassAddMethod(vm, cls_Ray, "@getter",  _RayGetter, 1);
  pkClassAddMethod(vm, cls_Ray, "@setter",  _RaySetter, 2);

  cls_RayCollision = pkNewClass(vm, "RayCollision", NULL, raylib, _RayCollisionNew, _RayCollisionDelete);
  pkClassAddMethod(vm, cls_RayCollision, "@getter",  _RayCollisionGetter, 1);
  pkClassAddMethod(vm, cls_RayCollision, "@setter",  _RayCollisionSetter, 2);

  cls_BoundingBox = pkNewClass(vm, "BoundingBox", NULL, raylib, _BoundingBoxNew, _BoundingBoxDelete);
  pkClassAddMethod(vm, cls_BoundingBox, "@getter",  _BoundingBoxGetter, 1);
  pkClassAddMethod(vm, cls_BoundingBox, "@setter",  _BoundingBoxSetter, 2);

  cls_Wave = pkNewClass(vm, "Wave", NULL, raylib, _WaveNew, _WaveDelete);
  pkClassAddMethod(vm, cls_Wave, "@getter",  _WaveGetter, 1);
  pkClassAddMethod(vm, cls_Wave, "@setter",  _WaveSetter, 2);

  cls_AudioStream = pkNewClass(vm, "AudioStream", NULL, raylib, _AudioStreamNew, _AudioStreamDelete);
  pkClassAddMethod(vm, cls_AudioStream, "@getter",  _AudioStreamGetter, 1);
  pkClassAddMethod(vm, cls_AudioStream, "@setter",  _AudioStreamSetter, 2);

  cls_Sound = pkNewClass(vm, "Sound", NULL, raylib, _SoundNew, _SoundDelete);
  pkClassAddMethod(vm, cls_Sound, "@getter",  _SoundGetter, 1);
  pkClassAddMethod(vm, cls_Sound, "@setter",  _SoundSetter, 2);

  cls_Music = pkNewClass(vm, "Music", NULL, raylib, _MusicNew, _MusicDelete);
  pkClassAddMethod(vm, cls_Music, "@getter",  _MusicGetter, 1);
  pkClassAddMethod(vm, cls_Music, "@setter",  _MusicSetter, 2);

  cls_VrDeviceInfo = pkNewClass(vm, "VrDeviceInfo", NULL, raylib, _VrDeviceInfoNew, _VrDeviceInfoDelete);
  pkClassAddMethod(vm, cls_VrDeviceInfo, "@getter",  _VrDeviceInfoGetter, 1);
  pkClassAddMethod(vm, cls_VrDeviceInfo, "@setter",  _VrDeviceInfoSetter, 2);

  cls_VrStereoConfig = pkNewClass(vm, "VrStereoConfig", NULL, raylib, _VrStereoConfigNew, _VrStereoConfigDelete);
  pkClassAddMethod(vm, cls_VrStereoConfig, "@getter",  _VrStereoConfigGetter, 1);
  pkClassAddMethod(vm, cls_VrStereoConfig, "@setter",  _VrStereoConfigSetter, 2);

  pkModuleAddFunction(vm, raylib, "InitWindow",   _InitWindow, 3);
  pkModuleAddFunction(vm, raylib, "WindowShouldClose",   _WindowShouldClose, 0);
  pkModuleAddFunction(vm, raylib, "CloseWindow",   _CloseWindow, 0);
  pkModuleAddFunction(vm, raylib, "IsWindowReady",   _IsWindowReady, 0);
  pkModuleAddFunction(vm, raylib, "IsWindowFullscreen",   _IsWindowFullscreen, 0);
  pkModuleAddFunction(vm, raylib, "IsWindowHidden",   _IsWindowHidden, 0);
  pkModuleAddFunction(vm, raylib, "IsWindowMinimized",   _IsWindowMinimized, 0);
  pkModuleAddFunction(vm, raylib, "IsWindowMaximized",   _IsWindowMaximized, 0);
  pkModuleAddFunction(vm, raylib, "IsWindowFocused",   _IsWindowFocused, 0);
  pkModuleAddFunction(vm, raylib, "IsWindowResized",   _IsWindowResized, 0);
  pkModuleAddFunction(vm, raylib, "IsWindowState",   _IsWindowState, 1);
  pkModuleAddFunction(vm, raylib, "SetWindowState",   _SetWindowState, 1);
  pkModuleAddFunction(vm, raylib, "ClearWindowState",   _ClearWindowState, 1);
  pkModuleAddFunction(vm, raylib, "ToggleFullscreen",   _ToggleFullscreen, 0);
  pkModuleAddFunction(vm, raylib, "MaximizeWindow",   _MaximizeWindow, 0);
  pkModuleAddFunction(vm, raylib, "MinimizeWindow",   _MinimizeWindow, 0);
  pkModuleAddFunction(vm, raylib, "RestoreWindow",   _RestoreWindow, 0);
  pkModuleAddFunction(vm, raylib, "SetWindowIcon",   _SetWindowIcon, 1);
  pkModuleAddFunction(vm, raylib, "SetWindowTitle",   _SetWindowTitle, 1);
  pkModuleAddFunction(vm, raylib, "SetWindowPosition",   _SetWindowPosition, 2);
  pkModuleAddFunction(vm, raylib, "SetWindowMonitor",   _SetWindowMonitor, 1);
  pkModuleAddFunction(vm, raylib, "SetWindowMinSize",   _SetWindowMinSize, 2);
  pkModuleAddFunction(vm, raylib, "SetWindowSize",   _SetWindowSize, 2);
  pkModuleAddFunction(vm, raylib, "GetScreenWidth",   _GetScreenWidth, 0);
  pkModuleAddFunction(vm, raylib, "GetScreenHeight",   _GetScreenHeight, 0);
  pkModuleAddFunction(vm, raylib, "GetMonitorCount",   _GetMonitorCount, 0);
  pkModuleAddFunction(vm, raylib, "GetCurrentMonitor",   _GetCurrentMonitor, 0);
  pkModuleAddFunction(vm, raylib, "GetMonitorPosition",   _GetMonitorPosition, 1);
  pkModuleAddFunction(vm, raylib, "GetMonitorWidth",   _GetMonitorWidth, 1);
  pkModuleAddFunction(vm, raylib, "GetMonitorHeight",   _GetMonitorHeight, 1);
  pkModuleAddFunction(vm, raylib, "GetMonitorPhysicalWidth",   _GetMonitorPhysicalWidth, 1);
  pkModuleAddFunction(vm, raylib, "GetMonitorPhysicalHeight",   _GetMonitorPhysicalHeight, 1);
  pkModuleAddFunction(vm, raylib, "GetMonitorRefreshRate",   _GetMonitorRefreshRate, 1);
  pkModuleAddFunction(vm, raylib, "GetWindowPosition",   _GetWindowPosition, 0);
  pkModuleAddFunction(vm, raylib, "GetWindowScaleDPI",   _GetWindowScaleDPI, 0);
  pkModuleAddFunction(vm, raylib, "GetMonitorName",   _GetMonitorName, 1);
  pkModuleAddFunction(vm, raylib, "SetClipboardText",   _SetClipboardText, 1);
  pkModuleAddFunction(vm, raylib, "GetClipboardText",   _GetClipboardText, 0);
  pkModuleAddFunction(vm, raylib, "SwapScreenBuffer",   _SwapScreenBuffer, 0);
  pkModuleAddFunction(vm, raylib, "PollInputEvents",   _PollInputEvents, 0);
  pkModuleAddFunction(vm, raylib, "WaitTime",   _WaitTime, 1);
  pkModuleAddFunction(vm, raylib, "ShowCursor",   _ShowCursor, 0);
  pkModuleAddFunction(vm, raylib, "HideCursor",   _HideCursor, 0);
  pkModuleAddFunction(vm, raylib, "IsCursorHidden",   _IsCursorHidden, 0);
  pkModuleAddFunction(vm, raylib, "EnableCursor",   _EnableCursor, 0);
  pkModuleAddFunction(vm, raylib, "DisableCursor",   _DisableCursor, 0);
  pkModuleAddFunction(vm, raylib, "IsCursorOnScreen",   _IsCursorOnScreen, 0);
  pkModuleAddFunction(vm, raylib, "ClearBackground",   _ClearBackground, 1);
  pkModuleAddFunction(vm, raylib, "BeginDrawing",   _BeginDrawing, 0);
  pkModuleAddFunction(vm, raylib, "EndDrawing",   _EndDrawing, 0);
  pkModuleAddFunction(vm, raylib, "BeginMode2D",   _BeginMode2D, 1);
  pkModuleAddFunction(vm, raylib, "EndMode2D",   _EndMode2D, 0);
  pkModuleAddFunction(vm, raylib, "BeginMode3D",   _BeginMode3D, 1);
  pkModuleAddFunction(vm, raylib, "EndMode3D",   _EndMode3D, 0);
  pkModuleAddFunction(vm, raylib, "BeginTextureMode",   _BeginTextureMode, 1);
  pkModuleAddFunction(vm, raylib, "EndTextureMode",   _EndTextureMode, 0);
  pkModuleAddFunction(vm, raylib, "BeginShaderMode",   _BeginShaderMode, 1);
  pkModuleAddFunction(vm, raylib, "EndShaderMode",   _EndShaderMode, 0);
  pkModuleAddFunction(vm, raylib, "BeginBlendMode",   _BeginBlendMode, 1);
  pkModuleAddFunction(vm, raylib, "EndBlendMode",   _EndBlendMode, 0);
  pkModuleAddFunction(vm, raylib, "BeginScissorMode",   _BeginScissorMode, 4);
  pkModuleAddFunction(vm, raylib, "EndScissorMode",   _EndScissorMode, 0);
  pkModuleAddFunction(vm, raylib, "BeginVrStereoMode",   _BeginVrStereoMode, 1);
  pkModuleAddFunction(vm, raylib, "EndVrStereoMode",   _EndVrStereoMode, 0);
  pkModuleAddFunction(vm, raylib, "LoadVrStereoConfig",   _LoadVrStereoConfig, 1);
  pkModuleAddFunction(vm, raylib, "UnloadVrStereoConfig",   _UnloadVrStereoConfig, 1);
  pkModuleAddFunction(vm, raylib, "LoadShader",   _LoadShader, 2);
  pkModuleAddFunction(vm, raylib, "LoadShaderFromMemory",   _LoadShaderFromMemory, 2);
  pkModuleAddFunction(vm, raylib, "GetShaderLocation",   _GetShaderLocation, 2);
  pkModuleAddFunction(vm, raylib, "GetShaderLocationAttrib",   _GetShaderLocationAttrib, 2);
  pkModuleAddFunction(vm, raylib, "SetShaderValueMatrix",   _SetShaderValueMatrix, 3);
  pkModuleAddFunction(vm, raylib, "SetShaderValueTexture",   _SetShaderValueTexture, 3);
  pkModuleAddFunction(vm, raylib, "UnloadShader",   _UnloadShader, 1);
  pkModuleAddFunction(vm, raylib, "GetMouseRay",   _GetMouseRay, 2);
  pkModuleAddFunction(vm, raylib, "GetCameraMatrix",   _GetCameraMatrix, 1);
  pkModuleAddFunction(vm, raylib, "GetCameraMatrix2D",   _GetCameraMatrix2D, 1);
  pkModuleAddFunction(vm, raylib, "GetWorldToScreen",   _GetWorldToScreen, 2);
  pkModuleAddFunction(vm, raylib, "GetWorldToScreenEx",   _GetWorldToScreenEx, 4);
  pkModuleAddFunction(vm, raylib, "GetWorldToScreen2D",   _GetWorldToScreen2D, 2);
  pkModuleAddFunction(vm, raylib, "GetScreenToWorld2D",   _GetScreenToWorld2D, 2);
  pkModuleAddFunction(vm, raylib, "SetTargetFPS",   _SetTargetFPS, 1);
  pkModuleAddFunction(vm, raylib, "GetFPS",   _GetFPS, 0);
  pkModuleAddFunction(vm, raylib, "GetFrameTime",   _GetFrameTime, 0);
  pkModuleAddFunction(vm, raylib, "GetTime",   _GetTime, 0);
  pkModuleAddFunction(vm, raylib, "GetRandomValue",   _GetRandomValue, 2);
  pkModuleAddFunction(vm, raylib, "SetRandomSeed",   _SetRandomSeed, 1);
  pkModuleAddFunction(vm, raylib, "TakeScreenshot",   _TakeScreenshot, 1);
  pkModuleAddFunction(vm, raylib, "SetConfigFlags",   _SetConfigFlags, 1);
  pkModuleAddFunction(vm, raylib, "SetTraceLogLevel",   _SetTraceLogLevel, 1);
  pkModuleAddFunction(vm, raylib, "FileExists",   _FileExists, 1);
  pkModuleAddFunction(vm, raylib, "DirectoryExists",   _DirectoryExists, 1);
  pkModuleAddFunction(vm, raylib, "IsFileExtension",   _IsFileExtension, 2);
  pkModuleAddFunction(vm, raylib, "GetFileExtension",   _GetFileExtension, 1);
  pkModuleAddFunction(vm, raylib, "GetFileName",   _GetFileName, 1);
  pkModuleAddFunction(vm, raylib, "GetFileNameWithoutExt",   _GetFileNameWithoutExt, 1);
  pkModuleAddFunction(vm, raylib, "GetDirectoryPath",   _GetDirectoryPath, 1);
  pkModuleAddFunction(vm, raylib, "GetPrevDirectoryPath",   _GetPrevDirectoryPath, 1);
  pkModuleAddFunction(vm, raylib, "GetWorkingDirectory",   _GetWorkingDirectory, 0);
  pkModuleAddFunction(vm, raylib, "ClearDirectoryFiles",   _ClearDirectoryFiles, 0);
  pkModuleAddFunction(vm, raylib, "ChangeDirectory",   _ChangeDirectory, 1);
  pkModuleAddFunction(vm, raylib, "IsFileDropped",   _IsFileDropped, 0);
  pkModuleAddFunction(vm, raylib, "ClearDroppedFiles",   _ClearDroppedFiles, 0);
  pkModuleAddFunction(vm, raylib, "GetFileModTime",   _GetFileModTime, 1);
  pkModuleAddFunction(vm, raylib, "SaveStorageValue",   _SaveStorageValue, 2);
  pkModuleAddFunction(vm, raylib, "LoadStorageValue",   _LoadStorageValue, 1);
  pkModuleAddFunction(vm, raylib, "OpenURL",   _OpenURL, 1);
  pkModuleAddFunction(vm, raylib, "IsKeyPressed",   _IsKeyPressed, 1);
  pkModuleAddFunction(vm, raylib, "IsKeyDown",   _IsKeyDown, 1);
  pkModuleAddFunction(vm, raylib, "IsKeyReleased",   _IsKeyReleased, 1);
  pkModuleAddFunction(vm, raylib, "IsKeyUp",   _IsKeyUp, 1);
  pkModuleAddFunction(vm, raylib, "SetExitKey",   _SetExitKey, 1);
  pkModuleAddFunction(vm, raylib, "GetKeyPressed",   _GetKeyPressed, 0);
  pkModuleAddFunction(vm, raylib, "GetCharPressed",   _GetCharPressed, 0);
  pkModuleAddFunction(vm, raylib, "IsGamepadAvailable",   _IsGamepadAvailable, 1);
  pkModuleAddFunction(vm, raylib, "GetGamepadName",   _GetGamepadName, 1);
  pkModuleAddFunction(vm, raylib, "IsGamepadButtonPressed",   _IsGamepadButtonPressed, 2);
  pkModuleAddFunction(vm, raylib, "IsGamepadButtonDown",   _IsGamepadButtonDown, 2);
  pkModuleAddFunction(vm, raylib, "IsGamepadButtonReleased",   _IsGamepadButtonReleased, 2);
  pkModuleAddFunction(vm, raylib, "IsGamepadButtonUp",   _IsGamepadButtonUp, 2);
  pkModuleAddFunction(vm, raylib, "GetGamepadButtonPressed",   _GetGamepadButtonPressed, 0);
  pkModuleAddFunction(vm, raylib, "GetGamepadAxisCount",   _GetGamepadAxisCount, 1);
  pkModuleAddFunction(vm, raylib, "GetGamepadAxisMovement",   _GetGamepadAxisMovement, 2);
  pkModuleAddFunction(vm, raylib, "SetGamepadMappings",   _SetGamepadMappings, 1);
  pkModuleAddFunction(vm, raylib, "IsMouseButtonPressed",   _IsMouseButtonPressed, 1);
  pkModuleAddFunction(vm, raylib, "IsMouseButtonDown",   _IsMouseButtonDown, 1);
  pkModuleAddFunction(vm, raylib, "IsMouseButtonReleased",   _IsMouseButtonReleased, 1);
  pkModuleAddFunction(vm, raylib, "IsMouseButtonUp",   _IsMouseButtonUp, 1);
  pkModuleAddFunction(vm, raylib, "GetMouseX",   _GetMouseX, 0);
  pkModuleAddFunction(vm, raylib, "GetMouseY",   _GetMouseY, 0);
  pkModuleAddFunction(vm, raylib, "GetMousePosition",   _GetMousePosition, 0);
  pkModuleAddFunction(vm, raylib, "GetMouseDelta",   _GetMouseDelta, 0);
  pkModuleAddFunction(vm, raylib, "SetMousePosition",   _SetMousePosition, 2);
  pkModuleAddFunction(vm, raylib, "SetMouseOffset",   _SetMouseOffset, 2);
  pkModuleAddFunction(vm, raylib, "SetMouseScale",   _SetMouseScale, 2);
  pkModuleAddFunction(vm, raylib, "GetMouseWheelMove",   _GetMouseWheelMove, 0);
  pkModuleAddFunction(vm, raylib, "SetMouseCursor",   _SetMouseCursor, 1);
  pkModuleAddFunction(vm, raylib, "GetTouchX",   _GetTouchX, 0);
  pkModuleAddFunction(vm, raylib, "GetTouchY",   _GetTouchY, 0);
  pkModuleAddFunction(vm, raylib, "GetTouchPosition",   _GetTouchPosition, 1);
  pkModuleAddFunction(vm, raylib, "GetTouchPointId",   _GetTouchPointId, 1);
  pkModuleAddFunction(vm, raylib, "GetTouchPointCount",   _GetTouchPointCount, 0);
  pkModuleAddFunction(vm, raylib, "SetGesturesEnabled",   _SetGesturesEnabled, 1);
  pkModuleAddFunction(vm, raylib, "IsGestureDetected",   _IsGestureDetected, 1);
  pkModuleAddFunction(vm, raylib, "GetGestureDetected",   _GetGestureDetected, 0);
  pkModuleAddFunction(vm, raylib, "GetGestureHoldDuration",   _GetGestureHoldDuration, 0);
  pkModuleAddFunction(vm, raylib, "GetGestureDragVector",   _GetGestureDragVector, 0);
  pkModuleAddFunction(vm, raylib, "GetGestureDragAngle",   _GetGestureDragAngle, 0);
  pkModuleAddFunction(vm, raylib, "GetGesturePinchVector",   _GetGesturePinchVector, 0);
  pkModuleAddFunction(vm, raylib, "GetGesturePinchAngle",   _GetGesturePinchAngle, 0);
  pkModuleAddFunction(vm, raylib, "SetCameraMode",   _SetCameraMode, 2);
  pkModuleAddFunction(vm, raylib, "UpdateCamera",   _UpdateCamera, 1);
  pkModuleAddFunction(vm, raylib, "SetCameraPanControl",   _SetCameraPanControl, 1);
  pkModuleAddFunction(vm, raylib, "SetCameraAltControl",   _SetCameraAltControl, 1);
  pkModuleAddFunction(vm, raylib, "SetCameraSmoothZoomControl",   _SetCameraSmoothZoomControl, 1);
  pkModuleAddFunction(vm, raylib, "SetCameraMoveControls",   _SetCameraMoveControls, 6);
  pkModuleAddFunction(vm, raylib, "SetShapesTexture",   _SetShapesTexture, 2);
  pkModuleAddFunction(vm, raylib, "DrawPixel",   _DrawPixel, 3);
  pkModuleAddFunction(vm, raylib, "DrawPixelV",   _DrawPixelV, 2);
  pkModuleAddFunction(vm, raylib, "DrawLine",   _DrawLine, 5);
  pkModuleAddFunction(vm, raylib, "DrawLineV",   _DrawLineV, 3);
  pkModuleAddFunction(vm, raylib, "DrawLineEx",   _DrawLineEx, 4);
  pkModuleAddFunction(vm, raylib, "DrawLineBezier",   _DrawLineBezier, 4);
  pkModuleAddFunction(vm, raylib, "DrawLineBezierQuad",   _DrawLineBezierQuad, 5);
  pkModuleAddFunction(vm, raylib, "DrawLineBezierCubic",   _DrawLineBezierCubic, 6);
  pkModuleAddFunction(vm, raylib, "DrawLineStrip",   _DrawLineStrip, 3);
  pkModuleAddFunction(vm, raylib, "DrawCircle",   _DrawCircle, 4);
  pkModuleAddFunction(vm, raylib, "DrawCircleSector",   _DrawCircleSector, 6);
  pkModuleAddFunction(vm, raylib, "DrawCircleSectorLines",   _DrawCircleSectorLines, 6);
  pkModuleAddFunction(vm, raylib, "DrawCircleGradient",   _DrawCircleGradient, 5);
  pkModuleAddFunction(vm, raylib, "DrawCircleV",   _DrawCircleV, 3);
  pkModuleAddFunction(vm, raylib, "DrawCircleLines",   _DrawCircleLines, 4);
  pkModuleAddFunction(vm, raylib, "DrawEllipse",   _DrawEllipse, 5);
  pkModuleAddFunction(vm, raylib, "DrawEllipseLines",   _DrawEllipseLines, 5);
  pkModuleAddFunction(vm, raylib, "DrawRing",   _DrawRing, 7);
  pkModuleAddFunction(vm, raylib, "DrawRingLines",   _DrawRingLines, 7);
  pkModuleAddFunction(vm, raylib, "DrawRectangle",   _DrawRectangle, 5);
  pkModuleAddFunction(vm, raylib, "DrawRectangleV",   _DrawRectangleV, 3);
  pkModuleAddFunction(vm, raylib, "DrawRectangleRec",   _DrawRectangleRec, 2);
  pkModuleAddFunction(vm, raylib, "DrawRectanglePro",   _DrawRectanglePro, 4);
  pkModuleAddFunction(vm, raylib, "DrawRectangleGradientV",   _DrawRectangleGradientV, 6);
  pkModuleAddFunction(vm, raylib, "DrawRectangleGradientH",   _DrawRectangleGradientH, 6);
  pkModuleAddFunction(vm, raylib, "DrawRectangleGradientEx",   _DrawRectangleGradientEx, 5);
  pkModuleAddFunction(vm, raylib, "DrawRectangleLines",   _DrawRectangleLines, 5);
  pkModuleAddFunction(vm, raylib, "DrawRectangleLinesEx",   _DrawRectangleLinesEx, 3);
  pkModuleAddFunction(vm, raylib, "DrawRectangleRounded",   _DrawRectangleRounded, 4);
  pkModuleAddFunction(vm, raylib, "DrawRectangleRoundedLines",   _DrawRectangleRoundedLines, 5);
  pkModuleAddFunction(vm, raylib, "DrawTriangle",   _DrawTriangle, 4);
  pkModuleAddFunction(vm, raylib, "DrawTriangleLines",   _DrawTriangleLines, 4);
  pkModuleAddFunction(vm, raylib, "DrawTriangleFan",   _DrawTriangleFan, 3);
  pkModuleAddFunction(vm, raylib, "DrawTriangleStrip",   _DrawTriangleStrip, 3);
  pkModuleAddFunction(vm, raylib, "DrawPoly",   _DrawPoly, 5);
  pkModuleAddFunction(vm, raylib, "DrawPolyLines",   _DrawPolyLines, 5);
  pkModuleAddFunction(vm, raylib, "DrawPolyLinesEx",   _DrawPolyLinesEx, 6);
  pkModuleAddFunction(vm, raylib, "CheckCollisionRecs",   _CheckCollisionRecs, 2);
  pkModuleAddFunction(vm, raylib, "CheckCollisionCircles",   _CheckCollisionCircles, 4);
  pkModuleAddFunction(vm, raylib, "CheckCollisionCircleRec",   _CheckCollisionCircleRec, 3);
  pkModuleAddFunction(vm, raylib, "CheckCollisionPointRec",   _CheckCollisionPointRec, 2);
  pkModuleAddFunction(vm, raylib, "CheckCollisionPointCircle",   _CheckCollisionPointCircle, 3);
  pkModuleAddFunction(vm, raylib, "CheckCollisionPointTriangle",   _CheckCollisionPointTriangle, 4);
  pkModuleAddFunction(vm, raylib, "CheckCollisionLines",   _CheckCollisionLines, 5);
  pkModuleAddFunction(vm, raylib, "CheckCollisionPointLine",   _CheckCollisionPointLine, 4);
  pkModuleAddFunction(vm, raylib, "GetCollisionRec",   _GetCollisionRec, 2);
  pkModuleAddFunction(vm, raylib, "LoadImage",   _LoadImage, 1);
  pkModuleAddFunction(vm, raylib, "LoadImageRaw",   _LoadImageRaw, 5);
  pkModuleAddFunction(vm, raylib, "LoadImageFromTexture",   _LoadImageFromTexture, 1);
  pkModuleAddFunction(vm, raylib, "LoadImageFromScreen",   _LoadImageFromScreen, 0);
  pkModuleAddFunction(vm, raylib, "UnloadImage",   _UnloadImage, 1);
  pkModuleAddFunction(vm, raylib, "ExportImage",   _ExportImage, 2);
  pkModuleAddFunction(vm, raylib, "ExportImageAsCode",   _ExportImageAsCode, 2);
  pkModuleAddFunction(vm, raylib, "GenImageColor",   _GenImageColor, 3);
  pkModuleAddFunction(vm, raylib, "GenImageGradientV",   _GenImageGradientV, 4);
  pkModuleAddFunction(vm, raylib, "GenImageGradientH",   _GenImageGradientH, 4);
  pkModuleAddFunction(vm, raylib, "GenImageGradientRadial",   _GenImageGradientRadial, 5);
  pkModuleAddFunction(vm, raylib, "GenImageChecked",   _GenImageChecked, 6);
  pkModuleAddFunction(vm, raylib, "GenImageWhiteNoise",   _GenImageWhiteNoise, 3);
  pkModuleAddFunction(vm, raylib, "GenImageCellular",   _GenImageCellular, 3);
  pkModuleAddFunction(vm, raylib, "ImageCopy",   _ImageCopy, 1);
  pkModuleAddFunction(vm, raylib, "ImageFromImage",   _ImageFromImage, 2);
  pkModuleAddFunction(vm, raylib, "ImageText",   _ImageText, 3);
  pkModuleAddFunction(vm, raylib, "ImageTextEx",   _ImageTextEx, 5);
  pkModuleAddFunction(vm, raylib, "ImageFormat",   _ImageFormat, 2);
  pkModuleAddFunction(vm, raylib, "ImageToPOT",   _ImageToPOT, 2);
  pkModuleAddFunction(vm, raylib, "ImageCrop",   _ImageCrop, 2);
  pkModuleAddFunction(vm, raylib, "ImageAlphaCrop",   _ImageAlphaCrop, 2);
  pkModuleAddFunction(vm, raylib, "ImageAlphaClear",   _ImageAlphaClear, 3);
  pkModuleAddFunction(vm, raylib, "ImageAlphaMask",   _ImageAlphaMask, 2);
  pkModuleAddFunction(vm, raylib, "ImageAlphaPremultiply",   _ImageAlphaPremultiply, 1);
  pkModuleAddFunction(vm, raylib, "ImageResize",   _ImageResize, 3);
  pkModuleAddFunction(vm, raylib, "ImageResizeNN",   _ImageResizeNN, 3);
  pkModuleAddFunction(vm, raylib, "ImageResizeCanvas",   _ImageResizeCanvas, 6);
  pkModuleAddFunction(vm, raylib, "ImageMipmaps",   _ImageMipmaps, 1);
  pkModuleAddFunction(vm, raylib, "ImageDither",   _ImageDither, 5);
  pkModuleAddFunction(vm, raylib, "ImageFlipVertical",   _ImageFlipVertical, 1);
  pkModuleAddFunction(vm, raylib, "ImageFlipHorizontal",   _ImageFlipHorizontal, 1);
  pkModuleAddFunction(vm, raylib, "ImageRotateCW",   _ImageRotateCW, 1);
  pkModuleAddFunction(vm, raylib, "ImageRotateCCW",   _ImageRotateCCW, 1);
  pkModuleAddFunction(vm, raylib, "ImageColorTint",   _ImageColorTint, 2);
  pkModuleAddFunction(vm, raylib, "ImageColorInvert",   _ImageColorInvert, 1);
  pkModuleAddFunction(vm, raylib, "ImageColorGrayscale",   _ImageColorGrayscale, 1);
  pkModuleAddFunction(vm, raylib, "ImageColorContrast",   _ImageColorContrast, 2);
  pkModuleAddFunction(vm, raylib, "ImageColorBrightness",   _ImageColorBrightness, 2);
  pkModuleAddFunction(vm, raylib, "ImageColorReplace",   _ImageColorReplace, 3);
  pkModuleAddFunction(vm, raylib, "UnloadImageColors",   _UnloadImageColors, 1);
  pkModuleAddFunction(vm, raylib, "UnloadImagePalette",   _UnloadImagePalette, 1);
  pkModuleAddFunction(vm, raylib, "GetImageAlphaBorder",   _GetImageAlphaBorder, 2);
  pkModuleAddFunction(vm, raylib, "GetImageColor",   _GetImageColor, 3);
  pkModuleAddFunction(vm, raylib, "ImageClearBackground",   _ImageClearBackground, 2);
  pkModuleAddFunction(vm, raylib, "ImageDrawPixel",   _ImageDrawPixel, 4);
  pkModuleAddFunction(vm, raylib, "ImageDrawPixelV",   _ImageDrawPixelV, 3);
  pkModuleAddFunction(vm, raylib, "ImageDrawLine",   _ImageDrawLine, 6);
  pkModuleAddFunction(vm, raylib, "ImageDrawLineV",   _ImageDrawLineV, 4);
  pkModuleAddFunction(vm, raylib, "ImageDrawCircle",   _ImageDrawCircle, 5);
  pkModuleAddFunction(vm, raylib, "ImageDrawCircleV",   _ImageDrawCircleV, 4);
  pkModuleAddFunction(vm, raylib, "ImageDrawRectangle",   _ImageDrawRectangle, 6);
  pkModuleAddFunction(vm, raylib, "ImageDrawRectangleV",   _ImageDrawRectangleV, 4);
  pkModuleAddFunction(vm, raylib, "ImageDrawRectangleRec",   _ImageDrawRectangleRec, 3);
  pkModuleAddFunction(vm, raylib, "ImageDrawRectangleLines",   _ImageDrawRectangleLines, 4);
  pkModuleAddFunction(vm, raylib, "ImageDraw",   _ImageDraw, 5);
  pkModuleAddFunction(vm, raylib, "ImageDrawText",   _ImageDrawText, 6);
  pkModuleAddFunction(vm, raylib, "ImageDrawTextEx",   _ImageDrawTextEx, 7);
  pkModuleAddFunction(vm, raylib, "LoadTexture",   _LoadTexture, 1);
  pkModuleAddFunction(vm, raylib, "LoadTextureFromImage",   _LoadTextureFromImage, 1);
  pkModuleAddFunction(vm, raylib, "LoadTextureCubemap",   _LoadTextureCubemap, 2);
  pkModuleAddFunction(vm, raylib, "LoadRenderTexture",   _LoadRenderTexture, 2);
  pkModuleAddFunction(vm, raylib, "UnloadTexture",   _UnloadTexture, 1);
  pkModuleAddFunction(vm, raylib, "UnloadRenderTexture",   _UnloadRenderTexture, 1);
  pkModuleAddFunction(vm, raylib, "GenTextureMipmaps",   _GenTextureMipmaps, 1);
  pkModuleAddFunction(vm, raylib, "SetTextureFilter",   _SetTextureFilter, 2);
  pkModuleAddFunction(vm, raylib, "SetTextureWrap",   _SetTextureWrap, 2);
  pkModuleAddFunction(vm, raylib, "DrawTexture",   _DrawTexture, 4);
  pkModuleAddFunction(vm, raylib, "DrawTextureV",   _DrawTextureV, 3);
  pkModuleAddFunction(vm, raylib, "DrawTextureEx",   _DrawTextureEx, 5);
  pkModuleAddFunction(vm, raylib, "DrawTextureRec",   _DrawTextureRec, 4);
  pkModuleAddFunction(vm, raylib, "DrawTextureQuad",   _DrawTextureQuad, 5);
  pkModuleAddFunction(vm, raylib, "DrawTextureTiled",   _DrawTextureTiled, 7);
  pkModuleAddFunction(vm, raylib, "DrawTexturePro",   _DrawTexturePro, 6);
  pkModuleAddFunction(vm, raylib, "DrawTextureNPatch",   _DrawTextureNPatch, 6);
  pkModuleAddFunction(vm, raylib, "DrawTexturePoly",   _DrawTexturePoly, 6);
  pkModuleAddFunction(vm, raylib, "Fade",   _Fade, 2);
  pkModuleAddFunction(vm, raylib, "ColorToInt",   _ColorToInt, 1);
  pkModuleAddFunction(vm, raylib, "ColorNormalize",   _ColorNormalize, 1);
  pkModuleAddFunction(vm, raylib, "ColorFromNormalized",   _ColorFromNormalized, 1);
  pkModuleAddFunction(vm, raylib, "ColorToHSV",   _ColorToHSV, 1);
  pkModuleAddFunction(vm, raylib, "ColorFromHSV",   _ColorFromHSV, 3);
  pkModuleAddFunction(vm, raylib, "ColorAlpha",   _ColorAlpha, 2);
  pkModuleAddFunction(vm, raylib, "ColorAlphaBlend",   _ColorAlphaBlend, 3);
  pkModuleAddFunction(vm, raylib, "GetColor",   _GetColor, 1);
  pkModuleAddFunction(vm, raylib, "GetPixelDataSize",   _GetPixelDataSize, 3);
  pkModuleAddFunction(vm, raylib, "GetFontDefault",   _GetFontDefault, 0);
  pkModuleAddFunction(vm, raylib, "LoadFont",   _LoadFont, 1);
  pkModuleAddFunction(vm, raylib, "LoadFontFromImage",   _LoadFontFromImage, 3);
  pkModuleAddFunction(vm, raylib, "UnloadFontData",   _UnloadFontData, 2);
  pkModuleAddFunction(vm, raylib, "UnloadFont",   _UnloadFont, 1);
  pkModuleAddFunction(vm, raylib, "DrawFPS",   _DrawFPS, 2);
  pkModuleAddFunction(vm, raylib, "DrawText",   _DrawText, 5);
  pkModuleAddFunction(vm, raylib, "DrawTextEx",   _DrawTextEx, 6);
  pkModuleAddFunction(vm, raylib, "DrawTextPro",   _DrawTextPro, 8);
  pkModuleAddFunction(vm, raylib, "DrawTextCodepoint",   _DrawTextCodepoint, 5);
  pkModuleAddFunction(vm, raylib, "MeasureText",   _MeasureText, 2);
  pkModuleAddFunction(vm, raylib, "MeasureTextEx",   _MeasureTextEx, 4);
  pkModuleAddFunction(vm, raylib, "GetGlyphIndex",   _GetGlyphIndex, 2);
  pkModuleAddFunction(vm, raylib, "GetGlyphInfo",   _GetGlyphInfo, 2);
  pkModuleAddFunction(vm, raylib, "GetGlyphAtlasRec",   _GetGlyphAtlasRec, 2);
  pkModuleAddFunction(vm, raylib, "GetCodepointCount",   _GetCodepointCount, 1);
  pkModuleAddFunction(vm, raylib, "TextIsEqual",   _TextIsEqual, 2);
  pkModuleAddFunction(vm, raylib, "TextLength",   _TextLength, 1);
  pkModuleAddFunction(vm, raylib, "TextSubtext",   _TextSubtext, 3);
  pkModuleAddFunction(vm, raylib, "TextFindIndex",   _TextFindIndex, 2);
  pkModuleAddFunction(vm, raylib, "TextToUpper",   _TextToUpper, 1);
  pkModuleAddFunction(vm, raylib, "TextToLower",   _TextToLower, 1);
  pkModuleAddFunction(vm, raylib, "TextToPascal",   _TextToPascal, 1);
  pkModuleAddFunction(vm, raylib, "TextToInteger",   _TextToInteger, 1);
  pkModuleAddFunction(vm, raylib, "DrawLine3D",   _DrawLine3D, 3);
  pkModuleAddFunction(vm, raylib, "DrawPoint3D",   _DrawPoint3D, 2);
  pkModuleAddFunction(vm, raylib, "DrawCircle3D",   _DrawCircle3D, 5);
  pkModuleAddFunction(vm, raylib, "DrawTriangle3D",   _DrawTriangle3D, 4);
  pkModuleAddFunction(vm, raylib, "DrawTriangleStrip3D",   _DrawTriangleStrip3D, 3);
  pkModuleAddFunction(vm, raylib, "DrawCube",   _DrawCube, 5);
  pkModuleAddFunction(vm, raylib, "DrawCubeV",   _DrawCubeV, 3);
  pkModuleAddFunction(vm, raylib, "DrawCubeWires",   _DrawCubeWires, 5);
  pkModuleAddFunction(vm, raylib, "DrawCubeWiresV",   _DrawCubeWiresV, 3);
  pkModuleAddFunction(vm, raylib, "DrawCubeTexture",   _DrawCubeTexture, 6);
  pkModuleAddFunction(vm, raylib, "DrawCubeTextureRec",   _DrawCubeTextureRec, 7);
  pkModuleAddFunction(vm, raylib, "DrawSphere",   _DrawSphere, 3);
  pkModuleAddFunction(vm, raylib, "DrawSphereEx",   _DrawSphereEx, 5);
  pkModuleAddFunction(vm, raylib, "DrawSphereWires",   _DrawSphereWires, 5);
  pkModuleAddFunction(vm, raylib, "DrawCylinder",   _DrawCylinder, 6);
  pkModuleAddFunction(vm, raylib, "DrawCylinderEx",   _DrawCylinderEx, 6);
  pkModuleAddFunction(vm, raylib, "DrawCylinderWires",   _DrawCylinderWires, 6);
  pkModuleAddFunction(vm, raylib, "DrawCylinderWiresEx",   _DrawCylinderWiresEx, 6);
  pkModuleAddFunction(vm, raylib, "DrawPlane",   _DrawPlane, 3);
  pkModuleAddFunction(vm, raylib, "DrawRay",   _DrawRay, 2);
  pkModuleAddFunction(vm, raylib, "DrawGrid",   _DrawGrid, 2);
  pkModuleAddFunction(vm, raylib, "LoadModel",   _LoadModel, 1);
  pkModuleAddFunction(vm, raylib, "LoadModelFromMesh",   _LoadModelFromMesh, 1);
  pkModuleAddFunction(vm, raylib, "UnloadModel",   _UnloadModel, 1);
  pkModuleAddFunction(vm, raylib, "UnloadModelKeepMeshes",   _UnloadModelKeepMeshes, 1);
  pkModuleAddFunction(vm, raylib, "GetModelBoundingBox",   _GetModelBoundingBox, 1);
  pkModuleAddFunction(vm, raylib, "DrawModel",   _DrawModel, 4);
  pkModuleAddFunction(vm, raylib, "DrawModelEx",   _DrawModelEx, 6);
  pkModuleAddFunction(vm, raylib, "DrawModelWires",   _DrawModelWires, 4);
  pkModuleAddFunction(vm, raylib, "DrawModelWiresEx",   _DrawModelWiresEx, 6);
  pkModuleAddFunction(vm, raylib, "DrawBoundingBox",   _DrawBoundingBox, 2);
  pkModuleAddFunction(vm, raylib, "DrawBillboard",   _DrawBillboard, 5);
  pkModuleAddFunction(vm, raylib, "DrawBillboardRec",   _DrawBillboardRec, 6);
  pkModuleAddFunction(vm, raylib, "DrawBillboardPro",   _DrawBillboardPro, 9);
  pkModuleAddFunction(vm, raylib, "UploadMesh",   _UploadMesh, 2);
  pkModuleAddFunction(vm, raylib, "UnloadMesh",   _UnloadMesh, 1);
  pkModuleAddFunction(vm, raylib, "DrawMesh",   _DrawMesh, 3);
  pkModuleAddFunction(vm, raylib, "DrawMeshInstanced",   _DrawMeshInstanced, 4);
  pkModuleAddFunction(vm, raylib, "ExportMesh",   _ExportMesh, 2);
  pkModuleAddFunction(vm, raylib, "GetMeshBoundingBox",   _GetMeshBoundingBox, 1);
  pkModuleAddFunction(vm, raylib, "GenMeshTangents",   _GenMeshTangents, 1);
  pkModuleAddFunction(vm, raylib, "GenMeshBinormals",   _GenMeshBinormals, 1);
  pkModuleAddFunction(vm, raylib, "GenMeshPoly",   _GenMeshPoly, 2);
  pkModuleAddFunction(vm, raylib, "GenMeshPlane",   _GenMeshPlane, 4);
  pkModuleAddFunction(vm, raylib, "GenMeshCube",   _GenMeshCube, 3);
  pkModuleAddFunction(vm, raylib, "GenMeshSphere",   _GenMeshSphere, 3);
  pkModuleAddFunction(vm, raylib, "GenMeshHemiSphere",   _GenMeshHemiSphere, 3);
  pkModuleAddFunction(vm, raylib, "GenMeshCylinder",   _GenMeshCylinder, 3);
  pkModuleAddFunction(vm, raylib, "GenMeshCone",   _GenMeshCone, 3);
  pkModuleAddFunction(vm, raylib, "GenMeshTorus",   _GenMeshTorus, 4);
  pkModuleAddFunction(vm, raylib, "GenMeshKnot",   _GenMeshKnot, 4);
  pkModuleAddFunction(vm, raylib, "GenMeshHeightmap",   _GenMeshHeightmap, 2);
  pkModuleAddFunction(vm, raylib, "GenMeshCubicmap",   _GenMeshCubicmap, 2);
  pkModuleAddFunction(vm, raylib, "LoadMaterialDefault",   _LoadMaterialDefault, 0);
  pkModuleAddFunction(vm, raylib, "UnloadMaterial",   _UnloadMaterial, 1);
  pkModuleAddFunction(vm, raylib, "SetMaterialTexture",   _SetMaterialTexture, 3);
  pkModuleAddFunction(vm, raylib, "SetModelMeshMaterial",   _SetModelMeshMaterial, 3);
  pkModuleAddFunction(vm, raylib, "UpdateModelAnimation",   _UpdateModelAnimation, 3);
  pkModuleAddFunction(vm, raylib, "UnloadModelAnimation",   _UnloadModelAnimation, 1);
  pkModuleAddFunction(vm, raylib, "UnloadModelAnimations",   _UnloadModelAnimations, 2);
  pkModuleAddFunction(vm, raylib, "IsModelAnimationValid",   _IsModelAnimationValid, 2);
  pkModuleAddFunction(vm, raylib, "CheckCollisionSpheres",   _CheckCollisionSpheres, 4);
  pkModuleAddFunction(vm, raylib, "CheckCollisionBoxes",   _CheckCollisionBoxes, 2);
  pkModuleAddFunction(vm, raylib, "CheckCollisionBoxSphere",   _CheckCollisionBoxSphere, 3);
  pkModuleAddFunction(vm, raylib, "GetRayCollisionSphere",   _GetRayCollisionSphere, 3);
  pkModuleAddFunction(vm, raylib, "GetRayCollisionBox",   _GetRayCollisionBox, 2);
  pkModuleAddFunction(vm, raylib, "GetRayCollisionModel",   _GetRayCollisionModel, 2);
  pkModuleAddFunction(vm, raylib, "GetRayCollisionMesh",   _GetRayCollisionMesh, 3);
  pkModuleAddFunction(vm, raylib, "GetRayCollisionTriangle",   _GetRayCollisionTriangle, 4);
  pkModuleAddFunction(vm, raylib, "GetRayCollisionQuad",   _GetRayCollisionQuad, 5);
  pkModuleAddFunction(vm, raylib, "InitAudioDevice",   _InitAudioDevice, 0);
  pkModuleAddFunction(vm, raylib, "CloseAudioDevice",   _CloseAudioDevice, 0);
  pkModuleAddFunction(vm, raylib, "IsAudioDeviceReady",   _IsAudioDeviceReady, 0);
  pkModuleAddFunction(vm, raylib, "SetMasterVolume",   _SetMasterVolume, 1);
  pkModuleAddFunction(vm, raylib, "LoadWave",   _LoadWave, 1);
  pkModuleAddFunction(vm, raylib, "LoadSound",   _LoadSound, 1);
  pkModuleAddFunction(vm, raylib, "LoadSoundFromWave",   _LoadSoundFromWave, 1);
  pkModuleAddFunction(vm, raylib, "UnloadWave",   _UnloadWave, 1);
  pkModuleAddFunction(vm, raylib, "UnloadSound",   _UnloadSound, 1);
  pkModuleAddFunction(vm, raylib, "ExportWave",   _ExportWave, 2);
  pkModuleAddFunction(vm, raylib, "ExportWaveAsCode",   _ExportWaveAsCode, 2);
  pkModuleAddFunction(vm, raylib, "PlaySound",   _PlaySound, 1);
  pkModuleAddFunction(vm, raylib, "StopSound",   _StopSound, 1);
  pkModuleAddFunction(vm, raylib, "PauseSound",   _PauseSound, 1);
  pkModuleAddFunction(vm, raylib, "ResumeSound",   _ResumeSound, 1);
  pkModuleAddFunction(vm, raylib, "PlaySoundMulti",   _PlaySoundMulti, 1);
  pkModuleAddFunction(vm, raylib, "StopSoundMulti",   _StopSoundMulti, 0);
  pkModuleAddFunction(vm, raylib, "GetSoundsPlaying",   _GetSoundsPlaying, 0);
  pkModuleAddFunction(vm, raylib, "IsSoundPlaying",   _IsSoundPlaying, 1);
  pkModuleAddFunction(vm, raylib, "SetSoundVolume",   _SetSoundVolume, 2);
  pkModuleAddFunction(vm, raylib, "SetSoundPitch",   _SetSoundPitch, 2);
  pkModuleAddFunction(vm, raylib, "WaveFormat",   _WaveFormat, 4);
  pkModuleAddFunction(vm, raylib, "WaveCopy",   _WaveCopy, 1);
  pkModuleAddFunction(vm, raylib, "WaveCrop",   _WaveCrop, 3);
  pkModuleAddFunction(vm, raylib, "LoadMusicStream",   _LoadMusicStream, 1);
  pkModuleAddFunction(vm, raylib, "UnloadMusicStream",   _UnloadMusicStream, 1);
  pkModuleAddFunction(vm, raylib, "PlayMusicStream",   _PlayMusicStream, 1);
  pkModuleAddFunction(vm, raylib, "IsMusicStreamPlaying",   _IsMusicStreamPlaying, 1);
  pkModuleAddFunction(vm, raylib, "UpdateMusicStream",   _UpdateMusicStream, 1);
  pkModuleAddFunction(vm, raylib, "StopMusicStream",   _StopMusicStream, 1);
  pkModuleAddFunction(vm, raylib, "PauseMusicStream",   _PauseMusicStream, 1);
  pkModuleAddFunction(vm, raylib, "ResumeMusicStream",   _ResumeMusicStream, 1);
  pkModuleAddFunction(vm, raylib, "SeekMusicStream",   _SeekMusicStream, 2);
  pkModuleAddFunction(vm, raylib, "SetMusicVolume",   _SetMusicVolume, 2);
  pkModuleAddFunction(vm, raylib, "SetMusicPitch",   _SetMusicPitch, 2);
  pkModuleAddFunction(vm, raylib, "GetMusicTimeLength",   _GetMusicTimeLength, 1);
  pkModuleAddFunction(vm, raylib, "GetMusicTimePlayed",   _GetMusicTimePlayed, 1);
  pkModuleAddFunction(vm, raylib, "LoadAudioStream",   _LoadAudioStream, 3);
  pkModuleAddFunction(vm, raylib, "UnloadAudioStream",   _UnloadAudioStream, 1);
  pkModuleAddFunction(vm, raylib, "IsAudioStreamProcessed",   _IsAudioStreamProcessed, 1);
  pkModuleAddFunction(vm, raylib, "PlayAudioStream",   _PlayAudioStream, 1);
  pkModuleAddFunction(vm, raylib, "PauseAudioStream",   _PauseAudioStream, 1);
  pkModuleAddFunction(vm, raylib, "ResumeAudioStream",   _ResumeAudioStream, 1);
  pkModuleAddFunction(vm, raylib, "IsAudioStreamPlaying",   _IsAudioStreamPlaying, 1);
  pkModuleAddFunction(vm, raylib, "StopAudioStream",   _StopAudioStream, 1);
  pkModuleAddFunction(vm, raylib, "SetAudioStreamVolume",   _SetAudioStreamVolume, 2);
  pkModuleAddFunction(vm, raylib, "SetAudioStreamPitch",   _SetAudioStreamPitch, 2);
  pkModuleAddFunction(vm, raylib, "SetAudioStreamBufferSizeDefault",   _SetAudioStreamBufferSizeDefault, 1);

  register_manual_bindings(vm, raylib);

  return raylib;
}

/*****************************************************************************/
/* MODULE CLEANUP                                                            */
/*****************************************************************************/

PK_EXPORT void pkCleanupModule(PKVM* vm) {
  pkReleaseHandle(vm, cls_Vector2);
  pkReleaseHandle(vm, cls_Vector3);
  pkReleaseHandle(vm, cls_Vector4);
  pkReleaseHandle(vm, cls_Matrix);
  pkReleaseHandle(vm, cls_Color);
  pkReleaseHandle(vm, cls_Rectangle);
  pkReleaseHandle(vm, cls_Image);
  pkReleaseHandle(vm, cls_Texture);
  pkReleaseHandle(vm, cls_RenderTexture);
  pkReleaseHandle(vm, cls_NPatchInfo);
  pkReleaseHandle(vm, cls_GlyphInfo);
  pkReleaseHandle(vm, cls_Font);
  pkReleaseHandle(vm, cls_Camera3D);
  pkReleaseHandle(vm, cls_Camera2D);
  pkReleaseHandle(vm, cls_Mesh);
  pkReleaseHandle(vm, cls_Shader);
  pkReleaseHandle(vm, cls_MaterialMap);
  pkReleaseHandle(vm, cls_Material);
  pkReleaseHandle(vm, cls_Transform);
  pkReleaseHandle(vm, cls_BoneInfo);
  pkReleaseHandle(vm, cls_Model);
  pkReleaseHandle(vm, cls_ModelAnimation);
  pkReleaseHandle(vm, cls_Ray);
  pkReleaseHandle(vm, cls_RayCollision);
  pkReleaseHandle(vm, cls_BoundingBox);
  pkReleaseHandle(vm, cls_Wave);
  pkReleaseHandle(vm, cls_AudioStream);
  pkReleaseHandle(vm, cls_Sound);
  pkReleaseHandle(vm, cls_Music);
  pkReleaseHandle(vm, cls_VrDeviceInfo);
  pkReleaseHandle(vm, cls_VrStereoConfig);
}
