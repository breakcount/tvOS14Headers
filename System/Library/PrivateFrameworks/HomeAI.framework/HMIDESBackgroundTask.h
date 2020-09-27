/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:57 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/MLBackgroundTask.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSURL, NSString;

@interface HMIDESBackgroundTask : MLBackgroundTask <HMFLogging> {

	NSURL* _url;

}

@property (readonly) NSURL * url;                                   //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(Class)taskRunnerClass;
+(id)logCategory;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)url;
-(id)activityForScheduling;
@end

