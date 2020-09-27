/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>
#import <libobjc.A.dylib/WFStatisticsSampleProvider.h>

@protocol WFStatisticsSampleProvider;
@class NSArray, NSObject, NSString;

@interface WFConcreteStatisticsSampleProvider : NSProxy <WFStatisticsSampleProvider> {

	NSObject*<WFStatisticsSampleProvider> _sampleProvider;

}

@property (nonatomic,retain) NSObject*<WFStatisticsSampleProvider> sampleProvider;              //@synthesize sampleProvider=_sampleProvider - In the implementation block
@property (nonatomic,readonly) BOOL canProvideDataSamples; 
@property (nonatomic,readonly) NSArray * dataSamples; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initWithSampleProvider:(id)arg1 ;
-(NSObject*<WFStatisticsSampleProvider>)sampleProvider;
-(void)setSampleProvider:(NSObject*<WFStatisticsSampleProvider>)arg1 ;
@end

