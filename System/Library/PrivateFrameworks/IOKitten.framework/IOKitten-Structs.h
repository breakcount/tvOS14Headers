/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:02 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IOKitten.framework/IOKitten
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct os_unfair_recursive_lock_s {
	os_unfair_lock_s ourl_lock;
	unsigned ourl_count;
} os_unfair_recursive_lock_s;

