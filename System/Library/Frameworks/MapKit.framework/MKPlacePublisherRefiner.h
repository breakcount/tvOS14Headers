/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKMapServicePublisherViewTicket;
@class MKMapItemIdentifier;

@interface MKPlacePublisherRefiner : NSObject {

	MKMapItemIdentifier* _publisherIdentifier;
	id<MKMapServicePublisherViewTicket> _ticket;

}
-(void)fetchWithCallbackQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithPublisherIdentifier:(unsigned long long)arg1 providerIdentifier:(int)arg2 ;
-(id)initWithPublisherIdentifier:(unsigned long long)arg1 ;
@end

