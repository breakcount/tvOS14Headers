/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:25 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RBSXPCSecureCoding.h>

@class NSSet, NSString;

@interface RBSHandshakeRequest : NSObject <RBSXPCSecureCoding> {

	unsigned _euid;
	NSSet* _assertionDescriptors;

}

@property (nonatomic,retain) NSSet * assertionDescriptors;              //@synthesize assertionDescriptors=_assertionDescriptors - In the implementation block
@property (assign,nonatomic) unsigned euid;                             //@synthesize euid=_euid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned)euid;
-(void)setEuid:(unsigned)arg1 ;
-(NSSet *)assertionDescriptors;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)setAssertionDescriptors:(NSSet *)arg1 ;
@end

