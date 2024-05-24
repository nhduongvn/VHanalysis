#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHbb_tagFirst_16_logY()
{
//=========Macro generated from canvas: Aplanarity_ZHbb_tagFirst_16/Aplanarity_ZHbb_tagFirst_16
//=========  (Thu May 23 20:48:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHbb_tagFirst_16 = new TCanvas("Aplanarity_ZHbb_tagFirst_16", "Aplanarity_ZHbb_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHbb_tagFirst_16->SetHighLightColor(2);
   Aplanarity_ZHbb_tagFirst_16->Range(-0.2,-4.499573,1.133333,3.062674);
   Aplanarity_ZHbb_tagFirst_16->SetFillColor(0);
   Aplanarity_ZHbb_tagFirst_16->SetFillStyle(4000);
   Aplanarity_ZHbb_tagFirst_16->SetBorderMode(0);
   Aplanarity_ZHbb_tagFirst_16->SetBorderSize(2);
   Aplanarity_ZHbb_tagFirst_16->SetLogy();
   Aplanarity_ZHbb_tagFirst_16->SetLeftMargin(0.15);
   Aplanarity_ZHbb_tagFirst_16->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_tagFirst_16->SetFrameBorderMode(0);
   Aplanarity_ZHbb_tagFirst_16->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__454 = new TH1D("VH_tagFirst_Aplanarity__454","",50,0,1);
   VH_tagFirst_Aplanarity__454->SetBinContent(1,106.8809);
   VH_tagFirst_Aplanarity__454->SetBinContent(2,11.28377);
   VH_tagFirst_Aplanarity__454->SetBinContent(3,2.691129);
   VH_tagFirst_Aplanarity__454->SetBinContent(4,0.864873);
   VH_tagFirst_Aplanarity__454->SetBinContent(5,0.3980047);
   VH_tagFirst_Aplanarity__454->SetBinContent(6,0.1826873);
   VH_tagFirst_Aplanarity__454->SetBinContent(7,0.1227428);
   VH_tagFirst_Aplanarity__454->SetBinContent(8,0.05442767);
   VH_tagFirst_Aplanarity__454->SetBinContent(9,0.03844439);
   VH_tagFirst_Aplanarity__454->SetBinContent(10,0.02388087);
   VH_tagFirst_Aplanarity__454->SetBinContent(11,0.009521415);
   VH_tagFirst_Aplanarity__454->SetBinContent(12,0.009607433);
   VH_tagFirst_Aplanarity__454->SetBinContent(13,0.007627729);
   VH_tagFirst_Aplanarity__454->SetBinContent(14,0.002042008);
   VH_tagFirst_Aplanarity__454->SetBinContent(15,0.002712136);
   VH_tagFirst_Aplanarity__454->SetBinContent(16,0.0004966983);
   VH_tagFirst_Aplanarity__454->SetBinContent(17,0.001224707);
   VH_tagFirst_Aplanarity__454->SetBinContent(19,0.0007934507);
   VH_tagFirst_Aplanarity__454->SetBinContent(20,0.001875805);
   VH_tagFirst_Aplanarity__454->SetBinContent(21,0.0003611448);
   VH_tagFirst_Aplanarity__454->SetBinError(1,0.3039723);
   VH_tagFirst_Aplanarity__454->SetBinError(2,0.09686585);
   VH_tagFirst_Aplanarity__454->SetBinError(3,0.04795427);
   VH_tagFirst_Aplanarity__454->SetBinError(4,0.02697088);
   VH_tagFirst_Aplanarity__454->SetBinError(5,0.01788777);
   VH_tagFirst_Aplanarity__454->SetBinError(6,0.01254582);
   VH_tagFirst_Aplanarity__454->SetBinError(7,0.01031689);
   VH_tagFirst_Aplanarity__454->SetBinError(8,0.006440664);
   VH_tagFirst_Aplanarity__454->SetBinError(9,0.005835625);
   VH_tagFirst_Aplanarity__454->SetBinError(10,0.004842763);
   VH_tagFirst_Aplanarity__454->SetBinError(11,0.002492199);
   VH_tagFirst_Aplanarity__454->SetBinError(12,0.003079646);
   VH_tagFirst_Aplanarity__454->SetBinError(13,0.002934288);
   VH_tagFirst_Aplanarity__454->SetBinError(14,0.0008375849);
   VH_tagFirst_Aplanarity__454->SetBinError(15,0.001696857);
   VH_tagFirst_Aplanarity__454->SetBinError(16,0.0003611268);
   VH_tagFirst_Aplanarity__454->SetBinError(17,0.0009478656);
   VH_tagFirst_Aplanarity__454->SetBinError(19,0.0005641041);
   VH_tagFirst_Aplanarity__454->SetBinError(20,0.001530852);
   VH_tagFirst_Aplanarity__454->SetBinError(21,0.0003611448);
   VH_tagFirst_Aplanarity__454->SetEntries(207200);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__454->SetLineColor(ci);
   VH_tagFirst_Aplanarity__454->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__454->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__454->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__454->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__454->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__454->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__454->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__454->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__454->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__454->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__454->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__454->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__454->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__454->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__454->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHbb_tagFirst_16->Modified();
   Aplanarity_ZHbb_tagFirst_16->cd();
   Aplanarity_ZHbb_tagFirst_16->SetSelected(Aplanarity_ZHbb_tagFirst_16);
}
