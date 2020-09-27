/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFFeedback.h>

@class SFResultSection;

@interface SFVisibleSectionHeaderFeedback : SFFeedback {

	SFResultSection* _section;
	unsigned long long _headerType;

}

@property (nonatomic,copy) SFResultSection * section;                    //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) unsigned long long headerType;              //@synthesize headerType=_headerType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SFResultSection *)section;
-(void)setSection:(SFResultSection *)arg1 ;
-(id)initWithSection:(id)arg1 headerType:(unsigned long long)arg2 ;
-(unsigned long long)headerType;
-(void)setHeaderType:(unsigned long long)arg1 ;
@end

