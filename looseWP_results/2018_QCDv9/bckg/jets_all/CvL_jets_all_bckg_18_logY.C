#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_all_bckg_18_logY()
{
//=========Macro generated from canvas: CvL_jets_all_bckg_18/CvL_jets_all_bckg_18
//=========  (Fri Mar 10 14:09:16 2023) by ROOT version 6.26/06
   TCanvas *CvL_jets_all_bckg_18 = new TCanvas("CvL_jets_all_bckg_18", "CvL_jets_all_bckg_18",0,0,600,600);
   CvL_jets_all_bckg_18->SetHighLightColor(2);
   CvL_jets_all_bckg_18->Range(-0.2183529,-1.877507,1.171633,15.09345);
   CvL_jets_all_bckg_18->SetFillColor(0);
   CvL_jets_all_bckg_18->SetFillStyle(4000);
   CvL_jets_all_bckg_18->SetBorderMode(0);
   CvL_jets_all_bckg_18->SetBorderSize(2);
   CvL_jets_all_bckg_18->SetLogy();
   CvL_jets_all_bckg_18->SetLeftMargin(0.15709);
   CvL_jets_all_bckg_18->SetRightMargin(0.1234783);
   CvL_jets_all_bckg_18->SetBottomMargin(0.12);
   CvL_jets_all_bckg_18->SetFrameFillStyle(1000);
   CvL_jets_all_bckg_18->SetFrameBorderMode(0);
   CvL_jets_all_bckg_18->SetFrameFillStyle(1000);
   CvL_jets_all_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(7.383407e+12);
   
   TH1F *st_stack_174 = new TH1F("st_stack_174","",20,0,1);
   st_stack_174->SetMinimum(1.442142);
   st_stack_174->SetMaximum(2.490904e+13);
   st_stack_174->SetDirectory(0);
   st_stack_174->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_174->SetLineColor(ci);
   st_stack_174->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_174->GetXaxis()->SetRange(1,20);
   st_stack_174->GetXaxis()->SetLabelFont(42);
   st_stack_174->GetXaxis()->SetTitleOffset(1);
   st_stack_174->GetXaxis()->SetTitleFont(42);
   st_stack_174->GetYaxis()->SetTitle("Event/0.05");
   st_stack_174->GetYaxis()->SetLabelFont(42);
   st_stack_174->GetYaxis()->SetTitleSize(0.037);
   st_stack_174->GetYaxis()->SetTitleFont(42);
   st_stack_174->GetZaxis()->SetLabelFont(42);
   st_stack_174->GetZaxis()->SetTitleOffset(1);
   st_stack_174->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_174);
   
   
   TH1D *VbbHcc_jets_all_CvL_stack_1 = new TH1D("VbbHcc_jets_all_CvL_stack_1","",20,0,1);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(1,1.471118e+12);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(2,6.128038e+12);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(3,1.438452e+12);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(4,3.638878e+11);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(5,1.626952e+11);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(6,9.423024e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(7,5.865303e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(8,4.033584e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(9,3.107025e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(10,2.505664e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(11,2.057354e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(12,1.721666e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(13,1.524141e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(14,1.407538e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(15,1.373016e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(16,1.406037e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(17,1.517749e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(18,1.820267e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(19,2.433064e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(20,6.321845e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(1,2.024638e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(2,4.013915e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(3,1.928549e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(4,9.805492e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(5,6.601831e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(6,5.010309e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(7,3.952409e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(8,3.286408e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(9,2.914442e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(10,2.604787e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(11,2.401837e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(12,2.158907e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(13,2.044732e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(14,1.983354e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(15,1.940625e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(16,1.987072e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(17,2.053005e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(18,2.287361e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(19,2.60687e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(20,4.229162e+07);
   VbbHcc_jets_all_CvL_stack_1->SetEntries(1.885636e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_CvL_stack_1->SetFillColor(ci);
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
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(1,6.260491e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(2,1.899764e+08);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(3,5.289267e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(4,1.76689e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(5,9824261);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(6,6807743);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(7,5165600);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(8,4254753);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(9,3842716);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(10,3660956);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(11,3597321);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(12,3621130);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(13,3852543);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(14,4217830);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(15,4816581);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(16,5747011);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(17,7053560);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(18,9343919);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(19,1.310847e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(20,2.889104e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(1,2220.209);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(2,3744.946);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(3,1975.356);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(4,1159.953);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(5,866.8844);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(6,722.9586);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(7,632.1936);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(8,573.4321);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(9,545.2108);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(10,532.8911);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(11,527.665);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(12,529.1413);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(13,547.0102);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(14,571.9892);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(15,610.8148);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(16,667.6454);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(17,739.9664);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(18,852.0971);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(19,1012.42);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(20,1515.931);
   VbbHcc_jets_all_CvL_stack_2->SetEntries(7.353928e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_CvL_stack_2->SetFillColor(ci);
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvL_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CvL_stack_1","QCD","F");

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
   CvL_jets_all_bckg_18->Modified();
   CvL_jets_all_bckg_18->cd();
   CvL_jets_all_bckg_18->SetSelected(CvL_jets_all_bckg_18);
}
