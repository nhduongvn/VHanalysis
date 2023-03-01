#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_all_bckg_16_logY()
{
//=========Macro generated from canvas: CvL_jets_all_bckg_16/CvL_jets_all_bckg_16
//=========  (Wed Mar  1 14:06:43 2023) by ROOT version 6.26/06
   TCanvas *CvL_jets_all_bckg_16 = new TCanvas("CvL_jets_all_bckg_16", "CvL_jets_all_bckg_16",0,0,600,600);
   CvL_jets_all_bckg_16->SetHighLightColor(2);
   CvL_jets_all_bckg_16->Range(-0.2183529,4.73717,1.171633,16.0532);
   CvL_jets_all_bckg_16->SetFillColor(0);
   CvL_jets_all_bckg_16->SetFillStyle(4000);
   CvL_jets_all_bckg_16->SetBorderMode(0);
   CvL_jets_all_bckg_16->SetBorderSize(2);
   CvL_jets_all_bckg_16->SetLogy();
   CvL_jets_all_bckg_16->SetLeftMargin(0.15709);
   CvL_jets_all_bckg_16->SetRightMargin(0.1234783);
   CvL_jets_all_bckg_16->SetBottomMargin(0.12);
   CvL_jets_all_bckg_16->SetFrameFillStyle(1000);
   CvL_jets_all_bckg_16->SetFrameBorderMode(0);
   CvL_jets_all_bckg_16->SetFrameFillStyle(1000);
   CvL_jets_all_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(6057925);
   st->SetMaximum(3.278144e+14);
   
   TH1F *st_stack_170 = new TH1F("st_stack_170","",20,0,1);
   st_stack_170->SetMinimum(1244783);
   st_stack_170->SetMaximum(8.348322e+14);
   st_stack_170->SetDirectory(0);
   st_stack_170->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_170->SetLineColor(ci);
   st_stack_170->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_170->GetXaxis()->SetRange(1,20);
   st_stack_170->GetXaxis()->SetLabelFont(42);
   st_stack_170->GetXaxis()->SetTitleOffset(1);
   st_stack_170->GetXaxis()->SetTitleFont(42);
   st_stack_170->GetYaxis()->SetTitle("Events/0.05");
   st_stack_170->GetYaxis()->SetLabelFont(42);
   st_stack_170->GetYaxis()->SetTitleSize(0.037);
   st_stack_170->GetYaxis()->SetTitleFont(42);
   st_stack_170->GetZaxis()->SetLabelFont(42);
   st_stack_170->GetZaxis()->SetTitleOffset(1);
   st_stack_170->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_170);
   
   
   TH1D *VbbHcc_jets_all_CvL_stack_1 = new TH1D("VbbHcc_jets_all_CvL_stack_1","",20,0,1);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(1,6.943931e+11);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(2,3.278041e+12);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(3,7.222613e+11);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(4,1.748648e+11);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(5,7.726641e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(6,4.382066e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(7,2.662744e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(8,1.799412e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(9,1.359891e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(10,1.077753e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(11,8.753492e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(12,7.319182e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(13,6.58491e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(14,6.154009e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(15,6.055273e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(16,6.22144e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(17,6.704809e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(18,7.941825e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(19,9.839898e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(20,1.861829e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(1,1.177018e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(2,2.59109e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(3,1.21109e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(4,5.939827e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(5,3.944521e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(6,2.968604e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(7,2.312073e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(8,1.899736e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(9,1.651157e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(10,1.469166e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(11,1.32251e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(12,1.208247e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(13,1.145154e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(14,1.10613e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(15,1.09613e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(16,1.10926e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(17,1.150163e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(18,1.250416e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(19,1.390061e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(20,1.90791e+07);
   VbbHcc_jets_all_CvL_stack_1->SetEntries(1.398694e+09);

   ci = TColor::GetColor("#ff6600");
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
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(1,3.130965e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(2,1.03786e+08);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(3,2.948339e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(4,1.003194e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(5,5671839);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(6,3963805);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(7,3017335);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(8,2493631);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(9,2245332);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(10,2120314);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(11,2064323);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(12,2064806);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(13,2186357);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(14,2365498);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(15,2652363);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(16,3095288);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(17,3702568);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(18,4724704);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(19,6070005);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(20,9886360);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(1,1402.006);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(2,2576.487);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(3,1376.599);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(4,804.8543);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(5,603.704);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(6,504.5994);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(7,440.1199);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(8,399.8826);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(9,379.2495);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(10,368.3387);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(11,363.2066);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(12,363.0162);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(13,373.3104);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(14,388.1559);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(15,410.9261);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(16,443.8296);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(17,485.3223);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(18,548.2103);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(19,621.6466);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(20,796.6111);
   VbbHcc_jets_all_CvL_stack_2->SetEntries(3.953548e+09);

   ci = TColor::GetColor("#990099");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvL_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CvL_stack_1","QCD","F");

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
   CvL_jets_all_bckg_16->Modified();
   CvL_jets_all_bckg_16->cd();
   CvL_jets_all_bckg_16->SetSelected(CvL_jets_all_bckg_16);
}
