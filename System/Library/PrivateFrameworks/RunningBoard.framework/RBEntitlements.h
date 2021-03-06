/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:21 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RBEntitlementPossessing.h>

@class NSSet, NSString;

@interface RBEntitlements : NSObject <RBEntitlementPossessing> {

	NSSet* _entitlements;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(BOOL)hasEntitlement:(id)arg1 ;
-(BOOL)hasEntitlementDomain:(unsigned long long)arg1 ;
-(id)_initWithEntitlements:(id)arg1 ;
@end

