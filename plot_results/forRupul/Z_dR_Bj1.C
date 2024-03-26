#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1()
{
//=========Macro generated from canvas: Z_dR_Bj1/Z_dR_Bj1
//=========  (Tue Mar 26 15:28:34 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj1 = new TCanvas("Z_dR_Bj1", "Z_dR_Bj1",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1->SetHighLightColor(2);
   Z_dR_Bj1->Range(-1.2,-4.4625,6.8,40.1625);
   Z_dR_Bj1->SetFillColor(0);
   Z_dR_Bj1->SetBorderMode(0);
   Z_dR_Bj1->SetBorderSize(2);
   Z_dR_Bj1->SetLeftMargin(0.15);
   Z_dR_Bj1->SetFrameBorderMode(0);
   Z_dR_Bj1->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Z_dR_Bj1__14 = new TH1D("VH_tagFirst_Z_dR_Bj1__14","",30,0,6);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(1,10);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(2,34);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(3,18);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(4,17);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(5,10);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(6,2);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(7,8);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(8,3);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(9,4);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(10,2);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(12,2);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(13,1);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(14,1);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(15,2);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(16,3);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(17,2);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(18,1);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(22,2);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(26,1);
   VH_tagFirst_Z_dR_Bj1__14->SetBinContent(28,1);
   VH_tagFirst_Z_dR_Bj1__14->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   VH_tagFirst_Z_dR_Bj1__14->SetFillColor(ci);
   VH_tagFirst_Z_dR_Bj1__14->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   VH_tagFirst_Z_dR_Bj1__14->GetXaxis()->SetRange(1,60);
   VH_tagFirst_Z_dR_Bj1__14->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR_Bj1__14->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR_Bj1__14->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR_Bj1__14->GetYaxis()->SetTitle("Events/2 GeV");
   VH_tagFirst_Z_dR_Bj1__14->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR_Bj1__14->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR_Bj1__14->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR_Bj1__14->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR_Bj1__14->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR_Bj1__14->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, lumi fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1->Modified();
   Z_dR_Bj1->cd();
   Z_dR_Bj1->SetSelected(Z_dR_Bj1);
}
