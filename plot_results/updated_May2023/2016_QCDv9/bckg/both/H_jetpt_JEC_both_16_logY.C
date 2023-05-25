#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetpt_JEC_both_16_logY()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_16/H_jetpt_JEC_both_16
//=========  (Thu May 25 11:56:12 2023) by ROOT version 6.26/06
   TCanvas *H_jetpt_JEC_both_16 = new TCanvas("H_jetpt_JEC_both_16", "H_jetpt_JEC_both_16",0,0,600,600);
   H_jetpt_JEC_both_16->SetHighLightColor(2);
   H_jetpt_JEC_both_16->Range(-65.50587,-0.5535096,351.4899,7.618511);
   H_jetpt_JEC_both_16->SetFillColor(0);
   H_jetpt_JEC_both_16->SetFillStyle(4000);
   H_jetpt_JEC_both_16->SetBorderMode(0);
   H_jetpt_JEC_both_16->SetBorderSize(2);
   H_jetpt_JEC_both_16->SetLogy();
   H_jetpt_JEC_both_16->SetLeftMargin(0.15709);
   H_jetpt_JEC_both_16->SetRightMargin(0.1234783);
   H_jetpt_JEC_both_16->SetBottomMargin(0.12);
   H_jetpt_JEC_both_16->SetFrameFillStyle(1000);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   H_jetpt_JEC_both_16->SetFrameFillStyle(1000);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(3019405);
   
   TH1F *st_stack_66 = new TH1F("st_stack_66","",150,0,300);
   st_stack_66->SetMinimum(2.673825);
   st_stack_66->SetMaximum(6328625);
   st_stack_66->SetDirectory(0);
   st_stack_66->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_66->SetLineColor(ci);
   st_stack_66->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   st_stack_66->GetXaxis()->SetRange(1,150);
   st_stack_66->GetXaxis()->SetLabelFont(42);
   st_stack_66->GetXaxis()->SetTitleOffset(1);
   st_stack_66->GetXaxis()->SetTitleFont(42);
   st_stack_66->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_66->GetYaxis()->SetLabelFont(42);
   st_stack_66->GetYaxis()->SetTitleSize(0.037);
   st_stack_66->GetYaxis()->SetTitleFont(42);
   st_stack_66->GetZaxis()->SetLabelFont(42);
   st_stack_66->GetZaxis()->SetTitleOffset(1);
   st_stack_66->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_66);
   
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_1 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_1","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(0,2696655);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(1,14011.94);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(2,2172322);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(3,573411.1);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(0,48905.19);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(1,2925.052);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(2,55559.64);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(3,22105.44);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetEntries(255649);

   ci = TColor::GetColor("#ff6600");
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
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(0,391967.7);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(1,2429.404);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(2,333784);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(3,55887.18);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(0,163.7554);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(1,12.92111);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(2,151.176);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(3,61.67224);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetEntries(1.224722e+07);

   ci = TColor::GetColor("#990099");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_jetpt_JEC_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_jetpt_JEC_stack_1","QCD","F");

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
   H_jetpt_JEC_both_16->Modified();
   H_jetpt_JEC_both_16->cd();
   H_jetpt_JEC_both_16->SetSelected(H_jetpt_JEC_both_16);
}
