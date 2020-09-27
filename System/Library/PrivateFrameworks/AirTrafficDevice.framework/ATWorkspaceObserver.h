/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/LSApplicationWorkspaceObserver.h>

@protocol LSApplicationWorkspaceObserverProtocol;
@class NSObject;

@interface ATWorkspaceObserver : LSApplicationWorkspaceObserver {

	NSObject*<LSApplicationWorkspaceObserverProtocol> _delegate;

}

@property (assign,nonatomic) NSObject*<ATWorkspaceObserverDelegate> delegate; 
-(NSObject*<ATWorkspaceObserverDelegate>)delegate;
-(void)setDelegate:(NSObject*<ATWorkspaceObserverDelegate>)arg1 ;
-(void)applicationInstallsDidChange:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2 ;
-(void)applicationInstallsDidCancel:(id)arg1 ;
-(void)applicationInstallsDidPrioritize:(id)arg1 ;
-(void)stopObserving;
-(void)startObserving;
@end

