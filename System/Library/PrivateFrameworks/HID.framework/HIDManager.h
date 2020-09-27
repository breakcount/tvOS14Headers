/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:50 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HID.framework/HID
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HID/HID-Structs.h>
@class NSArray;

@interface HIDManager : NSObject {

	IOHIDManagerRef _manager;
	/*^block*/id _elementHandler;
	/*^block*/id _deviceNotificationHandler;
	/*^block*/id _inputReportHandler;
	/*^block*/id _cancelHandler;

}

@property (readonly) NSArray * devices; 
-(id)description;
-(id)init;
-(void)dealloc;
-(void)open;
-(void)close;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)cancel;
-(id)initWithOptions:(long long)arg1 ;
-(void)activate;
-(NSArray *)devices;
-(void)setDispatchQueue:(id)arg1 ;
-(void)setCancelHandler:(/*^block*/id)arg1 ;
-(void)setInputElementMatching:(id)arg1 ;
-(void)setInputElementHandler:(/*^block*/id)arg1 ;
-(void)setDeviceMatching:(id)arg1 ;
-(void)setDeviceNotificationHandler:(/*^block*/id)arg1 ;
-(void)setInputReportHandler:(/*^block*/id)arg1 ;
@end

