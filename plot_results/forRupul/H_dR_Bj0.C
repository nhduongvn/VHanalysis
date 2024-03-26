#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0()
{
//=========Macro generated from canvas: H_dR_Bj0/H_dR_Bj0
//=========  (Tue Mar 26 15:28:34 2024) by ROOT version 6.28/10
   TCanvas *H_dR_Bj0 = new TCanvas("H_dR_Bj0", "H_dR_Bj0",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0->SetHighLightColor(2);
   H_dR_Bj0->Range(-1.2,-3.54375,6.8,31.89375);
   H_dR_Bj0->SetFillColor(0);
   H_dR_Bj0->SetBorderMode(0);
   H_dR_Bj0->SetBorderSize(2);
   H_dR_Bj0->SetLeftMargin(0.15);
   H_dR_Bj0->SetFrameBorderMode(0);
   H_dR_Bj0->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_H_dR_Bj0__11 = new TH1D("VH_tagFirst_H_dR_Bj0__11","",30,0,6);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(1,6);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(2,27);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(3,23);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(4,10);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(5,9);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(6,10);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(7,5);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(8,4);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(9,5);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(10,6);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(11,1);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(12,4);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(13,2);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(14,2);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(15,2);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(16,4);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(18,1);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(20,1);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(27,1);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(28,1);
   VH_tagFirst_H_dR_Bj0__11->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   VH_tagFirst_H_dR_Bj0__11->SetFillColor(ci);
   VH_tagFirst_H_dR_Bj0__11->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VH_tagFirst_H_dR_Bj0__11->GetXaxis()->SetRange(1,60);
   VH_tagFirst_H_dR_Bj0__11->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR_Bj0__11->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_dR_Bj0__11->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR_Bj0__11->GetYaxis()->SetTitle("Events/2 GeV");
   VH_tagFirst_H_dR_Bj0__11->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR_Bj0__11->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR_Bj0__11->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR_Bj0__11->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_dR_Bj0__11->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR_Bj0__11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, lumi fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0->Modified();
   H_dR_Bj0->cd();
   H_dR_Bj0->SetSelected(H_dR_Bj0);
}
