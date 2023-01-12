#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_all_18_logY()
{
//=========Macro generated from canvas: CvL_jets_all_18/CvL_jets_all_18
//=========  (Mon Dec 19 11:03:34 2022) by ROOT version 6.26/06
   TCanvas *CvL_jets_all_18 = new TCanvas("CvL_jets_all_18", "CvL_jets_all_18",0,0,600,600);
   CvL_jets_all_18->SetHighLightColor(2);
   CvL_jets_all_18->Range(-0.2183529,-0.3667585,1.171633,6.662258);
   CvL_jets_all_18->SetFillColor(0);
   CvL_jets_all_18->SetFillStyle(4000);
   CvL_jets_all_18->SetBorderMode(0);
   CvL_jets_all_18->SetBorderSize(2);
   CvL_jets_all_18->SetLogy();
   CvL_jets_all_18->SetLeftMargin(0.15709);
   CvL_jets_all_18->SetRightMargin(0.1234783);
   CvL_jets_all_18->SetBottomMargin(0.12);
   CvL_jets_all_18->SetFrameFillStyle(1000);
   CvL_jets_all_18->SetFrameBorderMode(0);
   CvL_jets_all_18->SetFrameFillStyle(1000);
   CvL_jets_all_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(470733.9);
   
   TH1F *st_stack_115 = new TH1F("st_stack_115","",20,0,1);
   st_stack_115->SetMinimum(2.997254);
   st_stack_115->SetMaximum(910660.6);
   st_stack_115->SetDirectory(0);
   st_stack_115->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_115->SetLineColor(ci);
   st_stack_115->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_115->GetXaxis()->SetRange(1,20);
   st_stack_115->GetXaxis()->SetLabelFont(42);
   st_stack_115->GetXaxis()->SetTitleOffset(1);
   st_stack_115->GetXaxis()->SetTitleFont(42);
   st_stack_115->GetYaxis()->SetTitle("Events/0.05");
   st_stack_115->GetYaxis()->SetLabelFont(42);
   st_stack_115->GetYaxis()->SetTitleSize(0.037);
   st_stack_115->GetYaxis()->SetTitleFont(42);
   st_stack_115->GetZaxis()->SetLabelFont(42);
   st_stack_115->GetZaxis()->SetTitleOffset(1);
   st_stack_115->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_115);
   
   
   TH1D *VbbHcc_jets_all_CvL_stack_1 = new TH1D("VbbHcc_jets_all_CvL_stack_1","",20,0,1);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(1,945.8571);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(2,4104.099);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(3,1081.832);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(4,363.9998);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(5,211.1471);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(6,143.1791);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(7,109.9441);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(8,88.28738);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(9,78.11967);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(10,68.43691);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(11,61.41502);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(12,53.326);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(13,51.69973);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(14,46.01831);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(15,43.18351);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(16,39.18054);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(17,38.7564);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(18,37.56087);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(19,36.96352);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(20,10.14927);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(1,1.607126);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(2,3.2965);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(3,1.698197);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(4,0.9940545);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(5,0.7585999);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(6,0.6259233);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(7,0.5490948);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(8,0.4925922);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(9,0.46324);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(10,0.4341986);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(11,0.4109531);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(12,0.3814451);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(13,0.378407);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(14,0.3559355);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(15,0.344855);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(16,0.3305553);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(17,0.3260557);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(18,0.3223131);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(19,0.3193455);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(20,0.1668755);
   VbbHcc_jets_all_CvL_stack_1->SetEntries(3595990);

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
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(1,180.665);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(2,603.2393);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(3,159.7395);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(4,55.18851);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(5,32.48467);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(6,22.55891);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(7,17.5875);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(8,14.133);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(9,12.95676);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(10,11.31456);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(11,10.27043);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(12,9.16292);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(13,8.808622);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(14,8.075729);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(15,7.753376);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(16,7.240617);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(17,7.008105);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(18,7.24666);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(19,7.804603);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(20,2.552588);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(1,0.2651856);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(2,0.4735725);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(3,0.2448054);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(4,0.145555);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(5,0.1113557);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(6,0.09306181);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(7,0.08239735);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(8,0.07384328);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(9,0.07056689);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(10,0.06604748);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(11,0.06308269);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(12,0.0597129);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(13,0.05894854);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(14,0.05654053);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(15,0.05504504);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(16,0.05309136);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(17,0.05264335);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(18,0.05325396);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(19,0.05523129);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(20,0.03186998);
   VbbHcc_jets_all_CvL_stack_2->SetEntries(3566450);

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
   CvL_jets_all_18->Modified();
   CvL_jets_all_18->cd();
   CvL_jets_all_18->SetSelected(CvL_jets_all_18);
}
