#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_16/Z_dR_Bj0_algo_16
//=========  (Mon Dec 19 11:15:39 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_16 = new TCanvas("Z_dR_Bj0_algo_16", "Z_dR_Bj0_algo_16",0,0,600,600);
   Z_dR_Bj0_algo_16->SetHighLightColor(2);
   Z_dR_Bj0_algo_16->Range(-1.310117,-0.9209181,7.029799,9.584205);
   Z_dR_Bj0_algo_16->SetFillColor(0);
   Z_dR_Bj0_algo_16->SetFillStyle(4000);
   Z_dR_Bj0_algo_16->SetBorderMode(0);
   Z_dR_Bj0_algo_16->SetBorderSize(2);
   Z_dR_Bj0_algo_16->SetLogy();
   Z_dR_Bj0_algo_16->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_16->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_16->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_16->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.40654e+08);
   
   TH1F *st_stack_105 = new TH1F("st_stack_105","",30,0,6);
   st_stack_105->SetMinimum(2.186234);
   st_stack_105->SetMaximum(3.417372e+08);
   st_stack_105->SetDirectory(0);
   st_stack_105->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_105->SetLineColor(ci);
   st_stack_105->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_105->GetXaxis()->SetRange(1,30);
   st_stack_105->GetXaxis()->SetLabelFont(42);
   st_stack_105->GetXaxis()->SetTitleOffset(1);
   st_stack_105->GetXaxis()->SetTitleFont(42);
   st_stack_105->GetYaxis()->SetTitle("Events/0.2");
   st_stack_105->GetYaxis()->SetLabelFont(42);
   st_stack_105->GetYaxis()->SetTitleSize(0.037);
   st_stack_105->GetYaxis()->SetTitleFont(42);
   st_stack_105->GetZaxis()->SetLabelFont(42);
   st_stack_105->GetZaxis()->SetTitleOffset(1);
   st_stack_105->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_105);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,329858.5);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,1390095);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,1087633);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,785801.7);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,530271.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,291205.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,183849.8);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,143888.3);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,60401.35);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,121437.4);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,123614.9);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,28151.17);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,33400.84);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,26148.42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,23144.42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(16,2120.777);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,18380.92);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,38095.34);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(19,1775.873);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(20,2331.743);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(21,20293.14);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(22,321.4557);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(23,8.241342);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(24,25.53514);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(25,8.241342);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(31,1418.554);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,21630.69);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,74250.92);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,82273.91);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,77040.23);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,63121.47);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,47990.08);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,36493.8);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,35875.17);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,18515.31);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,35704.18);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,39494.93);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,5934.243);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,17919.46);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,17638.57);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,17567.4);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(16,1476.663);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,17438.13);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,24734.3);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(19,1447.915);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(20,1503.938);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(21,17546.03);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(22,288.888);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(23,8.241342);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(24,25.08003);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(25,8.241342);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(31,1418.554);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(37218);

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
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,2325.256);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,16444.49);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,22560.11);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,18681.88);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,12575.32);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,7858.119);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,4850.195);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,3082.888);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,2007.571);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,1355.853);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,914.6716);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,608.194);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,429.1446);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,295.5279);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,209.6895);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,142.8497);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,94.72793);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,64.3928);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,47.25541);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(20,32.69799);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,20.16543);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(22,16.39296);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(23,10.29038);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(24,6.218758);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(25,5.126352);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(26,2.608064);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(27,1.932217);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(28,1.389901);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(29,0.6087313);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(30,0.5764904);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(31,1.505505);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,12.70936);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,33.99965);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,39.88517);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,36.31694);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,29.74661);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,23.46963);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,18.41239);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,14.64809);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,11.78901);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,9.679029);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,7.929009);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,6.44855);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,5.421943);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,4.500651);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,3.789353);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,3.132125);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,2.551871);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,2.0813);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,1.799968);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(20,1.499767);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,1.166402);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(22,1.067675);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(23,0.8430789);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(24,0.6560491);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(25,0.5816514);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(26,0.4171858);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(27,0.3707605);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(28,0.3072385);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(29,0.1901386);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(30,0.2012407);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(31,0.331231);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(1448757);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_16->Modified();
   Z_dR_Bj0_algo_16->cd();
   Z_dR_Bj0_algo_16->SetSelected(Z_dR_Bj0_algo_16);
}
