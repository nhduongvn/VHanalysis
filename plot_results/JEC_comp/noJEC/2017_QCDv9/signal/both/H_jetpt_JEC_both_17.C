#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetpt_JEC_both_17()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_17/H_jetpt_JEC_both_17
//=========  (Mon Mar 20 11:48:34 2023) by ROOT version 6.26/06
   TCanvas *H_jetpt_JEC_both_17 = new TCanvas("H_jetpt_JEC_both_17", "H_jetpt_JEC_both_17",0,0,600,600);
   H_jetpt_JEC_both_17->SetHighLightColor(2);
   H_jetpt_JEC_both_17->Range(-65.50587,-0.6729961,351.4899,4.935304);
   H_jetpt_JEC_both_17->SetFillColor(0);
   H_jetpt_JEC_both_17->SetFillStyle(4000);
   H_jetpt_JEC_both_17->SetBorderMode(0);
   H_jetpt_JEC_both_17->SetBorderSize(2);
   H_jetpt_JEC_both_17->SetLeftMargin(0.15709);
   H_jetpt_JEC_both_17->SetRightMargin(0.1234783);
   H_jetpt_JEC_both_17->SetBottomMargin(0.12);
   H_jetpt_JEC_both_17->SetFrameFillStyle(1000);
   H_jetpt_JEC_both_17->SetFrameBorderMode(0);
   H_jetpt_JEC_both_17->SetFrameFillStyle(1000);
   H_jetpt_JEC_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.374474);
   
   TH1F *st_stack_262 = new TH1F("st_stack_262","",150,0,300);
   st_stack_262->SetMinimum(0);
   st_stack_262->SetMaximum(4.374474);
   st_stack_262->SetDirectory(0);
   st_stack_262->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_262->SetLineColor(ci);
   st_stack_262->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   st_stack_262->GetXaxis()->SetRange(1,150);
   st_stack_262->GetXaxis()->SetLabelFont(42);
   st_stack_262->GetXaxis()->SetTitleOffset(1);
   st_stack_262->GetXaxis()->SetTitleFont(42);
   st_stack_262->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_262->GetYaxis()->SetLabelFont(42);
   st_stack_262->GetYaxis()->SetTitleSize(0.037);
   st_stack_262->GetYaxis()->SetTitleFont(42);
   st_stack_262->GetZaxis()->SetLabelFont(42);
   st_stack_262->GetZaxis()->SetTitleOffset(1);
   st_stack_262->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_262);
   
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_1 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_1","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(0,3.005606);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(1,0.02157855);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(2,2.563671);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(3,0.5252143);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(0,0.07550624);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(1,0.006305843);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(2,0.06966197);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(3,0.03120223);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetEntries(3542);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_jetpt_JEC_stack_1->SetFillColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_jetpt_JEC_stack_1,"");
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_2 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_2","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(0,1.30448);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(1,0.006167587);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(2,1.067142);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(3,0.2218188);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(0,0.0177263);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(1,0.001204978);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(2,0.01601785);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(3,0.007330132);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetEntries(11286);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_jetpt_JEC_stack_2->SetFillColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_jetpt_JEC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_jetpt_JEC_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_jetpt_JEC_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetpt_JEC_both_17->Modified();
   H_jetpt_JEC_both_17->cd();
   H_jetpt_JEC_both_17->SetSelected(H_jetpt_JEC_both_17);
}
