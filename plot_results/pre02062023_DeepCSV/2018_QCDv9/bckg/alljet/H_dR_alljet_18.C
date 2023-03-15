#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_alljet_18()
{
//=========Macro generated from canvas: H_dR_alljet_18/H_dR_alljet_18
//=========  (Wed Jan 18 11:43:14 2023) by ROOT version 6.26/06
   TCanvas *H_dR_alljet_18 = new TCanvas("H_dR_alljet_18", "H_dR_alljet_18",0,0,600,600);
   H_dR_alljet_18->SetHighLightColor(2);
   H_dR_alljet_18->Range(-1.353788,-5.202516e+10,7.264125,3.815179e+11);
   H_dR_alljet_18->SetFillColor(0);
   H_dR_alljet_18->SetFillStyle(4000);
   H_dR_alljet_18->SetBorderMode(0);
   H_dR_alljet_18->SetBorderSize(2);
   H_dR_alljet_18->SetLeftMargin(0.15709);
   H_dR_alljet_18->SetRightMargin(0.1234783);
   H_dR_alljet_18->SetBottomMargin(0.12);
   H_dR_alljet_18->SetFrameFillStyle(1000);
   H_dR_alljet_18->SetFrameBorderMode(0);
   H_dR_alljet_18->SetFrameFillStyle(1000);
   H_dR_alljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.381636e+11);
   
   TH1F *st_stack_215 = new TH1F("st_stack_215","",30,0,6);
   st_stack_215->SetMinimum(0);
   st_stack_215->SetMaximum(3.381636e+11);
   st_stack_215->SetDirectory(0);
   st_stack_215->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_215->SetLineColor(ci);
   st_stack_215->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_215->GetXaxis()->SetRange(1,31);
   st_stack_215->GetXaxis()->SetLabelFont(42);
   st_stack_215->GetXaxis()->SetTitleOffset(1);
   st_stack_215->GetXaxis()->SetTitleFont(42);
   st_stack_215->GetYaxis()->SetTitle("Events/0.2");
   st_stack_215->GetYaxis()->SetLabelFont(42);
   st_stack_215->GetYaxis()->SetTitleSize(0.037);
   st_stack_215->GetYaxis()->SetTitleFont(42);
   st_stack_215->GetZaxis()->SetLabelFont(42);
   st_stack_215->GetZaxis()->SetTitleOffset(1);
   st_stack_215->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_215);
   
   
   TH1D *VbbHcc_alljet_H_dR_stack_1 = new TH1D("VbbHcc_alljet_H_dR_stack_1","",30,0,6);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(2,6344143);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(3,4.458193e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(4,9.008905e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(5,7.87659e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(6,8.724832e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(7,1.022299e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(8,1.24981e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(9,1.591416e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(10,2.123548e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(11,2.9878e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(12,4.398244e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(13,6.635973e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(14,1.01556e+11);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(15,1.569147e+11);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(16,2.254345e+11);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(17,1.552278e+11);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(18,1.167919e+11);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(19,9.293054e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(20,7.552103e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(21,6.180225e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(22,5.081803e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(23,4.195682e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(24,3.454738e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(25,2.857874e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(26,2.362578e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(27,1.950883e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(28,1.607175e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(29,1.325378e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(30,1.088601e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(31,4.210311e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(2,396960.9);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(3,1.081219e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(4,1.537023e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(5,1.445256e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(6,1.531548e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(7,1.624681e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(8,1.816545e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(9,2.040451e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(10,2.369432e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(11,2.804723e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(12,3.384332e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(13,4.11018e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(14,5.081347e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(15,6.242602e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(16,7.394743e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(17,6.156289e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(18,5.351362e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(19,4.793082e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(20,4.332656e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(21,3.92584e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(22,3.588072e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(23,3.257827e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(24,2.952979e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(25,2.711541e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(26,2.448438e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(27,2.234066e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(28,2.036874e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(29,1.840873e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(30,1.693173e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(31,3.29372e+07);
   VbbHcc_alljet_H_dR_stack_1->SetEntries(2.479335e+08);

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
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(2,234.4932);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(3,246676.8);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(4,579546.9);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(5,842763.2);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(6,1097206);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(7,1308855);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(8,1515697);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(9,1788629);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(10,2179686);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(11,2740503);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(12,3520170);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(13,4557062);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(14,5832176);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(15,7229573);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(16,7830153);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(17,4211933);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(18,2550707);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(19,1665318);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(20,1117310);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(21,762040.4);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(22,525172.7);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(23,366159.7);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(24,256478);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(25,180854.5);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(26,127993.2);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(27,90395.6);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(28,63615.92);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(29,44492.28);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(30,30933.64);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(31,63504.29);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(2,5.898324);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(3,151.0899);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(4,232.2164);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(5,278.8035);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(6,317.9959);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(7,346.5323);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(8,372.1463);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(9,405.763);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(10,449.4007);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(11,504.9999);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(12,575.434);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(13,656.8618);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(14,745.5125);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(15,832.1816);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(16,867.794);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(17,636.3821);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(18,494.5254);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(19,399.2748);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(20,326.9976);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(21,269.3194);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(22,222.6758);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(23,185.4462);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(24,154.8266);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(25,129.3043);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(26,109.0245);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(27,91.36069);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(28,75.77437);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(29,63.69228);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(30,52.77079);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(31,74.18584);
   VbbHcc_alljet_H_dR_stack_2->SetEntries(7.166996e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_alljet_18->Modified();
   H_dR_alljet_18->cd();
   H_dR_alljet_18->SetSelected(H_dR_alljet_18);
}
