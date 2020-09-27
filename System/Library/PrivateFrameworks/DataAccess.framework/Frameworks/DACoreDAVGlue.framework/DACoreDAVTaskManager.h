/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACoreDAVGlue.framework/DACoreDAVGlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DATaskManager.h>
#import <libobjc.A.dylib/CoreDAVTaskManager.h>

@class NSRunLoop, NSMutableSet, NSString;

@interface DACoreDAVTaskManager : DATaskManager <CoreDAVTaskManager> {

	NSMutableSet* _applicationsShowingActivity;

}

@property (nonatomic,retain) NSRunLoop * workRunLoop; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithAccount:(id)arg1 ;
-(void)submitQueuedCoreDAVTask:(id)arg1 ;
-(void)submitIndependentCoreDAVTask:(id)arg1 ;
-(NSRunLoop *)workRunLoop;
-(void)coreDAVTaskDidFinish:(id)arg1 ;
-(void)coreDAVTaskEndModal:(id)arg1 ;
-(void)coreDAVTaskRequestModal:(id)arg1 ;
-(void)taskManagerDidAddTask:(id)arg1 ;
-(void)taskManagerWillRemoveTask:(id)arg1 ;
-(void)_updateSpinner:(BOOL)arg1 ;
-(void)setWorkRunLoop:(NSRunLoop *)arg1 ;
@end

