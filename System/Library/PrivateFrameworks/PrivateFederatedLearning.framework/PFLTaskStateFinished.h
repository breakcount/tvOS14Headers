/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:06 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PFLTaskState.h>

@interface PFLTaskStateFinished : NSObject <PFLTaskState>
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)suspend;
-(unsigned long long)tag;
-(void)resume:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

