/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:22 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RBEntitlementPredicate : NSObject <NSCopying> {

	unsigned long long _count;

}

@property (readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
+(id)predicateForObject:(id)arg1 forDomain:(id)arg2 attribute:(id)arg3 errors:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)allEntitlements;
-(BOOL)matchesEntitlements:(id)arg1 ;
@end

