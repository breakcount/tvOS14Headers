/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol SLGDomainWhitelisting <NSObject>
@property (assign,nonatomic) BOOL allowUnspecifiedDomains; 
@property (nonatomic,readonly) NSSet * whitelist; 
@required
-(void)addDomain:(id)arg1;
-(BOOL)isDomainWhitelisted:(id)arg1;
-(void)removeDomain:(id)arg1;
-(BOOL)allowUnspecifiedDomains;
-(void)setAllowUnspecifiedDomains:(BOOL)arg1;
-(NSSet *)whitelist;

@end

