#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_17()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_17/Z_dR_Bj0_algo_17
//=========  (Tue Feb 14 16:10:11 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_17 = new TCanvas("Z_dR_Bj0_algo_17", "Z_dR_Bj0_algo_17",0,0,600,600);
   Z_dR_Bj0_algo_17->SetHighLightColor(2);
   Z_dR_Bj0_algo_17->Range(-1.310117,-402157.6,7.029799,2949156);
   Z_dR_Bj0_algo_17->SetFillColor(0);
   Z_dR_Bj0_algo_17->SetFillStyle(4000);
   Z_dR_Bj0_algo_17->SetBorderMode(0);
   Z_dR_Bj0_algo_17->SetBorderSize(2);
   Z_dR_Bj0_algo_17->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_17->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_17->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_17->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2614025);
   
   TH1F *st_stack_114 = new TH1F("st_stack_114","",30,0,6);
   st_stack_114->SetMinimum(0);
   st_stack_114->SetMaximum(2614025);
   st_stack_114->SetDirectory(0);
   st_stack_114->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_114->SetLineColor(ci);
   st_stack_114->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_114->GetXaxis()->SetRange(1,30);
   st_stack_114->GetXaxis()->SetLabelFont(42);
   st_stack_114->GetXaxis()->SetTitleOffset(1);
   st_stack_114->GetXaxis()->SetTitleFont(42);
   st_stack_114->GetYaxis()->SetTitle("Events/0.2");
   st_stack_114->GetYaxis()->SetLabelFont(42);
   st_stack_114->GetYaxis()->SetTitleSize(0.037);
   st_stack_114->GetYaxis()->SetTitleFont(42);
   st_stack_114->GetZaxis()->SetLabelFont(42);
   st_stack_114->GetZaxis()->SetTitleOffset(1);
   st_stack_114->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_114);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,380431.8);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,1720236);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,1342565);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,970654.5);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,534666.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,369765.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,298725.4);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,157562.7);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,114478.3);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,87787.63);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,39400.57);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,22555.91);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,35482.34);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,29356.56);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,9892.18);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(16,3566.274);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,3301.439);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,96.40562);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(19,3786.365);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(20,1232.329);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(21,17051.42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(22,36.49542);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(23,291.1925);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(24,1232.768);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(25,2690.941);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(26,21.6364);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,20275.49);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,78125.55);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,81194.29);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,80738.88);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,54472.2);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,48681.85);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,52517.11);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,32422.8);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,28022.37);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,27613.14);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,16173.62);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,4541.258);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,16184.95);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,15956.93);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,3067.087);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(16,1789.725);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,1770.839);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,44.38192);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(19,2097.702);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(20,1210.886);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(21,15565.5);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(22,24.21447);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(23,260.7823);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(24,1210.886);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(25,1731.789);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(26,21.6364);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(40077);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,3165.667);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,22446.54);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,30715.07);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,25402.86);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,17105.38);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,10552.95);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,6477.722);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,4113.899);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,2694.767);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,1814.925);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,1227.087);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,839.7603);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,575.8427);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,401.4794);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,266.6164);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,188.2524);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,131.972);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,92.17066);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,60.11005);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(20,45.28944);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,27.38278);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(22,21.0451);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(23,13.43095);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(24,9.80828);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(25,5.676735);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(26,4.425027);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(27,2.886948);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(28,1.945435);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(29,1.06159);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(30,0.8737075);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(31,1.439591);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,13.71705);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,36.6746);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,42.97791);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,39.10044);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,32.0676);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,25.1497);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,19.67044);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,15.65289);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,12.64985);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,10.37196);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,8.513694);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,7.027148);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,5.811516);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,4.858186);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,3.950591);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,3.331641);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,2.780798);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,2.326861);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,1.86654);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(20,1.629864);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,1.275829);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(22,1.119629);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(23,0.8849943);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(24,0.7592792);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(25,0.5799991);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(26,0.5155395);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(27,0.4094955);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(28,0.3356905);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(29,0.2481568);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(30,0.2224259);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(31,0.2876222);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(2238310);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_1","QCD","F");

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
   Z_dR_Bj0_algo_17->Modified();
   Z_dR_Bj0_algo_17->cd();
   Z_dR_Bj0_algo_17->SetSelected(Z_dR_Bj0_algo_17);
}
