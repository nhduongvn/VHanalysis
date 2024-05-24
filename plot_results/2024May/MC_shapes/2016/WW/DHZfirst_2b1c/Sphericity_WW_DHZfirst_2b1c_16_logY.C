#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WW_DHZfirst_2b1c_16_logY()
{
//=========Macro generated from canvas: Sphericity_WW_DHZfirst_2b1c_16/Sphericity_WW_DHZfirst_2b1c_16
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WW_DHZfirst_2b1c_16 = new TCanvas("Sphericity_WW_DHZfirst_2b1c_16", "Sphericity_WW_DHZfirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WW_DHZfirst_2b1c_16->SetHighLightColor(2);
   Sphericity_WW_DHZfirst_2b1c_16->Range(-0.2,-1.204589,1.133333,1.604472);
   Sphericity_WW_DHZfirst_2b1c_16->SetFillColor(0);
   Sphericity_WW_DHZfirst_2b1c_16->SetFillStyle(4000);
   Sphericity_WW_DHZfirst_2b1c_16->SetBorderMode(0);
   Sphericity_WW_DHZfirst_2b1c_16->SetBorderSize(2);
   Sphericity_WW_DHZfirst_2b1c_16->SetLogy();
   Sphericity_WW_DHZfirst_2b1c_16->SetLeftMargin(0.15);
   Sphericity_WW_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_WW_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   Sphericity_WW_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_WW_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Sphericity__4042 = new TH1D("VH_DHZfirst_2b1c_Sphericity__4042","",25,0,1);
   VH_DHZfirst_2b1c_Sphericity__4042->SetBinContent(1,11.11775);
   VH_DHZfirst_2b1c_Sphericity__4042->SetBinContent(2,10.70211);
   VH_DHZfirst_2b1c_Sphericity__4042->SetBinContent(3,6.391791);
   VH_DHZfirst_2b1c_Sphericity__4042->SetBinContent(4,2.807934);
   VH_DHZfirst_2b1c_Sphericity__4042->SetBinContent(5,1.247247);
   VH_DHZfirst_2b1c_Sphericity__4042->SetBinContent(6,1.212001);
   VH_DHZfirst_2b1c_Sphericity__4042->SetBinContent(7,0.3478043);
   VH_DHZfirst_2b1c_Sphericity__4042->SetBinContent(8,0.2384226);
   VH_DHZfirst_2b1c_Sphericity__4042->SetBinError(1,1.133968);
   VH_DHZfirst_2b1c_Sphericity__4042->SetBinError(2,1.081724);
   VH_DHZfirst_2b1c_Sphericity__4042->SetBinError(3,0.8588779);
   VH_DHZfirst_2b1c_Sphericity__4042->SetBinError(4,0.5552182);
   VH_DHZfirst_2b1c_Sphericity__4042->SetBinError(5,0.3781762);
   VH_DHZfirst_2b1c_Sphericity__4042->SetBinError(6,0.3726197);
   VH_DHZfirst_2b1c_Sphericity__4042->SetBinError(7,0.2025026);
   VH_DHZfirst_2b1c_Sphericity__4042->SetBinError(8,0.1717471);
   VH_DHZfirst_2b1c_Sphericity__4042->SetEntries(314);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Sphericity__4042->SetLineColor(ci);
   VH_DHZfirst_2b1c_Sphericity__4042->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_2b1c_Sphericity__4042->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_2b1c_Sphericity__4042->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4042->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4042->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4042->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_2b1c_Sphericity__4042->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4042->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Sphericity__4042->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Sphericity__4042->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Sphericity__4042->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4042->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4042->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4042->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4042->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WW_DHZfirst_2b1c_16->Modified();
   Sphericity_WW_DHZfirst_2b1c_16->cd();
   Sphericity_WW_DHZfirst_2b1c_16->SetSelected(Sphericity_WW_DHZfirst_2b1c_16);
}
