// GENERATED FILE - DO NOT EDIT.
// Generated by gen_builtin_symbols.py using data from builtin_variables.json and
// builtin_function_declarations.txt.
//
// Copyright 2019 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// ParseContext_ESSL_autogen.h:
//   Helpers for built-in related checks.

#ifndef COMPILER_TRANSLATOR_PARSECONTEXT_AUTOGEN_H_
#define COMPILER_TRANSLATOR_PARSECONTEXT_AUTOGEN_H_

namespace sh
{

namespace BuiltInGroup
{

bool isTextureOffsetNoBias(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3046 && id <= 3115;
}
bool isTextureOffsetBias(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3116 && id <= 3135;
}
bool isTextureGatherOffsetsComp(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3173 && id <= 3185;
}
bool isTextureGatherOffsetsNoComp(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3186 && id <= 3201;
}
bool isTextureGatherOffsets(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3173 && id <= 3201;
}
bool isTextureGatherOffsetComp(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3202 && id <= 3207;
}
bool isTextureGatherOffsetNoComp(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3208 && id <= 3215;
}
bool isTextureGatherOffset(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3202 && id <= 3215;
}
bool isTextureGather(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3149 && id <= 3215;
}
bool isAtomicMemory(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3232 && id <= 3249;
}
bool isImageLoad(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3274 && id <= 3285;
}
bool isImageStore(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3286 && id <= 3297;
}
bool isImage(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3250 && id <= 3297;
}

}  // namespace BuiltInGroup

}  // namespace sh

#endif  // COMPILER_TRANSLATOR_PARSECONTEXT_AUTOGEN_H_