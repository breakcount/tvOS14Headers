/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AKAdaptiveServiceInterface.h>

@interface _AKMessageForwarder : NSObject <AKAdaptiveServiceInterface> {

	id _weakReceiver;
	id _strongReceiver;

}
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)activate;
-(id)initWithStrongReceiver:(id)arg1 ;
-(id)initWithWeakReceiver:(id)arg1 ;
-(id)initWithReceiver:(id)arg1 strong:(BOOL)arg2 ;
@end

