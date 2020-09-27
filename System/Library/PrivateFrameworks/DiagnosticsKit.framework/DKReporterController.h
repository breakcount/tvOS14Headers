/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DKReporter_Internal.h>
#import <libobjc.A.dylib/DKReporter.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class DKComponentIdentity, DKReporterContext, NSString;

@interface DKReporterController : NSObject <DKReporter_Internal, DKReporter, NSExtensionRequestHandling> {

	DKComponentIdentity* _componentIdentity;
	DKReporterContext* _context;

}

@property (nonatomic,retain) DKReporterContext * context;                          //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) DKComponentIdentity * componentIdentity;              //@synthesize componentIdentity=_componentIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(DKReporterContext *)context;
-(void)setContext:(DKReporterContext *)arg1 ;
-(BOOL)isPresent;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)populateAttributes:(id)arg1 ;
-(DKComponentIdentity *)componentIdentity;
-(void)setupWithContext:(id)arg1 ;
-(void)setComponentIdentity:(DKComponentIdentity *)arg1 ;
@end
