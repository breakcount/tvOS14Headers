/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:48 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSError.h>

@interface TransparencyError : NSError
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 ;
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 description:(id)arg4 ;
+(BOOL)hasUnknownSPKIHashError:(id*)arg1 ;
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 errorLevel:(unsigned long long)arg3 underlyingError:(id)arg4 description:(id)arg5 arguments:(char*)arg6 ;
+(id)errorWithError:(id)arg1 underlyingError:(id)arg2 ;
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 errorLevel:(unsigned long long)arg3 underlyingError:(id)arg4 description:(id)arg5 ;
@end

