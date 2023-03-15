#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_bckg_16_logY()
{
//=========Macro generated from canvas: CvB_jets_bckg_16/CvB_jets_bckg_16
//=========  (Fri Mar 10 14:09:13 2023) by ROOT version 6.26/06
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
   st_stack_20->SetMaximum(9.351477e+11);
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
   VbbHcc_jets_CvB_stack_1->SetBinContent(1,9.718465e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(2,1.976307e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(3,1.515585e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(4,1.529643e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(5,1.731722e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(6,2.039666e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(7,2.446872e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(8,3.031215e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(9,4.002827e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(10,5.730854e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(11,8.038669e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(12,1.122556e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(13,1.673909e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(14,2.516886e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(15,4.165409e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(16,7.135675e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(17,1.336935e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(18,2.506861e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(19,1.627986e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(20,1.347374e+10);
   VbbHcc_jets_CvB_stack_1->SetBinError(1,1.297629e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(2,5840488);
   VbbHcc_jets_CvB_stack_1->SetBinError(3,5125421);
   VbbHcc_jets_CvB_stack_1->SetBinError(4,5157603);
   VbbHcc_jets_CvB_stack_1->SetBinError(5,5501250);
   VbbHcc_jets_CvB_stack_1->SetBinError(6,5993927);
   VbbHcc_jets_CvB_stack_1->SetBinError(7,6584621);
   VbbHcc_jets_CvB_stack_1->SetBinError(8,7337837);
   VbbHcc_jets_CvB_stack_1->SetBinError(9,8449467);
   VbbHcc_jets_CvB_stack_1->SetBinError(10,1.01341e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(11,1.202853e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(12,1.4227e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(13,1.737917e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(14,2.135703e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(15,2.751208e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(16,3.608878e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(17,4.934175e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(18,6.754451e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(19,5.506742e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(20,1.529083e+07);
   VbbHcc_jets_CvB_stack_1->SetEntries(5.432231e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_CvB_stack_1->SetFillColor(ci);
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
   VbbHcc_jets_CvB_stack_2->SetBinContent(1,1.531805e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(2,2568239);
   VbbHcc_jets_CvB_stack_2->SetBinContent(3,1669083);
   VbbHcc_jets_CvB_stack_2->SetBinContent(4,1441084);
   VbbHcc_jets_CvB_stack_2->SetBinContent(5,1352434);
   VbbHcc_jets_CvB_stack_2->SetBinContent(6,1246014);
   VbbHcc_jets_CvB_stack_2->SetBinContent(7,1197489);
   VbbHcc_jets_CvB_stack_2->SetBinContent(8,1206572);
   VbbHcc_jets_CvB_stack_2->SetBinContent(9,1300183);
   VbbHcc_jets_CvB_stack_2->SetBinContent(10,1443362);
   VbbHcc_jets_CvB_stack_2->SetBinContent(11,1602564);
   VbbHcc_jets_CvB_stack_2->SetBinContent(12,1829218);
   VbbHcc_jets_CvB_stack_2->SetBinContent(13,2316532);
   VbbHcc_jets_CvB_stack_2->SetBinContent(14,2953437);
   VbbHcc_jets_CvB_stack_2->SetBinContent(15,4097593);
   VbbHcc_jets_CvB_stack_2->SetBinContent(16,5839371);
   VbbHcc_jets_CvB_stack_2->SetBinContent(17,9073644);
   VbbHcc_jets_CvB_stack_2->SetBinContent(18,1.439589e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(19,1.39659e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(20,2286339);
   VbbHcc_jets_CvB_stack_2->SetBinError(1,976.8728);
   VbbHcc_jets_CvB_stack_2->SetBinError(2,399.6525);
   VbbHcc_jets_CvB_stack_2->SetBinError(3,322.3247);
   VbbHcc_jets_CvB_stack_2->SetBinError(4,299.7279);
   VbbHcc_jets_CvB_stack_2->SetBinError(5,290.5877);
   VbbHcc_jets_CvB_stack_2->SetBinError(6,279.1236);
   VbbHcc_jets_CvB_stack_2->SetBinError(7,273.892);
   VbbHcc_jets_CvB_stack_2->SetBinError(8,275.147);
   VbbHcc_jets_CvB_stack_2->SetBinError(9,285.8678);
   VbbHcc_jets_CvB_stack_2->SetBinError(10,301.4803);
   VbbHcc_jets_CvB_stack_2->SetBinError(11,318.0575);
   VbbHcc_jets_CvB_stack_2->SetBinError(12,340.2564);
   VbbHcc_jets_CvB_stack_2->SetBinError(13,383.5243);
   VbbHcc_jets_CvB_stack_2->SetBinError(14,433.8796);
   VbbHcc_jets_CvB_stack_2->SetBinError(15,512.5078);
   VbbHcc_jets_CvB_stack_2->SetBinError(16,614.3226);
   VbbHcc_jets_CvB_stack_2->SetBinError(17,768.3997);
   VbbHcc_jets_CvB_stack_2->SetBinError(18,971.8088);
   VbbHcc_jets_CvB_stack_2->SetBinError(19,963.9573);
   VbbHcc_jets_CvB_stack_2->SetBinError(20,389.9298);
   VbbHcc_jets_CvB_stack_2->SetEntries(1.453098e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_CvB_stack_2->SetFillColor(ci);
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
   entry->SetLineColor(1);
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
   CvB_jets_bckg_16->Modified();
   CvB_jets_bckg_16->cd();
   CvB_jets_bckg_16->SetSelected(CvB_jets_bckg_16);
}
