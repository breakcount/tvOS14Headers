/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAPITriageLogger.h>

@class NSString;

@interface CNMockAPITriageLogger : NSObject <CNAPITriageLogger>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)request:(id)arg1 willReturnAnchor:(id)arg2 ;
-(void)willExecuteContactFetchRequest:(id)arg1 ;
-(void)request:(id)arg1 containsContact:(id)arg2 ;
-(void)clientStoppedEnumerationForRequest:(id)arg1 ;
-(void)didReturnAllResultsForContactFetchRequest:(id)arg1 ;
-(void)didExecuteContactFetchRequest:(id)arg1 ;
@end

