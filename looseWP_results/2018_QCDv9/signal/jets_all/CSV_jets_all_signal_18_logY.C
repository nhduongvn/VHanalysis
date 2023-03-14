#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_all_signal_18_logY()
{
//=========Macro generated from canvas: CSV_jets_all_signal_18/CSV_jets_all_signal_18
//=========  (Fri Mar 10 14:09:16 2023) by ROOT version 6.26/06
   TCanvas *CSV_jets_all_signal_18 = new TCanvas("CSV_jets_all_signal_18", "CSV_jets_all_signal_18",0,0,600,600);
   CSV_jets_all_signal_18->SetHighLightColor(2);
   CSV_jets_all_signal_18->Range(-0.2183529,0.1018221,1.171633,4.42106);
   CSV_jets_all_signal_18->SetFillColor(0);
   CSV_jets_all_signal_18->SetFillStyle(4000);
   CSV_jets_all_signal_18->SetBorderMode(0);
   CSV_jets_all_signal_18->SetBorderSize(2);
   CSV_jets_all_signal_18->SetLogy();
   CSV_jets_all_signal_18->SetLeftMargin(0.15709);
   CSV_jets_all_signal_18->SetRightMargin(0.1234783);
   CSV_jets_all_signal_18->SetBottomMargin(0.12);
   CSV_jets_all_signal_18->SetFrameFillStyle(1000);
   CSV_jets_all_signal_18->SetFrameBorderMode(0);
   CSV_jets_all_signal_18->SetFrameFillStyle(1000);
   CSV_jets_all_signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(6254.929);
   
   TH1F *st_stack_167 = new TH1F("st_stack_167","",20,0,1);
   st_stack_167->SetMinimum(4.169948);
   st_stack_167->SetMaximum(9752.964);
   st_stack_167->SetDirectory(0);
   st_stack_167->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_167->SetLineColor(ci);
   st_stack_167->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_167->GetXaxis()->SetRange(1,20);
   st_stack_167->GetXaxis()->SetLabelFont(42);
   st_stack_167->GetXaxis()->SetTitleOffset(1);
   st_stack_167->GetXaxis()->SetTitleFont(42);
   st_stack_167->GetYaxis()->SetTitle("Event/0.05");
   st_stack_167->GetYaxis()->SetLabelFont(42);
   st_stack_167->GetYaxis()->SetTitleSize(0.037);
   st_stack_167->GetYaxis()->SetTitleFont(42);
   st_stack_167->GetZaxis()->SetLabelFont(42);
   st_stack_167->GetZaxis()->SetTitleOffset(1);
   st_stack_167->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_167);
   
   
   TH1D *VbbHcc_jets_all_CSV_stack_1 = new TH1D("VbbHcc_jets_all_CSV_stack_1","",20,0,1);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(1,4466.34);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(2,1874.853);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(3,397.9386);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(4,221.2052);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(5,155.2508);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(6,116.7669);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(7,94.08221);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(8,76.10598);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(9,62.93036);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(10,54.00015);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(11,49.17926);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(12,43.10945);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(13,37.09398);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(14,34.2676);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(15,31.51838);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(16,31.18154);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(17,28.50826);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(18,28.83874);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(19,36.7924);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(20,166.449);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(1,3.782289);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(2,2.344932);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(3,1.10739);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(4,0.8241148);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(5,0.6934204);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(6,0.6091849);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(7,0.5395181);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(8,0.500721);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(9,0.455421);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(10,0.405437);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(11,0.4325355);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(12,0.3650838);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(13,0.3354234);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(14,0.3250588);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(15,0.306784);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(16,0.3076526);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(17,0.2957144);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(18,0.3065235);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(19,0.3335915);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(20,0.7397031);
   VbbHcc_jets_all_CSV_stack_1->SetEntries(3350955);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_CSV_stack_1->SetFillColor(ci);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CSV_stack_2 = new TH1D("VbbHcc_jets_all_CSV_stack_2","",20,0,1);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(1,725.2511);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(2,269.5857);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(3,59.38415);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(4,33.25379);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(5,23.42294);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(6,17.59224);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(7,14.27502);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(8,11.65785);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(9,9.545159);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(10,8.274804);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(11,7.466682);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(12,6.448827);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(13,5.653164);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(14,5.178473);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(15,4.892446);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(16,4.776847);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(17,4.608348);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(18,4.746392);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(19,6.195818);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(20,31.425);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(1,0.5339641);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(2,0.3154181);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(3,0.1490319);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(4,0.1128368);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(5,0.09632588);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(6,0.08424574);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(7,0.07600996);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(8,0.06769885);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(9,0.0633654);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(10,0.05738513);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(11,0.05449635);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(12,0.04922764);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(13,0.04875666);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(14,0.04403491);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(15,0.04496874);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(16,0.04313752);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(17,0.04214444);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(18,0.04738078);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(19,0.05136565);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(20,0.1154837);
   VbbHcc_jets_all_CSV_stack_2->SetEntries(3757140);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_CSV_stack_2->SetFillColor(ci);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_1","ZHcc","F");

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
   CSV_jets_all_signal_18->Modified();
   CSV_jets_all_signal_18->cd();
   CSV_jets_all_signal_18->SetSelected(CSV_jets_all_signal_18);
}
