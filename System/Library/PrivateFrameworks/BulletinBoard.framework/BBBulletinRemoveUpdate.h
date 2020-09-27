/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BBBulletinUpdate.h>

@interface BBBulletinRemoveUpdate : BBBulletinUpdate {

	BOOL _shouldSync;

}

@property (nonatomic,readonly) BOOL shouldSync;              //@synthesize shouldSync=_shouldSync - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)updateWithBulletin:(id)arg1 feeds:(unsigned long long)arg2 shouldSync:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)shouldSync;
-(id)typeDescription;
-(id)initWithBulletin:(id)arg1 feeds:(unsigned long long)arg2 shouldSync:(BOOL)arg3 ;
@end

