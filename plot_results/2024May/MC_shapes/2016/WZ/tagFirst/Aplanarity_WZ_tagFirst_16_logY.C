#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WZ_tagFirst_16_logY()
{
//=========Macro generated from canvas: Aplanarity_WZ_tagFirst_16/Aplanarity_WZ_tagFirst_16
//=========  (Thu May 23 20:48:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WZ_tagFirst_16 = new TCanvas("Aplanarity_WZ_tagFirst_16", "Aplanarity_WZ_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WZ_tagFirst_16->SetHighLightColor(2);
   Aplanarity_WZ_tagFirst_16->Range(-0.2,-1.921791,1.133333,3.095085);
   Aplanarity_WZ_tagFirst_16->SetFillColor(0);
   Aplanarity_WZ_tagFirst_16->SetFillStyle(4000);
   Aplanarity_WZ_tagFirst_16->SetBorderMode(0);
   Aplanarity_WZ_tagFirst_16->SetBorderSize(2);
   Aplanarity_WZ_tagFirst_16->SetLogy();
   Aplanarity_WZ_tagFirst_16->SetLeftMargin(0.15);
   Aplanarity_WZ_tagFirst_16->SetFrameFillStyle(1000);
   Aplanarity_WZ_tagFirst_16->SetFrameBorderMode(0);
   Aplanarity_WZ_tagFirst_16->SetFrameFillStyle(1000);
   Aplanarity_WZ_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__475 = new TH1D("VH_tagFirst_Aplanarity__475","",50,0,1);
   VH_tagFirst_Aplanarity__475->SetBinContent(1,206.942);
   VH_tagFirst_Aplanarity__475->SetBinContent(2,21.8494);
   VH_tagFirst_Aplanarity__475->SetBinContent(3,3.827209);
   VH_tagFirst_Aplanarity__475->SetBinContent(4,2.479462);
   VH_tagFirst_Aplanarity__475->SetBinContent(5,0.6631192);
   VH_tagFirst_Aplanarity__475->SetBinContent(6,0.6044059);
   VH_tagFirst_Aplanarity__475->SetBinContent(7,0.2051277);
   VH_tagFirst_Aplanarity__475->SetBinContent(8,0.07601985);
   VH_tagFirst_Aplanarity__475->SetBinError(1,4.481769);
   VH_tagFirst_Aplanarity__475->SetBinError(2,1.438246);
   VH_tagFirst_Aplanarity__475->SetBinError(3,0.6047531);
   VH_tagFirst_Aplanarity__475->SetBinError(4,0.4952579);
   VH_tagFirst_Aplanarity__475->SetBinError(5,0.2549358);
   VH_tagFirst_Aplanarity__475->SetBinError(6,0.250102);
   VH_tagFirst_Aplanarity__475->SetBinError(7,0.145106);
   VH_tagFirst_Aplanarity__475->SetBinError(8,0.07601985);
   VH_tagFirst_Aplanarity__475->SetEntries(2557);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__475->SetLineColor(ci);
   VH_tagFirst_Aplanarity__475->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__475->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__475->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__475->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__475->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__475->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__475->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__475->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__475->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__475->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__475->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__475->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__475->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__475->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__475->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WZ_tagFirst_16->Modified();
   Aplanarity_WZ_tagFirst_16->cd();
   Aplanarity_WZ_tagFirst_16->SetSelected(Aplanarity_WZ_tagFirst_16);
}
