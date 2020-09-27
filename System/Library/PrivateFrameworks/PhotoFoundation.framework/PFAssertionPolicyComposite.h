/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:35 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PFAssertionPolicyHandler.h>

@class NSMutableArray, NSArray, NSString;

@interface PFAssertionPolicyComposite : NSObject <PFAssertionPolicyHandler> {

	NSMutableArray* _policies;

}

@property (readonly) NSArray * policies;                            //@synthesize policies=_policies - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSArray *)policies;
-(void)addPolicy:(id)arg1 ;
-(void)notifyAssertion:(id)arg1 ;
@end

