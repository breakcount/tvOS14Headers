/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMOutputActionHandle.h>

@protocol AXMActiveSoundOutputActionHandleProvider;
@interface AXMActiveSoundOutputActionHandle : AXMOutputActionHandle {

	id<AXMActiveSoundOutputActionHandleProvider> _handleProvider;

}

@property (nonatomic,retain) id<AXMActiveSoundOutputActionHandleProvider> handleProvider;              //@synthesize handleProvider=_handleProvider - In the implementation block
@property (assign,nonatomic) float pitch; 
@property (assign,nonatomic) float rate; 
-(void)stop;
-(float)pitch;
-(void)setPitch:(float)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(id<AXMActiveSoundOutputActionHandleProvider>)handleProvider;
-(void)setQuantizedRate:(long long)arg1 ;
-(void)setHandleProvider:(id<AXMActiveSoundOutputActionHandleProvider>)arg1 ;
@end

