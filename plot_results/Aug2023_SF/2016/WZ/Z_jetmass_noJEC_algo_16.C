#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_algo_16()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_algo_16/Z_jetmass_noJEC_algo_16
//=========  (Fri Sep  1 13:23:40 2023) by ROOT version 6.28/04
   TCanvas *Z_jetmass_noJEC_algo_16 = new TCanvas("Z_jetmass_noJEC_algo_16", "Z_jetmass_noJEC_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_algo_16->SetHighLightColor(2);
   Z_jetmass_noJEC_algo_16->Range(-60,-2.256103,340,20.30493);
   Z_jetmass_noJEC_algo_16->SetFillColor(0);
   Z_jetmass_noJEC_algo_16->SetBorderMode(0);
   Z_jetmass_noJEC_algo_16->SetBorderSize(2);
   Z_jetmass_noJEC_algo_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_algo_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_jetmass_noJEC__700 = new TH1D("VbbHcc_algo_Z_jetmass_noJEC__700","",150,0,300);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(2,0.08642828);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(3,0.4189486);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(4,4.485365);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(5,12.34903);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(6,17.18936);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(7,15.98247);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(8,10.97035);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(9,9.235566);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(10,5.875141);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(11,5.031064);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(12,3.452095);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(13,2.723168);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(14,2.714508);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(15,2.400628);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(16,1.14562);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(17,1.28825);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(18,1.2364);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(19,1.315979);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(20,1.162896);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(21,0.5545264);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(22,0.3171342);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(23,0.20189);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(24,0.4896327);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(25,0.4214017);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(27,0.09143661);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(28,0.2168678);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(29,0.09294618);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(32,0.09908567);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(33,0.2602431);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(35,0.07798668);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(37,0.2131813);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(41,0.1877509);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(42,0.2536023);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(44,0.09527303);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(47,0.09890328);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(50,0.06860019);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinContent(65,0.1285073);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(2,0.08642828);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(3,0.1938321);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(4,0.6271589);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(5,1.019846);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(6,1.232282);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(7,1.193855);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(8,1.009827);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(9,0.9267378);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(10,0.739959);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(11,0.6973463);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(12,0.5833763);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(13,0.512217);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(14,0.5094825);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(15,0.4908717);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(16,0.3325441);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(17,0.3777381);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(18,0.36047);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(19,0.3700089);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(20,0.3543156);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(21,0.250994);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(22,0.1819192);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(23,0.1432296);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(24,0.2201434);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(25,0.211961);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(27,0.09143661);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(28,0.1553719);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(29,0.09294618);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(32,0.09908567);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(33,0.1521027);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(35,0.07798668);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(37,0.151059);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(41,0.1336475);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(42,0.1799725);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(44,0.09527303);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(47,0.09890328);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(50,0.06860019);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetBinError(65,0.1285073);
   VbbHcc_algo_Z_jetmass_noJEC__700->SetEntries(1159);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_jetmass_noJEC__700->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_noJEC__700->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_algo_Z_jetmass_noJEC__700->GetXaxis()->SetRange(1,150);
   VbbHcc_algo_Z_jetmass_noJEC__700->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__700->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC__700->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__700->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__700->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__700->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__700->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC__700->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__700->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_algo_16->Modified();
   Z_jetmass_noJEC_algo_16->cd();
   Z_jetmass_noJEC_algo_16->SetSelected(Z_jetmass_noJEC_algo_16);
}
