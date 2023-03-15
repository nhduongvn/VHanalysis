#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_17/H_dR_Bj1_algo_17
//=========  (Tue Feb 14 16:02:02 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_17 = new TCanvas("H_dR_Bj1_algo_17", "H_dR_Bj1_algo_17",0,0,600,600);
   H_dR_Bj1_algo_17->SetHighLightColor(2);
   H_dR_Bj1_algo_17->Range(-1.310117,-0.839033,7.029799,9.137334);
   H_dR_Bj1_algo_17->SetFillColor(0);
   H_dR_Bj1_algo_17->SetFillStyle(4000);
   H_dR_Bj1_algo_17->SetBorderMode(0);
   H_dR_Bj1_algo_17->SetBorderSize(2);
   H_dR_Bj1_algo_17->SetLogy();
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
   st->SetMinimum(10);
   st->SetMaximum(5.860926e+07);
   
   TH1F *st_stack_110 = new TH1F("st_stack_110","",30,0,6);
   st_stack_110->SetMinimum(2.281031);
   st_stack_110->SetMaximum(1.379424e+08);
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
   st_stack_110->GetYaxis()->SetTitle("Events/0.2");
   st_stack_110->GetYaxis()->SetLabelFont(42);
   st_stack_110->GetYaxis()->SetTitleSize(0.037);
   st_stack_110->GetYaxis()->SetTitleFont(42);
   st_stack_110->GetZaxis()->SetLabelFont(42);
   st_stack_110->GetZaxis()->SetTitleOffset(1);
   st_stack_110->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_110);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,348036.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,575178.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,522416.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,562941.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,473525.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,511660.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,386885.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,321239.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,339591.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,403388.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,367146.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,233201.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,258944.6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,229058.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,232510.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,134612.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,105303.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,42120.97);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,37729.32);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,19541.19);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,26957.17);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(23,6752.696);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(24,4416.415);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(25,1818.101);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(26,1579.298);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(27,283.9761);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(28,26.19645);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,43453.58);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,52443.02);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,54278.39);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,62371.31);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,49429.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,56221.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,43734.43);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,30763.13);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,37746.72);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,51153.11);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,45989.33);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,25049.16);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,36439.01);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,29049.49);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,32823.42);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,23443.49);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,23135.65);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,5501.088);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,5218.676);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,3687.598);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,15781.47);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(23,2226.316);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(24,1828.658);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(25,1240.806);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(26,1238.964);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(27,260.1101);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(28,22.11171);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(40077);

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
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(1,1.695144);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,3124.898);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,10913.71);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,15385.08);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,15990.27);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,14116.43);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,11883.73);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,9973.5);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,8296.272);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,6967.662);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,5845.755);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,5048.766);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,4423.074);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,3981.213);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,3685.469);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,3334.079);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,1965.262);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,1285.314);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,833.1131);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,555.3345);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,350.3576);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(22,208.4859);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,117.5118);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(24,62.11028);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(25,31.22849);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(26,15.07845);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(27,6.318326);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(28,2.667474);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(29,1.653548);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(30,0.8239415);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(31,1.490549);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(1,0.3128713);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,13.44266);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,25.1799);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,30.08003);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,30.88468);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,29.21541);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,26.91987);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,24.70888);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,22.52046);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,20.60869);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,18.82405);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,17.45829);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,16.30507);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,15.45083);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,14.85754);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,14.11604);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,10.81007);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,8.726447);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,7.019739);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,5.723657);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,4.551059);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(22,3.50955);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,2.624575);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(24,1.910014);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(25,1.367617);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(26,0.9512186);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(27,0.6163462);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(28,0.4064496);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(29,0.3291662);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(30,0.2242464);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(31,0.3095728);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(2238310);

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_algo_17->Modified();
   H_dR_Bj1_algo_17->cd();
   H_dR_Bj1_algo_17->SetSelected(H_dR_Bj1_algo_17);
}
