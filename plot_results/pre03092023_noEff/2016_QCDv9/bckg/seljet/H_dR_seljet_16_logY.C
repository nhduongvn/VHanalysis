#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_seljet_16_logY()
{
//=========Macro generated from canvas: H_dR_seljet_16/H_dR_seljet_16
//=========  (Thu Feb 16 10:37:42 2023) by ROOT version 6.26/06
   TCanvas *H_dR_seljet_16 = new TCanvas("H_dR_seljet_16", "H_dR_seljet_16",0,0,600,600);
   H_dR_seljet_16->SetHighLightColor(2);
   H_dR_seljet_16->Range(-1.353788,-0.7844532,7.264125,12.36718);
   H_dR_seljet_16->SetFillColor(0);
   H_dR_seljet_16->SetFillStyle(4000);
   H_dR_seljet_16->SetBorderMode(0);
   H_dR_seljet_16->SetBorderSize(2);
   H_dR_seljet_16->SetLogy();
   H_dR_seljet_16->SetLeftMargin(0.15709);
   H_dR_seljet_16->SetRightMargin(0.1234783);
   H_dR_seljet_16->SetBottomMargin(0.12);
   H_dR_seljet_16->SetFrameFillStyle(1000);
   H_dR_seljet_16->SetFrameBorderMode(0);
   H_dR_seljet_16->SetFrameFillStyle(1000);
   H_dR_seljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(34.41178);
   st->SetMaximum(4.006913e+10);
   
   TH1F *st_stack_277 = new TH1F("st_stack_277","",30,0,6);
   st_stack_277->SetMinimum(6.219312);
   st_stack_277->SetMaximum(1.127233e+11);
   st_stack_277->SetDirectory(0);
   st_stack_277->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_277->SetLineColor(ci);
   st_stack_277->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_277->GetXaxis()->SetRange(1,31);
   st_stack_277->GetXaxis()->SetLabelFont(42);
   st_stack_277->GetXaxis()->SetTitleOffset(1);
   st_stack_277->GetXaxis()->SetTitleFont(42);
   st_stack_277->GetYaxis()->SetTitle("Events/0.2");
   st_stack_277->GetYaxis()->SetLabelFont(42);
   st_stack_277->GetYaxis()->SetTitleSize(0.037);
   st_stack_277->GetYaxis()->SetTitleFont(42);
   st_stack_277->GetZaxis()->SetLabelFont(42);
   st_stack_277->GetZaxis()->SetTitleOffset(1);
   st_stack_277->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_277);
   
   
   TH1D *VbbHcc_seljet_H_dR_stack_1 = new TH1D("VbbHcc_seljet_H_dR_stack_1","",30,0,6);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(2,36347.47);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(3,2.091304e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(4,2.685607e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(5,2.318352e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(6,2.405412e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(7,2.701758e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(8,3.384655e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(9,4.366605e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(10,5.849752e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(11,8.223424e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(12,1.178864e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(13,1.705397e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(14,2.42892e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(15,3.34683e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(16,3.99184e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(17,2.517473e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(18,1.734986e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(19,1.253679e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(20,9.060704e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(21,6.519169e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(22,4.517809e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(23,3.059158e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(24,1.915233e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(25,1.145987e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(26,6058344);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(27,2543555);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(28,697834.7);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(29,34387.59);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(2,6437.296);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(3,232218);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(4,290832);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(5,276448.6);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(6,274864.1);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(7,273235.3);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(8,322174.2);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(9,337932.9);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(10,357534.1);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(11,405038.9);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(12,463614.9);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(13,555900.2);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(14,641514.2);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(15,742939.9);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(16,812454.3);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(17,658375.1);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(18,544620.8);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(19,464466.4);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(20,403098.4);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(21,361436.8);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(22,304349.9);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(23,250736.8);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(24,197335.3);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(25,156415.6);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(26,120723.2);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(27,78215.2);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(28,42324.25);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(29,4864.989);
   VbbHcc_seljet_H_dR_stack_1->SetEntries(3.879266e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_1,"");
   
   TH1D *VbbHcc_seljet_H_dR_stack_2 = new TH1D("VbbHcc_seljet_H_dR_stack_2","",30,0,6);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(2,70.88649);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(3,77363);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(4,170511.5);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(5,214674.7);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(6,231571.4);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(7,237864.3);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(8,250989.3);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(9,283941.3);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(10,345533.6);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(11,446165);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(12,595438);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(13,802873.1);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(14,1067429);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(15,1367108);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(16,1507261);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(17,789331);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(18,455138.2);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(19,278175.2);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(20,171539.8);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(21,104931.9);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(22,63300.71);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(23,36955.54);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(24,20599);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(25,10614.27);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(26,4876.772);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(27,1818.94);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(28,436.4233);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(29,24.18426);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(2,2.174036);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(3,73.06613);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(4,109.1752);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(5,122.8332);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(6,127.7268);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(7,129.5463);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(8,133.1394);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(9,141.6505);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(10,156.3775);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(11,177.8756);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(12,205.7887);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(13,239.3315);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(14,276.4757);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(15,313.4888);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(16,329.6432);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(17,238.1921);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(18,180.4415);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(19,140.6816);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(20,110.1055);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(21,85.77683);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(22,66.3395);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(23,50.41956);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(24,37.44287);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(25,26.70052);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(26,17.95491);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(27,10.85172);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(28,5.226865);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(29,1.224387);
   VbbHcc_seljet_H_dR_stack_2->SetEntries(1.410885e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_1","QCD","F");

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
   H_dR_seljet_16->Modified();
   H_dR_seljet_16->cd();
   H_dR_seljet_16->SetSelected(H_dR_seljet_16);
}
