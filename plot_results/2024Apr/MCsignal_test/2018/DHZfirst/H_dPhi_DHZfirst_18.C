#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dPhi_DHZfirst_18()
{
//=========Macro generated from canvas: H_dPhi_DHZfirst_18/H_dPhi_DHZfirst_18
//=========  (Thu Apr 11 14:04:09 2024) by ROOT version 6.28/10
   TCanvas *H_dPhi_DHZfirst_18 = new TCanvas("H_dPhi_DHZfirst_18", "H_dPhi_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dPhi_DHZfirst_18->SetHighLightColor(2);
   H_dPhi_DHZfirst_18->Range(-0.8,-2068.151,4.533333,18613.35);
   H_dPhi_DHZfirst_18->SetFillColor(0);
   H_dPhi_DHZfirst_18->SetFillStyle(4000);
   H_dPhi_DHZfirst_18->SetBorderMode(0);
   H_dPhi_DHZfirst_18->SetBorderSize(2);
   H_dPhi_DHZfirst_18->SetLeftMargin(0.15);
   H_dPhi_DHZfirst_18->SetFrameFillStyle(1000);
   H_dPhi_DHZfirst_18->SetFrameBorderMode(0);
   H_dPhi_DHZfirst_18->SetFrameFillStyle(1000);
   H_dPhi_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_dPhi__56 = new TH1D("VH_DHZfirst_H_dPhi__56","",120,0,4);
   VH_DHZfirst_H_dPhi__56->SetBinContent(0,231895.1);
   VH_DHZfirst_H_dPhi__56->SetBinContent(3,577.9946);
   VH_DHZfirst_H_dPhi__56->SetBinContent(5,860.8992);
   VH_DHZfirst_H_dPhi__56->SetBinContent(6,8235.33);
   VH_DHZfirst_H_dPhi__56->SetBinContent(8,951.3788);
   VH_DHZfirst_H_dPhi__56->SetBinContent(9,12011.98);
   VH_DHZfirst_H_dPhi__56->SetBinContent(11,522.4879);
   VH_DHZfirst_H_dPhi__56->SetBinContent(13,1546.174);
   VH_DHZfirst_H_dPhi__56->SetBinContent(14,1337.52);
   VH_DHZfirst_H_dPhi__56->SetBinContent(15,553.9288);
   VH_DHZfirst_H_dPhi__56->SetBinContent(16,1541.039);
   VH_DHZfirst_H_dPhi__56->SetBinContent(20,15757.34);
   VH_DHZfirst_H_dPhi__56->SetBinContent(31,937.1268);
   VH_DHZfirst_H_dPhi__56->SetBinContent(34,579.2773);
   VH_DHZfirst_H_dPhi__56->SetBinContent(36,196.4003);
   VH_DHZfirst_H_dPhi__56->SetBinContent(48,1436.619);
   VH_DHZfirst_H_dPhi__56->SetBinContent(50,650.8824);
   VH_DHZfirst_H_dPhi__56->SetBinContent(53,1127.876);
   VH_DHZfirst_H_dPhi__56->SetBinContent(59,622.8327);
   VH_DHZfirst_H_dPhi__56->SetBinContent(60,877.3532);
   VH_DHZfirst_H_dPhi__56->SetBinContent(76,1004.088);
   VH_DHZfirst_H_dPhi__56->SetBinContent(81,614.4479);
   VH_DHZfirst_H_dPhi__56->SetBinError(0,180696.4);
   VH_DHZfirst_H_dPhi__56->SetBinError(3,577.9946);
   VH_DHZfirst_H_dPhi__56->SetBinError(5,860.8992);
   VH_DHZfirst_H_dPhi__56->SetBinError(6,8235.33);
   VH_DHZfirst_H_dPhi__56->SetBinError(8,716.782);
   VH_DHZfirst_H_dPhi__56->SetBinError(9,11068.52);
   VH_DHZfirst_H_dPhi__56->SetBinError(11,522.4879);
   VH_DHZfirst_H_dPhi__56->SetBinError(13,1546.174);
   VH_DHZfirst_H_dPhi__56->SetBinError(14,1337.52);
   VH_DHZfirst_H_dPhi__56->SetBinError(15,553.9288);
   VH_DHZfirst_H_dPhi__56->SetBinError(16,1259.685);
   VH_DHZfirst_H_dPhi__56->SetBinError(20,14541.47);
   VH_DHZfirst_H_dPhi__56->SetBinError(31,662.7191);
   VH_DHZfirst_H_dPhi__56->SetBinError(34,579.2773);
   VH_DHZfirst_H_dPhi__56->SetBinError(36,196.4003);
   VH_DHZfirst_H_dPhi__56->SetBinError(48,1436.619);
   VH_DHZfirst_H_dPhi__56->SetBinError(50,650.8824);
   VH_DHZfirst_H_dPhi__56->SetBinError(53,1127.876);
   VH_DHZfirst_H_dPhi__56->SetBinError(59,622.8327);
   VH_DHZfirst_H_dPhi__56->SetBinError(60,877.3532);
   VH_DHZfirst_H_dPhi__56->SetBinError(76,1004.088);
   VH_DHZfirst_H_dPhi__56->SetBinError(81,614.4479);
   VH_DHZfirst_H_dPhi__56->SetEntries(46);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_dPhi__56->SetLineColor(ci);
   VH_DHZfirst_H_dPhi__56->GetXaxis()->SetTitle("#Delta#phi(c,c)");
   VH_DHZfirst_H_dPhi__56->GetXaxis()->SetRange(1,120);
   VH_DHZfirst_H_dPhi__56->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dPhi__56->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dPhi__56->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dPhi__56->GetYaxis()->SetTitle("Events/0.033");
   VH_DHZfirst_H_dPhi__56->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dPhi__56->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_dPhi__56->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_dPhi__56->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_dPhi__56->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dPhi__56->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dPhi__56->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dPhi__56->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dPhi__56->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dPhi_DHZfirst_18->Modified();
   H_dPhi_DHZfirst_18->cd();
   H_dPhi_DHZfirst_18->SetSelected(H_dPhi_DHZfirst_18);
}
