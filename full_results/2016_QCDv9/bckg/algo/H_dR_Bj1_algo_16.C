#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_16()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_16/H_dR_Bj1_algo_16
//=========  (Tue Feb 14 16:10:11 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_16 = new TCanvas("H_dR_Bj1_algo_16", "H_dR_Bj1_algo_16",0,0,600,600);
   H_dR_Bj1_algo_16->SetHighLightColor(2);
   H_dR_Bj1_algo_16->Range(-1.310117,-81409.52,7.029799,597003.1);
   H_dR_Bj1_algo_16->SetFillColor(0);
   H_dR_Bj1_algo_16->SetFillStyle(4000);
   H_dR_Bj1_algo_16->SetBorderMode(0);
   H_dR_Bj1_algo_16->SetBorderSize(2);
   H_dR_Bj1_algo_16->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_16->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_16->SetBottomMargin(0.12);
   H_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_16->SetFrameBorderMode(0);
   H_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(529161.8);
   
   TH1F *st_stack_109 = new TH1F("st_stack_109","",30,0,6);
   st_stack_109->SetMinimum(0);
   st_stack_109->SetMaximum(529161.8);
   st_stack_109->SetDirectory(0);
   st_stack_109->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_109->SetLineColor(ci);
   st_stack_109->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_109->GetXaxis()->SetRange(1,30);
   st_stack_109->GetXaxis()->SetLabelFont(42);
   st_stack_109->GetXaxis()->SetTitleOffset(1);
   st_stack_109->GetXaxis()->SetTitleFont(42);
   st_stack_109->GetYaxis()->SetTitle("Events/0.2");
   st_stack_109->GetYaxis()->SetLabelFont(42);
   st_stack_109->GetYaxis()->SetTitleSize(0.037);
   st_stack_109->GetYaxis()->SetTitleFont(42);
   st_stack_109->GetZaxis()->SetLabelFont(42);
   st_stack_109->GetZaxis()->SetTitleOffset(1);
   st_stack_109->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_109);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,190844.6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,345118.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,313573);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,251478.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,307736.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,312969.6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,266092.3);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,255442.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,232087.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,167578.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,216262.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,224632.6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,171625);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,131723.6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,148189.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,98084.05);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,49990.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,26749.82);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,46384.01);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,7670.902);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,30056.64);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(23,8542.98);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(24,5835.463);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(25,1573.747);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(26,419.6969);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(27,45.42148);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(28,359.6345);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(30,23.3873);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,25959.77);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,35868.52);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,41754.01);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,27057.89);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,46899.73);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,41785.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,41186.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,40889.33);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,34199.43);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,24878.34);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,34061.3);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,40274.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,32944.93);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,10559.37);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,11664.08);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,23786.09);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,6180.383);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,4631.336);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,22733.36);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,1963.104);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,22360.14);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(23,2932.915);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(24,2814.517);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(25,623.6889);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(26,312.3664);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(27,26.99562);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(28,310.9494);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(30,23.3873);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(33466);

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
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(1,1.00551);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,2250.639);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,7656.38);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,10779.79);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,11120.26);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,9834.525);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,8263.808);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,6938.475);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,5786.321);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,4827.197);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,4114.81);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,3549.043);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,3139.081);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,2843.727);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,2639.851);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,2382.245);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,1421.026);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,935.8485);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,608.4778);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,401.5776);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,257.3993);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(22,150.9588);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,84.1663);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(24,48.03905);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(25,22.56635);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(26,11.6644);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(27,5.346057);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(28,2.257624);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(29,0.9343117);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(30,0.6441227);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(31,0.7970974);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(1,0.2542173);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,11.69437);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,21.60537);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,25.75531);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,26.32208);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,24.88401);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,22.89897);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,20.99842);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,19.17188);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,17.4787);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,16.11252);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,14.94271);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,14.02459);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,13.32927);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,12.82336);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,12.183);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,9.398452);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,7.62175);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,6.13038);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,4.976584);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,3.982627);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(22,3.037091);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,2.269425);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(24,1.71792);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(25,1.177627);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(26,0.8569727);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(27,0.5755123);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(28,0.3805534);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(29,0.2440434);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(30,0.2064912);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(31,0.2318781);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(1481664);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_algo_16->Modified();
   H_dR_Bj1_algo_16->cd();
   H_dR_Bj1_algo_16->SetSelected(H_dR_Bj1_algo_16);
}
