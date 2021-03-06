/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHPhotoLibraryExecutionContext.h>

@class NSString;

@interface PHAsynchronousPhotoLibraryExecutionContext : NSObject <PHPhotoLibraryExecutionContext>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)asynchronousExecutionContext;
-(void)dispatchOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)sendChangesRequest:(id)arg1 onClient:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)callTransactionCompletionHandler:(/*^block*/id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 ;
@end

