#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_bckg_18()
{
//=========Macro generated from canvas: CvB_jets_bckg_18/CvB_jets_bckg_18
//=========  (Fri Mar 10 12:13:58 2023) by ROOT version 6.26/06
   TCanvas *CvB_jets_bckg_18 = new TCanvas("CvB_jets_bckg_18", "CvB_jets_bckg_18",0,0,600,600);
   CvB_jets_bckg_18->SetHighLightColor(2);
   CvB_jets_bckg_18->Range(-0.2183529,-8.54581e+10,1.171633,6.266927e+11);
   CvB_jets_bckg_18->SetFillColor(0);
   CvB_jets_bckg_18->SetFillStyle(4000);
   CvB_jets_bckg_18->SetBorderMode(0);
   CvB_jets_bckg_18->SetBorderSize(2);
   CvB_jets_bckg_18->SetLeftMargin(0.15709);
   CvB_jets_bckg_18->SetRightMargin(0.1234783);
   CvB_jets_bckg_18->SetBottomMargin(0.12);
   CvB_jets_bckg_18->SetFrameFillStyle(1000);
   CvB_jets_bckg_18->SetFrameBorderMode(0);
   CvB_jets_bckg_18->SetFrameFillStyle(1000);
   CvB_jets_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(5.554777e+11);
   
   TH1F *st_stack_24 = new TH1F("st_stack_24","",20,0,1);
   st_stack_24->SetMinimum(0);
   st_stack_24->SetMaximum(5.554777e+11);
   st_stack_24->SetDirectory(0);
   st_stack_24->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_24->SetLineColor(ci);
   st_stack_24->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_24->GetXaxis()->SetRange(1,20);
   st_stack_24->GetXaxis()->SetLabelFont(42);
   st_stack_24->GetXaxis()->SetTitleOffset(1);
   st_stack_24->GetXaxis()->SetTitleFont(42);
   st_stack_24->GetYaxis()->SetTitle("Event/0.05");
   st_stack_24->GetYaxis()->SetLabelFont(42);
   st_stack_24->GetYaxis()->SetTitleSize(0.037);
   st_stack_24->GetYaxis()->SetTitleFont(42);
   st_stack_24->GetZaxis()->SetLabelFont(42);
   st_stack_24->GetZaxis()->SetTitleOffset(1);
   st_stack_24->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_24);
   
   
   TH1D *VbbHcc_jets_CvB_stack_1 = new TH1D("VbbHcc_jets_CvB_stack_1","",20,0,1);
   VbbHcc_jets_CvB_stack_1->SetBinContent(1,2.035394e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(2,3.603561e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(3,2.709179e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(4,2.774504e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(5,3.041433e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(6,3.447404e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(7,4.052376e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(8,4.957139e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(9,6.469368e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(10,8.8743e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(11,1.211672e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(12,1.70142e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(13,2.550973e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(14,3.821969e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(15,6.307636e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(16,1.099286e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(17,2.16182e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(18,4.610202e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(19,3.384751e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(20,2.83827e+10);
   VbbHcc_jets_CvB_stack_1->SetBinError(1,2.222354e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(2,9300717);
   VbbHcc_jets_CvB_stack_1->SetBinError(3,7957872);
   VbbHcc_jets_CvB_stack_1->SetBinError(4,8091327);
   VbbHcc_jets_CvB_stack_1->SetBinError(5,8516993);
   VbbHcc_jets_CvB_stack_1->SetBinError(6,8868998);
   VbbHcc_jets_CvB_stack_1->SetBinError(7,9702275);
   VbbHcc_jets_CvB_stack_1->SetBinError(8,1.086687e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(9,1.249088e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(10,1.45472e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(11,1.698875e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(12,2.020964e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(13,2.483546e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(14,3.032127e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(15,3.897354e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(16,5.190159e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(17,7.274924e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(18,1.07304e+08);
   VbbHcc_jets_CvB_stack_1->SetBinError(19,9.414528e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(20,2.666157e+07);
   VbbHcc_jets_CvB_stack_1->SetEntries(6.447966e+08);

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
   VbbHcc_jets_CvB_stack_2->SetBinContent(1,3.146066e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(2,4461219);
   VbbHcc_jets_CvB_stack_2->SetBinContent(3,2882703);
   VbbHcc_jets_CvB_stack_2->SetBinContent(4,2516592);
   VbbHcc_jets_CvB_stack_2->SetBinContent(5,2288298);
   VbbHcc_jets_CvB_stack_2->SetBinContent(6,2056701);
   VbbHcc_jets_CvB_stack_2->SetBinContent(7,1972598);
   VbbHcc_jets_CvB_stack_2->SetBinContent(8,1965410);
   VbbHcc_jets_CvB_stack_2->SetBinContent(9,2132478);
   VbbHcc_jets_CvB_stack_2->SetBinContent(10,2302924);
   VbbHcc_jets_CvB_stack_2->SetBinContent(11,2500279);
   VbbHcc_jets_CvB_stack_2->SetBinContent(12,2855935);
   VbbHcc_jets_CvB_stack_2->SetBinContent(13,3622072);
   VbbHcc_jets_CvB_stack_2->SetBinContent(14,4611930);
   VbbHcc_jets_CvB_stack_2->SetBinContent(15,6385978);
   VbbHcc_jets_CvB_stack_2->SetBinContent(16,9209925);
   VbbHcc_jets_CvB_stack_2->SetBinContent(17,1.49255e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(18,2.625086e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(19,2.754224e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(20,4876789);
   VbbHcc_jets_CvB_stack_2->SetBinError(1,1562.242);
   VbbHcc_jets_CvB_stack_2->SetBinError(2,585.6661);
   VbbHcc_jets_CvB_stack_2->SetBinError(3,471.1942);
   VbbHcc_jets_CvB_stack_2->SetBinError(4,440.7971);
   VbbHcc_jets_CvB_stack_2->SetBinError(5,419.4971);
   VbbHcc_jets_CvB_stack_2->SetBinError(6,398.8126);
   VbbHcc_jets_CvB_stack_2->SetBinError(7,390.7062);
   VbbHcc_jets_CvB_stack_2->SetBinError(8,390.1722);
   VbbHcc_jets_CvB_stack_2->SetBinError(9,405.7366);
   VbbHcc_jets_CvB_stack_2->SetBinError(10,421.9342);
   VbbHcc_jets_CvB_stack_2->SetBinError(11,439.8841);
   VbbHcc_jets_CvB_stack_2->SetBinError(12,471.1636);
   VbbHcc_jets_CvB_stack_2->SetBinError(13,531.0037);
   VbbHcc_jets_CvB_stack_2->SetBinError(14,599.2912);
   VbbHcc_jets_CvB_stack_2->SetBinError(15,706.6515);
   VbbHcc_jets_CvB_stack_2->SetBinError(16,852.164);
   VbbHcc_jets_CvB_stack_2->SetBinError(17,1090.244);
   VbbHcc_jets_CvB_stack_2->SetBinError(18,1466.141);
   VbbHcc_jets_CvB_stack_2->SetBinError(19,1528.167);
   VbbHcc_jets_CvB_stack_2->SetBinError(20,645.5346);
   VbbHcc_jets_CvB_stack_2->SetEntries(2.498632e+09);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_jets_bckg_18->Modified();
   CvB_jets_bckg_18->cd();
   CvB_jets_bckg_18->SetSelected(CvB_jets_bckg_18);
}
