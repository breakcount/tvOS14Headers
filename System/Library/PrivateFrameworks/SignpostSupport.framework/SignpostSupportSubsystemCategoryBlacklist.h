/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SignpostSupport/SignpostSupportSubsystemCategoryFilter.h>

@interface SignpostSupportSubsystemCategoryBlacklist : SignpostSupportSubsystemCategoryFilter
-(id)initWithEntries:(id)arg1 ;
-(unsigned long long)_compoundPredicateType;
-(BOOL)passesSubsystem:(id)arg1 category:(id)arg2 ;
-(id)liveStreamingPredicate;
-(void)_forceInclusionOfSubsystem:(id)arg1 category:(id)arg2 ;
-(BOOL)_wantsNotSubsystem;
@end

