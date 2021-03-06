/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRAsyncCardReceiptFeedback <CRFeedback>
@property (nonatomic,retain) id<CRCard> baseCard; 
@property (nonatomic,retain) id<CRCard> requestedCard; 
@property (nonatomic,retain) id<CRCard> receivedCard; 
@required
-(id<CRCard>)baseCard;
-(void)setBaseCard:(id)arg1;
-(id<CRCard>)requestedCard;
-(void)setRequestedCard:(id)arg1;
-(id<CRCard>)receivedCard;
-(void)setReceivedCard:(id)arg1;

@end

