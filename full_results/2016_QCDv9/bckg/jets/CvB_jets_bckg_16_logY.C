#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_bckg_16_logY()
{
//=========Macro generated from canvas: CvB_jets_bckg_16/CvB_jets_bckg_16
//=========  (Thu Mar  9 13:30:10 2023) by ROOT version 6.26/06
   TCanvas *CvB_jets_bckg_16 = new TCanvas("CvB_jets_bckg_16", "CvB_jets_bckg_16",0,0,600,600);
   CvB_jets_bckg_16->SetHighLightColor(2);
   CvB_jets_bckg_16->Range(-0.2183529,-1.605352,1.171633,13.47935);
   CvB_jets_bckg_16->SetFillColor(0);
   CvB_jets_bckg_16->SetFillStyle(4000);
   CvB_jets_bckg_16->SetBorderMode(0);
   CvB_jets_bckg_16->SetBorderSize(2);
   CvB_jets_bckg_16->SetLogy();
   CvB_jets_bckg_16->SetLeftMargin(0.15709);
   CvB_jets_bckg_16->SetRightMargin(0.1234783);
   CvB_jets_bckg_16->SetBottomMargin(0.12);
   CvB_jets_bckg_16->SetFrameFillStyle(1000);
   CvB_jets_bckg_16->SetFrameBorderMode(0);
   CvB_jets_bckg_16->SetFrameFillStyle(1000);
   CvB_jets_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(3.020488e+11);
   
   TH1F *st_stack_20 = new TH1F("st_stack_20","",20,0,1);
   st_stack_20->SetMinimum(1.602554);
   st_stack_20->SetMaximum(9.351476e+11);
   st_stack_20->SetDirectory(0);
   st_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_20->SetLineColor(ci);
   st_stack_20->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_20->GetXaxis()->SetRange(1,20);
   st_stack_20->GetXaxis()->SetLabelFont(42);
   st_stack_20->GetXaxis()->SetTitleOffset(1);
   st_stack_20->GetXaxis()->SetTitleFont(42);
   st_stack_20->GetYaxis()->SetTitle("Event/0.05");
   st_stack_20->GetYaxis()->SetLabelFont(42);
   st_stack_20->GetYaxis()->SetTitleSize(0.037);
   st_stack_20->GetYaxis()->SetTitleFont(42);
   st_stack_20->GetZaxis()->SetLabelFont(42);
   st_stack_20->GetZaxis()->SetTitleOffset(1);
   st_stack_20->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_20);
   
   
   TH1D *VbbHcc_jets_CvB_stack_1 = new TH1D("VbbHcc_jets_CvB_stack_1","",20,0,1);
   VbbHcc_jets_CvB_stack_1->SetBinContent(1,9.717419e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(2,1.976346e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(3,1.51555e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(4,1.529659e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(5,1.731856e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(6,2.040144e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(7,2.446284e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(8,3.030816e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(9,4.003294e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(10,5.730581e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(11,8.037686e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(12,1.122479e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(13,1.674009e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(14,2.516838e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(15,4.165533e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(16,7.135495e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(17,1.336893e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(18,2.506861e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(19,1.628075e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(20,1.347413e+10);
   VbbHcc_jets_CvB_stack_1->SetBinError(1,1.295224e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(2,5830163);
   VbbHcc_jets_CvB_stack_1->SetBinError(3,5116207);
   VbbHcc_jets_CvB_stack_1->SetBinError(4,5148448);
   VbbHcc_jets_CvB_stack_1->SetBinError(5,5491780);
   VbbHcc_jets_CvB_stack_1->SetBinError(6,5984192);
   VbbHcc_jets_CvB_stack_1->SetBinError(7,6571830);
   VbbHcc_jets_CvB_stack_1->SetBinError(8,7324045);
   VbbHcc_jets_CvB_stack_1->SetBinError(9,8434982);
   VbbHcc_jets_CvB_stack_1->SetBinError(10,1.011561e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(11,1.200616e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(12,1.420083e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(13,1.734867e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(14,2.131855e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(15,2.746326e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(16,3.60236e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(17,4.925255e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(18,6.74237e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(19,5.497069e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(20,1.526376e+07);
   VbbHcc_jets_CvB_stack_1->SetEntries(5.454877e+08);

   ci = TColor::GetColor("#ff6600");
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
   VbbHcc_jets_CvB_stack_2->SetBinContent(1,1.53206e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(2,2568090);
   VbbHcc_jets_CvB_stack_2->SetBinContent(3,1668998);
   VbbHcc_jets_CvB_stack_2->SetBinContent(4,1440929);
   VbbHcc_jets_CvB_stack_2->SetBinContent(5,1352304);
   VbbHcc_jets_CvB_stack_2->SetBinContent(6,1245799);
   VbbHcc_jets_CvB_stack_2->SetBinContent(7,1197310);
   VbbHcc_jets_CvB_stack_2->SetBinContent(8,1206489);
   VbbHcc_jets_CvB_stack_2->SetBinContent(9,1299952);
   VbbHcc_jets_CvB_stack_2->SetBinContent(10,1443098);
   VbbHcc_jets_CvB_stack_2->SetBinContent(11,1602269);
   VbbHcc_jets_CvB_stack_2->SetBinContent(12,1828925);
   VbbHcc_jets_CvB_stack_2->SetBinContent(13,2316252);
   VbbHcc_jets_CvB_stack_2->SetBinContent(14,2952934);
   VbbHcc_jets_CvB_stack_2->SetBinContent(15,4096899);
   VbbHcc_jets_CvB_stack_2->SetBinContent(16,5838483);
   VbbHcc_jets_CvB_stack_2->SetBinContent(17,9073027);
   VbbHcc_jets_CvB_stack_2->SetBinContent(18,1.439513e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(19,1.396529e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(20,2286359);
   VbbHcc_jets_CvB_stack_2->SetBinError(1,981.8939);
   VbbHcc_jets_CvB_stack_2->SetBinError(2,401.6657);
   VbbHcc_jets_CvB_stack_2->SetBinError(3,323.9601);
   VbbHcc_jets_CvB_stack_2->SetBinError(4,301.2538);
   VbbHcc_jets_CvB_stack_2->SetBinError(5,292.0831);
   VbbHcc_jets_CvB_stack_2->SetBinError(6,280.564);
   VbbHcc_jets_CvB_stack_2->SetBinError(7,275.3255);
   VbbHcc_jets_CvB_stack_2->SetBinError(8,276.6087);
   VbbHcc_jets_CvB_stack_2->SetBinError(9,287.3838);
   VbbHcc_jets_CvB_stack_2->SetBinError(10,303.1017);
   VbbHcc_jets_CvB_stack_2->SetBinError(11,319.793);
   VbbHcc_jets_CvB_stack_2->SetBinError(12,342.1421);
   VbbHcc_jets_CvB_stack_2->SetBinError(13,385.6893);
   VbbHcc_jets_CvB_stack_2->SetBinError(14,436.3602);
   VbbHcc_jets_CvB_stack_2->SetBinError(15,515.5104);
   VbbHcc_jets_CvB_stack_2->SetBinError(16,618.039);
   VbbHcc_jets_CvB_stack_2->SetBinError(17,773.1811);
   VbbHcc_jets_CvB_stack_2->SetBinError(18,977.9748);
   VbbHcc_jets_CvB_stack_2->SetBinError(19,970.3261);
   VbbHcc_jets_CvB_stack_2->SetBinError(20,392.4944);
   VbbHcc_jets_CvB_stack_2->SetEntries(1.442507e+09);

   ci = TColor::GetColor("#990099");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CvB_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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

   ci = TColor::GetColor("#ff6600");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_jets_bckg_16->Modified();
   CvB_jets_bckg_16->cd();
   CvB_jets_bckg_16->SetSelected(CvB_jets_bckg_16);
}
