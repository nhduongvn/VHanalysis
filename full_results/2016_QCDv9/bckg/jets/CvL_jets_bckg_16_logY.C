#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_bckg_16_logY()
{
//=========Macro generated from canvas: CvL_jets_bckg_16/CvL_jets_bckg_16
//=========  (Wed Mar  1 14:06:39 2023) by ROOT version 6.26/06
   TCanvas *CvL_jets_bckg_16 = new TCanvas("CvL_jets_bckg_16", "CvL_jets_bckg_16",0,0,600,600);
   CvL_jets_bckg_16->SetHighLightColor(2);
   CvL_jets_bckg_16->Range(-0.2183529,4.362963,1.171633,14.93065);
   CvL_jets_bckg_16->SetFillColor(0);
   CvL_jets_bckg_16->SetFillStyle(4000);
   CvL_jets_bckg_16->SetBorderMode(0);
   CvL_jets_bckg_16->SetBorderSize(2);
   CvL_jets_bckg_16->SetLogy();
   CvL_jets_bckg_16->SetLeftMargin(0.15709);
   CvL_jets_bckg_16->SetRightMargin(0.1234783);
   CvL_jets_bckg_16->SetBottomMargin(0.12);
   CvL_jets_bckg_16->SetFrameFillStyle(1000);
   CvL_jets_bckg_16->SetFrameBorderMode(0);
   CvL_jets_bckg_16->SetFrameFillStyle(1000);
   CvL_jets_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1965727);
   st->SetMaximum(3.067145e+13);
   
   TH1F *st_stack_14 = new TH1F("st_stack_14","",20,0,1);
   st_stack_14->SetMinimum(427647.4);
   st_stack_14->SetMaximum(7.479669e+13);
   st_stack_14->SetDirectory(0);
   st_stack_14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_14->SetLineColor(ci);
   st_stack_14->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_14->GetXaxis()->SetRange(1,20);
   st_stack_14->GetXaxis()->SetLabelFont(42);
   st_stack_14->GetXaxis()->SetTitleOffset(1);
   st_stack_14->GetXaxis()->SetTitleFont(42);
   st_stack_14->GetYaxis()->SetTitle("Events/0.05");
   st_stack_14->GetYaxis()->SetLabelFont(42);
   st_stack_14->GetYaxis()->SetTitleSize(0.037);
   st_stack_14->GetYaxis()->SetTitleFont(42);
   st_stack_14->GetZaxis()->SetLabelFont(42);
   st_stack_14->GetZaxis()->SetTitleOffset(1);
   st_stack_14->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_14);
   
   
   TH1D *VbbHcc_jets_CvL_stack_1 = new TH1D("VbbHcc_jets_CvL_stack_1","",20,0,1);
   VbbHcc_jets_CvL_stack_1->SetBinContent(1,3.066991e+11);
   VbbHcc_jets_CvL_stack_1->SetBinContent(2,2.882657e+11);
   VbbHcc_jets_CvL_stack_1->SetBinContent(3,7.592681e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(4,2.866603e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(5,1.433516e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(6,8.805584e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(7,5.92508e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(8,4.250273e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(9,3.330855e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(10,2.787801e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(11,2.413136e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(12,2.128737e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(13,2.000906e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(14,1.964131e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(15,2.036456e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(16,2.192235e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(17,2.427244e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(18,2.922929e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(19,3.68326e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(20,7.794804e+09);
   VbbHcc_jets_CvL_stack_1->SetBinError(1,7.514205e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(2,7.223916e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(3,3.692071e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(4,2.262367e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(5,1.598483e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(6,1.252144e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(7,1.027346e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(8,8698448);
   VbbHcc_jets_CvL_stack_1->SetBinError(9,7698171);
   VbbHcc_jets_CvL_stack_1->SetBinError(10,7042839);
   VbbHcc_jets_CvL_stack_1->SetBinError(11,6546144);
   VbbHcc_jets_CvL_stack_1->SetBinError(12,6139125);
   VbbHcc_jets_CvL_stack_1->SetBinError(13,5950076);
   VbbHcc_jets_CvL_stack_1->SetBinError(14,5890633);
   VbbHcc_jets_CvL_stack_1->SetBinError(15,5995562);
   VbbHcc_jets_CvL_stack_1->SetBinError(16,6212479);
   VbbHcc_jets_CvL_stack_1->SetBinError(17,6521111);
   VbbHcc_jets_CvL_stack_1->SetBinError(18,7138208);
   VbbHcc_jets_CvL_stack_1->SetBinError(19,7989193);
   VbbHcc_jets_CvL_stack_1->SetBinError(20,1.166673e+07);
   VbbHcc_jets_CvL_stack_1->SetEntries(5.443057e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_CvL_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvL_stack_1->SetLineColor(ci);
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
   VbbHcc_jets_CvL_stack_2->SetBinContent(1,1.535148e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(2,2.175656e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(3,8259280);
   VbbHcc_jets_CvL_stack_2->SetBinContent(4,4061040);
   VbbHcc_jets_CvL_stack_2->SetBinContent(5,2543948);
   VbbHcc_jets_CvL_stack_2->SetBinContent(6,1937280);
   VbbHcc_jets_CvL_stack_2->SetBinContent(7,1593545);
   VbbHcc_jets_CvL_stack_2->SetBinContent(8,1383060);
   VbbHcc_jets_CvL_stack_2->SetBinContent(9,1284869);
   VbbHcc_jets_CvL_stack_2->SetBinContent(10,1254913);
   VbbHcc_jets_CvL_stack_2->SetBinContent(11,1270071);
   VbbHcc_jets_CvL_stack_2->SetBinContent(12,1314660);
   VbbHcc_jets_CvL_stack_2->SetBinContent(13,1433512);
   VbbHcc_jets_CvL_stack_2->SetBinContent(14,1596001);
   VbbHcc_jets_CvL_stack_2->SetBinContent(15,1841854);
   VbbHcc_jets_CvL_stack_2->SetBinContent(16,2202130);
   VbbHcc_jets_CvL_stack_2->SetBinContent(17,2680132);
   VbbHcc_jets_CvL_stack_2->SetBinContent(18,3463283);
   VbbHcc_jets_CvL_stack_2->SetBinContent(19,4483407);
   VbbHcc_jets_CvL_stack_2->SetBinContent(20,7390167);
   VbbHcc_jets_CvL_stack_2->SetBinError(1,1011.768);
   VbbHcc_jets_CvL_stack_2->SetBinError(2,1206.103);
   VbbHcc_jets_CvL_stack_2->SetBinError(3,740.1229);
   VbbHcc_jets_CvL_stack_2->SetBinError(4,517.4123);
   VbbHcc_jets_CvL_stack_2->SetBinError(5,408.1504);
   VbbHcc_jets_CvL_stack_2->SetBinError(6,355.1956);
   VbbHcc_jets_CvL_stack_2->SetBinError(7,321.4467);
   VbbHcc_jets_CvL_stack_2->SetBinError(8,298.9771);
   VbbHcc_jets_CvL_stack_2->SetBinError(9,287.8373);
   VbbHcc_jets_CvL_stack_2->SetBinError(10,284.187);
   VbbHcc_jets_CvL_stack_2->SetBinError(11,285.6011);
   VbbHcc_jets_CvL_stack_2->SetBinError(12,290.2683);
   VbbHcc_jets_CvL_stack_2->SetBinError(13,302.7758);
   VbbHcc_jets_CvL_stack_2->SetBinError(14,319.2634);
   VbbHcc_jets_CvL_stack_2->SetBinError(15,342.8063);
   VbbHcc_jets_CvL_stack_2->SetBinError(16,374.6979);
   VbbHcc_jets_CvL_stack_2->SetBinError(17,413.2353);
   VbbHcc_jets_CvL_stack_2->SetBinError(18,469.6809);
   VbbHcc_jets_CvL_stack_2->SetBinError(19,534.5797);
   VbbHcc_jets_CvL_stack_2->SetBinError(20,689.1722);
   VbbHcc_jets_CvL_stack_2->SetEntries(1.431895e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_CvL_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvL_stack_2->SetLineColor(ci);
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

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_jets_bckg_16->Modified();
   CvL_jets_bckg_16->cd();
   CvL_jets_bckg_16->SetSelected(CvL_jets_bckg_16);
}
