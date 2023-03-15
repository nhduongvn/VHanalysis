#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_all_bckg_18()
{
//=========Macro generated from canvas: CvB_jets_all_bckg_18/CvB_jets_all_bckg_18
//=========  (Fri Mar 10 12:14:02 2023) by ROOT version 6.26/06
   TCanvas *CvB_jets_all_bckg_18 = new TCanvas("CvB_jets_all_bckg_18", "CvB_jets_all_bckg_18",0,0,600,600);
   CvB_jets_all_bckg_18->SetHighLightColor(2);
   CvB_jets_all_bckg_18->Range(-0.2183529,-2.904654e+11,1.171633,2.130079e+12);
   CvB_jets_all_bckg_18->SetFillColor(0);
   CvB_jets_all_bckg_18->SetFillStyle(4000);
   CvB_jets_all_bckg_18->SetBorderMode(0);
   CvB_jets_all_bckg_18->SetBorderSize(2);
   CvB_jets_all_bckg_18->SetLeftMargin(0.15709);
   CvB_jets_all_bckg_18->SetRightMargin(0.1234783);
   CvB_jets_all_bckg_18->SetBottomMargin(0.12);
   CvB_jets_all_bckg_18->SetFrameFillStyle(1000);
   CvB_jets_all_bckg_18->SetFrameBorderMode(0);
   CvB_jets_all_bckg_18->SetFrameFillStyle(1000);
   CvB_jets_all_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.888025e+12);
   
   TH1F *st_stack_180 = new TH1F("st_stack_180","",20,0,1);
   st_stack_180->SetMinimum(0);
   st_stack_180->SetMaximum(1.888025e+12);
   st_stack_180->SetDirectory(0);
   st_stack_180->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_180->SetLineColor(ci);
   st_stack_180->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_180->GetXaxis()->SetRange(1,20);
   st_stack_180->GetXaxis()->SetLabelFont(42);
   st_stack_180->GetXaxis()->SetTitleOffset(1);
   st_stack_180->GetXaxis()->SetTitleFont(42);
   st_stack_180->GetYaxis()->SetTitle("Event/0.05");
   st_stack_180->GetYaxis()->SetLabelFont(42);
   st_stack_180->GetYaxis()->SetTitleSize(0.037);
   st_stack_180->GetYaxis()->SetTitleFont(42);
   st_stack_180->GetZaxis()->SetLabelFont(42);
   st_stack_180->GetZaxis()->SetTitleOffset(1);
   st_stack_180->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_180);
   
   
   TH1D *VbbHcc_jets_all_CvB_stack_1 = new TH1D("VbbHcc_jets_all_CvB_stack_1","",20,0,1);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(1,5.404979e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(2,1.634953e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(3,1.553958e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(4,1.90402e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(5,2.630179e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(6,3.871773e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(7,5.720376e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(8,8.398125e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(9,1.299058e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(10,2.292403e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(11,4.538668e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(12,1.474136e+12);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(13,1.567014e+12);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(14,1.022031e+12);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(15,8.964965e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(16,9.716965e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(17,1.173996e+12);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(18,1.211689e+12);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(19,5.556083e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(20,3.24995e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(1,3.876558e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(2,2.106317e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(3,2.029233e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(4,2.236535e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(5,2.644405e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(6,3.177062e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(7,3.867191e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(8,4.676124e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(9,5.797555e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(10,7.631698e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(11,1.071027e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(12,1.915882e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(13,1.977202e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(14,1.627575e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(15,1.56885e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(16,1.646431e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(17,1.819146e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(18,1.835591e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(19,1.24291e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(20,2.901195e+07);
   VbbHcc_jets_all_CvB_stack_1->SetEntries(1.885636e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_CvB_stack_1->SetFillColor(ci);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CvB_stack_2 = new TH1D("VbbHcc_jets_all_CvB_stack_2","",20,0,1);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(1,4.15683e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(2,7160991);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(3,4989478);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(4,4708769);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(5,4767413);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(6,4794261);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(7,5203984);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(8,6166325);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(9,8020985);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(10,1.069584e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(11,1.661481e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(12,4.231618e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(13,4.633059e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(14,3.482487e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(15,3.378645e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(16,3.687373e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(17,4.385204e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(18,4.732585e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(19,3.581193e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(20,5135515);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(1,1796.457);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(2,742.1813);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(3,618.0996);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(4,599.0834);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(5,598.8834);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(6,599.3045);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(7,622.7306);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(8,674.7131);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(9,762.3591);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(10,874.3539);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(11,1082.04);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(12,1698.185);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(13,1781.598);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(14,1580.97);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(15,1596.08);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(16,1694.862);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(17,1862.167);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(18,1966.356);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(19,1743.312);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(20,662.1946);
   VbbHcc_jets_all_CvB_stack_2->SetEntries(7.353928e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_CvB_stack_2->SetFillColor(ci);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_jets_all_bckg_18->Modified();
   CvB_jets_all_bckg_18->cd();
   CvB_jets_all_bckg_18->SetSelected(CvB_jets_all_bckg_18);
}
