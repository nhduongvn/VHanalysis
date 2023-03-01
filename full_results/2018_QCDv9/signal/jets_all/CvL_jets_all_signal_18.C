#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_all_signal_18()
{
//=========Macro generated from canvas: CvL_jets_all_signal_18/CvL_jets_all_signal_18
//=========  (Wed Mar  1 14:06:15 2023) by ROOT version 6.26/06
   TCanvas *CvL_jets_all_signal_18 = new TCanvas("CvL_jets_all_signal_18", "CvL_jets_all_signal_18",0,0,600,600);
   CvL_jets_all_signal_18->SetHighLightColor(2);
   CvL_jets_all_signal_18->Range(-0.2183529,-1020.899,1.171633,7486.593);
   CvL_jets_all_signal_18->SetFillColor(0);
   CvL_jets_all_signal_18->SetFillStyle(4000);
   CvL_jets_all_signal_18->SetBorderMode(0);
   CvL_jets_all_signal_18->SetBorderSize(2);
   CvL_jets_all_signal_18->SetLeftMargin(0.15709);
   CvL_jets_all_signal_18->SetRightMargin(0.1234783);
   CvL_jets_all_signal_18->SetBottomMargin(0.12);
   CvL_jets_all_signal_18->SetFrameFillStyle(1000);
   CvL_jets_all_signal_18->SetFrameBorderMode(0);
   CvL_jets_all_signal_18->SetFrameFillStyle(1000);
   CvL_jets_all_signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(6635.843);
   
   TH1F *st_stack_173 = new TH1F("st_stack_173","",20,0,1);
   st_stack_173->SetMinimum(0);
   st_stack_173->SetMaximum(6635.843);
   st_stack_173->SetDirectory(0);
   st_stack_173->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_173->SetLineColor(ci);
   st_stack_173->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_173->GetXaxis()->SetRange(1,20);
   st_stack_173->GetXaxis()->SetLabelFont(42);
   st_stack_173->GetXaxis()->SetTitleOffset(1);
   st_stack_173->GetXaxis()->SetTitleFont(42);
   st_stack_173->GetYaxis()->SetTitle("Events/0.05");
   st_stack_173->GetYaxis()->SetLabelFont(42);
   st_stack_173->GetYaxis()->SetTitleSize(0.037);
   st_stack_173->GetYaxis()->SetTitleFont(42);
   st_stack_173->GetZaxis()->SetLabelFont(42);
   st_stack_173->GetZaxis()->SetTitleOffset(1);
   st_stack_173->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_173);
   
   
   TH1D *VbbHcc_jets_all_CvL_stack_1 = new TH1D("VbbHcc_jets_all_CvL_stack_1","",20,0,1);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(1,860.8616);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(2,3854.692);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(3,1118.801);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(4,382.7004);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(5,211.4015);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(6,146.052);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(7,109.2633);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(8,89.10172);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(9,77.38225);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(10,70.84248);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(11,66.70951);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(12,62.41043);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(13,61.48718);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(14,61.39862);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(15,65.2983);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(16,71.04149);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(17,78.10077);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(18,93.97628);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(19,122.6138);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(20,402.2773);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(1,1.689231);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(2,3.442702);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(3,1.84824);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(4,1.089044);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(5,0.8038254);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(6,0.6671951);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(7,0.5933588);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(8,0.5438188);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(9,0.486554);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(10,0.4698707);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(11,0.458072);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(12,0.4427573);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(13,0.4454646);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(14,0.4408418);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(15,0.457165);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(16,0.5048363);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(17,0.5154561);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(18,0.5507299);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(19,0.6343919);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(20,1.142062);
   VbbHcc_jets_all_CvL_stack_1->SetEntries(3350955);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_CvL_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvL_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvL_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CvL_stack_2 = new TH1D("VbbHcc_jets_all_CvL_stack_2","",20,0,1);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(1,165.1207);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(2,569.2032);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(3,165.8631);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(4,58.36534);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(5,32.13809);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(6,22.15755);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(7,16.82152);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(8,13.7896);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(9,12.04813);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(10,11.289);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(11,10.57483);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(12,10.13727);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(13,10.00554);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(14,10.1612);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(15,10.88113);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(16,11.96924);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(17,13.37482);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(18,16.5369);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(19,21.52973);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(20,71.66779);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(1,0.2595266);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(2,0.4631658);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(3,0.251421);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(4,0.1495508);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(5,0.1122345);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(6,0.09381385);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(7,0.08129052);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(8,0.07770633);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(9,0.06971936);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(10,0.06916584);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(11,0.06471628);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(12,0.06246308);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(13,0.06487293);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(14,0.06364916);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(15,0.06811094);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(16,0.06966098);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(17,0.0729268);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(18,0.0819724);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(19,0.09247983);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(20,0.1720681);
   VbbHcc_jets_all_CvL_stack_2->SetEntries(3757140);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_CvL_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvL_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvL_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CvL_stack_1","ZHcc","F");

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
   CvL_jets_all_signal_18->Modified();
   CvL_jets_all_signal_18->cd();
   CvL_jets_all_signal_18->SetSelected(CvL_jets_all_signal_18);
}
