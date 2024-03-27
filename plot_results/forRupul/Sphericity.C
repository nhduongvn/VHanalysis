#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity()
{
//=========Macro generated from canvas: Sphericity/Sphericity
//=========  (Wed Mar 27 12:51:56 2024) by ROOT version 6.28/10
   TCanvas *Sphericity = new TCanvas("Sphericity", "Sphericity",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity->SetHighLightColor(2);
   Sphericity->Range(-0.2,-57.12975,1.133333,514.1677);
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
   VH_tagFirst_Sphericity__15->SetBinContent(1,435.2743);
   VH_tagFirst_Sphericity__15->SetBinContent(2,358.6414);
   VH_tagFirst_Sphericity__15->SetBinContent(3,195.127);
   VH_tagFirst_Sphericity__15->SetBinContent(4,154.8864);
   VH_tagFirst_Sphericity__15->SetBinContent(5,100.18);
   VH_tagFirst_Sphericity__15->SetBinContent(6,29.41812);
   VH_tagFirst_Sphericity__15->SetBinContent(7,25.22443);
   VH_tagFirst_Sphericity__15->SetBinContent(8,9.396354);
   VH_tagFirst_Sphericity__15->SetBinContent(9,4.257332);
   VH_tagFirst_Sphericity__15->SetBinContent(10,1.561446);
   VH_tagFirst_Sphericity__15->SetBinContent(11,3.714194);
   VH_tagFirst_Sphericity__15->SetBinContent(12,2.344246);
   VH_tagFirst_Sphericity__15->SetBinContent(19,1.263473);
   VH_tagFirst_Sphericity__15->SetBinError(1,30.10052);
   VH_tagFirst_Sphericity__15->SetBinError(2,25.37747);
   VH_tagFirst_Sphericity__15->SetBinError(3,19.2953);
   VH_tagFirst_Sphericity__15->SetBinError(4,15.84376);
   VH_tagFirst_Sphericity__15->SetBinError(5,12.70473);
   VH_tagFirst_Sphericity__15->SetBinError(6,6.390746);
   VH_tagFirst_Sphericity__15->SetBinError(7,7.595776);
   VH_tagFirst_Sphericity__15->SetBinError(8,3.864436);
   VH_tagFirst_Sphericity__15->SetBinError(9,2.53058);
   VH_tagFirst_Sphericity__15->SetBinError(10,1.561446);
   VH_tagFirst_Sphericity__15->SetBinError(11,1.909001);
   VH_tagFirst_Sphericity__15->SetBinError(12,1.663162);
   VH_tagFirst_Sphericity__15->SetBinError(19,1.263473);
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
