#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_bckg_17()
{
//=========Macro generated from canvas: CvB_jets_bckg_17/CvB_jets_bckg_17
//=========  (Wed Mar  1 14:06:11 2023) by ROOT version 6.26/06
   TCanvas *CvB_jets_bckg_17 = new TCanvas("CvB_jets_bckg_17", "CvB_jets_bckg_17",0,0,600,600);
   CvB_jets_bckg_17->SetHighLightColor(2);
   CvB_jets_bckg_17->Range(-0.2183529,-7.263773e+10,1.171633,5.326767e+11);
   CvB_jets_bckg_17->SetFillColor(0);
   CvB_jets_bckg_17->SetFillStyle(4000);
   CvB_jets_bckg_17->SetBorderMode(0);
   CvB_jets_bckg_17->SetBorderSize(2);
   CvB_jets_bckg_17->SetLeftMargin(0.15709);
   CvB_jets_bckg_17->SetRightMargin(0.1234783);
   CvB_jets_bckg_17->SetBottomMargin(0.12);
   CvB_jets_bckg_17->SetFrameFillStyle(1000);
   CvB_jets_bckg_17->SetFrameBorderMode(0);
   CvB_jets_bckg_17->SetFrameFillStyle(1000);
   CvB_jets_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.721453e+11);
   
   TH1F *st_stack_22 = new TH1F("st_stack_22","",20,0,1);
   st_stack_22->SetMinimum(0);
   st_stack_22->SetMaximum(4.721453e+11);
   st_stack_22->SetDirectory(0);
   st_stack_22->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_22->SetLineColor(ci);
   st_stack_22->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_22->GetXaxis()->SetRange(1,20);
   st_stack_22->GetXaxis()->SetLabelFont(42);
   st_stack_22->GetXaxis()->SetTitleOffset(1);
   st_stack_22->GetXaxis()->SetTitleFont(42);
   st_stack_22->GetYaxis()->SetTitle("Events/0.05");
   st_stack_22->GetYaxis()->SetLabelFont(42);
   st_stack_22->GetYaxis()->SetTitleSize(0.037);
   st_stack_22->GetYaxis()->SetTitleFont(42);
   st_stack_22->GetZaxis()->SetLabelFont(42);
   st_stack_22->GetZaxis()->SetTitleOffset(1);
   st_stack_22->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_22);
   
   
   TH1D *VbbHcc_jets_CvB_stack_1 = new TH1D("VbbHcc_jets_CvB_stack_1","",20,0,1);
   VbbHcc_jets_CvB_stack_1->SetBinContent(1,1.407011e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(2,2.552736e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(3,1.952244e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(4,2.013534e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(5,2.223907e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(6,2.547314e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(7,3.000422e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(8,3.683029e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(9,4.815371e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(10,6.649204e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(11,9.06031e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(12,1.272073e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(13,1.886728e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(14,2.799441e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(15,4.553955e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(16,7.794142e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(17,1.51026e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(18,3.14746e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(19,2.251282e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(20,1.853513e+10);
   VbbHcc_jets_CvB_stack_1->SetBinError(1,1.377579e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(2,5858923);
   VbbHcc_jets_CvB_stack_1->SetBinError(3,5120335);
   VbbHcc_jets_CvB_stack_1->SetBinError(4,5218358);
   VbbHcc_jets_CvB_stack_1->SetBinError(5,5495702);
   VbbHcc_jets_CvB_stack_1->SetBinError(6,5896923);
   VbbHcc_jets_CvB_stack_1->SetBinError(7,6411122);
   VbbHcc_jets_CvB_stack_1->SetBinError(8,7118241);
   VbbHcc_jets_CvB_stack_1->SetBinError(9,8157902);
   VbbHcc_jets_CvB_stack_1->SetBinError(10,9607305);
   VbbHcc_jets_CvB_stack_1->SetBinError(11,1.123579e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(12,1.33364e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(13,1.625173e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(14,1.983289e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(15,2.532279e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(16,3.31838e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(17,4.612201e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(18,6.649796e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(19,5.676476e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(20,1.575006e+07);
   VbbHcc_jets_CvB_stack_1->SetEntries(6.322382e+08);

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
   VbbHcc_jets_CvB_stack_2->SetBinContent(1,2.14509e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(2,3063708);
   VbbHcc_jets_CvB_stack_2->SetBinContent(3,1982466);
   VbbHcc_jets_CvB_stack_2->SetBinContent(4,1732345);
   VbbHcc_jets_CvB_stack_2->SetBinContent(5,1575149);
   VbbHcc_jets_CvB_stack_2->SetBinContent(6,1417831);
   VbbHcc_jets_CvB_stack_2->SetBinContent(7,1363215);
   VbbHcc_jets_CvB_stack_2->SetBinContent(8,1360759);
   VbbHcc_jets_CvB_stack_2->SetBinContent(9,1479183);
   VbbHcc_jets_CvB_stack_2->SetBinContent(10,1600765);
   VbbHcc_jets_CvB_stack_2->SetBinContent(11,1742391);
   VbbHcc_jets_CvB_stack_2->SetBinContent(12,1990830);
   VbbHcc_jets_CvB_stack_2->SetBinContent(13,2520968);
   VbbHcc_jets_CvB_stack_2->SetBinContent(14,3204037);
   VbbHcc_jets_CvB_stack_2->SetBinContent(15,4415535);
   VbbHcc_jets_CvB_stack_2->SetBinContent(16,6319384);
   VbbHcc_jets_CvB_stack_2->SetBinContent(17,1.012215e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(18,1.749539e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(19,1.804997e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(20,3165943);
   VbbHcc_jets_CvB_stack_2->SetBinError(1,1184.673);
   VbbHcc_jets_CvB_stack_2->SetBinError(2,448.1167);
   VbbHcc_jets_CvB_stack_2->SetBinError(3,360.8262);
   VbbHcc_jets_CvB_stack_2->SetBinError(4,337.6624);
   VbbHcc_jets_CvB_stack_2->SetBinError(5,322.4171);
   VbbHcc_jets_CvB_stack_2->SetBinError(6,306.3234);
   VbbHcc_jets_CvB_stack_2->SetBinError(7,300.7973);
   VbbHcc_jets_CvB_stack_2->SetBinError(8,300.9253);
   VbbHcc_jets_CvB_stack_2->SetBinError(9,314.1164);
   VbbHcc_jets_CvB_stack_2->SetBinError(10,327.3145);
   VbbHcc_jets_CvB_stack_2->SetBinError(11,342.1446);
   VbbHcc_jets_CvB_stack_2->SetBinError(12,366.3574);
   VbbHcc_jets_CvB_stack_2->SetBinError(13,413.0156);
   VbbHcc_jets_CvB_stack_2->SetBinError(14,466.3907);
   VbbHcc_jets_CvB_stack_2->SetBinError(15,549.0451);
   VbbHcc_jets_CvB_stack_2->SetBinError(16,659.96);
   VbbHcc_jets_CvB_stack_2->SetBinError(17,837.8196);
   VbbHcc_jets_CvB_stack_2->SetBinError(18,1104.995);
   VbbHcc_jets_CvB_stack_2->SetBinError(19,1131.403);
   VbbHcc_jets_CvB_stack_2->SetBinError(20,474.1919);
   VbbHcc_jets_CvB_stack_2->SetEntries(1.751569e+09);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_jets_bckg_17->Modified();
   CvB_jets_bckg_17->cd();
   CvB_jets_bckg_17->SetSelected(CvB_jets_bckg_17);
}
