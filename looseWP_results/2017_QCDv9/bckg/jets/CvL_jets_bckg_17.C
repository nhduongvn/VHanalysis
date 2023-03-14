#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_bckg_17()
{
//=========Macro generated from canvas: CvL_jets_bckg_17/CvL_jets_bckg_17
//=========  (Fri Mar 10 12:13:58 2023) by ROOT version 6.26/06
   TCanvas *CvL_jets_bckg_17 = new TCanvas("CvL_jets_bckg_17", "CvL_jets_bckg_17",0,0,600,600);
   CvL_jets_bckg_17->SetHighLightColor(2);
   CvL_jets_bckg_17->Range(-0.2183529,-7.573206e+10,1.171633,5.553684e+11);
   CvL_jets_bckg_17->SetFillColor(0);
   CvL_jets_bckg_17->SetFillStyle(4000);
   CvL_jets_bckg_17->SetBorderMode(0);
   CvL_jets_bckg_17->SetBorderSize(2);
   CvL_jets_bckg_17->SetLeftMargin(0.15709);
   CvL_jets_bckg_17->SetRightMargin(0.1234783);
   CvL_jets_bckg_17->SetBottomMargin(0.12);
   CvL_jets_bckg_17->SetFrameFillStyle(1000);
   CvL_jets_bckg_17->SetFrameBorderMode(0);
   CvL_jets_bckg_17->SetFrameFillStyle(1000);
   CvL_jets_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.922584e+11);
   
   TH1F *st_stack_16 = new TH1F("st_stack_16","",20,0,1);
   st_stack_16->SetMinimum(0);
   st_stack_16->SetMaximum(4.922584e+11);
   st_stack_16->SetDirectory(0);
   st_stack_16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_16->SetLineColor(ci);
   st_stack_16->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_16->GetXaxis()->SetRange(1,20);
   st_stack_16->GetXaxis()->SetLabelFont(42);
   st_stack_16->GetXaxis()->SetTitleOffset(1);
   st_stack_16->GetXaxis()->SetTitleFont(42);
   st_stack_16->GetYaxis()->SetTitle("Event/0.05");
   st_stack_16->GetYaxis()->SetLabelFont(42);
   st_stack_16->GetYaxis()->SetTitleSize(0.037);
   st_stack_16->GetYaxis()->SetTitleFont(42);
   st_stack_16->GetZaxis()->SetLabelFont(42);
   st_stack_16->GetZaxis()->SetTitleOffset(1);
   st_stack_16->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_16);
   
   
   TH1D *VbbHcc_jets_CvL_stack_1 = new TH1D("VbbHcc_jets_CvL_stack_1","",20,0,1);
   VbbHcc_jets_CvL_stack_1->SetBinContent(1,4.085546e+11);
   VbbHcc_jets_CvL_stack_1->SetBinContent(2,3.197875e+11);
   VbbHcc_jets_CvL_stack_1->SetBinContent(3,8.377351e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(4,3.330308e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(5,1.756531e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(6,1.126847e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(7,7.875671e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(8,5.756092e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(9,4.597943e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(10,3.889514e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(11,3.401409e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(12,3.039035e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(13,2.820912e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(14,2.757749e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(15,2.873806e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(16,3.121204e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(17,3.49262e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(18,4.30816e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(19,5.818658e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(20,1.706008e+10);
   VbbHcc_jets_CvL_stack_1->SetBinError(1,7.629194e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(2,6.70286e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(3,3.421504e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(4,2.153091e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(5,1.563104e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(6,1.251426e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(7,1.046412e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(8,8939384);
   VbbHcc_jets_CvL_stack_1->SetBinError(9,7995788);
   VbbHcc_jets_CvL_stack_1->SetBinError(10,7352876);
   VbbHcc_jets_CvL_stack_1->SetBinError(11,6865692);
   VbbHcc_jets_CvL_stack_1->SetBinError(12,6487363);
   VbbHcc_jets_CvL_stack_1->SetBinError(13,6241071);
   VbbHcc_jets_CvL_stack_1->SetBinError(14,6172990);
   VbbHcc_jets_CvL_stack_1->SetBinError(15,6298696);
   VbbHcc_jets_CvL_stack_1->SetBinError(16,6557875);
   VbbHcc_jets_CvL_stack_1->SetBinError(17,6923425);
   VbbHcc_jets_CvL_stack_1->SetBinError(18,7680697);
   VbbHcc_jets_CvL_stack_1->SetBinError(19,8901836);
   VbbHcc_jets_CvL_stack_1->SetBinError(20,1.532217e+07);
   VbbHcc_jets_CvL_stack_1->SetEntries(6.274349e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_CvL_stack_1->SetFillColor(ci);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvL_stack_1,"");
   
   TH1D *VbbHcc_jets_CvL_stack_2 = new TH1D("VbbHcc_jets_CvL_stack_2","",20,0,1);
   VbbHcc_jets_CvL_stack_2->SetBinContent(1,1.989181e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(2,2.370015e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(3,8457495);
   VbbHcc_jets_CvL_stack_2->SetBinContent(4,4122315);
   VbbHcc_jets_CvL_stack_2->SetBinContent(5,2589536);
   VbbHcc_jets_CvL_stack_2->SetBinContent(6,1986694);
   VbbHcc_jets_CvL_stack_2->SetBinContent(7,1654998);
   VbbHcc_jets_CvL_stack_2->SetBinContent(8,1447528);
   VbbHcc_jets_CvL_stack_2->SetBinContent(9,1356300);
   VbbHcc_jets_CvL_stack_2->SetBinContent(10,1343744);
   VbbHcc_jets_CvL_stack_2->SetBinContent(11,1381359);
   VbbHcc_jets_CvL_stack_2->SetBinContent(12,1449593);
   VbbHcc_jets_CvL_stack_2->SetBinContent(13,1599706);
   VbbHcc_jets_CvL_stack_2->SetBinContent(14,1812190);
   VbbHcc_jets_CvL_stack_2->SetBinContent(15,2142198);
   VbbHcc_jets_CvL_stack_2->SetBinContent(16,2635577);
   VbbHcc_jets_CvL_stack_2->SetBinContent(17,3312829);
   VbbHcc_jets_CvL_stack_2->SetBinContent(18,4468308);
   VbbHcc_jets_CvL_stack_2->SetBinContent(19,6354740);
   VbbHcc_jets_CvL_stack_2->SetBinContent(20,1.434592e+07);
   VbbHcc_jets_CvL_stack_2->SetBinError(1,1177.604);
   VbbHcc_jets_CvL_stack_2->SetBinError(2,1290.209);
   VbbHcc_jets_CvL_stack_2->SetBinError(3,768.8323);
   VbbHcc_jets_CvL_stack_2->SetBinError(4,535.3159);
   VbbHcc_jets_CvL_stack_2->SetBinError(5,422.7728);
   VbbHcc_jets_CvL_stack_2->SetBinError(6,369.133);
   VbbHcc_jets_CvL_stack_2->SetBinError(7,336.032);
   VbbHcc_jets_CvL_stack_2->SetBinError(8,313.5925);
   VbbHcc_jets_CvL_stack_2->SetBinError(9,303.0336);
   VbbHcc_jets_CvL_stack_2->SetBinError(10,301.1678);
   VbbHcc_jets_CvL_stack_2->SetBinError(11,304.8754);
   VbbHcc_jets_CvL_stack_2->SetBinError(12,311.818);
   VbbHcc_jets_CvL_stack_2->SetBinError(13,326.9756);
   VbbHcc_jets_CvL_stack_2->SetBinError(14,347.5894);
   VbbHcc_jets_CvL_stack_2->SetBinError(15,377.4935);
   VbbHcc_jets_CvL_stack_2->SetBinError(16,418.3397);
   VbbHcc_jets_CvL_stack_2->SetBinError(17,468.6246);
   VbbHcc_jets_CvL_stack_2->SetBinError(18,543.8831);
   VbbHcc_jets_CvL_stack_2->SetBinError(19,648.4655);
   VbbHcc_jets_CvL_stack_2->SetBinError(20,978.2431);
   VbbHcc_jets_CvL_stack_2->SetEntries(1.745238e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_CvL_stack_2->SetFillColor(ci);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CvL_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_CvL_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_jets_bckg_17->Modified();
   CvL_jets_bckg_17->cd();
   CvL_jets_bckg_17->SetSelected(CvL_jets_bckg_17);
}
