/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXImageMonitor.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSObject, NSString;

@interface _AXDyldImageMonitor : NSObject <AXImageMonitor> {

	NSHashTable* _imageMonitorObservers;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)addImageMonitorObserver:(id)arg1 ;
-(void)removeImageMonitorObserver:(id)arg1 ;
-(id)loadedImagePaths;
-(void)enumerateLoadedImagePaths:(/*^block*/id)arg1 ;
-(void)_dyldDidAddImage:(id)arg1 ;
@end

