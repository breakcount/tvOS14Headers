/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsSupport/DSLogLine.h>

@class NSString;

@interface DSThermalLogLine : DSLogLine {

	float _maxTemp;
	NSString* _eventType;

}

@property (nonatomic,retain) NSString * eventType;              //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) float maxTemp;                     //@synthesize maxTemp=_maxTemp - In the implementation block
@property (nonatomic,readonly) BOOL isTrapEvent; 
@property (nonatomic,readonly) BOOL isTrapEntry; 
-(NSString *)eventType;
-(void)setEventType:(NSString *)arg1 ;
-(id)initWithLogLine:(id)arg1 ;
-(BOOL)isTrapEvent;
-(BOOL)isTrapEntry;
-(float)maxTemp;
-(void)setMaxTemp:(float)arg1 ;
@end
