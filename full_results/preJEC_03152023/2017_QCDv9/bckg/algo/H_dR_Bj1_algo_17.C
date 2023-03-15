#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_17()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_17/H_dR_Bj1_algo_17
//=========  (Thu Mar  9 13:18:50 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_17 = new TCanvas("H_dR_Bj1_algo_17", "H_dR_Bj1_algo_17",0,0,600,600);
   H_dR_Bj1_algo_17->SetHighLightColor(2);
   H_dR_Bj1_algo_17->Range(-1.310117,-20478.55,7.029799,150176.1);
   H_dR_Bj1_algo_17->SetFillColor(0);
   H_dR_Bj1_algo_17->SetFillStyle(4000);
   H_dR_Bj1_algo_17->SetBorderMode(0);
   H_dR_Bj1_algo_17->SetBorderSize(2);
   H_dR_Bj1_algo_17->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_17->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_17->SetBottomMargin(0.12);
   H_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_17->SetFrameBorderMode(0);
   H_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(133110.6);
   
   TH1F *st_stack_110 = new TH1F("st_stack_110","",30,0,6);
   st_stack_110->SetMinimum(0);
   st_stack_110->SetMaximum(133110.6);
   st_stack_110->SetDirectory(0);
   st_stack_110->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_110->SetLineColor(ci);
   st_stack_110->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_110->GetXaxis()->SetRange(1,30);
   st_stack_110->GetXaxis()->SetLabelFont(42);
   st_stack_110->GetXaxis()->SetTitleOffset(1);
   st_stack_110->GetXaxis()->SetTitleFont(42);
   st_stack_110->GetYaxis()->SetTitle("Event/0.2");
   st_stack_110->GetYaxis()->SetLabelFont(42);
   st_stack_110->GetYaxis()->SetTitleSize(0.037);
   st_stack_110->GetYaxis()->SetTitleFont(42);
   st_stack_110->GetZaxis()->SetLabelFont(42);
   st_stack_110->GetZaxis()->SetTitleOffset(1);
   st_stack_110->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_110);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,67983.72);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,95358.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,94625.34);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,100183.3);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,104771.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,82770.32);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,79909.91);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,56277.17);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,71275.97);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,43889.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,52306.63);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,43909.55);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,40710.66);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,60596.03);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,35151.44);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,25816.48);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,28509.3);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,11262.74);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,10026.46);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,4825.648);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,1592.372);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(23,856.7681);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(24,119.7617);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(25,1364.282);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(26,93.6235);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(27,17.21808);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(28,7.415023);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,5897.105);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,6804.715);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,7438.527);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,16078.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,21566.04);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,6833.892);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,15608.61);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,4962.001);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,15613.95);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,4409.577);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,4731.996);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,3951.083);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,3993.675);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,15215.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,3197.461);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,2982.093);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,14760.45);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,2317.356);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,2047.078);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,1761.409);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,450.7937);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(23,271.9828);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(24,42.20848);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(25,1190.287);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(26,40.0652);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(27,12.17502);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(28,5.243213);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(25364);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(1,0.9766055);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,1817.527);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,5374.015);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,6518.735);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,6296.618);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,5710.718);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,5176.071);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,4592.653);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,4006.711);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,3539.678);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,3119.533);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,2808.02);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,2570.636);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,2404.144);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,2294.053);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,2122.915);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,1296.694);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,855.1205);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,563.8301);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,374.784);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,237.6711);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(22,146.3323);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,79.24184);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(24,42.01053);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(25,20.89712);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(26,10.66588);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(27,5.248164);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(28,2.263036);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(29,1.399739);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(30,0.6087209);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(31,1.081702);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(1,0.2376461);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,10.41876);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,18.04223);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,20.04016);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,19.82905);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,18.94354);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,18.03284);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,16.94575);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,15.79618);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,14.81053);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,13.85819);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,13.13093);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,12.53574);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,12.11071);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,11.83863);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,11.3633);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,8.863665);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,7.1812);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,5.828996);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,4.747786);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,3.787892);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(22,2.972838);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,2.180091);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(24,1.593681);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(25,1.134318);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(26,0.8061362);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(27,0.5630496);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(28,0.3804485);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(29,0.3140187);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(30,0.1966769);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(31,0.2668742);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(1058517);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_1","QCD","F");

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
   H_dR_Bj1_algo_17->Modified();
   H_dR_Bj1_algo_17->cd();
   H_dR_Bj1_algo_17->SetSelected(H_dR_Bj1_algo_17);
}
