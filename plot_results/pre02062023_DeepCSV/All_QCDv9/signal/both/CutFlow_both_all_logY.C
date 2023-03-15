#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_both_all_logY()
{
//=========Macro generated from canvas: CutFlow_both_all/CutFlow_both_all
//=========  (Thu Dec 15 14:28:58 2022) by ROOT version 6.26/06
   TCanvas *CutFlow_both_all = new TCanvas("CutFlow_both_all", "CutFlow_both_all",0,0,600,600);
   CutFlow_both_all->SetHighLightColor(2);
   CutFlow_both_all->Range(-1.091764,-1.505735,5.858166,6.571494);
   CutFlow_both_all->SetFillColor(0);
   CutFlow_both_all->SetFillStyle(4000);
   CutFlow_both_all->SetBorderMode(0);
   CutFlow_both_all->SetBorderSize(2);
   CutFlow_both_all->SetLogy();
   CutFlow_both_all->SetLeftMargin(0.15709);
   CutFlow_both_all->SetRightMargin(0.1234783);
   CutFlow_both_all->SetBottomMargin(0.12);
   CutFlow_both_all->SetFrameFillStyle(1000);
   CutFlow_both_all->SetFrameBorderMode(0);
   CutFlow_both_all->SetFrameFillStyle(1000);
   CutFlow_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1.077653);
   st->SetMaximum(278726.3);
   
   TH1F *st_stack_92 = new TH1F("st_stack_92","",4,0,4);
   st_stack_92->SetMinimum(0.2907585);
   st_stack_92->SetMaximum(580458.7);
   st_stack_92->SetDirectory(0);
   st_stack_92->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_92->SetLineColor(ci);
   st_stack_92->GetXaxis()->SetTitle(""Cut flow"");
   st_stack_92->GetXaxis()->SetBinLabel(1,"Total");
   st_stack_92->GetXaxis()->SetBinLabel(2,"MET cut");
   st_stack_92->GetXaxis()->SetBinLabel(3,"jet cuts");
   st_stack_92->GetXaxis()->SetBinLabel(4,"tags cut");
   st_stack_92->GetXaxis()->SetRange(1,5);
   st_stack_92->GetXaxis()->SetLabelFont(42);
   st_stack_92->GetXaxis()->SetTitleOffset(1);
   st_stack_92->GetXaxis()->SetTitleFont(42);
   st_stack_92->GetYaxis()->SetTitle("Events/1.0");
   st_stack_92->GetYaxis()->SetLabelFont(42);
   st_stack_92->GetYaxis()->SetTitleSize(0.037);
   st_stack_92->GetYaxis()->SetTitleFont(42);
   st_stack_92->GetZaxis()->SetLabelFont(42);
   st_stack_92->GetZaxis()->SetTitleOffset(1);
   st_stack_92->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_92);
   
   
   TH1D *VbbHcc_both_CutFlow_all_stack_1 = new TH1D("VbbHcc_both_CutFlow_all_stack_1","",4,0,4);
   VbbHcc_both_CutFlow_all_stack_1->SetBinContent(1,2447.253);
   VbbHcc_both_CutFlow_all_stack_1->SetBinContent(2,2444.728);
   VbbHcc_both_CutFlow_all_stack_1->SetBinContent(3,855.7293);
   VbbHcc_both_CutFlow_all_stack_1->SetBinContent(4,34.47012);
   VbbHcc_both_CutFlow_all_stack_1->SetBinError(1,2.204878);
   VbbHcc_both_CutFlow_all_stack_1->SetBinError(2,2.20377);
   VbbHcc_both_CutFlow_all_stack_1->SetBinError(3,1.281492);
   VbbHcc_both_CutFlow_all_stack_1->SetBinError(4,0.25794);
   VbbHcc_both_CutFlow_all_stack_1->SetEntries(3421004);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_CutFlow_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_all_stack_1->SetLineColor(ci);
   VbbHcc_both_CutFlow_all_stack_1->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_all_stack_1->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_all_stack_1->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_all_stack_1->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_all_stack_1->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_all_stack_1,"");
   
   TH1D *VbbHcc_both_CutFlow_all_stack_2 = new TH1D("VbbHcc_both_CutFlow_all_stack_2","",4,0,4);
   VbbHcc_both_CutFlow_all_stack_2->SetBinContent(1,340.0105);
   VbbHcc_both_CutFlow_all_stack_2->SetBinContent(2,339.0681);
   VbbHcc_both_CutFlow_all_stack_2->SetBinContent(3,221.9233);
   VbbHcc_both_CutFlow_all_stack_2->SetBinContent(4,11.18082);
   VbbHcc_both_CutFlow_all_stack_2->SetBinError(1,0.2995158);
   VbbHcc_both_CutFlow_all_stack_2->SetBinError(2,0.2990875);
   VbbHcc_both_CutFlow_all_stack_2->SetBinError(3,0.241895);
   VbbHcc_both_CutFlow_all_stack_2->SetBinError(4,0.05434243);
   VbbHcc_both_CutFlow_all_stack_2->SetEntries(3732382);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_CutFlow_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_all_stack_2->SetLineColor(ci);
   VbbHcc_both_CutFlow_all_stack_2->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_all_stack_2->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_all_stack_2->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_all_stack_2->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_all_stack_2->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_CutFlow_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_CutFlow_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_both_all->Modified();
   CutFlow_both_all->cd();
   CutFlow_both_all->SetSelected(CutFlow_both_all);
}
