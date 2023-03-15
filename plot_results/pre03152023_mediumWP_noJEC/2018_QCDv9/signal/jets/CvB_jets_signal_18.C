#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_signal_18()
{
//=========Macro generated from canvas: CvB_jets_signal_18/CvB_jets_signal_18
//=========  (Thu Mar  9 13:30:49 2023) by ROOT version 6.26/06
   TCanvas *CvB_jets_signal_18 = new TCanvas("CvB_jets_signal_18", "CvB_jets_signal_18",0,0,600,600);
   CvB_jets_signal_18->SetHighLightColor(2);
   CvB_jets_signal_18->Range(-0.2183529,-136.677,1.171633,1002.298);
   CvB_jets_signal_18->SetFillColor(0);
   CvB_jets_signal_18->SetFillStyle(4000);
   CvB_jets_signal_18->SetBorderMode(0);
   CvB_jets_signal_18->SetBorderSize(2);
   CvB_jets_signal_18->SetLeftMargin(0.15709);
   CvB_jets_signal_18->SetRightMargin(0.1234783);
   CvB_jets_signal_18->SetBottomMargin(0.12);
   CvB_jets_signal_18->SetFrameFillStyle(1000);
   CvB_jets_signal_18->SetFrameBorderMode(0);
   CvB_jets_signal_18->SetFrameFillStyle(1000);
   CvB_jets_signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(888.4003);
   
   TH1F *st_stack_23 = new TH1F("st_stack_23","",20,0,1);
   st_stack_23->SetMinimum(0);
   st_stack_23->SetMaximum(888.4003);
   st_stack_23->SetDirectory(0);
   st_stack_23->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_23->SetLineColor(ci);
   st_stack_23->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_23->GetXaxis()->SetRange(1,20);
   st_stack_23->GetXaxis()->SetLabelFont(42);
   st_stack_23->GetXaxis()->SetTitleOffset(1);
   st_stack_23->GetXaxis()->SetTitleFont(42);
   st_stack_23->GetYaxis()->SetTitle("Event/0.05");
   st_stack_23->GetYaxis()->SetLabelFont(42);
   st_stack_23->GetYaxis()->SetTitleSize(0.037);
   st_stack_23->GetYaxis()->SetTitleFont(42);
   st_stack_23->GetZaxis()->SetLabelFont(42);
   st_stack_23->GetZaxis()->SetTitleOffset(1);
   st_stack_23->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_23);
   
   
   TH1D *VbbHcc_jets_CvB_stack_1 = new TH1D("VbbHcc_jets_CvB_stack_1","",20,0,1);
   VbbHcc_jets_CvB_stack_1->SetBinContent(1,105.9961);
   VbbHcc_jets_CvB_stack_1->SetBinContent(2,20.95931);
   VbbHcc_jets_CvB_stack_1->SetBinContent(3,16.33839);
   VbbHcc_jets_CvB_stack_1->SetBinContent(4,17.24462);
   VbbHcc_jets_CvB_stack_1->SetBinContent(5,18.85005);
   VbbHcc_jets_CvB_stack_1->SetBinContent(6,20.73491);
   VbbHcc_jets_CvB_stack_1->SetBinContent(7,22.64988);
   VbbHcc_jets_CvB_stack_1->SetBinContent(8,25.92774);
   VbbHcc_jets_CvB_stack_1->SetBinContent(9,32.40551);
   VbbHcc_jets_CvB_stack_1->SetBinContent(10,39.24456);
   VbbHcc_jets_CvB_stack_1->SetBinContent(11,46.01679);
   VbbHcc_jets_CvB_stack_1->SetBinContent(12,57.34649);
   VbbHcc_jets_CvB_stack_1->SetBinContent(13,76.80244);
   VbbHcc_jets_CvB_stack_1->SetBinContent(14,101.9456);
   VbbHcc_jets_CvB_stack_1->SetBinContent(15,139.9834);
   VbbHcc_jets_CvB_stack_1->SetBinContent(16,202.5357);
   VbbHcc_jets_CvB_stack_1->SetBinContent(17,313.9302);
   VbbHcc_jets_CvB_stack_1->SetBinContent(18,534.1544);
   VbbHcc_jets_CvB_stack_1->SetBinContent(19,609.3327);
   VbbHcc_jets_CvB_stack_1->SetBinContent(20,131.3212);
   VbbHcc_jets_CvB_stack_1->SetBinError(1,0.5917092);
   VbbHcc_jets_CvB_stack_1->SetBinError(2,0.2494449);
   VbbHcc_jets_CvB_stack_1->SetBinError(3,0.217076);
   VbbHcc_jets_CvB_stack_1->SetBinError(4,0.225387);
   VbbHcc_jets_CvB_stack_1->SetBinError(5,0.2331757);
   VbbHcc_jets_CvB_stack_1->SetBinError(6,0.2479736);
   VbbHcc_jets_CvB_stack_1->SetBinError(7,0.2604358);
   VbbHcc_jets_CvB_stack_1->SetBinError(8,0.2802381);
   VbbHcc_jets_CvB_stack_1->SetBinError(9,0.3200218);
   VbbHcc_jets_CvB_stack_1->SetBinError(10,0.3797746);
   VbbHcc_jets_CvB_stack_1->SetBinError(11,0.3711226);
   VbbHcc_jets_CvB_stack_1->SetBinError(12,0.4384686);
   VbbHcc_jets_CvB_stack_1->SetBinError(13,0.4902568);
   VbbHcc_jets_CvB_stack_1->SetBinError(14,0.6033844);
   VbbHcc_jets_CvB_stack_1->SetBinError(15,0.6631381);
   VbbHcc_jets_CvB_stack_1->SetBinError(16,0.8057375);
   VbbHcc_jets_CvB_stack_1->SetBinError(17,0.9941201);
   VbbHcc_jets_CvB_stack_1->SetBinError(18,1.32341);
   VbbHcc_jets_CvB_stack_1->SetBinError(19,1.418442);
   VbbHcc_jets_CvB_stack_1->SetBinError(20,0.6585859);
   VbbHcc_jets_CvB_stack_1->SetEntries(1022565);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_CvB_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvB_stack_1->SetLineColor(ci);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvB_stack_1,"");
   
   TH1D *VbbHcc_jets_CvB_stack_2 = new TH1D("VbbHcc_jets_CvB_stack_2","",20,0,1);
   VbbHcc_jets_CvB_stack_2->SetBinContent(1,25.05245);
   VbbHcc_jets_CvB_stack_2->SetBinContent(2,4.516248);
   VbbHcc_jets_CvB_stack_2->SetBinContent(3,3.480375);
   VbbHcc_jets_CvB_stack_2->SetBinContent(4,3.55246);
   VbbHcc_jets_CvB_stack_2->SetBinContent(5,3.706636);
   VbbHcc_jets_CvB_stack_2->SetBinContent(6,3.93723);
   VbbHcc_jets_CvB_stack_2->SetBinContent(7,4.394104);
   VbbHcc_jets_CvB_stack_2->SetBinContent(8,5.000206);
   VbbHcc_jets_CvB_stack_2->SetBinContent(9,6.07919);
   VbbHcc_jets_CvB_stack_2->SetBinContent(10,7.434071);
   VbbHcc_jets_CvB_stack_2->SetBinContent(11,8.826619);
   VbbHcc_jets_CvB_stack_2->SetBinContent(12,10.8457);
   VbbHcc_jets_CvB_stack_2->SetBinContent(13,14.72667);
   VbbHcc_jets_CvB_stack_2->SetBinContent(14,19.52037);
   VbbHcc_jets_CvB_stack_2->SetBinContent(15,27.47678);
   VbbHcc_jets_CvB_stack_2->SetBinContent(16,40.16752);
   VbbHcc_jets_CvB_stack_2->SetBinContent(17,65.57117);
   VbbHcc_jets_CvB_stack_2->SetBinContent(18,118.2787);
   VbbHcc_jets_CvB_stack_2->SetBinContent(19,128.0395);
   VbbHcc_jets_CvB_stack_2->SetBinContent(20,30.77519);
   VbbHcc_jets_CvB_stack_2->SetBinError(1,0.1027108);
   VbbHcc_jets_CvB_stack_2->SetBinError(2,0.04473427);
   VbbHcc_jets_CvB_stack_2->SetBinError(3,0.03918268);
   VbbHcc_jets_CvB_stack_2->SetBinError(4,0.03625693);
   VbbHcc_jets_CvB_stack_2->SetBinError(5,0.03732182);
   VbbHcc_jets_CvB_stack_2->SetBinError(6,0.04077735);
   VbbHcc_jets_CvB_stack_2->SetBinError(7,0.04116136);
   VbbHcc_jets_CvB_stack_2->SetBinError(8,0.04391868);
   VbbHcc_jets_CvB_stack_2->SetBinError(9,0.04728183);
   VbbHcc_jets_CvB_stack_2->SetBinError(10,0.05521239);
   VbbHcc_jets_CvB_stack_2->SetBinError(11,0.05722184);
   VbbHcc_jets_CvB_stack_2->SetBinError(12,0.06780441);
   VbbHcc_jets_CvB_stack_2->SetBinError(13,0.07555039);
   VbbHcc_jets_CvB_stack_2->SetBinError(14,0.08900052);
   VbbHcc_jets_CvB_stack_2->SetBinError(15,0.1032569);
   VbbHcc_jets_CvB_stack_2->SetBinError(16,0.1261638);
   VbbHcc_jets_CvB_stack_2->SetBinError(17,0.1582802);
   VbbHcc_jets_CvB_stack_2->SetBinError(18,0.2167404);
   VbbHcc_jets_CvB_stack_2->SetBinError(19,0.2280793);
   VbbHcc_jets_CvB_stack_2->SetBinError(20,0.1138347);
   VbbHcc_jets_CvB_stack_2->SetEntries(1558638);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_CvB_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvB_stack_2->SetLineColor(ci);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CvB_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_CvB_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_jets_signal_18->Modified();
   CvB_jets_signal_18->cd();
   CvB_jets_signal_18->SetSelected(CvB_jets_signal_18);
}
