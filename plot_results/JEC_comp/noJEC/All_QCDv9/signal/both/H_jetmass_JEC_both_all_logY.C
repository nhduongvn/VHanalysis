#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC_both_all_logY()
{
//=========Macro generated from canvas: H_jetmass_JEC_both_all/H_jetmass_JEC_both_all
//=========  (Mon Mar 20 11:48:19 2023) by ROOT version 6.26/06
   TCanvas *H_jetmass_JEC_both_all = new TCanvas("H_jetmass_JEC_both_all", "H_jetmass_JEC_both_all",0,0,600,600);
   H_jetmass_JEC_both_all->SetHighLightColor(2);
   H_jetmass_JEC_both_all->Range(-65.50587,-0.4788897,351.4899,1.656264);
   H_jetmass_JEC_both_all->SetFillColor(0);
   H_jetmass_JEC_both_all->SetFillStyle(4000);
   H_jetmass_JEC_both_all->SetBorderMode(0);
   H_jetmass_JEC_both_all->SetBorderSize(2);
   H_jetmass_JEC_both_all->SetLogy();
   H_jetmass_JEC_both_all->SetLeftMargin(0.15709);
   H_jetmass_JEC_both_all->SetRightMargin(0.1234783);
   H_jetmass_JEC_both_all->SetBottomMargin(0.12);
   H_jetmass_JEC_both_all->SetFrameFillStyle(1000);
   H_jetmass_JEC_both_all->SetFrameBorderMode(0);
   H_jetmass_JEC_both_all->SetFrameFillStyle(1000);
   H_jetmass_JEC_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(21.86013);
   
   TH1F *st_stack_272 = new TH1F("st_stack_272","",150,0,300);
   st_stack_272->SetMinimum(0.5988646);
   st_stack_272->SetMaximum(27.71713);
   st_stack_272->SetDirectory(0);
   st_stack_272->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_272->SetLineColor(ci);
   st_stack_272->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   st_stack_272->GetXaxis()->SetRange(1,150);
   st_stack_272->GetXaxis()->SetLabelFont(42);
   st_stack_272->GetXaxis()->SetTitleOffset(1);
   st_stack_272->GetXaxis()->SetTitleFont(42);
   st_stack_272->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_272->GetYaxis()->SetLabelFont(42);
   st_stack_272->GetYaxis()->SetTitleSize(0.037);
   st_stack_272->GetYaxis()->SetTitleFont(42);
   st_stack_272->GetZaxis()->SetLabelFont(42);
   st_stack_272->GetZaxis()->SetTitleOffset(1);
   st_stack_272->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_272);
   
   
   TH1D *VbbHcc_both_H_jetmass_JEC_all_stack_1 = new TH1D("VbbHcc_both_H_jetmass_JEC_all_stack_1","",150,0,300);
   VbbHcc_both_H_jetmass_JEC_all_stack_1->SetBinContent(1,0.001576883);
   VbbHcc_both_H_jetmass_JEC_all_stack_1->SetBinContent(2,13.03122);
   VbbHcc_both_H_jetmass_JEC_all_stack_1->SetBinContent(3,5.09379);
   VbbHcc_both_H_jetmass_JEC_all_stack_1->SetBinError(1,0.001576883);
   VbbHcc_both_H_jetmass_JEC_all_stack_1->SetBinError(2,0.1905998);
   VbbHcc_both_H_jetmass_JEC_all_stack_1->SetBinError(3,0.1132656);
   VbbHcc_both_H_jetmass_JEC_all_stack_1->SetEntries(8153);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_jetmass_JEC_all_stack_1->SetFillColor(ci);
   VbbHcc_both_H_jetmass_JEC_all_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_both_H_jetmass_JEC_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetmass_JEC_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetmass_JEC_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_jetmass_JEC_all_stack_1,"");
   
   TH1D *VbbHcc_both_H_jetmass_JEC_all_stack_2 = new TH1D("VbbHcc_both_H_jetmass_JEC_all_stack_2","",150,0,300);
   VbbHcc_both_H_jetmass_JEC_all_stack_2->SetBinContent(2,5.112692);
   VbbHcc_both_H_jetmass_JEC_all_stack_2->SetBinContent(3,2.654845);
   VbbHcc_both_H_jetmass_JEC_all_stack_2->SetBinError(2,0.04134822);
   VbbHcc_both_H_jetmass_JEC_all_stack_2->SetBinError(3,0.0301871);
   VbbHcc_both_H_jetmass_JEC_all_stack_2->SetEntries(26049);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_jetmass_JEC_all_stack_2->SetFillColor(ci);
   VbbHcc_both_H_jetmass_JEC_all_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_both_H_jetmass_JEC_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetmass_JEC_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetmass_JEC_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_jetmass_JEC_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_jetmass_JEC_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_jetmass_JEC_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_both_all->Modified();
   H_jetmass_JEC_both_all->cd();
   H_jetmass_JEC_both_all->SetSelected(H_jetmass_JEC_both_all);
}
