#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1()
{
//=========Macro generated from canvas: Z_dR_Bj1/Z_dR_Bj1
//=========  (Wed Mar 27 12:51:56 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj1 = new TCanvas("Z_dR_Bj1", "Z_dR_Bj1",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1->SetHighLightColor(2);
   Z_dR_Bj1->Range(-1.2,-31.63125,6.8,284.6813);
   Z_dR_Bj1->SetFillColor(0);
   Z_dR_Bj1->SetFillStyle(4000);
   Z_dR_Bj1->SetBorderMode(0);
   Z_dR_Bj1->SetBorderSize(2);
   Z_dR_Bj1->SetLeftMargin(0.15);
   Z_dR_Bj1->SetFrameFillStyle(1000);
   Z_dR_Bj1->SetFrameBorderMode(0);
   Z_dR_Bj1->SetFrameFillStyle(1000);
   Z_dR_Bj1->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Z_dR_Bj1__14 = new TH1D("VH_tagFirst_Z_dR_Bj1__14","",30,0,6);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(1,58);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(2,241);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(3,179);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(4,129);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(5,66);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(6,46);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(7,39);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(8,25);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(9,19);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(10,15);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(11,16);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(12,13);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(13,10);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(14,8);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(15,16);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(16,7);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(17,9);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(18,3);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(19,11);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(20,3);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(21,2);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(22,5);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(23,5);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(24,2);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(25,3);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(26,4);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(27,1);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(28,2);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(30,1);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(31,1);
   VH_tagFirst_Z_dR_Bj1__14->SetEntries(939);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_dR_Bj1__14->SetLineColor(ci);
   VH_tagFirst_Z_dR_Bj1__14->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   VH_tagFirst_Z_dR_Bj1__14->GetXaxis()->SetRange(1,30);
   VH_tagFirst_Z_dR_Bj1__14->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR_Bj1__14->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR_Bj1__14->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR_Bj1__14->GetYaxis()->SetTitle("Events/0.2");
   VH_tagFirst_Z_dR_Bj1__14->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR_Bj1__14->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Z_dR_Bj1__14->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Z_dR_Bj1__14->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Z_dR_Bj1__14->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR_Bj1__14->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR_Bj1__14->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR_Bj1__14->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR_Bj1__14->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1->Modified();
   Z_dR_Bj1->cd();
   Z_dR_Bj1->SetSelected(Z_dR_Bj1);
}
