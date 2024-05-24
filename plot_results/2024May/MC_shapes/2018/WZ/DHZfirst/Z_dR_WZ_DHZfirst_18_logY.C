#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_WZ_DHZfirst_18_logY()
{
//=========Macro generated from canvas: Z_dR_WZ_DHZfirst_18/Z_dR_WZ_DHZfirst_18
//=========  (Thu May 23 20:48:47 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_WZ_DHZfirst_18 = new TCanvas("Z_dR_WZ_DHZfirst_18", "Z_dR_WZ_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_WZ_DHZfirst_18->SetHighLightColor(2);
   Z_dR_WZ_DHZfirst_18->Range(-1.2,-1.027071,6.8,1.802401);
   Z_dR_WZ_DHZfirst_18->SetFillColor(0);
   Z_dR_WZ_DHZfirst_18->SetFillStyle(4000);
   Z_dR_WZ_DHZfirst_18->SetBorderMode(0);
   Z_dR_WZ_DHZfirst_18->SetBorderSize(2);
   Z_dR_WZ_DHZfirst_18->SetLogy();
   Z_dR_WZ_DHZfirst_18->SetLeftMargin(0.15);
   Z_dR_WZ_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dR_WZ_DHZfirst_18->SetFrameBorderMode(0);
   Z_dR_WZ_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dR_WZ_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR__1587 = new TH1D("VH_DHZfirst_Z_dR__1587","",30,0,6);
   VH_DHZfirst_Z_dR__1587->SetBinContent(3,7.054875);
   VH_DHZfirst_Z_dR__1587->SetBinContent(4,17.45441);
   VH_DHZfirst_Z_dR__1587->SetBinContent(5,13.55911);
   VH_DHZfirst_Z_dR__1587->SetBinContent(6,3.035266);
   VH_DHZfirst_Z_dR__1587->SetBinContent(7,3.307268);
   VH_DHZfirst_Z_dR__1587->SetBinContent(8,0.8069707);
   VH_DHZfirst_Z_dR__1587->SetBinContent(9,1.207329);
   VH_DHZfirst_Z_dR__1587->SetBinContent(11,0.4041718);
   VH_DHZfirst_Z_dR__1587->SetBinContent(12,1.091923);
   VH_DHZfirst_Z_dR__1587->SetBinContent(15,0.9426955);
   VH_DHZfirst_Z_dR__1587->SetBinContent(17,0.3716468);
   VH_DHZfirst_Z_dR__1587->SetBinContent(24,0.3605006);
   VH_DHZfirst_Z_dR__1587->SetBinContent(26,0.9437761);
   VH_DHZfirst_Z_dR__1587->SetBinContent(27,2.531956);
   VH_DHZfirst_Z_dR__1587->SetBinContent(28,1.699814);
   VH_DHZfirst_Z_dR__1587->SetBinContent(29,0.4328347);
   VH_DHZfirst_Z_dR__1587->SetBinError(3,2.168319);
   VH_DHZfirst_Z_dR__1587->SetBinError(4,4.106045);
   VH_DHZfirst_Z_dR__1587->SetBinError(5,3.27739);
   VH_DHZfirst_Z_dR__1587->SetBinError(6,1.330624);
   VH_DHZfirst_Z_dR__1587->SetBinError(7,1.518512);
   VH_DHZfirst_Z_dR__1587->SetBinError(8,0.8069707);
   VH_DHZfirst_Z_dR__1587->SetBinError(9,0.9179923);
   VH_DHZfirst_Z_dR__1587->SetBinError(11,0.4041718);
   VH_DHZfirst_Z_dR__1587->SetBinError(12,0.7724784);
   VH_DHZfirst_Z_dR__1587->SetBinError(15,0.6824646);
   VH_DHZfirst_Z_dR__1587->SetBinError(17,0.3716468);
   VH_DHZfirst_Z_dR__1587->SetBinError(24,0.3605006);
   VH_DHZfirst_Z_dR__1587->SetBinError(26,0.6737447);
   VH_DHZfirst_Z_dR__1587->SetBinError(27,1.577131);
   VH_DHZfirst_Z_dR__1587->SetBinError(28,1.343423);
   VH_DHZfirst_Z_dR__1587->SetBinError(29,0.4328347);
   VH_DHZfirst_Z_dR__1587->SetEntries(90);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR__1587->SetLineColor(ci);
   VH_DHZfirst_Z_dR__1587->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_DHZfirst_Z_dR__1587->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR__1587->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__1587->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR__1587->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__1587->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR__1587->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__1587->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR__1587->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR__1587->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR__1587->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__1587->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__1587->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR__1587->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__1587->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_WZ_DHZfirst_18->Modified();
   Z_dR_WZ_DHZfirst_18->cd();
   Z_dR_WZ_DHZfirst_18->SetSelected(Z_dR_WZ_DHZfirst_18);
}
