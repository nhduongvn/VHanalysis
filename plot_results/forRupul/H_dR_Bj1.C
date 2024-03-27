#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1()
{
//=========Macro generated from canvas: H_dR_Bj1/H_dR_Bj1
//=========  (Wed Mar 27 12:51:56 2024) by ROOT version 6.28/10
   TCanvas *H_dR_Bj1 = new TCanvas("H_dR_Bj1", "H_dR_Bj1",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1->SetHighLightColor(2);
   H_dR_Bj1->Range(-1.2,-23.1,6.8,207.9);
   H_dR_Bj1->SetFillColor(0);
   H_dR_Bj1->SetFillStyle(4000);
   H_dR_Bj1->SetBorderMode(0);
   H_dR_Bj1->SetBorderSize(2);
   H_dR_Bj1->SetLeftMargin(0.15);
   H_dR_Bj1->SetFrameFillStyle(1000);
   H_dR_Bj1->SetFrameBorderMode(0);
   H_dR_Bj1->SetFrameFillStyle(1000);
   H_dR_Bj1->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_H_dR_Bj1__12 = new TH1D("VH_tagFirst_H_dR_Bj1__12","",30,0,6);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(1,44);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(2,176);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(3,170);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(4,126);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(5,73);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(6,64);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(7,41);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(8,30);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(9,31);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(10,18);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(11,29);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(12,22);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(13,18);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(14,22);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(15,18);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(16,9);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(17,10);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(18,5);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(19,8);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(20,8);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(21,4);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(22,5);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(23,3);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(24,1);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(25,1);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(26,2);
   VH_tagFirst_H_dR_Bj1__12->SetBinContent(28,1);
   VH_tagFirst_H_dR_Bj1__12->SetEntries(939);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_dR_Bj1__12->SetLineColor(ci);
   VH_tagFirst_H_dR_Bj1__12->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   VH_tagFirst_H_dR_Bj1__12->GetXaxis()->SetRange(1,30);
   VH_tagFirst_H_dR_Bj1__12->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR_Bj1__12->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_dR_Bj1__12->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR_Bj1__12->GetYaxis()->SetTitle("Events/0.2");
   VH_tagFirst_H_dR_Bj1__12->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR_Bj1__12->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_H_dR_Bj1__12->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_H_dR_Bj1__12->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_H_dR_Bj1__12->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR_Bj1__12->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR_Bj1__12->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_dR_Bj1__12->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR_Bj1__12->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1->Modified();
   H_dR_Bj1->cd();
   H_dR_Bj1->SetSelected(H_dR_Bj1);
}
