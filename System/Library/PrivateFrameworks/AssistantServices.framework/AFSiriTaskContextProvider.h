/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFSiriAppContextProviding.h>

@class AFSiriTaskmaster, NSString;

@interface AFSiriTaskContextProvider : NSObject <AFSiriAppContextProviding> {

	AFSiriTaskmaster* _taskmaster;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)getAppContextWithDeliveryHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithTaskmaster:(id)arg1 ;
@end

