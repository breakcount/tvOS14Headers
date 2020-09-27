/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/IAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface IAPNavigationAccessory : NSObject {

	BOOL __wasFoundInLastUpdate;
	unsigned long long _identifier;
	NSSet* _components;

}

@property (assign) BOOL _wasFoundInLastUpdate;                 //@synthesize _wasFoundInLastUpdate=__wasFoundInLastUpdate - In the implementation block
@property (assign) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSSet * components;                         //@synthesize components=_components - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)identifier;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(NSSet *)components;
-(id)initWithDict:(id)arg1 ;
-(void)setComponents:(NSSet *)arg1 ;
-(BOOL)requestedSourceNameForAnyComponent;
-(BOOL)requestedSourceSupportsRouteGuidanceForAnyComponent;
-(BOOL)_wasFoundInLastUpdate;
-(void)set_wasFoundInLastUpdate:(BOOL)arg1 ;
@end

