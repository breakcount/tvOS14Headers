/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:56 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TRIContentTrackingId : NSObject <NSCopying> {

	NSString* _str;

}

@property (nonatomic,readonly) NSString * str;              //@synthesize str=_str - In the implementation block
+(id)contentIdWithStr:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithStr:(id)arg1 ;
-(NSString *)str;
-(BOOL)isEqualToContentId:(id)arg1 ;
-(id)copyWithReplacementStr:(id)arg1 ;
@end

