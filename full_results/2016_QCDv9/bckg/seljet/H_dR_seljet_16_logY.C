#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_seljet_16_logY()
{
//=========Macro generated from canvas: H_dR_seljet_16/H_dR_seljet_16
//=========  (Mon Dec 19 11:15:41 2022) by ROOT version 6.26/06
   TCanvas *H_dR_seljet_16 = new TCanvas("H_dR_seljet_16", "H_dR_seljet_16",0,0,600,600);
   H_dR_seljet_16->SetHighLightColor(2);
   H_dR_seljet_16->Range(-1.353788,-0.2932422,7.264125,13.22859);
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
   st->SetMinimum(121.0074);
   st->SetMaximum(2.623858e+11);
   
   TH1F *st_stack_245 = new TH1F("st_stack_245","",30,0,6);
   st_stack_245->SetMinimum(21.34898);
   st_stack_245->SetMaximum(7.523194e+11);
   st_stack_245->SetDirectory(0);
   st_stack_245->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_245->SetLineColor(ci);
   st_stack_245->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_245->GetXaxis()->SetRange(1,31);
   st_stack_245->GetXaxis()->SetLabelFont(42);
   st_stack_245->GetXaxis()->SetTitleOffset(1);
   st_stack_245->GetXaxis()->SetTitleFont(42);
   st_stack_245->GetYaxis()->SetTitle("Events/0.2");
   st_stack_245->GetYaxis()->SetLabelFont(42);
   st_stack_245->GetYaxis()->SetTitleSize(0.037);
   st_stack_245->GetYaxis()->SetTitleFont(42);
   st_stack_245->GetZaxis()->SetLabelFont(42);
   st_stack_245->GetZaxis()->SetTitleOffset(1);
   st_stack_245->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_245);
   
   
   TH1D *VbbHcc_seljet_H_dR_stack_1 = new TH1D("VbbHcc_seljet_H_dR_stack_1","",30,0,6);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(2,120885.1);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(3,1.312804e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(4,2.08559e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(5,1.800256e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(6,1.886566e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(7,2.109957e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(8,2.544071e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(9,3.202617e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(10,4.196074e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(11,5.656723e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(12,7.95042e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(13,1.129869e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(14,1.587428e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(15,2.17505e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(16,2.621124e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(17,1.653161e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(18,1.159561e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(19,8.508025e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(20,6.271401e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(21,4.558936e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(22,3.256566e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(23,2.234687e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(24,1.443763e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(25,8.637619e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(26,4.651758e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(27,2.090092e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(28,6288111);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(29,407852.1);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(2,20586.43);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(3,1077293);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(4,1468677);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(5,1381070);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(6,1412113);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(7,1469597);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(8,1602855);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(9,1763694);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(10,1959602);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(11,2189286);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(12,2521585);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(13,2926556);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(14,3379114);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(15,3883302);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(16,4251500);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(17,3384424);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(18,2859374);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(19,2466113);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(20,2146056);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(21,1840330);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(22,1576131);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(23,1310485);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(24,1059145);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(25,819121.2);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(26,606308.6);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(27,415747.4);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(28,237168.4);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(29,60643.64);
   VbbHcc_seljet_H_dR_stack_1->SetEntries(6.692449e+07);

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
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(2,122.3024);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(3,129732.7);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(4,291005.9);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(5,396509.5);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(6,477848.2);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(7,529741.7);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(8,578544.5);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(9,655572.6);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(10,781397.2);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(11,970710.8);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(12,1240072);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(13,1600952);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(14,2046535);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(15,2536922);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(16,2734270);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(17,1408588);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(18,807023.9);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(19,492165.8);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(20,302908);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(21,185056.2);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(22,111512.2);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(23,65153.87);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(24,36274.82);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(25,18738.3);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(26,8664.376);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(27,3278.206);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(28,799.1807);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(29,43.83779);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(2,2.9203);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(3,97.11906);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(4,146.5156);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(5,171.4558);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(6,188.4944);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(7,198.9826);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(8,208.7078);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(9,223.0481);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(10,244.6048);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(11,273.8371);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(12,310.871);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(13,354.6716);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(14,402.5521);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(15,449.6937);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(16,467.8606);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(17,334.8648);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(18,252.5136);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(19,196.4005);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(20,153.3562);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(21,119.2293);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(22,92.05065);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(23,69.91651);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(24,51.85202);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(25,36.99967);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(26,24.96288);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(27,15.19629);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(28,7.378827);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(29,1.721478);
   VbbHcc_seljet_H_dR_stack_2->SetEntries(2.603414e+08);

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
