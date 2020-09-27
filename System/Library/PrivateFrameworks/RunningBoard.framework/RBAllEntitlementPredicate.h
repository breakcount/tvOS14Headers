/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:22 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <RunningBoard/RBEntitlementPredicate.h>

@class NSDictionary;

@interface RBAllEntitlementPredicate : RBEntitlementPredicate {

	NSDictionary* _predicate;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)count;
-(id)allEntitlements;
-(id)initWithDictionary:(id)arg1 forDomain:(id)arg2 attribute:(id)arg3 errors:(id)arg4 ;
-(BOOL)matchesEntitlements:(id)arg1 ;
@end

