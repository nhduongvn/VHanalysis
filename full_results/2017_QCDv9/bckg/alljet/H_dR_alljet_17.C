#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_alljet_17()
{
//=========Macro generated from canvas: H_dR_alljet_17/H_dR_alljet_17
//=========  (Thu Feb 16 10:35:36 2023) by ROOT version 6.26/06
   TCanvas *H_dR_alljet_17 = new TCanvas("H_dR_alljet_17", "H_dR_alljet_17",0,0,600,600);
   H_dR_alljet_17->SetHighLightColor(2);
   H_dR_alljet_17->Range(-1.353788,-3.749541e+10,7.264125,2.749663e+11);
   H_dR_alljet_17->SetFillColor(0);
   H_dR_alljet_17->SetFillStyle(4000);
   H_dR_alljet_17->SetBorderMode(0);
   H_dR_alljet_17->SetBorderSize(2);
   H_dR_alljet_17->SetLeftMargin(0.15709);
   H_dR_alljet_17->SetRightMargin(0.1234783);
   H_dR_alljet_17->SetBottomMargin(0.12);
   H_dR_alljet_17->SetFrameFillStyle(1000);
   H_dR_alljet_17->SetFrameBorderMode(0);
   H_dR_alljet_17->SetFrameFillStyle(1000);
   H_dR_alljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.437202e+11);
   
   TH1F *st_stack_214 = new TH1F("st_stack_214","",30,0,6);
   st_stack_214->SetMinimum(0);
   st_stack_214->SetMaximum(2.437202e+11);
   st_stack_214->SetDirectory(0);
   st_stack_214->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_214->SetLineColor(ci);
   st_stack_214->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_214->GetXaxis()->SetRange(1,31);
   st_stack_214->GetXaxis()->SetLabelFont(42);
   st_stack_214->GetXaxis()->SetTitleOffset(1);
   st_stack_214->GetXaxis()->SetTitleFont(42);
   st_stack_214->GetYaxis()->SetTitle("Events/0.2");
   st_stack_214->GetYaxis()->SetLabelFont(42);
   st_stack_214->GetYaxis()->SetTitleSize(0.037);
   st_stack_214->GetYaxis()->SetTitleFont(42);
   st_stack_214->GetZaxis()->SetLabelFont(42);
   st_stack_214->GetZaxis()->SetTitleOffset(1);
   st_stack_214->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_214);
   
   
   TH1D *VbbHcc_alljet_H_dR_stack_1 = new TH1D("VbbHcc_alljet_H_dR_stack_1","",30,0,6);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(2,3939008);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(3,2.868255e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(4,6.464609e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(5,5.686949e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(6,6.317451e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(7,7.41769e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(8,9.000916e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(9,1.144401e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(10,1.525656e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(11,2.135436e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(12,3.124452e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(13,4.721623e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(14,7.230613e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(15,1.121589e+11);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(16,1.624748e+11);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(17,1.11739e+11);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(18,8.387707e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(19,6.677424e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(20,5.412583e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(21,4.425319e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(22,3.635472e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(23,2.996159e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(24,2.471575e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(25,2.040475e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(26,1.686827e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(27,1.394551e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(28,1.148248e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(29,9.468523e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(30,7.743462e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(31,3.00823e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(2,265832.6);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(3,7131901);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(4,1.080594e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(5,1.013976e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(6,1.068527e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(7,1.157228e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(8,1.272589e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(9,1.431916e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(10,1.647955e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(11,1.941613e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(12,2.337919e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(13,2.861487e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(14,3.524339e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(15,4.367195e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(16,5.235046e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(17,4.350241e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(18,3.777982e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(19,3.378373e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(20,3.047483e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(21,2.761271e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(22,2.507724e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(23,2.28114e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(24,2.075941e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(25,1.889657e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(26,1.721445e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(27,1.567954e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(28,1.425329e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(29,1.296704e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(30,1.174078e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(31,2.330411e+07);
   VbbHcc_alljet_H_dR_stack_1->SetEntries(2.581078e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_alljet_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_alljet_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_H_dR_stack_1,"");
   
   TH1D *VbbHcc_alljet_H_dR_stack_2 = new TH1D("VbbHcc_alljet_H_dR_stack_2","",30,0,6);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(2,141.7676);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(3,164635.9);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(4,393479);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(5,572559.3);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(6,746304.7);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(7,891451.6);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(8,1034395);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(9,1218917);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(10,1485314);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(11,1866455);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(12,2395513);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(13,3097228);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(14,3960197);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(15,4905248);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(16,5303714);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(17,2829711);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(18,1700425);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(19,1102007);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(20,734246.9);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(21,496869.2);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(22,340918.1);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(23,236023.3);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(24,164826.6);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(25,115852.5);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(26,81709.51);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(27,57933.95);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(28,40981.7);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(29,28826.13);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(30,20051.16);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(31,41553.28);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(2,3.042904);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(3,104.8126);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(4,162.6344);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(5,195.9977);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(6,223.2025);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(7,243.5591);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(8,262.4252);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(9,285.3924);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(10,316.0104);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(11,355.6487);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(12,404.4991);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(13,461.7033);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(14,523.806);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(15,584.5539);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(16,608.7756);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(17,443.2483);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(18,342.2248);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(19,274.3247);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(20,222.8567);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(21,182.4);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(22,150.2957);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(23,124.3999);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(24,103.4906);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(25,86.41748);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(26,72.31081);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(27,60.74673);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(28,51.02261);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(29,42.72968);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(30,35.59342);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(31,50.87946);
   VbbHcc_alljet_H_dR_stack_2->SetEntries(5.886504e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_alljet_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_alljet_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_H_dR_stack_1","QCD","F");

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
   H_dR_alljet_17->Modified();
   H_dR_alljet_17->cd();
   H_dR_alljet_17->SetSelected(H_dR_alljet_17);
}
