#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_all_18_logY()
{
//=========Macro generated from canvas: CvB_jets_all_18/CvB_jets_all_18
//=========  (Mon Dec 19 11:03:35 2022) by ROOT version 6.26/06
   TCanvas *CvB_jets_all_18 = new TCanvas("CvB_jets_all_18", "CvB_jets_all_18",0,0,600,600);
   CvB_jets_all_18->SetHighLightColor(2);
   CvB_jets_all_18->Range(-0.2183529,-0.2739486,1.171633,6.199327);
   CvB_jets_all_18->SetFillColor(0);
   CvB_jets_all_18->SetFillStyle(4000);
   CvB_jets_all_18->SetBorderMode(0);
   CvB_jets_all_18->SetBorderSize(2);
   CvB_jets_all_18->SetLogy();
   CvB_jets_all_18->SetLeftMargin(0.15709);
   CvB_jets_all_18->SetRightMargin(0.1234783);
   CvB_jets_all_18->SetBottomMargin(0.12);
   CvB_jets_all_18->SetFrameFillStyle(1000);
   CvB_jets_all_18->SetFrameBorderMode(0);
   CvB_jets_all_18->SetFrameFillStyle(1000);
   CvB_jets_all_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(191985.4);
   
   TH1F *st_stack_119 = new TH1F("st_stack_119","",20,0,1);
   st_stack_119->SetMinimum(3.183057);
   st_stack_119->SetMaximum(356450.3);
   st_stack_119->SetDirectory(0);
   st_stack_119->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_119->SetLineColor(ci);
   st_stack_119->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_119->GetXaxis()->SetRange(1,20);
   st_stack_119->GetXaxis()->SetLabelFont(42);
   st_stack_119->GetXaxis()->SetTitleOffset(1);
   st_stack_119->GetXaxis()->SetTitleFont(42);
   st_stack_119->GetYaxis()->SetTitle("Events/0.05");
   st_stack_119->GetYaxis()->SetLabelFont(42);
   st_stack_119->GetYaxis()->SetTitleSize(0.037);
   st_stack_119->GetYaxis()->SetTitleFont(42);
   st_stack_119->GetZaxis()->SetLabelFont(42);
   st_stack_119->GetZaxis()->SetTitleOffset(1);
   st_stack_119->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_119);
   
   
   TH1D *VbbHcc_jets_all_CvB_stack_1 = new TH1D("VbbHcc_jets_all_CvB_stack_1","",20,0,1);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(0,879.0519);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(1,1559.076);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(2,61.27119);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(3,55.45806);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(4,41.15277);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(5,49.09993);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(6,69.7125);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(7,280.766);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(8,86.80179);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(9,137.1797);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(10,109.2253);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(11,117.5602);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(12,143.3823);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(13,216.7111);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(14,373.965);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(15,273.7556);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(16,650.3774);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(17,730.9709);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(18,554.0571);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(19,924.0637);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(20,299.0648);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(21,0.4524454);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(0,1.540003);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(1,1.966741);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(2,0.4102201);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(3,0.3919827);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(4,0.3377302);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(5,0.3678106);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(6,0.438697);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(7,0.8672993);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(8,0.4883466);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(9,0.6127523);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(10,0.5523056);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(11,0.5706741);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(12,0.6292332);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(13,0.7746355);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(14,1.013722);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(15,0.869551);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(16,1.319399);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(17,1.410388);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(18,1.234259);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(19,1.591241);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(20,0.9066665);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(21,0.03565927);
   VbbHcc_jets_all_CvB_stack_1->SetEntries(3595990);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_CvB_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvB_stack_1->SetLineColor(ci);
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
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(0,88.20519);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(1,360.7775);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(2,9.383391);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(3,19.22253);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(4,8.271347);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(5,10.28969);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(6,13.4273);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(7,9.330099);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(8,13.11724);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(9,35.55126);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(10,21.02611);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(11,30.30916);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(12,31.60294);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(13,45.668);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(14,48.93496);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(15,44.07708);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(16,56.13586);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(17,80.3206);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(18,87.63348);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(19,101.6284);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(20,40.29803);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(21,30.58109);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(0,0.1824533);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(1,0.3623689);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(2,0.06012517);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(3,0.08566947);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(4,0.05680855);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(5,0.06280682);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(6,0.07181817);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(7,0.05987409);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(8,0.0712613);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(9,0.1167619);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(10,0.0900191);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(11,0.1082527);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(12,0.1102641);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(13,0.132476);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(14,0.1371679);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(15,0.1306906);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(16,0.146902);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(17,0.1760925);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(18,0.1835419);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(19,0.1978953);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(20,0.1250485);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(21,0.1068259);
   VbbHcc_jets_all_CvB_stack_2->SetEntries(3566450);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_CvB_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvB_stack_2->SetLineColor(ci);
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_1","ZHcc","F");

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
   CvB_jets_all_18->Modified();
   CvB_jets_all_18->cd();
   CvB_jets_all_18->SetSelected(CvB_jets_all_18);
}
