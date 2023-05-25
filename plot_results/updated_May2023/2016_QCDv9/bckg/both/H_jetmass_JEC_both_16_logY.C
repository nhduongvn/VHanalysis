#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC_both_16_logY()
{
//=========Macro generated from canvas: H_jetmass_JEC_both_16/H_jetmass_JEC_both_16
//=========  (Thu May 25 11:56:12 2023) by ROOT version 6.26/06
   TCanvas *H_jetmass_JEC_both_16 = new TCanvas("H_jetmass_JEC_both_16", "H_jetmass_JEC_both_16",0,0,600,600);
   H_jetmass_JEC_both_16->SetHighLightColor(2);
   H_jetmass_JEC_both_16->Range(-65.50587,-0.5928368,351.4899,7.823824);
   H_jetmass_JEC_both_16->SetFillColor(0);
   H_jetmass_JEC_both_16->SetFillStyle(4000);
   H_jetmass_JEC_both_16->SetBorderMode(0);
   H_jetmass_JEC_both_16->SetBorderSize(2);
   H_jetmass_JEC_both_16->SetLogy();
   H_jetmass_JEC_both_16->SetLeftMargin(0.15709);
   H_jetmass_JEC_both_16->SetRightMargin(0.1234783);
   H_jetmass_JEC_both_16->SetBottomMargin(0.12);
   H_jetmass_JEC_both_16->SetFrameFillStyle(1000);
   H_jetmass_JEC_both_16->SetFrameBorderMode(0);
   H_jetmass_JEC_both_16->SetFrameFillStyle(1000);
   H_jetmass_JEC_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(4504333);
   
   TH1F *st_stack_68 = new TH1F("st_stack_68","",150,0,300);
   st_stack_68->SetMinimum(2.613139);
   st_stack_68->SetMaximum(9597500);
   st_stack_68->SetDirectory(0);
   st_stack_68->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_68->SetLineColor(ci);
   st_stack_68->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   st_stack_68->GetXaxis()->SetRange(1,150);
   st_stack_68->GetXaxis()->SetLabelFont(42);
   st_stack_68->GetXaxis()->SetTitleOffset(1);
   st_stack_68->GetXaxis()->SetTitleFont(42);
   st_stack_68->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_68->GetYaxis()->SetLabelFont(42);
   st_stack_68->GetYaxis()->SetTitleSize(0.037);
   st_stack_68->GetYaxis()->SetTitleFont(42);
   st_stack_68->GetZaxis()->SetLabelFont(42);
   st_stack_68->GetZaxis()->SetTitleOffset(1);
   st_stack_68->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_68);
   
   
   TH1D *VbbHcc_both_H_jetmass_JEC_stack_1 = new TH1D("VbbHcc_both_H_jetmass_JEC_stack_1","",150,0,300);
   VbbHcc_both_H_jetmass_JEC_stack_1->SetBinContent(2,3174057);
   VbbHcc_both_H_jetmass_JEC_stack_1->SetBinContent(3,2282343);
   VbbHcc_both_H_jetmass_JEC_stack_1->SetBinError(2,71796.16);
   VbbHcc_both_H_jetmass_JEC_stack_1->SetBinError(3,28655.02);
   VbbHcc_both_H_jetmass_JEC_stack_1->SetEntries(255649);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_jetmass_JEC_stack_1->SetFillColor(ci);
   VbbHcc_both_H_jetmass_JEC_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_both_H_jetmass_JEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetmass_JEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetmass_JEC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_jetmass_JEC_stack_1,"");
   
   TH1D *VbbHcc_both_H_jetmass_JEC_stack_2 = new TH1D("VbbHcc_both_H_jetmass_JEC_stack_2","",150,0,300);
   VbbHcc_both_H_jetmass_JEC_stack_2->SetBinContent(1,1.314048);
   VbbHcc_both_H_jetmass_JEC_stack_2->SetBinContent(2,564539.3);
   VbbHcc_both_H_jetmass_JEC_stack_2->SetBinContent(3,219526.3);
   VbbHcc_both_H_jetmass_JEC_stack_2->SetBinContent(151,1.261473);
   VbbHcc_both_H_jetmass_JEC_stack_2->SetBinError(1,0.2827144);
   VbbHcc_both_H_jetmass_JEC_stack_2->SetBinError(2,196.8001);
   VbbHcc_both_H_jetmass_JEC_stack_2->SetBinError(3,122.1065);
   VbbHcc_both_H_jetmass_JEC_stack_2->SetBinError(151,0.3014988);
   VbbHcc_both_H_jetmass_JEC_stack_2->SetEntries(1.224722e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_H_jetmass_JEC_stack_2->SetFillColor(ci);
   VbbHcc_both_H_jetmass_JEC_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_both_H_jetmass_JEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetmass_JEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetmass_JEC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_jetmass_JEC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_jetmass_JEC_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_jetmass_JEC_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_both_16->Modified();
   H_jetmass_JEC_both_16->cd();
   H_jetmass_JEC_both_16->SetSelected(H_jetmass_JEC_both_16);
}
