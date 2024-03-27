#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0()
{
//=========Macro generated from canvas: Z_dR_Bj0/Z_dR_Bj0
//=========  (Wed Mar 27 12:51:56 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj0 = new TCanvas("Z_dR_Bj0", "Z_dR_Bj0",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0->SetHighLightColor(2);
   Z_dR_Bj0->Range(-1.2,-31.2375,6.8,281.1375);
   Z_dR_Bj0->SetFillColor(0);
   Z_dR_Bj0->SetFillStyle(4000);
   Z_dR_Bj0->SetBorderMode(0);
   Z_dR_Bj0->SetBorderSize(2);
   Z_dR_Bj0->SetLeftMargin(0.15);
   Z_dR_Bj0->SetFrameFillStyle(1000);
   Z_dR_Bj0->SetFrameBorderMode(0);
   Z_dR_Bj0->SetFrameFillStyle(1000);
   Z_dR_Bj0->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Z_dR_Bj0__13 = new TH1D("VH_tagFirst_Z_dR_Bj0__13","",30,0,6);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(1,59);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(2,238);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(3,192);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(4,109);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(5,74);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(6,43);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(7,28);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(8,25);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(9,22);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(10,14);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(11,18);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(12,16);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(13,8);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(14,12);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(15,14);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(16,15);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(17,10);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(18,6);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(19,6);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(20,6);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(21,5);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(22,8);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(23,1);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(24,3);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(25,3);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(26,1);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(27,2);
   VH_tagFirst_Z_dR_Bj0__13->SetBinContent(29,1);
   VH_tagFirst_Z_dR_Bj0__13->SetEntries(939);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_dR_Bj0__13->SetLineColor(ci);
   VH_tagFirst_Z_dR_Bj0__13->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VH_tagFirst_Z_dR_Bj0__13->GetXaxis()->SetRange(1,30);
   VH_tagFirst_Z_dR_Bj0__13->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR_Bj0__13->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR_Bj0__13->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR_Bj0__13->GetYaxis()->SetTitle("Events/0.2");
   VH_tagFirst_Z_dR_Bj0__13->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR_Bj0__13->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Z_dR_Bj0__13->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Z_dR_Bj0__13->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Z_dR_Bj0__13->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR_Bj0__13->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR_Bj0__13->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR_Bj0__13->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR_Bj0__13->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0->Modified();
   Z_dR_Bj0->cd();
   Z_dR_Bj0->SetSelected(Z_dR_Bj0);
}
