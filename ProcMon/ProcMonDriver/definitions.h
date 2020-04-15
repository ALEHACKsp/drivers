#pragma once

#include <ntddk.h>

#include "fast_mutex.h"

struct Globals
{
	LIST_ENTRY blocked_images_list_head;
	FastMutex blocked_images_list_mutex;
};

struct BlockedImage
{
	LIST_ENTRY entry;
	unsigned short image_name_length;
	wchar_t image_name[];
};