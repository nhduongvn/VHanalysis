#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetpt_JEC_both_18()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_18/H_jetpt_JEC_both_18
//=========  (Mon Mar 20 11:48:34 2023) by ROOT version 6.26/06
   TCanvas *H_jetpt_JEC_both_18 = new TCanvas("H_jetpt_JEC_both_18", "H_jetpt_JEC_both_18",0,0,600,600);
   H_jetpt_JEC_both_18->SetHighLightColor(2);
   H_jetpt_JEC_both_18->Range(-65.50587,-0.9152966,351.4899,6.712175);
   H_jetpt_JEC_both_18->SetFillColor(0);
   H_jetpt_JEC_both_18->SetFillStyle(4000);
   H_jetpt_JEC_both_18->SetBorderMode(0);
   H_jetpt_JEC_both_18->SetBorderSize(2);
   H_jetpt_JEC_both_18->SetLeftMargin(0.15709);
   H_jetpt_JEC_both_18->SetRightMargin(0.1234783);
   H_jetpt_JEC_both_18->SetBottomMargin(0.12);
   H_jetpt_JEC_both_18->SetFrameFillStyle(1000);
   H_jetpt_JEC_both_18->SetFrameBorderMode(0);
   H_jetpt_JEC_both_18->SetFrameFillStyle(1000);
   H_jetpt_JEC_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(5.949428);
   
   TH1F *st_stack_263 = new TH1F("st_stack_263","",150,0,300);
   st_stack_263->SetMinimum(0);
   st_stack_263->SetMaximum(5.949428);
   st_stack_263->SetDirectory(0);
   st_stack_263->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_263->SetLineColor(ci);
   st_stack_263->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   st_stack_263->GetXaxis()->SetRange(1,150);
   st_stack_263->GetXaxis()->SetLabelFont(42);
   st_stack_263->GetXaxis()->SetTitleOffset(1);
   st_stack_263->GetXaxis()->SetTitleFont(42);
   st_stack_263->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_263->GetYaxis()->SetLabelFont(42);
   st_stack_263->GetYaxis()->SetTitleSize(0.037);
   st_stack_263->GetYaxis()->SetTitleFont(42);
   st_stack_263->GetZaxis()->SetLabelFont(42);
   st_stack_263->GetZaxis()->SetTitleOffset(1);
   st_stack_263->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_263);
   
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_1 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_1","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(0,3.977234);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(1,0.01985387);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(2,3.470783);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(3,0.6451752);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(0,0.1093321);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(1,0.007152531);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(2,0.1104145);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(3,0.0425484);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetEntries(3234);

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
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(0,1.725771);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(1,0.007756853);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(2,1.467242);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(3,0.3158748);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(0,0.02637081);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(1,0.001660555);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(2,0.02345164);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(3,0.01081967);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetEntries(10352);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetpt_JEC_both_18->Modified();
   H_jetpt_JEC_both_18->cd();
   H_jetpt_JEC_both_18->SetSelected(H_jetpt_JEC_both_18);
}
