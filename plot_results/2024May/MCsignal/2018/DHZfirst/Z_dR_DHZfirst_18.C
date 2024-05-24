#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_DHZfirst_18()
{
//=========Macro generated from canvas: Z_dR_DHZfirst_18/Z_dR_DHZfirst_18
//=========  (Thu May 23 13:53:21 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_DHZfirst_18 = new TCanvas("Z_dR_DHZfirst_18", "Z_dR_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_DHZfirst_18->SetHighLightColor(2);
   Z_dR_DHZfirst_18->Range(-1.2,-0.02376054,6.8,0.2138449);
   Z_dR_DHZfirst_18->SetFillColor(0);
   Z_dR_DHZfirst_18->SetFillStyle(4000);
   Z_dR_DHZfirst_18->SetBorderMode(0);
   Z_dR_DHZfirst_18->SetBorderSize(2);
   Z_dR_DHZfirst_18->SetLeftMargin(0.15);
   Z_dR_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dR_DHZfirst_18->SetFrameBorderMode(0);
   Z_dR_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dR_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR__53 = new TH1D("VH_DHZfirst_Z_dR__53","",30,0,6);
   VH_DHZfirst_Z_dR__53->SetBinContent(3,0.136249);
   VH_DHZfirst_Z_dR__53->SetBinContent(4,0.1810327);
   VH_DHZfirst_Z_dR__53->SetBinContent(5,0.1264372);
   VH_DHZfirst_Z_dR__53->SetBinContent(6,0.05366821);
   VH_DHZfirst_Z_dR__53->SetBinContent(7,0.01521352);
   VH_DHZfirst_Z_dR__53->SetBinContent(8,0.008512251);
   VH_DHZfirst_Z_dR__53->SetBinContent(9,0.009033182);
   VH_DHZfirst_Z_dR__53->SetBinContent(10,0.00318454);
   VH_DHZfirst_Z_dR__53->SetBinContent(11,0.005166301);
   VH_DHZfirst_Z_dR__53->SetBinContent(12,0.002238646);
   VH_DHZfirst_Z_dR__53->SetBinContent(15,0.002542766);
   VH_DHZfirst_Z_dR__53->SetBinContent(16,0.005926835);
   VH_DHZfirst_Z_dR__53->SetBinContent(17,0.003662716);
   VH_DHZfirst_Z_dR__53->SetBinContent(18,0.004316465);
   VH_DHZfirst_Z_dR__53->SetBinContent(22,0.002329829);
   VH_DHZfirst_Z_dR__53->SetBinContent(24,0.002656642);
   VH_DHZfirst_Z_dR__53->SetBinContent(26,0.003177345);
   VH_DHZfirst_Z_dR__53->SetBinContent(27,0.0158941);
   VH_DHZfirst_Z_dR__53->SetBinContent(28,0.007993788);
   VH_DHZfirst_Z_dR__53->SetBinContent(29,0.005322912);
   VH_DHZfirst_Z_dR__53->SetBinContent(30,0.007505959);
   VH_DHZfirst_Z_dR__53->SetBinContent(31,0.005569388);
   VH_DHZfirst_Z_dR__53->SetBinError(3,0.0192098);
   VH_DHZfirst_Z_dR__53->SetBinError(4,0.02527791);
   VH_DHZfirst_Z_dR__53->SetBinError(5,0.01986421);
   VH_DHZfirst_Z_dR__53->SetBinError(6,0.01308383);
   VH_DHZfirst_Z_dR__53->SetBinError(7,0.007255246);
   VH_DHZfirst_Z_dR__53->SetBinError(8,0.005102697);
   VH_DHZfirst_Z_dR__53->SetBinError(9,0.007073927);
   VH_DHZfirst_Z_dR__53->SetBinError(10,0.00318454);
   VH_DHZfirst_Z_dR__53->SetBinError(11,0.00367551);
   VH_DHZfirst_Z_dR__53->SetBinError(12,0.002238646);
   VH_DHZfirst_Z_dR__53->SetBinError(15,0.002542766);
   VH_DHZfirst_Z_dR__53->SetBinError(16,0.00419185);
   VH_DHZfirst_Z_dR__53->SetBinError(17,0.003662716);
   VH_DHZfirst_Z_dR__53->SetBinError(18,0.003052387);
   VH_DHZfirst_Z_dR__53->SetBinError(22,0.002329829);
   VH_DHZfirst_Z_dR__53->SetBinError(24,0.002656642);
   VH_DHZfirst_Z_dR__53->SetBinError(26,0.003177345);
   VH_DHZfirst_Z_dR__53->SetBinError(27,0.007598511);
   VH_DHZfirst_Z_dR__53->SetBinError(28,0.00465409);
   VH_DHZfirst_Z_dR__53->SetBinError(29,0.003768468);
   VH_DHZfirst_Z_dR__53->SetBinError(30,0.004348995);
   VH_DHZfirst_Z_dR__53->SetBinError(31,0.004060662);
   VH_DHZfirst_Z_dR__53->SetEntries(219);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR__53->SetLineColor(ci);
   VH_DHZfirst_Z_dR__53->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_DHZfirst_Z_dR__53->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR__53->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__53->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR__53->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__53->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR__53->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__53->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR__53->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR__53->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR__53->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__53->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__53->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR__53->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__53->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_DHZfirst_18->Modified();
   Z_dR_DHZfirst_18->cd();
   Z_dR_DHZfirst_18->SetSelected(Z_dR_DHZfirst_18);
}
