/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOMapItemChildActionSearch;

@interface GEOMapItemChildAction : NSObject {

	long long _childActionType;
	GEOMapItemChildActionSearch* _childActionSearch;

}

@property (assign,nonatomic) long long childActionType;                                    //@synthesize childActionType=_childActionType - In the implementation block
@property (nonatomic,retain) GEOMapItemChildActionSearch * childActionSearch;              //@synthesize childActionSearch=_childActionSearch - In the implementation block
-(GEOMapItemChildActionSearch *)childActionSearch;
-(void)setChildActionType:(long long)arg1 ;
-(void)setChildActionSearch:(GEOMapItemChildActionSearch *)arg1 ;
-(long long)childActionType;
-(id)initWithChildAction:(id)arg1 ;
@end

