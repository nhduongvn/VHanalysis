#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_DHZfirst_17()
{
//=========Macro generated from canvas: Z_dR_Bj0_DHZfirst_17/Z_dR_Bj0_DHZfirst_17
//=========  (Mon Apr  8 11:27:53 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj0_DHZfirst_17 = new TCanvas("Z_dR_Bj0_DHZfirst_17", "Z_dR_Bj0_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_DHZfirst_17->SetHighLightColor(2);
   Z_dR_Bj0_DHZfirst_17->Range(-1.2,-0.01740524,6.8,0.1566471);
   Z_dR_Bj0_DHZfirst_17->SetFillColor(0);
   Z_dR_Bj0_DHZfirst_17->SetFillStyle(4000);
   Z_dR_Bj0_DHZfirst_17->SetBorderMode(0);
   Z_dR_Bj0_DHZfirst_17->SetBorderSize(2);
   Z_dR_Bj0_DHZfirst_17->SetLeftMargin(0.15);
   Z_dR_Bj0_DHZfirst_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_DHZfirst_17->SetFrameBorderMode(0);
   Z_dR_Bj0_DHZfirst_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR_Bj0__182 = new TH1D("VH_DHZfirst_Z_dR_Bj0__182","",30,0,6);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinContent(1,0.05383232);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinContent(2,0.1326113);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinContent(3,0.02494668);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinContent(4,0.0157558);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinContent(5,0.0078779);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinContent(6,0.005251933);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinContent(7,0.00393895);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinContent(8,0.001312983);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinContent(9,0.002625967);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinContent(11,0.002625967);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinContent(13,0.002625967);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinContent(15,0.001312983);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinContent(17,0.001312983);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinContent(19,0.001312983);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinContent(20,0.002625967);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinContent(21,0.001312983);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinError(1,0.008407196);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinError(2,0.01319532);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinError(3,0.005723162);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinError(4,0.004548308);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinError(5,0.003216139);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinError(6,0.002625967);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinError(7,0.002274154);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinError(8,0.001312983);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinError(9,0.001856839);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinError(11,0.001856839);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinError(13,0.001856839);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinError(15,0.001312983);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinError(17,0.001312983);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinError(19,0.001312983);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinError(20,0.001856839);
   VH_DHZfirst_Z_dR_Bj0__182->SetBinError(21,0.001312983);
   VH_DHZfirst_Z_dR_Bj0__182->SetEntries(199);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR_Bj0__182->SetLineColor(ci);
   VH_DHZfirst_Z_dR_Bj0__182->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VH_DHZfirst_Z_dR_Bj0__182->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR_Bj0__182->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__182->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj0__182->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__182->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR_Bj0__182->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__182->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR_Bj0__182->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR_Bj0__182->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR_Bj0__182->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__182->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__182->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj0__182->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__182->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_DHZfirst_17->Modified();
   Z_dR_Bj0_DHZfirst_17->cd();
   Z_dR_Bj0_DHZfirst_17->SetSelected(Z_dR_Bj0_DHZfirst_17);
}
