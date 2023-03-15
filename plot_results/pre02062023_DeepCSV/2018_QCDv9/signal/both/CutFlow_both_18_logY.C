#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_both_18_logY()
{
//=========Macro generated from canvas: CutFlow_both_18/CutFlow_both_18
//=========  (Thu Dec 15 14:28:58 2022) by ROOT version 6.26/06
   TCanvas *CutFlow_both_18 = new TCanvas("CutFlow_both_18", "CutFlow_both_18",0,0,600,600);
   CutFlow_both_18->SetHighLightColor(2);
   CutFlow_both_18->Range(-1.091764,-0.2257374,5.858166,5.962305);
   CutFlow_both_18->SetFillColor(0);
   CutFlow_both_18->SetFillStyle(4000);
   CutFlow_both_18->SetBorderMode(0);
   CutFlow_both_18->SetBorderSize(2);
   CutFlow_both_18->SetLogy();
   CutFlow_both_18->SetLeftMargin(0.15709);
   CutFlow_both_18->SetRightMargin(0.1234783);
   CutFlow_both_18->SetBottomMargin(0.12);
   CutFlow_both_18->SetFrameFillStyle(1000);
   CutFlow_both_18->SetFrameBorderMode(0);
   CutFlow_both_18->SetFrameFillStyle(1000);
   CutFlow_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(121390.4);
   
   TH1F *st_stack_91 = new TH1F("st_stack_91","",4,0,4);
   st_stack_91->SetMinimum(3.287211);
   st_stack_91->SetMaximum(220546.6);
   st_stack_91->SetDirectory(0);
   st_stack_91->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_91->SetLineColor(ci);
   st_stack_91->GetXaxis()->SetTitle(""Cut flow"");
   st_stack_91->GetXaxis()->SetBinLabel(1,"Total");
   st_stack_91->GetXaxis()->SetBinLabel(2,"MET cut");
   st_stack_91->GetXaxis()->SetBinLabel(3,"jet cuts");
   st_stack_91->GetXaxis()->SetBinLabel(4,"tags cut");
   st_stack_91->GetXaxis()->SetRange(1,5);
   st_stack_91->GetXaxis()->SetLabelFont(42);
   st_stack_91->GetXaxis()->SetTitleOffset(1);
   st_stack_91->GetXaxis()->SetTitleFont(42);
   st_stack_91->GetYaxis()->SetTitle("Events/1.0");
   st_stack_91->GetYaxis()->SetLabelFont(42);
   st_stack_91->GetYaxis()->SetTitleSize(0.037);
   st_stack_91->GetYaxis()->SetTitleFont(42);
   st_stack_91->GetZaxis()->SetLabelFont(42);
   st_stack_91->GetZaxis()->SetTitleOffset(1);
   st_stack_91->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_91);
   
   
   TH1D *VbbHcc_both_CutFlow_stack_1 = new TH1D("VbbHcc_both_CutFlow_stack_1","",4,0,4);
   VbbHcc_both_CutFlow_stack_1->SetBinContent(1,1065.823);
   VbbHcc_both_CutFlow_stack_1->SetBinContent(2,1064.704);
   VbbHcc_both_CutFlow_stack_1->SetBinContent(3,374.8702);
   VbbHcc_both_CutFlow_stack_1->SetBinContent(4,15.26256);
   VbbHcc_both_CutFlow_stack_1->SetBinError(1,1.622075);
   VbbHcc_both_CutFlow_stack_1->SetBinError(2,1.621259);
   VbbHcc_both_CutFlow_stack_1->SetBinError(3,0.9449904);
   VbbHcc_both_CutFlow_stack_1->SetBinError(4,0.1907613);
   VbbHcc_both_CutFlow_stack_1->SetEntries(1146475);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_CutFlow_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_stack_1->SetLineColor(ci);
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_1,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_2 = new TH1D("VbbHcc_both_CutFlow_stack_2","",4,0,4);
   VbbHcc_both_CutFlow_stack_2->SetBinContent(1,148.0808);
   VbbHcc_both_CutFlow_stack_2->SetBinContent(2,147.6128);
   VbbHcc_both_CutFlow_stack_2->SetBinContent(3,96.6851);
   VbbHcc_both_CutFlow_stack_2->SetBinContent(4,4.901499);
   VbbHcc_both_CutFlow_stack_2->SetBinError(1,0.2257424);
   VbbHcc_both_CutFlow_stack_2->SetBinError(2,0.2253853);
   VbbHcc_both_CutFlow_stack_2->SetBinError(3,0.1824078);
   VbbHcc_both_CutFlow_stack_2->SetBinError(4,0.04107033);
   VbbHcc_both_CutFlow_stack_2->SetEntries(1154435);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_CutFlow_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_stack_2->SetLineColor(ci);
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_1","ZHcc","F");

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
   CutFlow_both_18->Modified();
   CutFlow_both_18->cd();
   CutFlow_both_18->SetSelected(CutFlow_both_18);
}
