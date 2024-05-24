#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_TT_DHZfirst_16_logY()
{
//=========Macro generated from canvas: Sphericity_TT_DHZfirst_16/Sphericity_TT_DHZfirst_16
//=========  (Thu May 23 20:48:51 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_TT_DHZfirst_16 = new TCanvas("Sphericity_TT_DHZfirst_16", "Sphericity_TT_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_TT_DHZfirst_16->SetHighLightColor(2);
   Sphericity_TT_DHZfirst_16->Range(-0.2,-2.561478,1.133333,4.870561);
   Sphericity_TT_DHZfirst_16->SetFillColor(0);
   Sphericity_TT_DHZfirst_16->SetFillStyle(4000);
   Sphericity_TT_DHZfirst_16->SetBorderMode(0);
   Sphericity_TT_DHZfirst_16->SetBorderSize(2);
   Sphericity_TT_DHZfirst_16->SetLogy();
   Sphericity_TT_DHZfirst_16->SetLeftMargin(0.15);
   Sphericity_TT_DHZfirst_16->SetFrameFillStyle(1000);
   Sphericity_TT_DHZfirst_16->SetFrameBorderMode(0);
   Sphericity_TT_DHZfirst_16->SetFrameFillStyle(1000);
   Sphericity_TT_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__1876 = new TH1D("VH_DHZfirst_Sphericity__1876","",25,0,1);
   VH_DHZfirst_Sphericity__1876->SetBinContent(1,6815.681);
   VH_DHZfirst_Sphericity__1876->SetBinContent(2,7076.325);
   VH_DHZfirst_Sphericity__1876->SetBinContent(3,3846.523);
   VH_DHZfirst_Sphericity__1876->SetBinContent(4,2089.506);
   VH_DHZfirst_Sphericity__1876->SetBinContent(5,1089.865);
   VH_DHZfirst_Sphericity__1876->SetBinContent(6,527.9946);
   VH_DHZfirst_Sphericity__1876->SetBinContent(7,245.3371);
   VH_DHZfirst_Sphericity__1876->SetBinContent(8,120.7828);
   VH_DHZfirst_Sphericity__1876->SetBinContent(9,62.95413);
   VH_DHZfirst_Sphericity__1876->SetBinContent(10,36.03327);
   VH_DHZfirst_Sphericity__1876->SetBinContent(11,20.70784);
   VH_DHZfirst_Sphericity__1876->SetBinContent(12,13.02857);
   VH_DHZfirst_Sphericity__1876->SetBinContent(13,8.739189);
   VH_DHZfirst_Sphericity__1876->SetBinContent(14,5.078515);
   VH_DHZfirst_Sphericity__1876->SetBinContent(15,3.498084);
   VH_DHZfirst_Sphericity__1876->SetBinContent(16,2.750101);
   VH_DHZfirst_Sphericity__1876->SetBinContent(17,1.686609);
   VH_DHZfirst_Sphericity__1876->SetBinContent(18,1.088891);
   VH_DHZfirst_Sphericity__1876->SetBinContent(19,0.6525055);
   VH_DHZfirst_Sphericity__1876->SetBinContent(20,0.1339443);
   VH_DHZfirst_Sphericity__1876->SetBinContent(21,0.03039179);
   VH_DHZfirst_Sphericity__1876->SetBinError(1,20.21545);
   VH_DHZfirst_Sphericity__1876->SetBinError(2,20.56375);
   VH_DHZfirst_Sphericity__1876->SetBinError(3,15.19987);
   VH_DHZfirst_Sphericity__1876->SetBinError(4,11.25027);
   VH_DHZfirst_Sphericity__1876->SetBinError(5,8.135091);
   VH_DHZfirst_Sphericity__1876->SetBinError(6,5.604518);
   VH_DHZfirst_Sphericity__1876->SetBinError(7,3.754662);
   VH_DHZfirst_Sphericity__1876->SetBinError(8,2.570099);
   VH_DHZfirst_Sphericity__1876->SetBinError(9,1.818436);
   VH_DHZfirst_Sphericity__1876->SetBinError(10,1.363527);
   VH_DHZfirst_Sphericity__1876->SetBinError(11,1.027422);
   VH_DHZfirst_Sphericity__1876->SetBinError(12,0.7980013);
   VH_DHZfirst_Sphericity__1876->SetBinError(13,0.6506006);
   VH_DHZfirst_Sphericity__1876->SetBinError(14,0.4907894);
   VH_DHZfirst_Sphericity__1876->SetBinError(15,0.4039316);
   VH_DHZfirst_Sphericity__1876->SetBinError(16,0.3764195);
   VH_DHZfirst_Sphericity__1876->SetBinError(17,0.2822255);
   VH_DHZfirst_Sphericity__1876->SetBinError(18,0.2332455);
   VH_DHZfirst_Sphericity__1876->SetBinError(19,0.1713397);
   VH_DHZfirst_Sphericity__1876->SetBinError(20,0.08074467);
   VH_DHZfirst_Sphericity__1876->SetBinError(21,0.03039179);
   VH_DHZfirst_Sphericity__1876->SetEntries(408287);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__1876->SetLineColor(ci);
   VH_DHZfirst_Sphericity__1876->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__1876->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__1876->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1876->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1876->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1876->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__1876->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1876->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__1876->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__1876->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__1876->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1876->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1876->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1876->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1876->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_TT_DHZfirst_16->Modified();
   Sphericity_TT_DHZfirst_16->cd();
   Sphericity_TT_DHZfirst_16->SetSelected(Sphericity_TT_DHZfirst_16);
}
