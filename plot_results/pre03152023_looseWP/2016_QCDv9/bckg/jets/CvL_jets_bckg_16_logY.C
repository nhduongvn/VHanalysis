#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_bckg_16_logY()
{
//=========Macro generated from canvas: CvL_jets_bckg_16/CvL_jets_bckg_16
//=========  (Fri Mar 10 14:09:13 2023) by ROOT version 6.26/06
   TCanvas *CvL_jets_bckg_16 = new TCanvas("CvL_jets_bckg_16", "CvL_jets_bckg_16",0,0,600,600);
   CvL_jets_bckg_16->SetHighLightColor(2);
   CvL_jets_bckg_16->Range(-0.2183529,-1.622707,1.171633,13.58131);
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
   st->SetMinimum(10);
   st->SetMaximum(3.695365e+11);
   
   TH1F *st_stack_14 = new TH1F("st_stack_14","",20,0,1);
   st_stack_14->SetMinimum(1.591386);
   st_stack_14->SetMaximum(1.150564e+12);
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
   st_stack_14->GetYaxis()->SetTitle("Event/0.05");
   st_stack_14->GetYaxis()->SetLabelFont(42);
   st_stack_14->GetYaxis()->SetTitleSize(0.037);
   st_stack_14->GetYaxis()->SetTitleFont(42);
   st_stack_14->GetZaxis()->SetLabelFont(42);
   st_stack_14->GetZaxis()->SetTitleOffset(1);
   st_stack_14->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_14);
   
   
   TH1D *VbbHcc_jets_CvL_stack_1 = new TH1D("VbbHcc_jets_CvL_stack_1","",20,0,1);
   VbbHcc_jets_CvL_stack_1->SetBinContent(1,3.066999e+11);
   VbbHcc_jets_CvL_stack_1->SetBinContent(2,2.882605e+11);
   VbbHcc_jets_CvL_stack_1->SetBinContent(3,7.592749e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(4,2.86678e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(5,1.433635e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(6,8.805732e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(7,5.926241e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(8,4.249628e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(9,3.330767e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(10,2.788413e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(11,2.412542e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(12,2.1291e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(13,2.001212e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(14,1.964239e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(15,2.036526e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(16,2.192075e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(17,2.426844e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(18,2.923098e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(19,3.683943e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(20,7.795654e+09);
   VbbHcc_jets_CvL_stack_1->SetBinError(1,7.530282e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(2,7.239265e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(3,3.699975e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(4,2.267288e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(5,1.601977e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(6,1.254836e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(7,1.029655e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(8,8716205);
   VbbHcc_jets_CvL_stack_1->SetBinError(9,7714309);
   VbbHcc_jets_CvL_stack_1->SetBinError(10,7058852);
   VbbHcc_jets_CvL_stack_1->SetBinError(11,6559027);
   VbbHcc_jets_CvL_stack_1->SetBinError(12,6152898);
   VbbHcc_jets_CvL_stack_1->SetBinError(13,5963221);
   VbbHcc_jets_CvL_stack_1->SetBinError(14,5903335);
   VbbHcc_jets_CvL_stack_1->SetBinError(15,6008514);
   VbbHcc_jets_CvL_stack_1->SetBinError(16,6225453);
   VbbHcc_jets_CvL_stack_1->SetBinError(17,6534417);
   VbbHcc_jets_CvL_stack_1->SetBinError(18,7153682);
   VbbHcc_jets_CvL_stack_1->SetBinError(19,8007063);
   VbbHcc_jets_CvL_stack_1->SetBinError(20,1.169221e+07);
   VbbHcc_jets_CvL_stack_1->SetEntries(5.432231e+08);

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
   VbbHcc_jets_CvL_stack_2->SetBinContent(1,1.535194e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(2,2.175749e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(3,8259883);
   VbbHcc_jets_CvL_stack_2->SetBinContent(4,4061302);
   VbbHcc_jets_CvL_stack_2->SetBinContent(5,2544197);
   VbbHcc_jets_CvL_stack_2->SetBinContent(6,1937420);
   VbbHcc_jets_CvL_stack_2->SetBinContent(7,1593622);
   VbbHcc_jets_CvL_stack_2->SetBinContent(8,1383156);
   VbbHcc_jets_CvL_stack_2->SetBinContent(9,1284962);
   VbbHcc_jets_CvL_stack_2->SetBinContent(10,1254952);
   VbbHcc_jets_CvL_stack_2->SetBinContent(11,1270237);
   VbbHcc_jets_CvL_stack_2->SetBinContent(12,1314791);
   VbbHcc_jets_CvL_stack_2->SetBinContent(13,1433535);
   VbbHcc_jets_CvL_stack_2->SetBinContent(14,1595893);
   VbbHcc_jets_CvL_stack_2->SetBinContent(15,1841809);
   VbbHcc_jets_CvL_stack_2->SetBinContent(16,2202146);
   VbbHcc_jets_CvL_stack_2->SetBinContent(17,2679993);
   VbbHcc_jets_CvL_stack_2->SetBinContent(18,3463187);
   VbbHcc_jets_CvL_stack_2->SetBinContent(19,4483098);
   VbbHcc_jets_CvL_stack_2->SetBinContent(20,7389389);
   VbbHcc_jets_CvL_stack_2->SetBinError(1,1001.611);
   VbbHcc_jets_CvL_stack_2->SetBinError(2,1193.755);
   VbbHcc_jets_CvL_stack_2->SetBinError(3,732.6453);
   VbbHcc_jets_CvL_stack_2->SetBinError(4,512.2639);
   VbbHcc_jets_CvL_stack_2->SetBinError(5,404.1719);
   VbbHcc_jets_CvL_stack_2->SetBinError(6,351.7833);
   VbbHcc_jets_CvL_stack_2->SetBinError(7,318.3949);
   VbbHcc_jets_CvL_stack_2->SetBinError(8,296.1741);
   VbbHcc_jets_CvL_stack_2->SetBinError(9,285.1597);
   VbbHcc_jets_CvL_stack_2->SetBinError(10,281.5541);
   VbbHcc_jets_CvL_stack_2->SetBinError(11,282.9901);
   VbbHcc_jets_CvL_stack_2->SetBinError(12,287.6279);
   VbbHcc_jets_CvL_stack_2->SetBinError(13,300.0316);
   VbbHcc_jets_CvL_stack_2->SetBinError(14,316.3679);
   VbbHcc_jets_CvL_stack_2->SetBinError(15,339.7183);
   VbbHcc_jets_CvL_stack_2->SetBinError(16,371.3415);
   VbbHcc_jets_CvL_stack_2->SetBinError(17,409.5333);
   VbbHcc_jets_CvL_stack_2->SetBinError(18,465.486);
   VbbHcc_jets_CvL_stack_2->SetBinError(19,529.7961);
   VbbHcc_jets_CvL_stack_2->SetBinError(20,682.8689);
   VbbHcc_jets_CvL_stack_2->SetEntries(1.453098e+09);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_jets_bckg_16->Modified();
   CvL_jets_bckg_16->cd();
   CvL_jets_bckg_16->SetSelected(CvL_jets_bckg_16);
}
