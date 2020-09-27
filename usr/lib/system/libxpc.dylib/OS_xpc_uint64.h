/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/system/libxpc.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libxpc.dylib/OS_xpc_object.h>
#import <libobjc.A.dylib/OS_xpc_uint64.h>

@protocol OS_xpc_uint64 <OS_xpc_object>
@end


@class NSString;

@interface OS_xpc_uint64 : OS_xpc_object <OS_xpc_uint64>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)retain;
-(oneway void)release;
-(BOOL)allowsWeakReference;
-(BOOL)retainWeakReference;
-(unsigned long long)retainCount;
@end

