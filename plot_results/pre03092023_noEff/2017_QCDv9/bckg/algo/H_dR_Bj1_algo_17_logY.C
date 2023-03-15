#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_17/H_dR_Bj1_algo_17
//=========  (Thu Feb 16 10:37:39 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_17 = new TCanvas("H_dR_Bj1_algo_17", "H_dR_Bj1_algo_17",0,0,600,600);
   H_dR_Bj1_algo_17->SetHighLightColor(2);
   H_dR_Bj1_algo_17->Range(-1.310117,-0.6828096,7.029799,8.298358);
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
   st->SetMaximum(1.136653e+07);
   
   TH1F *st_stack_110 = new TH1F("st_stack_110","",30,0,6);
   st_stack_110->SetMinimum(2.482736);
   st_stack_110->SetMaximum(2.513284e+07);
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
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,69607.32);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,96428.65);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,93818.79);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,86604.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,107953.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,85323.78);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,81262.22);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,56114.91);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,70296.77);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,43633.35);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,48208.34);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,43394.49);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,41419.13);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,62723.32);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,35605.86);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,24909.56);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,29980.34);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,11586.41);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,10206.69);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,5039.58);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,1607.214);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(23,858.2827);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(24,114.1296);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(25,1451.258);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(26,95.63995);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(27,17.79084);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(28,8.088978);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,6250.969);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,7098.483);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,7601.418);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,7015.75);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,23345.76);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,7274.283);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,16851.15);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,5083.044);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,16772.05);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,4492.72);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,4290.923);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,3954.174);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,4226.381);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,16494.61);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,3344.177);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,2863.309);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,16023.48);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,2467.36);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,2160.77);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,1892.32);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,451.2992);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(23,272.5226);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(24,42.07853);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(25,1286.697);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(26,40.72032);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(27,12.58002);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(28,5.719771);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(24778);

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
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(1,0.969673);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,1815.292);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,5371.609);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,6527.025);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,6302.118);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,5711.87);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,5171.941);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,4591.648);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,4013.617);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,3538.096);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,3118.423);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,2805.633);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,2569.269);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,2404.232);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,2294.103);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,2126.733);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,1296.372);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,856.485);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,562.751);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,376.3608);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,239.1627);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(22,147.0189);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,79.19637);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(24,41.84659);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(25,21.02136);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(26,10.95983);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(27,5.300792);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(28,2.276391);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(29,1.355242);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(30,0.5782144);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(31,1.106348);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(1,0.2410601);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,10.58707);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,18.32005);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,20.32768);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,20.07859);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,19.15823);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,18.23012);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,17.14047);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,15.9987);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,14.99182);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,14.03231);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,13.30051);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,12.70403);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,12.27836);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,12.00225);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,11.53146);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,8.991314);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,7.294566);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,5.910778);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,4.830772);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,3.854542);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(22,3.022776);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,2.213859);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(24,1.614593);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(25,1.151367);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(26,0.8282729);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(27,0.5735592);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(28,0.3851379);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(29,0.3109137);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(30,0.1950664);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(31,0.2712815);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(1015007);

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
