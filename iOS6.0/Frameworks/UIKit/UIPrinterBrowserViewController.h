/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UITableViewController.h>

#import "PKPrinterBrowserDelegate-Protocol.h"

@class NSMutableArray, PKPrinter, PKPrinterBrowser, UIPrintPanelViewController, UIPrinterSearchingView;

@interface UIPrinterBrowserViewController : UITableViewController <PKPrinterBrowserDelegate>
{
    UIPrintPanelViewController *_printPanelViewController;
    PKPrinterBrowser *_printerBrowser;
    NSMutableArray *_printers;
    PKPrinter *_lockedPrinter;
    BOOL _loaded;
    UIPrinterSearchingView *_searchingView;
    BOOL _clearCurrentPrinter;
}

- (void)removePrinter:(id)arg1 moreGoing:(BOOL)arg2;
- (void)addPrinter:(id)arg1 moreComing:(BOOL)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willEnterForeground;
- (void)updateSearching;
- (void)stopPrinterBrowser;
- (void)startPrinterBrowser;
- (void)loadView;
- (void)adjustPopoverSize;
- (void)dealloc;
- (id)initWithPrintPanelViewController:(id)arg1;

@end

