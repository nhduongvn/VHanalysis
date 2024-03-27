#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity()
{
//=========Macro generated from canvas: Aplanarity/Aplanarity
//=========  (Wed Mar 27 16:46:16 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity = new TCanvas("Aplanarity", "Aplanarity",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity->SetHighLightColor(2);
   Aplanarity->Range(-0.2,-0.3324658,1.133333,2.992192);
   Aplanarity->SetFillColor(0);
   Aplanarity->SetFillStyle(4000);
   Aplanarity->SetBorderMode(0);
   Aplanarity->SetBorderSize(2);
   Aplanarity->SetLeftMargin(0.15);
   Aplanarity->SetFrameFillStyle(1000);
   Aplanarity->SetFrameBorderMode(0);
   Aplanarity->SetFrameFillStyle(1000);
   Aplanarity->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__16 = new TH1D("VH_tagFirst_Aplanarity__16","",50,0,1);
   VH_tagFirst_Aplanarity__16->SetBinContent(1,2.533073);
   VH_tagFirst_Aplanarity__16->SetBinContent(2,0.2047919);
   VH_tagFirst_Aplanarity__16->SetBinContent(3,0.05465833);
   VH_tagFirst_Aplanarity__16->SetBinContent(4,0.0115283);
   VH_tagFirst_Aplanarity__16->SetBinContent(5,0.002487843);
   VH_tagFirst_Aplanarity__16->SetBinContent(6,0.001750385);
   VH_tagFirst_Aplanarity__16->SetBinContent(7,0.006058982);
   VH_tagFirst_Aplanarity__16->SetBinContent(8,0.005370295);
   VH_tagFirst_Aplanarity__16->SetBinError(1,0.1009731);
   VH_tagFirst_Aplanarity__16->SetBinError(2,0.02584474);
   VH_tagFirst_Aplanarity__16->SetBinError(3,0.0163804);
   VH_tagFirst_Aplanarity__16->SetBinError(4,0.006184668);
   VH_tagFirst_Aplanarity__16->SetBinError(5,0.002487843);
   VH_tagFirst_Aplanarity__16->SetBinError(6,0.001750385);
   VH_tagFirst_Aplanarity__16->SetBinError(7,0.004310176);
   VH_tagFirst_Aplanarity__16->SetBinError(8,0.005370295);
   VH_tagFirst_Aplanarity__16->SetEntries(939);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__16->SetLineColor(ci);
   VH_tagFirst_Aplanarity__16->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__16->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__16->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__16->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__16->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__16->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__16->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__16->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__16->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__16->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__16->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__16->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__16->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__16->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__16->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity->Modified();
   Aplanarity->cd();
   Aplanarity->SetSelected(Aplanarity);
}
