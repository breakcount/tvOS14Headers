/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/EKPredicate.h>
#import <libobjc.A.dylib/EKDefaultPropertiesLoading.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSTimeZone;

@interface CADEventPredicate : EKPredicate <EKDefaultPropertiesLoading, NSSecureCoding> {

	BOOL _shouldLoadProposedTimesInRange;
	BOOL _shouldLoadDefaultProperties;
	BOOL _excludeAllDayEvents;
	BOOL _excludeTimedEvents;
	BOOL _excludeDeclined;
	BOOL _excludeProposed;
	BOOL _excludeDeclinedUnlessProposed;

}

@property (nonatomic,readonly) NSString * eventUUID; 
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (nonatomic,readonly) BOOL shouldLoadProposedTimesInRange;              //@synthesize shouldLoadProposedTimesInRange=_shouldLoadProposedTimesInRange - In the implementation block
@property (nonatomic,readonly) BOOL shouldLoadDefaultProperties;                 //@synthesize shouldLoadDefaultProperties=_shouldLoadDefaultProperties - In the implementation block
@property (assign,nonatomic) BOOL excludeAllDayEvents;                           //@synthesize excludeAllDayEvents=_excludeAllDayEvents - In the implementation block
@property (assign,nonatomic) BOOL excludeTimedEvents;                            //@synthesize excludeTimedEvents=_excludeTimedEvents - In the implementation block
@property (assign,nonatomic) BOOL excludeDeclined;                               //@synthesize excludeDeclined=_excludeDeclined - In the implementation block
@property (assign,nonatomic) BOOL excludeProposed;                               //@synthesize excludeProposed=_excludeProposed - In the implementation block
@property (assign,nonatomic) BOOL excludeDeclinedUnlessProposed;                 //@synthesize excludeDeclinedUnlessProposed=_excludeDeclinedUnlessProposed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 ;
+(id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 loadDefaultProperties:(BOOL)arg5 ;
+(id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventUUID:(id)arg4 calendars:(id)arg5 ;
+(id)predicateWithStartDate:(id)arg1 title:(id)arg2 calendars:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSTimeZone *)timeZone;
-(id)predicateFormat;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 loadDefaultProperties:(BOOL)arg5 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventUUID:(id)arg4 calendars:(id)arg5 ;
-(id)initWithStartDate:(id)arg1 title:(id)arg2 calendars:(id)arg3 ;
-(BOOL)shouldLoadDefaultProperties;
-(BOOL)excludeTimedEvents;
-(BOOL)excludeAllDayEvents;
-(BOOL)excludeDeclined;
-(BOOL)excludeProposed;
-(BOOL)excludeDeclinedUnlessProposed;
-(NSString *)eventUUID;
-(id)defaultPropertiesToLoad;
-(BOOL)shouldLoadProposedTimesInRange;
-(void)setExcludeAllDayEvents:(BOOL)arg1 ;
-(void)setExcludeTimedEvents:(BOOL)arg1 ;
-(void)setExcludeDeclined:(BOOL)arg1 ;
-(void)setExcludeProposed:(BOOL)arg1 ;
-(void)setExcludeDeclinedUnlessProposed:(BOOL)arg1 ;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
@end

