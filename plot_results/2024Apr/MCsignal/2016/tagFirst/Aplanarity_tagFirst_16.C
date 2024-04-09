#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagFirst_16()
{
//=========Macro generated from canvas: Aplanarity_tagFirst_16/Aplanarity_tagFirst_16
//=========  (Mon Apr  8 11:27:51 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_tagFirst_16 = new TCanvas("Aplanarity_tagFirst_16", "Aplanarity_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tagFirst_16->SetHighLightColor(2);
   Aplanarity_tagFirst_16->Range(-0.2,-0.2109949,1.133333,1.898954);
   Aplanarity_tagFirst_16->SetFillColor(0);
   Aplanarity_tagFirst_16->SetFillStyle(4000);
   Aplanarity_tagFirst_16->SetBorderMode(0);
   Aplanarity_tagFirst_16->SetBorderSize(2);
   Aplanarity_tagFirst_16->SetLeftMargin(0.15);
   Aplanarity_tagFirst_16->SetFrameFillStyle(1000);
   Aplanarity_tagFirst_16->SetFrameBorderMode(0);
   Aplanarity_tagFirst_16->SetFrameFillStyle(1000);
   Aplanarity_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__46 = new TH1D("VH_tagFirst_Aplanarity__46","",50,0,1);
   VH_tagFirst_Aplanarity__46->SetBinContent(1,1.60758);
   VH_tagFirst_Aplanarity__46->SetBinContent(2,0.1488455);
   VH_tagFirst_Aplanarity__46->SetBinContent(3,0.03251455);
   VH_tagFirst_Aplanarity__46->SetBinContent(4,0.01257971);
   VH_tagFirst_Aplanarity__46->SetBinContent(6,0.001736123);
   VH_tagFirst_Aplanarity__46->SetBinError(1,0.05763838);
   VH_tagFirst_Aplanarity__46->SetBinError(2,0.01760932);
   VH_tagFirst_Aplanarity__46->SetBinError(3,0.008012246);
   VH_tagFirst_Aplanarity__46->SetBinError(4,0.005226104);
   VH_tagFirst_Aplanarity__46->SetBinError(6,0.001736123);
   VH_tagFirst_Aplanarity__46->SetEntries(910);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__46->SetLineColor(ci);
   VH_tagFirst_Aplanarity__46->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__46->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__46->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__46->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__46->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__46->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__46->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__46->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__46->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__46->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__46->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__46->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__46->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__46->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__46->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tagFirst_16->Modified();
   Aplanarity_tagFirst_16->cd();
   Aplanarity_tagFirst_16->SetSelected(Aplanarity_tagFirst_16);
}
