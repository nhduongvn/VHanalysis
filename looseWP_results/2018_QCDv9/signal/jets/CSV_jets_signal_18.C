#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_signal_18()
{
//=========Macro generated from canvas: CSV_jets_signal_18/CSV_jets_signal_18
//=========  (Fri Mar 10 12:13:58 2023) by ROOT version 6.26/06
   TCanvas *CSV_jets_signal_18 = new TCanvas("CSV_jets_signal_18", "CSV_jets_signal_18",0,0,600,600);
   CSV_jets_signal_18->SetHighLightColor(2);
   CSV_jets_signal_18->Range(-0.2183529,-357.7968,1.171633,2623.843);
   CSV_jets_signal_18->SetFillColor(0);
   CSV_jets_signal_18->SetFillStyle(4000);
   CSV_jets_signal_18->SetBorderMode(0);
   CSV_jets_signal_18->SetBorderSize(2);
   CSV_jets_signal_18->SetLeftMargin(0.15709);
   CSV_jets_signal_18->SetRightMargin(0.1234783);
   CSV_jets_signal_18->SetBottomMargin(0.12);
   CSV_jets_signal_18->SetFrameFillStyle(1000);
   CSV_jets_signal_18->SetFrameBorderMode(0);
   CSV_jets_signal_18->SetFrameFillStyle(1000);
   CSV_jets_signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2325.679);
   
   TH1F *st_stack_11 = new TH1F("st_stack_11","",20,0,1);
   st_stack_11->SetMinimum(0);
   st_stack_11->SetMaximum(2325.679);
   st_stack_11->SetDirectory(0);
   st_stack_11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_11->SetLineColor(ci);
   st_stack_11->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_11->GetXaxis()->SetRange(1,20);
   st_stack_11->GetXaxis()->SetLabelFont(42);
   st_stack_11->GetXaxis()->SetTitleOffset(1);
   st_stack_11->GetXaxis()->SetTitleFont(42);
   st_stack_11->GetYaxis()->SetTitle("Event/0.05");
   st_stack_11->GetYaxis()->SetLabelFont(42);
   st_stack_11->GetYaxis()->SetTitleSize(0.037);
   st_stack_11->GetYaxis()->SetTitleFont(42);
   st_stack_11->GetZaxis()->SetLabelFont(42);
   st_stack_11->GetZaxis()->SetTitleOffset(1);
   st_stack_11->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_11);
   
   
   TH1D *VbbHcc_jets_CSV_stack_1 = new TH1D("VbbHcc_jets_CSV_stack_1","",20,0,1);
   VbbHcc_jets_CSV_stack_1->SetBinContent(1,1586.927);
   VbbHcc_jets_CSV_stack_1->SetBinContent(2,250.4697);
   VbbHcc_jets_CSV_stack_1->SetBinContent(3,125.1324);
   VbbHcc_jets_CSV_stack_1->SetBinContent(4,84.29564);
   VbbHcc_jets_CSV_stack_1->SetBinContent(5,62.48073);
   VbbHcc_jets_CSV_stack_1->SetBinContent(6,49.74016);
   VbbHcc_jets_CSV_stack_1->SetBinContent(7,40.75813);
   VbbHcc_jets_CSV_stack_1->SetBinContent(8,32.69402);
   VbbHcc_jets_CSV_stack_1->SetBinContent(9,27.31318);
   VbbHcc_jets_CSV_stack_1->SetBinContent(10,23.58766);
   VbbHcc_jets_CSV_stack_1->SetBinContent(11,22.11147);
   VbbHcc_jets_CSV_stack_1->SetBinContent(12,19.48734);
   VbbHcc_jets_CSV_stack_1->SetBinContent(13,16.79694);
   VbbHcc_jets_CSV_stack_1->SetBinContent(14,15.33167);
   VbbHcc_jets_CSV_stack_1->SetBinContent(15,14.40744);
   VbbHcc_jets_CSV_stack_1->SetBinContent(16,14.37905);
   VbbHcc_jets_CSV_stack_1->SetBinContent(17,13.837);
   VbbHcc_jets_CSV_stack_1->SetBinContent(18,13.74194);
   VbbHcc_jets_CSV_stack_1->SetBinContent(19,18.468);
   VbbHcc_jets_CSV_stack_1->SetBinContent(20,101.76);
   VbbHcc_jets_CSV_stack_1->SetBinError(1,2.278713);
   VbbHcc_jets_CSV_stack_1->SetBinError(2,0.9012139);
   VbbHcc_jets_CSV_stack_1->SetBinError(3,0.6261801);
   VbbHcc_jets_CSV_stack_1->SetBinError(4,0.5146019);
   VbbHcc_jets_CSV_stack_1->SetBinError(5,0.4403307);
   VbbHcc_jets_CSV_stack_1->SetBinError(6,0.4039016);
   VbbHcc_jets_CSV_stack_1->SetBinError(7,0.3546832);
   VbbHcc_jets_CSV_stack_1->SetBinError(8,0.3269464);
   VbbHcc_jets_CSV_stack_1->SetBinError(9,0.3135085);
   VbbHcc_jets_CSV_stack_1->SetBinError(10,0.2667298);
   VbbHcc_jets_CSV_stack_1->SetBinError(11,0.3026036);
   VbbHcc_jets_CSV_stack_1->SetBinError(12,0.2482236);
   VbbHcc_jets_CSV_stack_1->SetBinError(13,0.2288576);
   VbbHcc_jets_CSV_stack_1->SetBinError(14,0.2103755);
   VbbHcc_jets_CSV_stack_1->SetBinError(15,0.2049288);
   VbbHcc_jets_CSV_stack_1->SetBinError(16,0.2032544);
   VbbHcc_jets_CSV_stack_1->SetBinError(17,0.2056918);
   VbbHcc_jets_CSV_stack_1->SetBinError(18,0.2021019);
   VbbHcc_jets_CSV_stack_1->SetBinError(19,0.2321092);
   VbbHcc_jets_CSV_stack_1->SetBinError(20,0.5804874);
   VbbHcc_jets_CSV_stack_1->SetEntries(1022565);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_CSV_stack_1->SetFillColor(ci);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CSV_stack_1,"");
   
   TH1D *VbbHcc_jets_CSV_stack_2 = new TH1D("VbbHcc_jets_CSV_stack_2","",20,0,1);
   VbbHcc_jets_CSV_stack_2->SetBinContent(1,343.3861);
   VbbHcc_jets_CSV_stack_2->SetBinContent(2,49.36894);
   VbbHcc_jets_CSV_stack_2->SetBinContent(3,23.9695);
   VbbHcc_jets_CSV_stack_2->SetBinContent(4,15.81905);
   VbbHcc_jets_CSV_stack_2->SetBinContent(5,11.82273);
   VbbHcc_jets_CSV_stack_2->SetBinContent(6,9.435325);
   VbbHcc_jets_CSV_stack_2->SetBinContent(7,7.643538);
   VbbHcc_jets_CSV_stack_2->SetBinContent(8,6.290847);
   VbbHcc_jets_CSV_stack_2->SetBinContent(9,5.222503);
   VbbHcc_jets_CSV_stack_2->SetBinContent(10,4.599446);
   VbbHcc_jets_CSV_stack_2->SetBinContent(11,4.178755);
   VbbHcc_jets_CSV_stack_2->SetBinContent(12,3.679594);
   VbbHcc_jets_CSV_stack_2->SetBinContent(13,3.192401);
   VbbHcc_jets_CSV_stack_2->SetBinContent(14,2.974119);
   VbbHcc_jets_CSV_stack_2->SetBinContent(15,2.842981);
   VbbHcc_jets_CSV_stack_2->SetBinContent(16,2.874383);
   VbbHcc_jets_CSV_stack_2->SetBinContent(17,2.891641);
   VbbHcc_jets_CSV_stack_2->SetBinContent(18,2.989053);
   VbbHcc_jets_CSV_stack_2->SetBinContent(19,4.057789);
   VbbHcc_jets_CSV_stack_2->SetBinContent(20,24.1425);
   VbbHcc_jets_CSV_stack_2->SetBinError(1,0.3700773);
   VbbHcc_jets_CSV_stack_2->SetBinError(2,0.1406222);
   VbbHcc_jets_CSV_stack_2->SetBinError(3,0.09531165);
   VbbHcc_jets_CSV_stack_2->SetBinError(4,0.07954645);
   VbbHcc_jets_CSV_stack_2->SetBinError(5,0.06978756);
   VbbHcc_jets_CSV_stack_2->SetBinError(6,0.061784);
   VbbHcc_jets_CSV_stack_2->SetBinError(7,0.05415335);
   VbbHcc_jets_CSV_stack_2->SetBinError(8,0.04973012);
   VbbHcc_jets_CSV_stack_2->SetBinError(9,0.04671583);
   VbbHcc_jets_CSV_stack_2->SetBinError(10,0.04194825);
   VbbHcc_jets_CSV_stack_2->SetBinError(11,0.04176339);
   VbbHcc_jets_CSV_stack_2->SetBinError(12,0.03724303);
   VbbHcc_jets_CSV_stack_2->SetBinError(13,0.03511337);
   VbbHcc_jets_CSV_stack_2->SetBinError(14,0.03329804);
   VbbHcc_jets_CSV_stack_2->SetBinError(15,0.03492335);
   VbbHcc_jets_CSV_stack_2->SetBinError(16,0.03324454);
   VbbHcc_jets_CSV_stack_2->SetBinError(17,0.03333654);
   VbbHcc_jets_CSV_stack_2->SetBinError(18,0.03661648);
   VbbHcc_jets_CSV_stack_2->SetBinError(19,0.04254055);
   VbbHcc_jets_CSV_stack_2->SetBinError(20,0.1010557);
   VbbHcc_jets_CSV_stack_2->SetEntries(1558638);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_CSV_stack_2->SetFillColor(ci);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CSV_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CSV_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_CSV_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_jets_signal_18->Modified();
   CSV_jets_signal_18->cd();
   CSV_jets_signal_18->SetSelected(CSV_jets_signal_18);
}
