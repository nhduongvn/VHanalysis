#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_all_signal_16_logY()
{
//=========Macro generated from canvas: CSV_jets_all_signal_16/CSV_jets_all_signal_16
//=========  (Thu Mar  9 13:30:14 2023) by ROOT version 6.26/06
   TCanvas *CSV_jets_all_signal_16 = new TCanvas("CSV_jets_all_signal_16", "CSV_jets_all_signal_16",0,0,600,600);
   CSV_jets_all_signal_16->SetHighLightColor(2);
   CSV_jets_all_signal_16->Range(-0.2183529,0.1737307,1.171633,4.100445);
   CSV_jets_all_signal_16->SetFillColor(0);
   CSV_jets_all_signal_16->SetFillStyle(4000);
   CSV_jets_all_signal_16->SetBorderMode(0);
   CSV_jets_all_signal_16->SetBorderSize(2);
   CSV_jets_all_signal_16->SetLogy();
   CSV_jets_all_signal_16->SetLeftMargin(0.15709);
   CSV_jets_all_signal_16->SetRightMargin(0.1234783);
   CSV_jets_all_signal_16->SetBottomMargin(0.12);
   CSV_jets_all_signal_16->SetFrameFillStyle(1000);
   CSV_jets_all_signal_16->SetFrameBorderMode(0);
   CSV_jets_all_signal_16->SetFrameFillStyle(1000);
   CSV_jets_all_signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(3388.064);
   
   TH1F *st_stack_163 = new TH1F("st_stack_163","",20,0,1);
   st_stack_163->SetMinimum(4.415058);
   st_stack_163->SetMaximum(5102.392);
   st_stack_163->SetDirectory(0);
   st_stack_163->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_163->SetLineColor(ci);
   st_stack_163->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_163->GetXaxis()->SetRange(1,20);
   st_stack_163->GetXaxis()->SetLabelFont(42);
   st_stack_163->GetXaxis()->SetTitleOffset(1);
   st_stack_163->GetXaxis()->SetTitleFont(42);
   st_stack_163->GetYaxis()->SetTitle("Event/0.05");
   st_stack_163->GetYaxis()->SetLabelFont(42);
   st_stack_163->GetYaxis()->SetTitleSize(0.037);
   st_stack_163->GetYaxis()->SetTitleFont(42);
   st_stack_163->GetZaxis()->SetLabelFont(42);
   st_stack_163->GetZaxis()->SetTitleOffset(1);
   st_stack_163->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_163);
   
   
   TH1D *VbbHcc_jets_all_CSV_stack_1 = new TH1D("VbbHcc_jets_all_CSV_stack_1","",20,0,1);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(1,2418.693);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(2,896.0425);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(3,187.3464);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(4,103.308);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(5,72.43138);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(6,54.01466);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(7,43.01282);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(8,35.11884);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(9,29.32795);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(10,25.14403);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(11,22.39546);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(12,19.8629);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(13,17.23114);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(14,15.36781);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(15,14.56742);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(16,14.20059);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(17,13.68473);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(18,14.35633);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(19,18.17494);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(20,76.07159);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(1,2.725753);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(2,1.657605);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(3,0.7571844);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(4,0.563292);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(5,0.4715617);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(6,0.4069495);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(7,0.363023);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(8,0.3292662);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(9,0.2999415);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(10,0.2779499);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(11,0.2627449);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(12,0.2476872);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(13,0.231034);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(14,0.2177907);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(15,0.2120107);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(16,0.2096164);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(17,0.2051212);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(18,0.2098197);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(19,0.2363142);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(20,0.4840028);
   VbbHcc_jets_all_CSV_stack_1->SetEntries(1514033);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_CSV_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_stack_1->SetLineColor(ci);
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
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(1,393.4004);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(2,130.9129);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(3,28.62454);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(4,16.01002);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(5,11.25291);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(6,8.488365);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(7,6.751808);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(8,5.45173);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(9,4.474883);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(10,3.953279);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(11,3.537589);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(12,3.108477);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(13,2.737441);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(14,2.553678);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(15,2.342225);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(16,2.343215);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(17,2.289822);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(18,2.381488);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(19,3.225462);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(20,14.9397);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(1,0.387092);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(2,0.2224306);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(3,0.1042166);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(4,0.07806604);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(5,0.06547501);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(6,0.05688417);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(7,0.05071553);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(8,0.04560193);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(9,0.04133619);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(10,0.03885031);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(11,0.03677128);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(12,0.03446175);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(13,0.03233262);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(14,0.03127877);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(15,0.02991351);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(16,0.02995297);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(17,0.02961794);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(18,0.0301649);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(19,0.03511884);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(20,0.07572453);
   VbbHcc_jets_all_CSV_stack_2->SetEntries(1742042);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_CSV_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_stack_2->SetLineColor(ci);
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

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
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

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_jets_all_signal_16->Modified();
   CSV_jets_all_signal_16->cd();
   CSV_jets_all_signal_16->SetSelected(CSV_jets_all_signal_16);
}
