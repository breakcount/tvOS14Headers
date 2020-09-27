/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:35 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCountedSet;

@interface PFBookmarkCoordinator : NSObject {

	NSCountedSet* _managedPaths;
	NSCountedSet* _accessedPaths;

}
+(id)sharedInstance;
+(BOOL)urlHasSandboxExtension:(id)arg1 ;
-(id)description;
-(id)init;
-(void)stopAccessingURL:(id)arg1 ;
-(id)startAccesingURLForBookmarkData:(id)arg1 error:(id*)arg2 ;
-(void)_incrementRefcountForURL:(id)arg1 callStart:(BOOL)arg2 ;
-(void)_decrementRefcountForURL:(id)arg1 ;
-(void)startAccessingURL:(id)arg1 ;
-(void)stopAccessingURLs:(id)arg1 ;
-(void)addPowerBoxURL:(id)arg1 ;
-(void)logRefCountForUrl:(id)arg1 withPrefix:(id)arg2 sender:(id)arg3 ;
@end

