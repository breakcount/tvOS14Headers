/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol TVSAccountsCacheObserver
@property (nonatomic,copy,readonly) NSSet * registeredAccountIdentifiers; 
@required
-(void)accountsCacheDidModifyAccount:(id)arg1;
-(void)accountsCacheDidModifyPrimaryAppleAccount:(id)arg1;
-(NSSet *)registeredAccountIdentifiers;

@end
