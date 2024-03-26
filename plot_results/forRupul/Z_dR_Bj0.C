#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0()
{
//=========Macro generated from canvas: Z_dR_Bj0/Z_dR_Bj0
//=========  (Tue Mar 26 15:28:34 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj0 = new TCanvas("Z_dR_Bj0", "Z_dR_Bj0",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0->SetHighLightColor(2);
   Z_dR_Bj0->Range(-1.2,-4.725,6.8,42.525);
   Z_dR_Bj0->SetFillColor(0);
   Z_dR_Bj0->SetBorderMode(0);
   Z_dR_Bj0->SetBorderSize(2);
   Z_dR_Bj0->SetLeftMargin(0.15);
   Z_dR_Bj0->SetFrameBorderMode(0);
   Z_dR_Bj0->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Z_dR_Bj0__13 = new TH1D("VH_tagFirst_Z_dR_Bj0__13","",30,0,6);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(1,3);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(2,36);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(3,28);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(4,12);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(5,12);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(6,6);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(7,8);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(10,2);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(11,1);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(12,3);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(13,2);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(14,1);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(15,3);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(17,1);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(19,1);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(20,1);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(22,2);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(23,1);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(26,1);
   VH_tagFirst_Z_dR_Bj0__13->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   VH_tagFirst_Z_dR_Bj0__13->SetFillColor(ci);
   VH_tagFirst_Z_dR_Bj0__13->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VH_tagFirst_Z_dR_Bj0__13->GetXaxis()->SetRange(1,60);
   VH_tagFirst_Z_dR_Bj0__13->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR_Bj0__13->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR_Bj0__13->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR_Bj0__13->GetYaxis()->SetTitle("Events/2 GeV");
   VH_tagFirst_Z_dR_Bj0__13->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR_Bj0__13->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR_Bj0__13->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR_Bj0__13->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR_Bj0__13->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR_Bj0__13->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, lumi fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0->Modified();
   Z_dR_Bj0->cd();
   Z_dR_Bj0->SetSelected(Z_dR_Bj0);
}
