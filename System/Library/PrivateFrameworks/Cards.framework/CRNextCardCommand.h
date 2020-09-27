/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Cards/Cards-Structs.h>
#import <Cards/CRBasicPayloadCommand.h>
#import <libobjc.A.dylib/CRPayloadCommand.h>

@protocol CRCard;
@class NSDictionary, NSString;

@interface CRNextCardCommand : CRBasicPayloadCommand <CRPayloadCommand> {

	id<CRCard> _nextCard;

}

@property (nonatomic,retain) id<CRCard> nextCard;                                //@synthesize nextCard=_nextCard - In the implementation block
@property (nonatomic,retain) id<NSSecureCoding><NSCopying> payload; 
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (assign,nonatomic) unsigned long long commandDirection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<NSSecureCoding><NSCopying>)payload;
-(id<CRCard>)nextCard;
-(void)setNextCard:(id<CRCard>)arg1 ;
@end
