/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol AFDictationDelegate <NSObject>

@optional
- (void)dictationConnection:(id)arg1 didRecognizeSpeechPhrases:(id)arg2 correctionIdentifier:(id)arg3;
- (void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 correctionIdentifier:(id)arg3;
- (void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
- (void)dictationConnectionSpeechRecordingWillBegin:(id)arg1;
@end

