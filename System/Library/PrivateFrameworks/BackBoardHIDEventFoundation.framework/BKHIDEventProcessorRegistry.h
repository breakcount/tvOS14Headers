/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BKHIDEventProcessorRegistering.h>

@class NSMutableDictionary, NSString;

@interface BKHIDEventProcessorRegistry : NSObject <BKHIDEventProcessorRegistering> {

	NSMutableDictionary* _eventProcessorsByClassName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)addEventProcessor:(id)arg1 ;
-(id)eventProcessorOfClass:(Class)arg1 ;
@end
