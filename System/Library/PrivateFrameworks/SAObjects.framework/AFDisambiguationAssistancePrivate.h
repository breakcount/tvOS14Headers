/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSData, AFDisambiguationInfo;


@protocol AFDisambiguationAssistancePrivate
@property (nonatomic,readonly) NSData * af_disambiguationIdentifier; 
@property (setter=af_setDisambiguationInfo:,nonatomic,retain) AFDisambiguationInfo * af_disambiguationInfo; 
@required
-(NSData *)af_disambiguationIdentifier;
-(id)af_indexIdentifierForItem:(id)arg1;
-(id)af_itemForIndexIdentifier:(id)arg1;
-(AFDisambiguationInfo *)af_disambiguationInfo;
-(void)af_setDisambiguationInfo:(id)arg1;

@end

