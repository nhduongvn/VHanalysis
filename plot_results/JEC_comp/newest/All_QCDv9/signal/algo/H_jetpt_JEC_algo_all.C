void H_jetpt_JEC_algo_all()
{
//=========Macro generated from canvas: H_jetpt_JEC_algo_all/H_jetpt_JEC_algo_all
//=========  (Thu Mar 30 10:44:26 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_algo_all = new TCanvas("H_jetpt_JEC_algo_all", "H_jetpt_JEC_algo_all",0,0,600,600);
   H_jetpt_JEC_algo_all->SetHighLightColor(2);
   H_jetpt_JEC_algo_all->Range(-65.50587,-0.5366097,351.4899,3.935138);
   H_jetpt_JEC_algo_all->SetFillColor(0);
   H_jetpt_JEC_algo_all->SetFillStyle(4000);
   H_jetpt_JEC_algo_all->SetBorderMode(0);
   H_jetpt_JEC_algo_all->SetBorderSize(2);
   H_jetpt_JEC_algo_all->SetLeftMargin(0.15709);
   H_jetpt_JEC_algo_all->SetRightMargin(0.1234783);
   H_jetpt_JEC_algo_all->SetBottomMargin(0.12);
   H_jetpt_JEC_algo_all->SetFrameFillStyle(1000);
   H_jetpt_JEC_algo_all->SetFrameBorderMode(0);
   H_jetpt_JEC_algo_all->SetFrameFillStyle(1000);
   H_jetpt_JEC_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.32187);
   
   TH1F *st_stack_360 = new TH1F("st_stack_360","",150,0,300);
   st_stack_360->SetMinimum(0);
   st_stack_360->SetMaximum(3.487963);
   st_stack_360->SetDirectory(0);
   st_stack_360->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_360->SetLineColor(ci);
   st_stack_360->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   st_stack_360->GetXaxis()->SetRange(1,150);
   st_stack_360->GetXaxis()->SetLabelFont(42);
   st_stack_360->GetXaxis()->SetLabelSize(0.035);
   st_stack_360->GetXaxis()->SetTitleSize(0.035);
   st_stack_360->GetXaxis()->SetTitleFont(42);
   st_stack_360->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_360->GetYaxis()->SetLabelFont(42);
   st_stack_360->GetYaxis()->SetLabelSize(0.035);
   st_stack_360->GetYaxis()->SetTitleSize(0.037);
   st_stack_360->GetYaxis()->SetTitleOffset(0);
   st_stack_360->GetYaxis()->SetTitleFont(42);
   st_stack_360->GetZaxis()->SetLabelFont(42);
   st_stack_360->GetZaxis()->SetLabelSize(0.035);
   st_stack_360->GetZaxis()->SetTitleSize(0.035);
   st_stack_360->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_360);
   
   
   TH1D *VbbHcc_algo_H_jetpt_JEC_all_stack_1 = new TH1D("VbbHcc_algo_H_jetpt_JEC_all_stack_1","",150,0,300);
   VbbHcc_algo_H_jetpt_JEC_all_stack_1->SetBinContent(0,2.234897);
   VbbHcc_algo_H_jetpt_JEC_all_stack_1->SetBinContent(1,0.01936894);
   VbbHcc_algo_H_jetpt_JEC_all_stack_1->SetBinContent(2,2.072879);
   VbbHcc_algo_H_jetpt_JEC_all_stack_1->SetBinContent(3,0.4022519);
   VbbHcc_algo_H_jetpt_JEC_all_stack_1->SetBinError(0,0.0753072);
   VbbHcc_algo_H_jetpt_JEC_all_stack_1->SetBinError(1,0.006751275);
   VbbHcc_algo_H_jetpt_JEC_all_stack_1->SetBinError(2,0.08221013);
   VbbHcc_algo_H_jetpt_JEC_all_stack_1->SetBinError(3,0.03182212);
   VbbHcc_algo_H_jetpt_JEC_all_stack_1->SetEntries(2165);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_jetpt_JEC_all_stack_1->SetFillColor(ci);
   VbbHcc_algo_H_jetpt_JEC_all_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_H_jetpt_JEC_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetpt_JEC_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_jetpt_JEC_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_jetpt_JEC_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_jetpt_JEC_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetpt_JEC_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_jetpt_JEC_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_jetpt_JEC_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_jetpt_JEC_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_jetpt_JEC_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetpt_JEC_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_jetpt_JEC_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_jetpt_JEC_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_jetpt_JEC_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_jetpt_JEC_all_stack_2 = new TH1D("VbbHcc_algo_H_jetpt_JEC_all_stack_2","",150,0,300);
   VbbHcc_algo_H_jetpt_JEC_all_stack_2->SetBinContent(0,0.8147277);
   VbbHcc_algo_H_jetpt_JEC_all_stack_2->SetBinContent(1,0.005810123);
   VbbHcc_algo_H_jetpt_JEC_all_stack_2->SetBinContent(2,0.6842729);
   VbbHcc_algo_H_jetpt_JEC_all_stack_2->SetBinContent(3,0.1540143);
   VbbHcc_algo_H_jetpt_JEC_all_stack_2->SetBinError(0,0.01646568);
   VbbHcc_algo_H_jetpt_JEC_all_stack_2->SetBinError(1,0.001391511);
   VbbHcc_algo_H_jetpt_JEC_all_stack_2->SetBinError(2,0.01528604);
   VbbHcc_algo_H_jetpt_JEC_all_stack_2->SetBinError(3,0.007359808);
   VbbHcc_algo_H_jetpt_JEC_all_stack_2->SetEntries(5547);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_jetpt_JEC_all_stack_2->SetFillColor(ci);
   VbbHcc_algo_H_jetpt_JEC_all_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_H_jetpt_JEC_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetpt_JEC_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_jetpt_JEC_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_jetpt_JEC_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_jetpt_JEC_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetpt_JEC_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_jetpt_JEC_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_jetpt_JEC_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_jetpt_JEC_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_jetpt_JEC_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetpt_JEC_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_jetpt_JEC_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_jetpt_JEC_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_jetpt_JEC_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_jetpt_JEC_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_jetpt_JEC_all_stack_1","ZHcc","F");

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
   H_jetpt_JEC_algo_all->Modified();
   H_jetpt_JEC_algo_all->cd();
   H_jetpt_JEC_algo_all->SetSelected(H_jetpt_JEC_algo_all);
}
