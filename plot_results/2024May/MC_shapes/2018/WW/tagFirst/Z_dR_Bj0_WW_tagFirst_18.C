#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_WW_tagFirst_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_WW_tagFirst_18/Z_dR_Bj0_WW_tagFirst_18
//=========  (Fri May 24 12:42:10 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj0_WW_tagFirst_18 = new TCanvas("Z_dR_Bj0_WW_tagFirst_18", "Z_dR_Bj0_WW_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_WW_tagFirst_18->SetHighLightColor(2);
   Z_dR_Bj0_WW_tagFirst_18->Range(-1.2,-1.682178,6.8,15.1396);
   Z_dR_Bj0_WW_tagFirst_18->SetFillColor(0);
   Z_dR_Bj0_WW_tagFirst_18->SetFillStyle(4000);
   Z_dR_Bj0_WW_tagFirst_18->SetBorderMode(0);
   Z_dR_Bj0_WW_tagFirst_18->SetBorderSize(2);
   Z_dR_Bj0_WW_tagFirst_18->SetLeftMargin(0.15);
   Z_dR_Bj0_WW_tagFirst_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_WW_tagFirst_18->SetFrameBorderMode(0);
   Z_dR_Bj0_WW_tagFirst_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_WW_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Z_dR_Bj0__384 = new TH1D("VH_tagFirst_Z_dR_Bj0__384","",30,0,6);
   VH_tagFirst_Z_dR_Bj0__384->SetBinContent(1,2.746413);
   VH_tagFirst_Z_dR_Bj0__384->SetBinContent(2,12.81659);
   VH_tagFirst_Z_dR_Bj0__384->SetBinContent(3,8.23924);
   VH_tagFirst_Z_dR_Bj0__384->SetBinContent(4,5.492826);
   VH_tagFirst_Z_dR_Bj0__384->SetBinContent(5,3.661884);
   VH_tagFirst_Z_dR_Bj0__384->SetBinContent(6,5.035091);
   VH_tagFirst_Z_dR_Bj0__384->SetBinContent(7,4.11962);
   VH_tagFirst_Z_dR_Bj0__384->SetBinContent(8,5.492826);
   VH_tagFirst_Z_dR_Bj0__384->SetBinContent(9,2.288678);
   VH_tagFirst_Z_dR_Bj0__384->SetBinContent(10,2.746413);
   VH_tagFirst_Z_dR_Bj0__384->SetBinContent(11,3.204149);
   VH_tagFirst_Z_dR_Bj0__384->SetBinContent(12,1.830942);
   VH_tagFirst_Z_dR_Bj0__384->SetBinContent(13,1.830942);
   VH_tagFirst_Z_dR_Bj0__384->SetBinContent(14,1.830942);
   VH_tagFirst_Z_dR_Bj0__384->SetBinContent(15,2.288678);
   VH_tagFirst_Z_dR_Bj0__384->SetBinContent(16,0.4577355);
   VH_tagFirst_Z_dR_Bj0__384->SetBinContent(17,0.4577355);
   VH_tagFirst_Z_dR_Bj0__384->SetBinContent(18,1.830942);
   VH_tagFirst_Z_dR_Bj0__384->SetBinContent(19,0.4577355);
   VH_tagFirst_Z_dR_Bj0__384->SetBinContent(22,0.9154711);
   VH_tagFirst_Z_dR_Bj0__384->SetBinContent(23,0.9154711);
   VH_tagFirst_Z_dR_Bj0__384->SetBinError(1,1.121218);
   VH_tagFirst_Z_dR_Bj0__384->SetBinError(2,2.422109);
   VH_tagFirst_Z_dR_Bj0__384->SetBinError(3,1.942007);
   VH_tagFirst_Z_dR_Bj0__384->SetBinError(4,1.585642);
   VH_tagFirst_Z_dR_Bj0__384->SetBinError(5,1.294672);
   VH_tagFirst_Z_dR_Bj0__384->SetBinError(6,1.518137);
   VH_tagFirst_Z_dR_Bj0__384->SetBinError(7,1.373207);
   VH_tagFirst_Z_dR_Bj0__384->SetBinError(8,1.585642);
   VH_tagFirst_Z_dR_Bj0__384->SetBinError(9,1.023528);
   VH_tagFirst_Z_dR_Bj0__384->SetBinError(10,1.121218);
   VH_tagFirst_Z_dR_Bj0__384->SetBinError(11,1.211054);
   VH_tagFirst_Z_dR_Bj0__384->SetBinError(12,0.9154711);
   VH_tagFirst_Z_dR_Bj0__384->SetBinError(13,0.9154711);
   VH_tagFirst_Z_dR_Bj0__384->SetBinError(14,0.9154711);
   VH_tagFirst_Z_dR_Bj0__384->SetBinError(15,1.023528);
   VH_tagFirst_Z_dR_Bj0__384->SetBinError(16,0.4577355);
   VH_tagFirst_Z_dR_Bj0__384->SetBinError(17,0.4577355);
   VH_tagFirst_Z_dR_Bj0__384->SetBinError(18,0.9154711);
   VH_tagFirst_Z_dR_Bj0__384->SetBinError(19,0.4577355);
   VH_tagFirst_Z_dR_Bj0__384->SetBinError(22,0.6473358);
   VH_tagFirst_Z_dR_Bj0__384->SetBinError(23,0.6473358);
   VH_tagFirst_Z_dR_Bj0__384->SetEntries(150);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_dR_Bj0__384->SetLineColor(ci);
   VH_tagFirst_Z_dR_Bj0__384->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VH_tagFirst_Z_dR_Bj0__384->GetXaxis()->SetRange(1,30);
   VH_tagFirst_Z_dR_Bj0__384->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR_Bj0__384->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR_Bj0__384->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR_Bj0__384->GetYaxis()->SetTitle("Events/0.2");
   VH_tagFirst_Z_dR_Bj0__384->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR_Bj0__384->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Z_dR_Bj0__384->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Z_dR_Bj0__384->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Z_dR_Bj0__384->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR_Bj0__384->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR_Bj0__384->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR_Bj0__384->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR_Bj0__384->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_WW_tagFirst_18->Modified();
   Z_dR_Bj0_WW_tagFirst_18->cd();
   Z_dR_Bj0_WW_tagFirst_18->SetSelected(Z_dR_Bj0_WW_tagFirst_18);
}
