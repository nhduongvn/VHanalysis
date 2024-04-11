#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dPhi_DHZfirst_18()
{
//=========Macro generated from canvas: Z_dPhi_DHZfirst_18/Z_dPhi_DHZfirst_18
//=========  (Thu Apr 11 14:04:09 2024) by ROOT version 6.28/10
   TCanvas *Z_dPhi_DHZfirst_18 = new TCanvas("Z_dPhi_DHZfirst_18", "Z_dPhi_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_DHZfirst_18->SetHighLightColor(2);
   Z_dPhi_DHZfirst_18->Range(-0.8,-1905.069,4.533333,17145.62);
   Z_dPhi_DHZfirst_18->SetFillColor(0);
   Z_dPhi_DHZfirst_18->SetFillStyle(4000);
   Z_dPhi_DHZfirst_18->SetBorderMode(0);
   Z_dPhi_DHZfirst_18->SetBorderSize(2);
   Z_dPhi_DHZfirst_18->SetLeftMargin(0.15);
   Z_dPhi_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dPhi_DHZfirst_18->SetFrameBorderMode(0);
   Z_dPhi_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dPhi_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dPhi__55 = new TH1D("VH_DHZfirst_Z_dPhi__55","",120,0,4);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(0,229475.4);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(1,1422.305);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(3,11024.37);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(4,860.8992);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(8,1516.11);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(10,1154.508);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(12,14514.81);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(14,7507.148);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(17,662.8817);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(18,650.6403);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(20,1127.876);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(21,1572.413);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(22,475.393);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(25,323.6378);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(31,1004.088);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(32,614.4479);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(35,319.0205);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(42,196.4003);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(45,8235.33);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(53,522.4879);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(84,657.9523);
   VH_DHZfirst_Z_dPhi__55->SetBinError(0,180549.4);
   VH_DHZfirst_Z_dPhi__55->SetBinError(1,1422.305);
   VH_DHZfirst_Z_dPhi__55->SetBinError(3,11024.37);
   VH_DHZfirst_Z_dPhi__55->SetBinError(4,860.8992);
   VH_DHZfirst_Z_dPhi__55->SetBinError(8,1516.11);
   VH_DHZfirst_Z_dPhi__55->SetBinError(10,1154.508);
   VH_DHZfirst_Z_dPhi__55->SetBinError(12,14514.81);
   VH_DHZfirst_Z_dPhi__55->SetBinError(14,7507.148);
   VH_DHZfirst_Z_dPhi__55->SetBinError(17,662.8817);
   VH_DHZfirst_Z_dPhi__55->SetBinError(18,650.6403);
   VH_DHZfirst_Z_dPhi__55->SetBinError(20,1127.876);
   VH_DHZfirst_Z_dPhi__55->SetBinError(21,1572.413);
   VH_DHZfirst_Z_dPhi__55->SetBinError(22,475.393);
   VH_DHZfirst_Z_dPhi__55->SetBinError(25,323.6378);
   VH_DHZfirst_Z_dPhi__55->SetBinError(31,1004.088);
   VH_DHZfirst_Z_dPhi__55->SetBinError(32,614.4479);
   VH_DHZfirst_Z_dPhi__55->SetBinError(35,319.0205);
   VH_DHZfirst_Z_dPhi__55->SetBinError(42,196.4003);
   VH_DHZfirst_Z_dPhi__55->SetBinError(45,8235.33);
   VH_DHZfirst_Z_dPhi__55->SetBinError(53,522.4879);
   VH_DHZfirst_Z_dPhi__55->SetBinError(84,657.9523);
   VH_DHZfirst_Z_dPhi__55->SetEntries(46);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dPhi__55->SetLineColor(ci);
   VH_DHZfirst_Z_dPhi__55->GetXaxis()->SetTitle("#Delta#phi(b,b)");
   VH_DHZfirst_Z_dPhi__55->GetXaxis()->SetRange(1,120);
   VH_DHZfirst_Z_dPhi__55->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dPhi__55->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dPhi__55->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dPhi__55->GetYaxis()->SetTitle("Events/0.033");
   VH_DHZfirst_Z_dPhi__55->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dPhi__55->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dPhi__55->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dPhi__55->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dPhi__55->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dPhi__55->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dPhi__55->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dPhi__55->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dPhi__55->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dPhi_DHZfirst_18->Modified();
   Z_dPhi_DHZfirst_18->cd();
   Z_dPhi_DHZfirst_18->SetSelected(Z_dPhi_DHZfirst_18);
}
