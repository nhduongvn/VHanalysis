#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_algo_16()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_16/Z_dR_Bj1_algo_16
//=========  (Fri Sep  1 13:23:38 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_Bj1_algo_16 = new TCanvas("Z_dR_Bj1_algo_16", "Z_dR_Bj1_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_algo_16->SetHighLightColor(2);
   Z_dR_Bj1_algo_16->Range(-1.2,-12573.49,6.8,113161.4);
   Z_dR_Bj1_algo_16->SetFillColor(0);
   Z_dR_Bj1_algo_16->SetBorderMode(0);
   Z_dR_Bj1_algo_16->SetBorderSize(2);
   Z_dR_Bj1_algo_16->SetLeftMargin(0.15);
   Z_dR_Bj1_algo_16->SetFrameBorderMode(0);
   Z_dR_Bj1_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_dR_Bj1__558 = new TH1D("VbbHcc_algo_Z_dR_Bj1__558","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(1,219);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(2,63926);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(3,95798);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(4,88997);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(5,84064);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(6,73111);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(7,60608);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(8,50031);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(9,41450);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(10,34890);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(11,29922);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(12,26116);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(13,23222);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(14,20850);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(15,19274);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(16,17509);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(17,14988);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(18,13123);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(19,11960);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(20,10817);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(21,9746);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(22,8894);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(23,7482);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(24,6067);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(25,4911);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(26,3633);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(27,2734);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(28,1921);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(29,1161);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(30,769);
   VbbHcc_algo_Z_dR_Bj1__558->SetBinContent(31,1174);
   VbbHcc_algo_Z_dR_Bj1__558->SetEntries(829367);
   VbbHcc_algo_Z_dR_Bj1__558->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   VbbHcc_algo_Z_dR_Bj1__558->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_Z_dR_Bj1__558->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__558->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1__558->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__558->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__558->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__558->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__558->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1__558->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__558->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_algo_16->Modified();
   Z_dR_Bj1_algo_16->cd();
   Z_dR_Bj1_algo_16->SetSelected(Z_dR_Bj1_algo_16);
}
