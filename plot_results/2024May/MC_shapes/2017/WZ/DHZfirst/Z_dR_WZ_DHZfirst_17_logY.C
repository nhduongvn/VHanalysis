#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_WZ_DHZfirst_17_logY()
{
//=========Macro generated from canvas: Z_dR_WZ_DHZfirst_17/Z_dR_WZ_DHZfirst_17
//=========  (Thu May 23 20:48:47 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_WZ_DHZfirst_17 = new TCanvas("Z_dR_WZ_DHZfirst_17", "Z_dR_WZ_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_WZ_DHZfirst_17->SetHighLightColor(2);
   Z_dR_WZ_DHZfirst_17->Range(-1.2,-2.376796,6.8,1.646625);
   Z_dR_WZ_DHZfirst_17->SetFillColor(0);
   Z_dR_WZ_DHZfirst_17->SetFillStyle(4000);
   Z_dR_WZ_DHZfirst_17->SetBorderMode(0);
   Z_dR_WZ_DHZfirst_17->SetBorderSize(2);
   Z_dR_WZ_DHZfirst_17->SetLogy();
   Z_dR_WZ_DHZfirst_17->SetLeftMargin(0.15);
   Z_dR_WZ_DHZfirst_17->SetFrameFillStyle(1000);
   Z_dR_WZ_DHZfirst_17->SetFrameBorderMode(0);
   Z_dR_WZ_DHZfirst_17->SetFrameFillStyle(1000);
   Z_dR_WZ_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR__1586 = new TH1D("VH_DHZfirst_Z_dR__1586","",30,0,6);
   VH_DHZfirst_Z_dR__1586->SetBinContent(3,4.354936);
   VH_DHZfirst_Z_dR__1586->SetBinContent(4,9.262619);
   VH_DHZfirst_Z_dR__1586->SetBinContent(5,4.942923);
   VH_DHZfirst_Z_dR__1586->SetBinContent(6,2.478278);
   VH_DHZfirst_Z_dR__1586->SetBinContent(7,0.6539968);
   VH_DHZfirst_Z_dR__1586->SetBinContent(8,0.1376002);
   VH_DHZfirst_Z_dR__1586->SetBinContent(9,0.6040301);
   VH_DHZfirst_Z_dR__1586->SetBinContent(10,0.1701166);
   VH_DHZfirst_Z_dR__1586->SetBinContent(14,0.02121172);
   VH_DHZfirst_Z_dR__1586->SetBinContent(15,0.3367613);
   VH_DHZfirst_Z_dR__1586->SetBinContent(16,0.3773283);
   VH_DHZfirst_Z_dR__1586->SetBinContent(23,0.4900953);
   VH_DHZfirst_Z_dR__1586->SetBinContent(24,0.275312);
   VH_DHZfirst_Z_dR__1586->SetBinContent(26,0.3347787);
   VH_DHZfirst_Z_dR__1586->SetBinContent(27,0.2870248);
   VH_DHZfirst_Z_dR__1586->SetBinContent(28,1.345118);
   VH_DHZfirst_Z_dR__1586->SetBinContent(29,0.2031329);
   VH_DHZfirst_Z_dR__1586->SetBinContent(31,0.4863534);
   VH_DHZfirst_Z_dR__1586->SetBinError(3,1.139456);
   VH_DHZfirst_Z_dR__1586->SetBinError(4,1.907295);
   VH_DHZfirst_Z_dR__1586->SetBinError(5,1.202369);
   VH_DHZfirst_Z_dR__1586->SetBinError(6,0.8083193);
   VH_DHZfirst_Z_dR__1586->SetBinError(7,0.3307209);
   VH_DHZfirst_Z_dR__1586->SetBinError(8,0.1376002);
   VH_DHZfirst_Z_dR__1586->SetBinError(9,0.3797779);
   VH_DHZfirst_Z_dR__1586->SetBinError(10,0.1701166);
   VH_DHZfirst_Z_dR__1586->SetBinError(14,0.02121172);
   VH_DHZfirst_Z_dR__1586->SetBinError(15,0.3367613);
   VH_DHZfirst_Z_dR__1586->SetBinError(16,0.2778281);
   VH_DHZfirst_Z_dR__1586->SetBinError(23,0.4900953);
   VH_DHZfirst_Z_dR__1586->SetBinError(24,0.275312);
   VH_DHZfirst_Z_dR__1586->SetBinError(26,0.2412278);
   VH_DHZfirst_Z_dR__1586->SetBinError(27,0.2870248);
   VH_DHZfirst_Z_dR__1586->SetBinError(28,1.182622);
   VH_DHZfirst_Z_dR__1586->SetBinError(29,0.2031329);
   VH_DHZfirst_Z_dR__1586->SetBinError(31,0.4863534);
   VH_DHZfirst_Z_dR__1586->SetEntries(105);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR__1586->SetLineColor(ci);
   VH_DHZfirst_Z_dR__1586->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_DHZfirst_Z_dR__1586->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR__1586->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__1586->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR__1586->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__1586->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR__1586->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__1586->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR__1586->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR__1586->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR__1586->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__1586->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__1586->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR__1586->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__1586->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_WZ_DHZfirst_17->Modified();
   Z_dR_WZ_DHZfirst_17->cd();
   Z_dR_WZ_DHZfirst_17->SetSelected(Z_dR_WZ_DHZfirst_17);
}
