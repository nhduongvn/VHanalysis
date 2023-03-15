#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_all_bckg_17_logY()
{
//=========Macro generated from canvas: CvL_jets_all_bckg_17/CvL_jets_all_bckg_17
//=========  (Thu Mar  9 13:30:14 2023) by ROOT version 6.26/06
   TCanvas *CvL_jets_all_bckg_17 = new TCanvas("CvL_jets_all_bckg_17", "CvL_jets_all_bckg_17",0,0,600,600);
   CvL_jets_all_bckg_17->SetHighLightColor(2);
   CvL_jets_all_bckg_17->Range(-0.2183529,-1.852199,1.171633,14.94204);
   CvL_jets_all_bckg_17->SetFillColor(0);
   CvL_jets_all_bckg_17->SetFillStyle(4000);
   CvL_jets_all_bckg_17->SetBorderMode(0);
   CvL_jets_all_bckg_17->SetBorderSize(2);
   CvL_jets_all_bckg_17->SetLogy();
   CvL_jets_all_bckg_17->SetLeftMargin(0.15709);
   CvL_jets_all_bckg_17->SetRightMargin(0.1234783);
   CvL_jets_all_bckg_17->SetBottomMargin(0.12);
   CvL_jets_all_bckg_17->SetFrameFillStyle(1000);
   CvL_jets_all_bckg_17->SetFrameBorderMode(0);
   CvL_jets_all_bckg_17->SetFrameFillStyle(1000);
   CvL_jets_all_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(5.468728e+12);
   
   TH1F *st_stack_172 = new TH1F("st_stack_172","",20,0,1);
   st_stack_172->SetMinimum(1.455828);
   st_stack_172->SetMaximum(1.830699e+13);
   st_stack_172->SetDirectory(0);
   st_stack_172->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_172->SetLineColor(ci);
   st_stack_172->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_172->GetXaxis()->SetRange(1,20);
   st_stack_172->GetXaxis()->SetLabelFont(42);
   st_stack_172->GetXaxis()->SetTitleOffset(1);
   st_stack_172->GetXaxis()->SetTitleFont(42);
   st_stack_172->GetYaxis()->SetTitle("Event/0.05");
   st_stack_172->GetYaxis()->SetLabelFont(42);
   st_stack_172->GetYaxis()->SetTitleSize(0.037);
   st_stack_172->GetYaxis()->SetTitleFont(42);
   st_stack_172->GetZaxis()->SetLabelFont(42);
   st_stack_172->GetZaxis()->SetTitleOffset(1);
   st_stack_172->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_172);
   
   
   TH1D *VbbHcc_jets_all_CvL_stack_1 = new TH1D("VbbHcc_jets_all_CvL_stack_1","",20,0,1);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(1,1.005135e+12);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(2,4.538909e+12);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(3,1.084171e+12);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(4,2.637021e+11);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(5,1.176463e+11);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(6,6.879565e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(7,4.3051e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(8,2.970052e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(9,2.292807e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(10,1.847502e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(11,1.504589e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(12,1.255427e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(13,1.105712e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(14,1.012173e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(15,9.800341e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(16,9.983078e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(17,1.062689e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(18,1.276933e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(19,1.702786e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(20,4.492535e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(1,1.247694e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(2,2.691012e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(3,1.312812e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(4,6.454983e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(5,4.306031e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(6,3.290832e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(7,2.600922e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(8,2.158832e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(9,1.896826e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(10,1.701771e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(11,1.533968e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(12,1.399904e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(13,1.312215e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(14,1.254539e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(15,1.232598e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(16,1.242192e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(17,1.279025e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(18,1.401353e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(19,1.616716e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(20,2.624638e+07);
   VbbHcc_jets_all_CvL_stack_1->SetEntries(1.921894e+09);

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
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(1,4.133646e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(2,1.347557e+08);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(3,3.790791e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(4,1.222759e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(5,6768950);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(6,4696662);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(7,3559611);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(8,2927761);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(9,2638624);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(10,2508820);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(11,2460634);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(12,2472876);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(13,2624188);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(14,2868662);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(15,3272670);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(16,3901972);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(17,4789127);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(18,6357721);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(19,8963930);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(20,2.013459e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(1,1653.635);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(2,3009.992);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(3,1599.627);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(4,911.6273);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(5,676.709);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(6,563.8207);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(7,490.9568);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(8,444.9902);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(9,422.1457);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(10,411.3526);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(11,407.0756);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(12,407.7819);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(13,419.6769);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(14,438.519);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(15,468.1095);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(16,510.8724);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(17,565.6216);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(18,651.3927);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(19,773.4169);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(20,1163.761);
   VbbHcc_jets_all_CvL_stack_2->SetEntries(5.212325e+09);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_jets_all_bckg_17->Modified();
   CvL_jets_all_bckg_17->cd();
   CvL_jets_all_bckg_17->SetSelected(CvL_jets_all_bckg_17);
}
