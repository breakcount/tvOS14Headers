/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKInvalidateObservable.h>

@class NSURL, NSString;

@interface PKDirectoryCoordinator : NSObject <PKInvalidateObservable> {

	os_unfair_lock_s _lock;
	AB _invalidated;
	NSURL* _url;

}

@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(id)initWithURL:(id)arg1 ;
-(BOOL)isInvalidated;
-(void)performCoordinatedAction:(/*^block*/id)arg1 ;
@end

