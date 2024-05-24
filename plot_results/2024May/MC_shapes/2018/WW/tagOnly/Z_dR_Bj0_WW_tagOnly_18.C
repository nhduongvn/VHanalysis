#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_WW_tagOnly_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_WW_tagOnly_18/Z_dR_Bj0_WW_tagOnly_18
//=========  (Fri May 24 12:42:20 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj0_WW_tagOnly_18 = new TCanvas("Z_dR_Bj0_WW_tagOnly_18", "Z_dR_Bj0_WW_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_WW_tagOnly_18->SetHighLightColor(2);
   Z_dR_Bj0_WW_tagOnly_18->Range(-1.2,-1.6221,6.8,14.5989);
   Z_dR_Bj0_WW_tagOnly_18->SetFillColor(0);
   Z_dR_Bj0_WW_tagOnly_18->SetFillStyle(4000);
   Z_dR_Bj0_WW_tagOnly_18->SetBorderMode(0);
   Z_dR_Bj0_WW_tagOnly_18->SetBorderSize(2);
   Z_dR_Bj0_WW_tagOnly_18->SetLeftMargin(0.15);
   Z_dR_Bj0_WW_tagOnly_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_WW_tagOnly_18->SetFrameBorderMode(0);
   Z_dR_Bj0_WW_tagOnly_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_WW_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Z_dR_Bj0__1104 = new TH1D("VH_tagOnly_Z_dR_Bj0__1104","",30,0,6);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinContent(1,2.288678);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinContent(2,12.35886);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinContent(3,8.696975);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinContent(4,5.035091);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinContent(5,3.204149);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinContent(6,4.577355);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinContent(7,3.661884);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinContent(8,5.035091);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinContent(9,2.288678);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinContent(10,3.204149);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinContent(11,2.746413);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinContent(12,1.830942);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinContent(13,1.830942);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinContent(14,1.830942);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinContent(15,2.288678);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinContent(16,0.4577355);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinContent(17,0.4577355);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinContent(18,1.830942);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinContent(19,0.4577355);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinContent(22,0.9154711);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinContent(23,0.9154711);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinError(1,1.023528);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinError(2,2.378464);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinError(3,1.995223);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinError(4,1.518137);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinError(5,1.211054);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinError(6,1.447487);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinError(7,1.294672);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinError(8,1.518137);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinError(9,1.023528);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinError(10,1.211054);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinError(11,1.121218);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinError(12,0.9154711);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinError(13,0.9154711);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinError(14,0.9154711);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinError(15,1.023528);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinError(16,0.4577355);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinError(17,0.4577355);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinError(18,0.9154711);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinError(19,0.4577355);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinError(22,0.6473358);
   VH_tagOnly_Z_dR_Bj0__1104->SetBinError(23,0.6473358);
   VH_tagOnly_Z_dR_Bj0__1104->SetEntries(144);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_dR_Bj0__1104->SetLineColor(ci);
   VH_tagOnly_Z_dR_Bj0__1104->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VH_tagOnly_Z_dR_Bj0__1104->GetXaxis()->SetRange(1,30);
   VH_tagOnly_Z_dR_Bj0__1104->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR_Bj0__1104->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_dR_Bj0__1104->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR_Bj0__1104->GetYaxis()->SetTitle("Events/0.2");
   VH_tagOnly_Z_dR_Bj0__1104->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR_Bj0__1104->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Z_dR_Bj0__1104->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Z_dR_Bj0__1104->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Z_dR_Bj0__1104->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR_Bj0__1104->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR_Bj0__1104->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_dR_Bj0__1104->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR_Bj0__1104->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_WW_tagOnly_18->Modified();
   Z_dR_Bj0_WW_tagOnly_18->cd();
   Z_dR_Bj0_WW_tagOnly_18->SetSelected(Z_dR_Bj0_WW_tagOnly_18);
}
