/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSString;

@interface _UIDatePickerCalendarTimeWheelDisplayModeDriver : NSObject <UIGestureRecognizerDelegate> {

	unsigned long long _displayMode;
	/*^block*/id _updateHandler;
	/*^block*/id _invalidationRequestHandler;

}

@property (nonatomic,readonly) id invalidationRequestHandler;              //@synthesize invalidationRequestHandler=_invalidationRequestHandler - In the implementation block
@property (assign,nonatomic) unsigned long long displayMode;               //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,readonly) id updateHandler;                           //@synthesize updateHandler=_updateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDisplayMode:(unsigned long long)arg1 ;
-(unsigned long long)displayMode;
-(id)updateHandler;
-(id)initWithInvalidationRequestHandler:(/*^block*/id)arg1 ;
-(id)invalidationRequestHandler;
@end

