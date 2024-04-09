#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_DHZfirst_17()
{
//=========Macro generated from canvas: H_dR_Bj0_DHZfirst_17/H_dR_Bj0_DHZfirst_17
//=========  (Mon Apr  8 11:27:52 2024) by ROOT version 6.28/10
   TCanvas *H_dR_Bj0_DHZfirst_17 = new TCanvas("H_dR_Bj0_DHZfirst_17", "H_dR_Bj0_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_DHZfirst_17->SetHighLightColor(2);
   H_dR_Bj0_DHZfirst_17->Range(-1.2,-0.01568195,6.8,0.1411375);
   H_dR_Bj0_DHZfirst_17->SetFillColor(0);
   H_dR_Bj0_DHZfirst_17->SetFillStyle(4000);
   H_dR_Bj0_DHZfirst_17->SetBorderMode(0);
   H_dR_Bj0_DHZfirst_17->SetBorderSize(2);
   H_dR_Bj0_DHZfirst_17->SetLeftMargin(0.15);
   H_dR_Bj0_DHZfirst_17->SetFrameFillStyle(1000);
   H_dR_Bj0_DHZfirst_17->SetFrameBorderMode(0);
   H_dR_Bj0_DHZfirst_17->SetFrameFillStyle(1000);
   H_dR_Bj0_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_dR_Bj0__176 = new TH1D("VH_DHZfirst_H_dR_Bj0__176","",30,0,6);
   VH_DHZfirst_H_dR_Bj0__176->SetBinContent(1,0.0236337);
   VH_DHZfirst_H_dR_Bj0__176->SetBinContent(2,0.1194815);
   VH_DHZfirst_H_dR_Bj0__176->SetBinContent(3,0.05908425);
   VH_DHZfirst_H_dR_Bj0__176->SetBinContent(4,0.01969475);
   VH_DHZfirst_H_dR_Bj0__176->SetBinContent(5,0.005251933);
   VH_DHZfirst_H_dR_Bj0__176->SetBinContent(6,0.006564917);
   VH_DHZfirst_H_dR_Bj0__176->SetBinContent(7,0.002625967);
   VH_DHZfirst_H_dR_Bj0__176->SetBinContent(8,0.006564917);
   VH_DHZfirst_H_dR_Bj0__176->SetBinContent(9,0.002625967);
   VH_DHZfirst_H_dR_Bj0__176->SetBinContent(10,0.001312983);
   VH_DHZfirst_H_dR_Bj0__176->SetBinContent(11,0.00393895);
   VH_DHZfirst_H_dR_Bj0__176->SetBinContent(12,0.002625967);
   VH_DHZfirst_H_dR_Bj0__176->SetBinContent(13,0.002625967);
   VH_DHZfirst_H_dR_Bj0__176->SetBinContent(14,0.001312983);
   VH_DHZfirst_H_dR_Bj0__176->SetBinContent(15,0.001312983);
   VH_DHZfirst_H_dR_Bj0__176->SetBinContent(18,0.001312983);
   VH_DHZfirst_H_dR_Bj0__176->SetBinContent(19,0.001312983);
   VH_DHZfirst_H_dR_Bj0__176->SetBinError(1,0.005570517);
   VH_DHZfirst_H_dR_Bj0__176->SetBinError(2,0.01252506);
   VH_DHZfirst_H_dR_Bj0__176->SetBinError(3,0.00880776);
   VH_DHZfirst_H_dR_Bj0__176->SetBinError(4,0.005085163);
   VH_DHZfirst_H_dR_Bj0__176->SetBinError(5,0.002625967);
   VH_DHZfirst_H_dR_Bj0__176->SetBinError(6,0.00293592);
   VH_DHZfirst_H_dR_Bj0__176->SetBinError(7,0.001856839);
   VH_DHZfirst_H_dR_Bj0__176->SetBinError(8,0.00293592);
   VH_DHZfirst_H_dR_Bj0__176->SetBinError(9,0.001856839);
   VH_DHZfirst_H_dR_Bj0__176->SetBinError(10,0.001312983);
   VH_DHZfirst_H_dR_Bj0__176->SetBinError(11,0.002274154);
   VH_DHZfirst_H_dR_Bj0__176->SetBinError(12,0.001856839);
   VH_DHZfirst_H_dR_Bj0__176->SetBinError(13,0.001856839);
   VH_DHZfirst_H_dR_Bj0__176->SetBinError(14,0.001312983);
   VH_DHZfirst_H_dR_Bj0__176->SetBinError(15,0.001312983);
   VH_DHZfirst_H_dR_Bj0__176->SetBinError(18,0.001312983);
   VH_DHZfirst_H_dR_Bj0__176->SetBinError(19,0.001312983);
   VH_DHZfirst_H_dR_Bj0__176->SetEntries(199);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_dR_Bj0__176->SetLineColor(ci);
   VH_DHZfirst_H_dR_Bj0__176->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VH_DHZfirst_H_dR_Bj0__176->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_H_dR_Bj0__176->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__176->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj0__176->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__176->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_H_dR_Bj0__176->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__176->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_dR_Bj0__176->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_dR_Bj0__176->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_dR_Bj0__176->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__176->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__176->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj0__176->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__176->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_DHZfirst_17->Modified();
   H_dR_Bj0_DHZfirst_17->cd();
   H_dR_Bj0_DHZfirst_17->SetSelected(H_dR_Bj0_DHZfirst_17);
}
