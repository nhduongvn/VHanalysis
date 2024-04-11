#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_DHZfirst_18()
{
//=========Macro generated from canvas: Z_dR_DHZfirst_18/Z_dR_DHZfirst_18
//=========  (Thu Apr 11 14:04:09 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_DHZfirst_18 = new TCanvas("Z_dR_DHZfirst_18", "Z_dR_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_DHZfirst_18->SetHighLightColor(2);
   Z_dR_DHZfirst_18->Range(-1.2,-26942.88,6.8,242485.9);
   Z_dR_DHZfirst_18->SetFillColor(0);
   Z_dR_DHZfirst_18->SetFillStyle(4000);
   Z_dR_DHZfirst_18->SetBorderMode(0);
   Z_dR_DHZfirst_18->SetBorderSize(2);
   Z_dR_DHZfirst_18->SetLeftMargin(0.15);
   Z_dR_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dR_DHZfirst_18->SetFrameBorderMode(0);
   Z_dR_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dR_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR__53 = new TH1D("VH_DHZfirst_Z_dR__53","",30,0,6);
   VH_DHZfirst_Z_dR__53->SetBinContent(3,9134.004);
   VH_DHZfirst_Z_dR__53->SetBinContent(4,3589.055);
   VH_DHZfirst_Z_dR__53->SetBinContent(5,205279);
   VH_DHZfirst_Z_dR__53->SetBinContent(6,2231.796);
   VH_DHZfirst_Z_dR__53->SetBinContent(7,1629.901);
   VH_DHZfirst_Z_dR__53->SetBinContent(8,2401.938);
   VH_DHZfirst_Z_dR__53->SetBinContent(9,8898.211);
   VH_DHZfirst_Z_dR__53->SetBinContent(10,27869.44);
   VH_DHZfirst_Z_dR__53->SetBinContent(11,3676.593);
   VH_DHZfirst_Z_dR__53->SetBinContent(12,3808.804);
   VH_DHZfirst_Z_dR__53->SetBinContent(13,2931.795);
   VH_DHZfirst_Z_dR__53->SetBinContent(14,1915.515);
   VH_DHZfirst_Z_dR__53->SetBinContent(15,1133.206);
   VH_DHZfirst_Z_dR__53->SetBinContent(16,584.575);
   VH_DHZfirst_Z_dR__53->SetBinContent(17,5340.345);
   VH_DHZfirst_Z_dR__53->SetBinContent(18,1119.686);
   VH_DHZfirst_Z_dR__53->SetBinContent(20,1643.297);
   VH_DHZfirst_Z_dR__53->SetBinContent(26,650.8824);
   VH_DHZfirst_Z_dR__53->SetBinError(3,8353.775);
   VH_DHZfirst_Z_dR__53->SetBinError(4,2178.273);
   VH_DHZfirst_Z_dR__53->SetBinError(5,180130.1);
   VH_DHZfirst_Z_dR__53->SetBinError(6,1301.878);
   VH_DHZfirst_Z_dR__53->SetBinError(7,1248.554);
   VH_DHZfirst_Z_dR__53->SetBinError(8,1525.763);
   VH_DHZfirst_Z_dR__53->SetBinError(9,8261.965);
   VH_DHZfirst_Z_dR__53->SetBinError(10,20665.02);
   VH_DHZfirst_Z_dR__53->SetBinError(11,2221.685);
   VH_DHZfirst_Z_dR__53->SetBinError(12,2058.485);
   VH_DHZfirst_Z_dR__53->SetBinError(13,1579.508);
   VH_DHZfirst_Z_dR__53->SetBinError(14,1457.065);
   VH_DHZfirst_Z_dR__53->SetBinError(15,801.4982);
   VH_DHZfirst_Z_dR__53->SetBinError(16,584.575);
   VH_DHZfirst_Z_dR__53->SetBinError(17,5340.345);
   VH_DHZfirst_Z_dR__53->SetBinError(18,803.803);
   VH_DHZfirst_Z_dR__53->SetBinError(20,1188.466);
   VH_DHZfirst_Z_dR__53->SetBinError(26,650.8824);
   VH_DHZfirst_Z_dR__53->SetEntries(46);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR__53->SetLineColor(ci);
   VH_DHZfirst_Z_dR__53->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_DHZfirst_Z_dR__53->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR__53->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__53->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR__53->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__53->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR__53->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__53->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR__53->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR__53->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR__53->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__53->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__53->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR__53->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__53->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_DHZfirst_18->Modified();
   Z_dR_DHZfirst_18->cd();
   Z_dR_DHZfirst_18->SetSelected(Z_dR_DHZfirst_18);
}
