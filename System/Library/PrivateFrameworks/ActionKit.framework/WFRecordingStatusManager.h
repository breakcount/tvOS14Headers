/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBSStatusBarStyleOverridesAssertion;

@interface WFRecordingStatusManager : NSObject {

	SBSStatusBarStyleOverridesAssertion* _assertion;

}

@property (nonatomic,retain) SBSStatusBarStyleOverridesAssertion * assertion;              //@synthesize assertion=_assertion - In the implementation block
@property (assign,getter=isRecording,nonatomic) BOOL recording; 
+(id)sharedManager;
-(SBSStatusBarStyleOverridesAssertion *)assertion;
-(void)acquireAssertion;
-(BOOL)isRecording;
-(void)setAssertion:(SBSStatusBarStyleOverridesAssertion *)arg1 ;
-(void)setRecording:(BOOL)arg1 ;
-(void)invalidateAssertion;
@end
