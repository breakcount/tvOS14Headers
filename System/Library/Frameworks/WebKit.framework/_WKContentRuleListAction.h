/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSArray, NSString;

@interface _WKContentRuleListAction : NSObject <WKObject> {

	ObjectStorage<API::ContentRuleListAction> _action;

}

@property (nonatomic,readonly) BOOL blockedLoad; 
@property (nonatomic,readonly) BOOL blockedCookies; 
@property (nonatomic,readonly) BOOL madeHTTPS; 
@property (nonatomic,copy,readonly) NSArray * notifications; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSArray *)notifications;
-(Object*)_apiObject;
-(BOOL)blockedLoad;
-(BOOL)blockedCookies;
-(BOOL)madeHTTPS;
@end

