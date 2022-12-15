void CvB_jets_17()
{
//=========Macro generated from canvas: CvB_jets_17/CvB_jets_17
//=========  (Thu Dec 15 10:05:09 2022) by ROOT version 6.14/09
   TCanvas *CvB_jets_17 = new TCanvas("CvB_jets_17", "CvB_jets_17",0,0,600,600);
   CvB_jets_17->SetHighLightColor(2);
   CvB_jets_17->Range(-0.2183529,-1.500359e+11,1.171633,1.100263e+12);
   CvB_jets_17->SetFillColor(0);
   CvB_jets_17->SetFillStyle(4000);
   CvB_jets_17->SetBorderMode(0);
   CvB_jets_17->SetBorderSize(2);
   CvB_jets_17->SetLeftMargin(0.15709);
   CvB_jets_17->SetRightMargin(0.1234783);
   CvB_jets_17->SetBottomMargin(0.12);
   CvB_jets_17->SetFrameFillStyle(1000);
   CvB_jets_17->SetFrameBorderMode(0);
   CvB_jets_17->SetFrameFillStyle(1000);
   CvB_jets_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(9.287935e+11);
   
   TH1F *st_stack_14 = new TH1F("st_stack_14","",20,0,1);
   st_stack_14->SetMinimum(0);
   st_stack_14->SetMaximum(9.752331e+11);
   st_stack_14->SetDirectory(0);
   st_stack_14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_14->SetLineColor(ci);
   st_stack_14->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_14->GetXaxis()->SetRange(1,20);
   st_stack_14->GetXaxis()->SetLabelFont(42);
   st_stack_14->GetXaxis()->SetLabelSize(0.035);
   st_stack_14->GetXaxis()->SetTitleSize(0.035);
   st_stack_14->GetXaxis()->SetTitleFont(42);
   st_stack_14->GetYaxis()->SetTitle("Events/0.05");
   st_stack_14->GetYaxis()->SetLabelFont(42);
   st_stack_14->GetYaxis()->SetLabelSize(0.035);
   st_stack_14->GetYaxis()->SetTitleSize(0.037);
   st_stack_14->GetYaxis()->SetTitleOffset(0);
   st_stack_14->GetYaxis()->SetTitleFont(42);
   st_stack_14->GetZaxis()->SetLabelFont(42);
   st_stack_14->GetZaxis()->SetLabelSize(0.035);
   st_stack_14->GetZaxis()->SetTitleSize(0.035);
   st_stack_14->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_14);
   
   
   TH1D *VbbHcc_jets_CvB_stack_1 = new TH1D("VbbHcc_jets_CvB_stack_1","",20,0,1);
   VbbHcc_jets_CvB_stack_1->SetBinContent(1,2.678515e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(2,5.904361e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(3,4.658226e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(4,4.851158e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(5,5.578447e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(6,6.594327e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(7,8.029932e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(8,1.010243e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(9,1.33485e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(10,1.933178e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(11,2.694583e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(12,3.852776e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(13,5.594581e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(14,8.007928e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(15,1.259079e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(16,2.06898e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(17,3.669283e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(18,6.191709e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(19,3.444289e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(20,2.092926e+10);
   VbbHcc_jets_CvB_stack_1->SetBinError(1,1.982589e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(2,9375163);
   VbbHcc_jets_CvB_stack_1->SetBinError(3,8334895);
   VbbHcc_jets_CvB_stack_1->SetBinError(4,8519843);
   VbbHcc_jets_CvB_stack_1->SetBinError(5,9154844);
   VbbHcc_jets_CvB_stack_1->SetBinError(6,9974586);
   VbbHcc_jets_CvB_stack_1->SetBinError(7,1.102187e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(8,1.237928e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(9,1.424857e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(10,1.717746e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(11,2.03044e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(12,2.430565e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(13,2.928466e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(14,3.503759e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(15,4.391795e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(16,5.628555e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(17,7.479851e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(18,9.659197e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(19,7.174317e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(20,1.68986e+07);
   VbbHcc_jets_CvB_stack_1->SetEntries(7.974729e+08);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_CvB_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvB_stack_1->SetLineColor(ci);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_CvB_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_CvB_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_CvB_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvB_stack_1,"");
   
   TH1D *VbbHcc_jets_CvB_stack_2 = new TH1D("VbbHcc_jets_CvB_stack_2","",20,0,1);
   VbbHcc_jets_CvB_stack_2->SetBinContent(1,2.573177e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(2,3946489);
   VbbHcc_jets_CvB_stack_2->SetBinContent(3,2594837);
   VbbHcc_jets_CvB_stack_2->SetBinContent(4,2294420);
   VbbHcc_jets_CvB_stack_2->SetBinContent(5,2136696);
   VbbHcc_jets_CvB_stack_2->SetBinContent(6,1964034);
   VbbHcc_jets_CvB_stack_2->SetBinContent(7,1928817);
   VbbHcc_jets_CvB_stack_2->SetBinContent(8,1972679);
   VbbHcc_jets_CvB_stack_2->SetBinContent(9,2193242);
   VbbHcc_jets_CvB_stack_2->SetBinContent(10,2445306);
   VbbHcc_jets_CvB_stack_2->SetBinContent(11,2720400);
   VbbHcc_jets_CvB_stack_2->SetBinContent(12,3177466);
   VbbHcc_jets_CvB_stack_2->SetBinContent(13,4070705);
   VbbHcc_jets_CvB_stack_2->SetBinContent(14,5320617);
   VbbHcc_jets_CvB_stack_2->SetBinContent(15,7382824);
   VbbHcc_jets_CvB_stack_2->SetBinContent(16,1.036986e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(17,1.58069e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(18,2.472844e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(19,2.229932e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(20,3310662);
   VbbHcc_jets_CvB_stack_2->SetBinError(1,1301.259);
   VbbHcc_jets_CvB_stack_2->SetBinError(2,509.9196);
   VbbHcc_jets_CvB_stack_2->SetBinError(3,413.8079);
   VbbHcc_jets_CvB_stack_2->SetBinError(4,389.4296);
   VbbHcc_jets_CvB_stack_2->SetBinError(5,376.1634);
   VbbHcc_jets_CvB_stack_2->SetBinError(6,360.9716);
   VbbHcc_jets_CvB_stack_2->SetBinError(7,358.0584);
   VbbHcc_jets_CvB_stack_2->SetBinError(8,362.2161);
   VbbHcc_jets_CvB_stack_2->SetBinError(9,381.8136);
   VbbHcc_jets_CvB_stack_2->SetBinError(10,403.9764);
   VbbHcc_jets_CvB_stack_2->SetBinError(11,427.2496);
   VbbHcc_jets_CvB_stack_2->SetBinError(12,462.9053);
   VbbHcc_jets_CvB_stack_2->SetBinError(13,525.2299);
   VbbHcc_jets_CvB_stack_2->SetBinError(14,600.982);
   VbbHcc_jets_CvB_stack_2->SetBinError(15,710.3498);
   VbbHcc_jets_CvB_stack_2->SetBinError(16,846.3947);
   VbbHcc_jets_CvB_stack_2->SetBinError(17,1048.16);
   VbbHcc_jets_CvB_stack_2->SetBinError(18,1315.393);
   VbbHcc_jets_CvB_stack_2->SetBinError(19,1259.231);
   VbbHcc_jets_CvB_stack_2->SetBinError(20,485.6842);
   VbbHcc_jets_CvB_stack_2->SetEntries(2.399997e+09);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_CvB_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvB_stack_2->SetLineColor(ci);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_CvB_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_CvB_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_CvB_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CvB_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_CvB_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_jets_17->Modified();
   CvB_jets_17->cd();
   CvB_jets_17->SetSelected(CvB_jets_17);
}
