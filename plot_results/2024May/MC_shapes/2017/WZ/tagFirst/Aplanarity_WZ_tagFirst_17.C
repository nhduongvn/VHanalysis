#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WZ_tagFirst_17()
{
//=========Macro generated from canvas: Aplanarity_WZ_tagFirst_17/Aplanarity_WZ_tagFirst_17
//=========  (Fri May 24 12:42:12 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WZ_tagFirst_17 = new TCanvas("Aplanarity_WZ_tagFirst_17", "Aplanarity_WZ_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WZ_tagFirst_17->SetHighLightColor(2);
   Aplanarity_WZ_tagFirst_17->Range(-0.2,-17.27779,1.133333,155.5001);
   Aplanarity_WZ_tagFirst_17->SetFillColor(0);
   Aplanarity_WZ_tagFirst_17->SetFillStyle(4000);
   Aplanarity_WZ_tagFirst_17->SetBorderMode(0);
   Aplanarity_WZ_tagFirst_17->SetBorderSize(2);
   Aplanarity_WZ_tagFirst_17->SetLeftMargin(0.15);
   Aplanarity_WZ_tagFirst_17->SetFrameFillStyle(1000);
   Aplanarity_WZ_tagFirst_17->SetFrameBorderMode(0);
   Aplanarity_WZ_tagFirst_17->SetFrameFillStyle(1000);
   Aplanarity_WZ_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__476 = new TH1D("VH_tagFirst_Aplanarity__476","",50,0,1);
   VH_tagFirst_Aplanarity__476->SetBinContent(1,131.6403);
   VH_tagFirst_Aplanarity__476->SetBinContent(2,15.4772);
   VH_tagFirst_Aplanarity__476->SetBinContent(3,2.753447);
   VH_tagFirst_Aplanarity__476->SetBinContent(4,1.357695);
   VH_tagFirst_Aplanarity__476->SetBinContent(5,0.2061255);
   VH_tagFirst_Aplanarity__476->SetBinContent(6,0.8384539);
   VH_tagFirst_Aplanarity__476->SetBinContent(8,0.1216993);
   VH_tagFirst_Aplanarity__476->SetBinContent(11,0.5424682);
   VH_tagFirst_Aplanarity__476->SetBinError(1,6.587636);
   VH_tagFirst_Aplanarity__476->SetBinError(2,2.349223);
   VH_tagFirst_Aplanarity__476->SetBinError(3,1.04625);
   VH_tagFirst_Aplanarity__476->SetBinError(4,0.5565141);
   VH_tagFirst_Aplanarity__476->SetBinError(5,0.2061255);
   VH_tagFirst_Aplanarity__476->SetBinError(6,0.6151703);
   VH_tagFirst_Aplanarity__476->SetBinError(8,0.1216993);
   VH_tagFirst_Aplanarity__476->SetBinError(11,0.5424682);
   VH_tagFirst_Aplanarity__476->SetEntries(620);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__476->SetLineColor(ci);
   VH_tagFirst_Aplanarity__476->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__476->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__476->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__476->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__476->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__476->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__476->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__476->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__476->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__476->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__476->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__476->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__476->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__476->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__476->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WZ_tagFirst_17->Modified();
   Aplanarity_WZ_tagFirst_17->cd();
   Aplanarity_WZ_tagFirst_17->SetSelected(Aplanarity_WZ_tagFirst_17);
}
