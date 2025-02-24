﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.UI.MaskUtilities
struct MaskUtilities_t1936577068;
// UnityEngine.Component
struct Component_t3819376471;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t1156185964;
// UnityEngine.UI.IClippable
struct IClippable_t1941276057;
// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t525307096;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UI_UnityEngine_UI_RectMask2D1156185964.h"

// System.Void UnityEngine.UI.MaskUtilities::.ctor()
extern "C"  void MaskUtilities__ctor_m1760365795 (MaskUtilities_t1936577068 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::Notify2DMaskStateChanged(UnityEngine.Component)
extern "C"  void MaskUtilities_Notify2DMaskStateChanged_m1704785167 (Il2CppObject * __this /* static, unused */, Component_t3819376471 * ___mask0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::NotifyStencilStateChanged(UnityEngine.Component)
extern "C"  void MaskUtilities_NotifyStencilStateChanged_m1527407683 (Il2CppObject * __this /* static, unused */, Component_t3819376471 * ___mask0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.MaskUtilities::FindRootSortOverrideCanvas(UnityEngine.Transform)
extern "C"  Transform_t3275118058 * MaskUtilities_FindRootSortOverrideCanvas_m433286381 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___start0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.MaskUtilities::GetStencilDepth(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  int32_t MaskUtilities_GetStencilDepth_m3432755788 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___transform0, Transform_t3275118058 * ___stopAfter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.MaskUtilities::IsDescendantOrSelf(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  bool MaskUtilities_IsDescendantOrSelf_m1896676501 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___father0, Transform_t3275118058 * ___child1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskUtilities::GetRectMaskForClippable(UnityEngine.UI.IClippable)
extern "C"  RectMask2D_t1156185964 * MaskUtilities_GetRectMaskForClippable_m3534151072 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___clippable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::GetRectMasksForClip(UnityEngine.UI.RectMask2D,System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>)
extern "C"  void MaskUtilities_GetRectMasksForClip_m1540508301 (Il2CppObject * __this /* static, unused */, RectMask2D_t1156185964 * ___clipper0, List_1_t525307096 * ___masks1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
