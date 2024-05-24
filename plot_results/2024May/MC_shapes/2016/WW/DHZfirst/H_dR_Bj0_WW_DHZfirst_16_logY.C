#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_WW_DHZfirst_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_WW_DHZfirst_16/H_dR_Bj0_WW_DHZfirst_16
//=========  (Thu May 23 20:48:49 2024) by ROOT version 6.28/10
   TCanvas *H_dR_Bj0_WW_DHZfirst_16 = new TCanvas("H_dR_Bj0_WW_DHZfirst_16", "H_dR_Bj0_WW_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_WW_DHZfirst_16->SetHighLightColor(2);
   H_dR_Bj0_WW_DHZfirst_16->Range(-1.2,-1.417579,6.8,1.030909);
   H_dR_Bj0_WW_DHZfirst_16->SetFillColor(0);
   H_dR_Bj0_WW_DHZfirst_16->SetFillStyle(4000);
   H_dR_Bj0_WW_DHZfirst_16->SetBorderMode(0);
   H_dR_Bj0_WW_DHZfirst_16->SetBorderSize(2);
   H_dR_Bj0_WW_DHZfirst_16->SetLogy();
   H_dR_Bj0_WW_DHZfirst_16->SetLeftMargin(0.15);
   H_dR_Bj0_WW_DHZfirst_16->SetFrameFillStyle(1000);
   H_dR_Bj0_WW_DHZfirst_16->SetFrameBorderMode(0);
   H_dR_Bj0_WW_DHZfirst_16->SetFrameFillStyle(1000);
   H_dR_Bj0_WW_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_dR_Bj0__1762 = new TH1D("VH_DHZfirst_H_dR_Bj0__1762","",30,0,6);
   VH_DHZfirst_H_dR_Bj0__1762->SetBinContent(1,1.343693);
   VH_DHZfirst_H_dR_Bj0__1762->SetBinContent(2,3.224863);
   VH_DHZfirst_H_dR_Bj0__1762->SetBinContent(3,1.478062);
   VH_DHZfirst_H_dR_Bj0__1762->SetBinContent(4,0.6718465);
   VH_DHZfirst_H_dR_Bj0__1762->SetBinContent(5,0.8062158);
   VH_DHZfirst_H_dR_Bj0__1762->SetBinContent(6,0.2687386);
   VH_DHZfirst_H_dR_Bj0__1762->SetBinContent(7,0.1343693);
   VH_DHZfirst_H_dR_Bj0__1762->SetBinContent(8,0.5374772);
   VH_DHZfirst_H_dR_Bj0__1762->SetBinContent(9,0.1343693);
   VH_DHZfirst_H_dR_Bj0__1762->SetBinContent(11,0.1343693);
   VH_DHZfirst_H_dR_Bj0__1762->SetBinContent(13,0.1343693);
   VH_DHZfirst_H_dR_Bj0__1762->SetBinContent(19,0.1343693);
   VH_DHZfirst_H_dR_Bj0__1762->SetBinError(1,0.424913);
   VH_DHZfirst_H_dR_Bj0__1762->SetBinError(2,0.6582724);
   VH_DHZfirst_H_dR_Bj0__1762->SetBinError(3,0.4456525);
   VH_DHZfirst_H_dR_Bj0__1762->SetBinError(4,0.3004589);
   VH_DHZfirst_H_dR_Bj0__1762->SetBinError(5,0.3291362);
   VH_DHZfirst_H_dR_Bj0__1762->SetBinError(6,0.1900269);
   VH_DHZfirst_H_dR_Bj0__1762->SetBinError(7,0.1343693);
   VH_DHZfirst_H_dR_Bj0__1762->SetBinError(8,0.2687386);
   VH_DHZfirst_H_dR_Bj0__1762->SetBinError(9,0.1343693);
   VH_DHZfirst_H_dR_Bj0__1762->SetBinError(11,0.1343693);
   VH_DHZfirst_H_dR_Bj0__1762->SetBinError(13,0.1343693);
   VH_DHZfirst_H_dR_Bj0__1762->SetBinError(19,0.1343693);
   VH_DHZfirst_H_dR_Bj0__1762->SetEntries(67);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_dR_Bj0__1762->SetLineColor(ci);
   VH_DHZfirst_H_dR_Bj0__1762->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VH_DHZfirst_H_dR_Bj0__1762->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_H_dR_Bj0__1762->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__1762->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj0__1762->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__1762->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_H_dR_Bj0__1762->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__1762->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_dR_Bj0__1762->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_dR_Bj0__1762->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_dR_Bj0__1762->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__1762->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__1762->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj0__1762->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__1762->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_WW_DHZfirst_16->Modified();
   H_dR_Bj0_WW_DHZfirst_16->cd();
   H_dR_Bj0_WW_DHZfirst_16->SetSelected(H_dR_Bj0_WW_DHZfirst_16);
}
