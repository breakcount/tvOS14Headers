/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SSVFairPlaySAPSession;

@interface RadioRequestContext : NSObject <NSCopying> {

	SSVFairPlaySAPSession* _SAPSession;
	BOOL _usesLocalNetworking;

}

@property (setter=APSession,nonatomic,retain) SSVFairPlaySAPSession * SAPSession;              //@synthesize SAPSession=_SAPSession - In the implementation block
@property (assign,nonatomic) BOOL usesLocalNetworking;                                         //@synthesize usesLocalNetworking=_usesLocalNetworking - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(SSVFairPlaySAPSession *)SAPSession;
-(void)setSAPSession:(SSVFairPlaySAPSession *)arg1 ;
-(BOOL)usesLocalNetworking;
-(void)setUsesLocalNetworking:(BOOL)arg1 ;
@end

