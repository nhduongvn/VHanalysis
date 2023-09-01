#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_16()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_16/Z_dR_Bj0_algo_16
//=========  (Fri Sep  1 13:23:38 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_Bj0_algo_16 = new TCanvas("Z_dR_Bj0_algo_16", "Z_dR_Bj0_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_algo_16->SetHighLightColor(2);
   Z_dR_Bj0_algo_16->Range(-1.2,-0.03625595,6.8,0.3263035);
   Z_dR_Bj0_algo_16->SetFillColor(0);
   Z_dR_Bj0_algo_16->SetBorderMode(0);
   Z_dR_Bj0_algo_16->SetBorderSize(2);
   Z_dR_Bj0_algo_16->SetLeftMargin(0.15);
   Z_dR_Bj0_algo_16->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_dR_Bj0__554 = new TH1D("VbbHcc_algo_Z_dR_Bj0__554","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinContent(1,0.06837519);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinContent(2,0.2762358);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinContent(3,0.2297406);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinContent(4,0.1394854);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinContent(5,0.09299025);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinContent(6,0.0355551);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinContent(7,0.03008508);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinContent(8,0.03282009);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinContent(9,0.02188006);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinContent(10,0.01641004);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinContent(11,0.01367504);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinContent(12,0.01641004);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinContent(13,0.008205022);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinContent(14,0.01641004);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinContent(15,0.005470015);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinContent(17,0.01094003);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinContent(18,0.01094003);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinContent(20,0.002735007);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinError(1,0.01367504);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinError(2,0.02748648);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinError(3,0.02506676);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinError(4,0.01953186);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinError(5,0.0159477);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinError(6,0.00986121);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinError(7,0.009070994);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinError(8,0.009474344);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinError(9,0.007735769);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinError(10,0.006699373);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinError(11,0.006115663);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinError(12,0.006699373);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinError(13,0.004737172);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinError(14,0.006699373);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinError(15,0.003867885);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinError(17,0.005470015);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinError(18,0.005470015);
   VbbHcc_algo_Z_dR_Bj0__554->SetBinError(20,0.002735007);
   VbbHcc_algo_Z_dR_Bj0__554->SetEntries(376);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0__554->SetFillColor(ci);
   VbbHcc_algo_Z_dR_Bj0__554->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VbbHcc_algo_Z_dR_Bj0__554->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_Z_dR_Bj0__554->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__554->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0__554->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__554->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__554->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__554->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__554->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0__554->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__554->Draw("HIST");
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
