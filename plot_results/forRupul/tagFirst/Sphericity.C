#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity()
{
//=========Macro generated from canvas: Sphericity/Sphericity
//=========  (Wed Mar 27 16:46:16 2024) by ROOT version 6.28/10
   TCanvas *Sphericity = new TCanvas("Sphericity", "Sphericity",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity->SetHighLightColor(2);
   Sphericity->Range(-0.2,-0.1219187,1.133333,1.097268);
   Sphericity->SetFillColor(0);
   Sphericity->SetFillStyle(4000);
   Sphericity->SetBorderMode(0);
   Sphericity->SetBorderSize(2);
   Sphericity->SetLeftMargin(0.15);
   Sphericity->SetFrameFillStyle(1000);
   Sphericity->SetFrameBorderMode(0);
   Sphericity->SetFrameFillStyle(1000);
   Sphericity->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__15 = new TH1D("VH_tagFirst_Sphericity__15","",25,0,1);
   VH_tagFirst_Sphericity__15->SetBinContent(1,0.9289044);
   VH_tagFirst_Sphericity__15->SetBinContent(2,0.7653648);
   VH_tagFirst_Sphericity__15->SetBinContent(3,0.4164141);
   VH_tagFirst_Sphericity__15->SetBinContent(4,0.330538);
   VH_tagFirst_Sphericity__15->SetBinContent(5,0.2137907);
   VH_tagFirst_Sphericity__15->SetBinContent(6,0.06278024);
   VH_tagFirst_Sphericity__15->SetBinContent(7,0.05383063);
   VH_tagFirst_Sphericity__15->SetBinContent(8,0.02005245);
   VH_tagFirst_Sphericity__15->SetBinContent(9,0.009085431);
   VH_tagFirst_Sphericity__15->SetBinContent(10,0.003332231);
   VH_tagFirst_Sphericity__15->SetBinContent(11,0.00792634);
   VH_tagFirst_Sphericity__15->SetBinContent(12,0.005002779);
   VH_tagFirst_Sphericity__15->SetBinContent(19,0.002696336);
   VH_tagFirst_Sphericity__15->SetBinError(1,0.06423653);
   VH_tagFirst_Sphericity__15->SetBinError(2,0.05415722);
   VH_tagFirst_Sphericity__15->SetBinError(3,0.04117747);
   VH_tagFirst_Sphericity__15->SetBinError(4,0.03381164);
   VH_tagFirst_Sphericity__15->SetBinError(5,0.02711275);
   VH_tagFirst_Sphericity__15->SetBinError(6,0.01363828);
   VH_tagFirst_Sphericity__15->SetBinError(7,0.0162099);
   VH_tagFirst_Sphericity__15->SetBinError(8,0.008246966);
   VH_tagFirst_Sphericity__15->SetBinError(9,0.005400427);
   VH_tagFirst_Sphericity__15->SetBinError(10,0.003332231);
   VH_tagFirst_Sphericity__15->SetBinError(11,0.004073937);
   VH_tagFirst_Sphericity__15->SetBinError(12,0.003549299);
   VH_tagFirst_Sphericity__15->SetBinError(19,0.002696336);
   VH_tagFirst_Sphericity__15->SetEntries(939);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__15->SetLineColor(ci);
   VH_tagFirst_Sphericity__15->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__15->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__15->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__15->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__15->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__15->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__15->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__15->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__15->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__15->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__15->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__15->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__15->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__15->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__15->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity->Modified();
   Sphericity->cd();
   Sphericity->SetSelected(Sphericity);
}
