/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:40 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGGraphIngestProcessor.h>

@protocol OS_os_log;
@class NSObject, NSString;

@interface PGGraphIngestMusicProcessor : NSObject <PGGraphIngestProcessor> {

	NSObject*<OS_os_log> _loggingConnection;

}

@property (nonatomic,readonly) NSObject*<OS_os_log> loggingConnection;              //@synthesize loggingConnection=_loggingConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)nowPlayingStreamConverterOptions;
-(NSObject*<OS_os_log>)loggingConnection;
-(BOOL)shouldRunWithGraphUpdate:(id)arg1 ;
-(void)runWithGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)processMusicForGraph:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)_ingestStreamEventSession:(id)arg1 graph:(id)arg2 performerNodesByName:(id)arg3 ;
@end

