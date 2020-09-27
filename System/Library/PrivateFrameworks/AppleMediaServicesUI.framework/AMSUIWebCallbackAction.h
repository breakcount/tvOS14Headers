/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class NSString, NSDictionary, AMSUIWebClientContext;

@interface AMSUIWebCallbackAction : NSObject <AMSUIWebActionRunnable> {

	NSString* _service;
	NSDictionary* _data;
	AMSUIWebClientContext* _context;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * service;                           //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSDictionary * data;                          //@synthesize data=_data - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)data;
-(void)setData:(NSDictionary *)arg1 ;
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(NSString *)service;
-(void)setService:(NSString *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
@end
