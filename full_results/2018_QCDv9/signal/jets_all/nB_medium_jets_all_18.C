#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_all_18()
{
//=========Macro generated from canvas: nB_medium_jets_all_18/nB_medium_jets_all_18
//=========  (Mon Dec 19 11:03:48 2022) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_all_18 = new TCanvas("nB_medium_jets_all_18", "nB_medium_jets_all_18",0,0,600,600);
   nB_medium_jets_all_18->SetHighLightColor(2);
   nB_medium_jets_all_18->Range(-2.683529,-140.0757,11.21633,1027.222);
   nB_medium_jets_all_18->SetFillColor(0);
   nB_medium_jets_all_18->SetFillStyle(4000);
   nB_medium_jets_all_18->SetBorderMode(0);
   nB_medium_jets_all_18->SetBorderSize(2);
   nB_medium_jets_all_18->SetLeftMargin(0.15709);
   nB_medium_jets_all_18->SetRightMargin(0.1234783);
   nB_medium_jets_all_18->SetBottomMargin(0.12);
   nB_medium_jets_all_18->SetFrameFillStyle(1000);
   nB_medium_jets_all_18->SetFrameBorderMode(0);
   nB_medium_jets_all_18->SetFrameFillStyle(1000);
   nB_medium_jets_all_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(910.4921);
   
   TH1F *st_stack_123 = new TH1F("st_stack_123","",10,-0.5,9.5);
   st_stack_123->SetMinimum(0);
   st_stack_123->SetMaximum(910.4921);
   st_stack_123->SetDirectory(0);
   st_stack_123->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_123->SetLineColor(ci);
   st_stack_123->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_123->GetXaxis()->SetRange(1,10);
   st_stack_123->GetXaxis()->SetLabelFont(42);
   st_stack_123->GetXaxis()->SetTitleOffset(1);
   st_stack_123->GetXaxis()->SetTitleFont(42);
   st_stack_123->GetYaxis()->SetTitle("Events/1.0");
   st_stack_123->GetYaxis()->SetLabelFont(42);
   st_stack_123->GetYaxis()->SetTitleSize(0.037);
   st_stack_123->GetYaxis()->SetTitleFont(42);
   st_stack_123->GetZaxis()->SetLabelFont(42);
   st_stack_123->GetZaxis()->SetTitleOffset(1);
   st_stack_123->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_123);
   
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_1 = new TH1D("VbbHcc_jets_all_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(1,539.2713);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(2,339.7143);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(3,142.5699);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(4,36.79242);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(5,5.285607);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(6,0.4634606);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(7,0.0518519);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(1,1.226568);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(2,0.9660618);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(3,0.6233063);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(4,0.3169349);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(5,0.1190294);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(6,0.03500498);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(7,0.01134938);
   VbbHcc_jets_all_nB_medium_stack_1->SetEntries(486910);

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
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(1,67.72346);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(2,47.34824);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(3,23.88412);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(4,7.219048);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(5,1.175775);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(6,0.1317209);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(7,0.01062217);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(8,0.0001069757);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(1,0.1617783);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(2,0.1351769);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(3,0.09599664);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(4,0.05264998);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(5,0.02122382);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(6,0.007120183);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(7,0.001972697);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(8,0.0001069757);
   VbbHcc_jets_all_nB_medium_stack_2->SetEntries(428940);

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_jets_all_18->Modified();
   nB_medium_jets_all_18->cd();
   nB_medium_jets_all_18->SetSelected(nB_medium_jets_all_18);
}
