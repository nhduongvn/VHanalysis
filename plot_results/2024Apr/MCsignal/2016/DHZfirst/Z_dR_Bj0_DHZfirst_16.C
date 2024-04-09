#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_DHZfirst_16()
{
//=========Macro generated from canvas: Z_dR_Bj0_DHZfirst_16/Z_dR_Bj0_DHZfirst_16
//=========  (Mon Apr  8 11:27:53 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj0_DHZfirst_16 = new TCanvas("Z_dR_Bj0_DHZfirst_16", "Z_dR_Bj0_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_DHZfirst_16->SetHighLightColor(2);
   Z_dR_Bj0_DHZfirst_16->Range(-1.2,-0.02022928,6.8,0.1820635);
   Z_dR_Bj0_DHZfirst_16->SetFillColor(0);
   Z_dR_Bj0_DHZfirst_16->SetFillStyle(4000);
   Z_dR_Bj0_DHZfirst_16->SetBorderMode(0);
   Z_dR_Bj0_DHZfirst_16->SetBorderSize(2);
   Z_dR_Bj0_DHZfirst_16->SetLeftMargin(0.15);
   Z_dR_Bj0_DHZfirst_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_DHZfirst_16->SetFrameBorderMode(0);
   Z_dR_Bj0_DHZfirst_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR_Bj0__181 = new TH1D("VH_DHZfirst_Z_dR_Bj0__181","",30,0,6);
   VH_DHZfirst_Z_dR_Bj0__181->SetBinContent(1,0.08477033);
   VH_DHZfirst_Z_dR_Bj0__181->SetBinContent(2,0.1541279);
   VH_DHZfirst_Z_dR_Bj0__181->SetBinContent(3,0.1027519);
   VH_DHZfirst_Z_dR_Bj0__181->SetBinContent(4,0.03082557);
   VH_DHZfirst_Z_dR_Bj0__181->SetBinContent(5,0.01798158);
   VH_DHZfirst_Z_dR_Bj0__181->SetBinContent(6,0.002568798);
   VH_DHZfirst_Z_dR_Bj0__181->SetBinContent(7,0.007706393);
   VH_DHZfirst_Z_dR_Bj0__181->SetBinContent(8,0.007706393);
   VH_DHZfirst_Z_dR_Bj0__181->SetBinContent(9,0.002568798);
   VH_DHZfirst_Z_dR_Bj0__181->SetBinContent(12,0.005137596);
   VH_DHZfirst_Z_dR_Bj0__181->SetBinContent(14,0.002568798);
   VH_DHZfirst_Z_dR_Bj0__181->SetBinContent(15,0.002568798);
   VH_DHZfirst_Z_dR_Bj0__181->SetBinContent(16,0.002568798);
   VH_DHZfirst_Z_dR_Bj0__181->SetBinContent(18,0.005137596);
   VH_DHZfirst_Z_dR_Bj0__181->SetBinError(1,0.01475662);
   VH_DHZfirst_Z_dR_Bj0__181->SetBinError(2,0.01989782);
   VH_DHZfirst_Z_dR_Bj0__181->SetBinError(3,0.0162465);
   VH_DHZfirst_Z_dR_Bj0__181->SetBinError(4,0.008898577);
   VH_DHZfirst_Z_dR_Bj0__181->SetBinError(5,0.0067964);
   VH_DHZfirst_Z_dR_Bj0__181->SetBinError(6,0.002568798);
   VH_DHZfirst_Z_dR_Bj0__181->SetBinError(7,0.004449288);
   VH_DHZfirst_Z_dR_Bj0__181->SetBinError(8,0.004449288);
   VH_DHZfirst_Z_dR_Bj0__181->SetBinError(9,0.002568798);
   VH_DHZfirst_Z_dR_Bj0__181->SetBinError(12,0.003632829);
   VH_DHZfirst_Z_dR_Bj0__181->SetBinError(14,0.002568798);
   VH_DHZfirst_Z_dR_Bj0__181->SetBinError(15,0.002568798);
   VH_DHZfirst_Z_dR_Bj0__181->SetBinError(16,0.002568798);
   VH_DHZfirst_Z_dR_Bj0__181->SetBinError(18,0.003632829);
   VH_DHZfirst_Z_dR_Bj0__181->SetEntries(167);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR_Bj0__181->SetLineColor(ci);
   VH_DHZfirst_Z_dR_Bj0__181->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VH_DHZfirst_Z_dR_Bj0__181->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR_Bj0__181->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__181->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj0__181->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__181->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR_Bj0__181->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__181->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR_Bj0__181->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR_Bj0__181->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR_Bj0__181->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__181->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__181->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj0__181->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__181->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_DHZfirst_16->Modified();
   Z_dR_Bj0_DHZfirst_16->cd();
   Z_dR_Bj0_DHZfirst_16->SetSelected(Z_dR_Bj0_DHZfirst_16);
}
