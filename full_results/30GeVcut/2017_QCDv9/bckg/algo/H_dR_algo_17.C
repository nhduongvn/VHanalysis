#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_17()
{
//=========Macro generated from canvas: H_dR_algo_17/H_dR_algo_17
//=========  (Tue Feb 14 16:10:10 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_17 = new TCanvas("H_dR_algo_17", "H_dR_algo_17",0,0,600,600);
   H_dR_algo_17->SetHighLightColor(2);
   H_dR_algo_17->Range(-1.353788,-141425.1,7.264125,1037117);
   H_dR_algo_17->SetFillColor(0);
   H_dR_algo_17->SetFillStyle(4000);
   H_dR_algo_17->SetBorderMode(0);
   H_dR_algo_17->SetBorderSize(2);
   H_dR_algo_17->SetLeftMargin(0.15709);
   H_dR_algo_17->SetRightMargin(0.1234783);
   H_dR_algo_17->SetBottomMargin(0.12);
   H_dR_algo_17->SetFrameFillStyle(1000);
   H_dR_algo_17->SetFrameBorderMode(0);
   H_dR_algo_17->SetFrameFillStyle(1000);
   H_dR_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(919262.9);
   
   TH1F *st_stack_86 = new TH1F("st_stack_86","",30,0,6);
   st_stack_86->SetMinimum(0);
   st_stack_86->SetMaximum(919262.9);
   st_stack_86->SetDirectory(0);
   st_stack_86->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_86->SetLineColor(ci);
   st_stack_86->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_86->GetXaxis()->SetRange(1,31);
   st_stack_86->GetXaxis()->SetLabelFont(42);
   st_stack_86->GetXaxis()->SetTitleOffset(1);
   st_stack_86->GetXaxis()->SetTitleFont(42);
   st_stack_86->GetYaxis()->SetTitle("Events/0.2");
   st_stack_86->GetYaxis()->SetLabelFont(42);
   st_stack_86->GetYaxis()->SetTitleSize(0.037);
   st_stack_86->GetYaxis()->SetTitleFont(42);
   st_stack_86->GetZaxis()->SetLabelFont(42);
   st_stack_86->GetZaxis()->SetTitleOffset(1);
   st_stack_86->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_86);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(2,27.57531);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,348176);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,415469.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,390105.1);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,392332.5);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,374286.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,324287.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,497361.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,450778);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,379551.1);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,484931.8);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,602871.7);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,421252.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,464834.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,545099.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,309005.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,170897.1);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,91185.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,71045.62);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,50339.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,17691.77);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,8739.693);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,5176.513);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,3687.244);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(26,2198.456);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(27,289.2086);
   VbbHcc_algo_H_dR_stack_1->SetBinError(2,27.57531);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,38177.16);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,47126.53);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,51506.16);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,52136);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,44934.41);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,37046.43);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,64982.11);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,52781.81);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,42148.63);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,55276.25);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,65413.36);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,44006.51);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,44760.38);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,64338.25);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,46664.89);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,33545.55);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,21120.83);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,18239.24);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,15849.22);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,4190.446);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,2861.426);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,2256.602);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,2247.989);
   VbbHcc_algo_H_dR_stack_1->SetBinError(26,1529.934);
   VbbHcc_algo_H_dR_stack_1->SetBinError(27,246.5247);
   VbbHcc_algo_H_dR_stack_1->SetEntries(40077);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,1.575983);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,2702.387);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,6003.598);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,8606.815);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,11227.81);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,12344.23);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,12124.38);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,11597.92);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,11145.43);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,10828.92);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,10534.43);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,9970.274);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,9032.122);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,8146.692);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,7115.61);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,4214.383);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,2581.762);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,1570.21);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,927.7822);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,527.2914);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,274.1938);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,141.1975);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,61.1265);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,25.63272);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,8.58863);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,2.069775);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,0.3979651);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.3427801);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,13.52255);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,20.1679);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,24.1616);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,27.65575);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,29.17023);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,29.13502);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,28.68669);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,28.22541);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,27.85879);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,27.47056);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,26.70726);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,25.35354);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,23.98908);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,22.36396);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,17.12635);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,13.34022);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,10.32981);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,7.886857);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,5.917522);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,4.232499);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,3.013548);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,1.973648);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,1.276391);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,0.729509);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,0.3620397);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,0.1472674);
   VbbHcc_algo_H_dR_stack_2->SetEntries(2238310);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","QCD","F");

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
   H_dR_algo_17->Modified();
   H_dR_algo_17->cd();
   H_dR_algo_17->SetSelected(H_dR_algo_17);
}
