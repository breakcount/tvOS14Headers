/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:44:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExposureNotificationDaemon/ExposureNotificationDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ENEntity;

@interface ENActiveEntity : NSObject <NSSecureCoding, NSCopying> {

	int _activeStatus;
	ENEntity* _entity;

}

@property (nonatomic,copy) ENEntity * entity;               //@synthesize entity=_entity - In the implementation block
@property (assign,nonatomic) int activeStatus;              //@synthesize activeStatus=_activeStatus - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ENEntity *)entity;
-(void)setEntity:(ENEntity *)arg1 ;
-(id)initWithEntity:(id)arg1 activeStatus:(int)arg2 ;
-(int)activeStatus;
-(void)setActiveStatus:(int)arg1 ;
@end

