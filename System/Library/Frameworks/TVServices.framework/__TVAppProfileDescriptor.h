/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVServices-Structs.h>
#import <TVServices/TVAppProfileDescriptor.h>

@interface __TVAppProfileDescriptor : TVAppProfileDescriptor {

	unsigned long long _originalIndex;

}

@property (assign,nonatomic) unsigned long long originalIndex;              //@synthesize originalIndex=_originalIndex - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sanitizedDescriptor:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)originalIndex;
-(void)setOriginalIndex:(unsigned long long)arg1 ;
@end

