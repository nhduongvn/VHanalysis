#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0()
{
//=========Macro generated from canvas: H_dR_Bj0/H_dR_Bj0
//=========  (Wed Mar 27 12:51:56 2024) by ROOT version 6.28/10
   TCanvas *H_dR_Bj0 = new TCanvas("H_dR_Bj0", "H_dR_Bj0",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0->SetHighLightColor(2);
   H_dR_Bj0->Range(-1.2,-25.33125,6.8,227.9813);
   H_dR_Bj0->SetFillColor(0);
   H_dR_Bj0->SetFillStyle(4000);
   H_dR_Bj0->SetBorderMode(0);
   H_dR_Bj0->SetBorderSize(2);
   H_dR_Bj0->SetLeftMargin(0.15);
   H_dR_Bj0->SetFrameFillStyle(1000);
   H_dR_Bj0->SetFrameBorderMode(0);
   H_dR_Bj0->SetFrameFillStyle(1000);
   H_dR_Bj0->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_H_dR_Bj0__11 = new TH1D("VH_tagFirst_H_dR_Bj0__11","",30,0,6);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(1,40);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(2,193);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(3,160);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(4,127);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(5,77);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(6,57);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(7,31);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(8,33);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(9,21);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(10,36);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(11,30);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(12,20);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(13,19);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(14,24);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(15,14);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(16,19);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(17,9);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(18,5);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(19,3);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(20,6);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(21,4);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(22,5);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(23,3);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(26,1);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(27,1);
   VH_tagFirst_H_dR_Bj0__11->SetBinContent(28,1);
   VH_tagFirst_H_dR_Bj0__11->SetEntries(939);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_dR_Bj0__11->SetLineColor(ci);
   VH_tagFirst_H_dR_Bj0__11->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VH_tagFirst_H_dR_Bj0__11->GetXaxis()->SetRange(1,30);
   VH_tagFirst_H_dR_Bj0__11->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR_Bj0__11->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_dR_Bj0__11->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR_Bj0__11->GetYaxis()->SetTitle("Events/0.2");
   VH_tagFirst_H_dR_Bj0__11->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR_Bj0__11->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_H_dR_Bj0__11->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_H_dR_Bj0__11->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_H_dR_Bj0__11->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR_Bj0__11->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR_Bj0__11->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_dR_Bj0__11->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR_Bj0__11->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0->Modified();
   H_dR_Bj0->cd();
   H_dR_Bj0->SetSelected(H_dR_Bj0);
}
