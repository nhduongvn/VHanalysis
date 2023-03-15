#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_all_signal_18_logY()
{
//=========Macro generated from canvas: nB_medium_jets_all_signal_18/nB_medium_jets_all_signal_18
//=========  (Thu Mar  9 13:30:14 2023) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_all_signal_18 = new TCanvas("nB_medium_jets_all_signal_18", "nB_medium_jets_all_signal_18",0,0,600,600);
   nB_medium_jets_all_signal_18->SetHighLightColor(2);
   nB_medium_jets_all_signal_18->Range(-2.683529,0.3406868,11.21633,3.38368);
   nB_medium_jets_all_signal_18->SetFillColor(0);
   nB_medium_jets_all_signal_18->SetFillStyle(4000);
   nB_medium_jets_all_signal_18->SetBorderMode(0);
   nB_medium_jets_all_signal_18->SetBorderSize(2);
   nB_medium_jets_all_signal_18->SetLogy();
   nB_medium_jets_all_signal_18->SetLeftMargin(0.15709);
   nB_medium_jets_all_signal_18->SetRightMargin(0.1234783);
   nB_medium_jets_all_signal_18->SetBottomMargin(0.12);
   nB_medium_jets_all_signal_18->SetFrameFillStyle(1000);
   nB_medium_jets_all_signal_18->SetFrameBorderMode(0);
   nB_medium_jets_all_signal_18->SetFrameFillStyle(1000);
   nB_medium_jets_all_signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(865.3034);
   
   TH1F *st_stack_185 = new TH1F("st_stack_185","",10,-0.5,9.5);
   st_stack_185->SetMinimum(5.079793);
   st_stack_185->SetMaximum(1200.551);
   st_stack_185->SetDirectory(0);
   st_stack_185->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_185->SetLineColor(ci);
   st_stack_185->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_185->GetXaxis()->SetRange(1,10);
   st_stack_185->GetXaxis()->SetLabelFont(42);
   st_stack_185->GetXaxis()->SetTitleOffset(1);
   st_stack_185->GetXaxis()->SetTitleFont(42);
   st_stack_185->GetYaxis()->SetTitle("Event/1.0");
   st_stack_185->GetYaxis()->SetLabelFont(42);
   st_stack_185->GetYaxis()->SetTitleSize(0.037);
   st_stack_185->GetYaxis()->SetTitleFont(42);
   st_stack_185->GetZaxis()->SetLabelFont(42);
   st_stack_185->GetZaxis()->SetTitleOffset(1);
   st_stack_185->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_185);
   
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_1 = new TH1D("VbbHcc_jets_all_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(1,637.4565);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(2,379.7039);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(3,153.0927);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(4,37.67775);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(5,5.068337);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(6,0.4510353);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(7,0.01656071);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(1,1.46473);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(2,1.112202);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(3,0.7028307);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(4,0.3410777);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(5,0.1183473);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(6,0.03564101);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(7,0.007131494);
   VbbHcc_jets_all_nB_medium_stack_1->SetEntries(498953);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_nB_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_2 = new TH1D("VbbHcc_jets_all_nB_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(1,80.74536);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(2,52.7107);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(3,26.09091);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(4,7.426359);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(5,1.137437);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(6,0.1045811);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(7,0.007657059);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(8,0.000280877);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(1,0.1809251);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(2,0.1433957);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(3,0.1033234);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(4,0.05697689);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(5,0.0242673);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(6,0.006036454);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(7,0.001618386);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(8,0.000280877);
   VbbHcc_jets_all_nB_medium_stack_2->SetEntries(493157);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_nB_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_jets_all_signal_18->Modified();
   nB_medium_jets_all_signal_18->cd();
   nB_medium_jets_all_signal_18->SetSelected(nB_medium_jets_all_signal_18);
}
