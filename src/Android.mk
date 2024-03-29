# Modifications to HarfBuzz to build on Android.
# Copyright (C) 2023 Free Software Foundation, Inc.

# These modifications are part of GNU Emacs.

# GNU Emacs is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or (at
# your option) any later version.

# GNU Emacs is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.

# You should have received a copy of the GNU General Public License
# along with GNU Emacs.  If not, see <https://www.gnu.org/licenses/>.

LOCAL_PATH := $(call my-dir)

include $(LOCAL_PATH)/Makefile.sources

# libharfbuzz shared library.

include $(CLEAR_VARS)
LOCAL_MODULE		:= harfbuzz
LOCAL_SRC_FILES		:= $(filter %.cc, $(HB_BASE_sources))
LOCAL_EXPORT_C_INCLUDES	:= $(LOCAL_PATH)
LOCAL_C_INCLUDES	:= $(LOCAL_PATH) $(LOCAL_PATH)/..
LOCAL_CFLAGS		:= -O2 -Wimplicit-function-declaration
LOCAL_RTTI_FLAG		:= -frtti
LOCAL_SHARED_LIBRARIES	:= libdl libstdc++
include $(BUILD_SHARED_LIBRARY)
