/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SVXButtonEvent, SVXSystemEvent, SVXClientInfo, AFRequestInfo, NSDictionary;

@interface SVXActivationContext : NSObject <NSCopying, NSSecureCoding> {

	long long _source;
	unsigned long long _timestamp;
	SVXButtonEvent* _buttonEvent;
	SVXSystemEvent* _systemEvent;
	SVXClientInfo* _clientInfo;
	AFRequestInfo* _requestInfo;
	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) long long source;                               //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) SVXButtonEvent * buttonEvent;              //@synthesize buttonEvent=_buttonEvent - In the implementation block
@property (nonatomic,copy,readonly) SVXSystemEvent * systemEvent;              //@synthesize systemEvent=_systemEvent - In the implementation block
@property (nonatomic,copy,readonly) SVXClientInfo * clientInfo;                //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,copy,readonly) AFRequestInfo * requestInfo;               //@synthesize requestInfo=_requestInfo - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                   //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)source;
-(unsigned long long)timestamp;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(SVXClientInfo *)clientInfo;
-(SVXButtonEvent *)buttonEvent;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(AFRequestInfo *)requestInfo;
-(id)initWithSource:(long long)arg1 timestamp:(unsigned long long)arg2 buttonEvent:(id)arg3 systemEvent:(id)arg4 clientInfo:(id)arg5 requestInfo:(id)arg6 userInfo:(id)arg7 ;
-(SVXSystemEvent *)systemEvent;
@end

