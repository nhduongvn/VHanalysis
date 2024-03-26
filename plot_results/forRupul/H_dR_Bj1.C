#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1()
{
//=========Macro generated from canvas: H_dR_Bj1/H_dR_Bj1
//=========  (Tue Mar 26 15:28:34 2024) by ROOT version 6.28/10
   TCanvas *H_dR_Bj1 = new TCanvas("H_dR_Bj1", "H_dR_Bj1",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1->SetHighLightColor(2);
   H_dR_Bj1->Range(-1.2,-3.4125,6.8,30.7125);
   H_dR_Bj1->SetFillColor(0);
   H_dR_Bj1->SetBorderMode(0);
   H_dR_Bj1->SetBorderSize(2);
   H_dR_Bj1->SetLeftMargin(0.15);
   H_dR_Bj1->SetFrameBorderMode(0);
   H_dR_Bj1->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_H_dR_Bj1__12 = new TH1D("VH_tagFirst_H_dR_Bj1__12","",30,0,6);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(1,7);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(2,22);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(3,22);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(4,26);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(5,6);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(6,7);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(7,2);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(9,6);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(10,3);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(11,3);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(12,5);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(13,1);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(14,4);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(15,1);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(16,2);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(17,1);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(18,2);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(19,1);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(22,2);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(23,1);
   VH_tagFirst_H_dR_Bj1__12->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   VH_tagFirst_H_dR_Bj1__12->SetFillColor(ci);
   VH_tagFirst_H_dR_Bj1__12->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   VH_tagFirst_H_dR_Bj1__12->GetXaxis()->SetRange(1,60);
   VH_tagFirst_H_dR_Bj1__12->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR_Bj1__12->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_dR_Bj1__12->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR_Bj1__12->GetYaxis()->SetTitle("Events/2 GeV");
   VH_tagFirst_H_dR_Bj1__12->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR_Bj1__12->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR_Bj1__12->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR_Bj1__12->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_dR_Bj1__12->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR_Bj1__12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, lumi fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1->Modified();
   H_dR_Bj1->cd();
   H_dR_Bj1->SetSelected(H_dR_Bj1);
}
