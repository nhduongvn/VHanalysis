#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagOnly_17()
{
//=========Macro generated from canvas: Aplanarity_tagOnly_17/Aplanarity_tagOnly_17
//=========  (Mon Apr  8 11:27:52 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_tagOnly_17 = new TCanvas("Aplanarity_tagOnly_17", "Aplanarity_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tagOnly_17->SetHighLightColor(2);
   Aplanarity_tagOnly_17->Range(-0.2,-0.1650154,1.133333,1.485138);
   Aplanarity_tagOnly_17->SetFillColor(0);
   Aplanarity_tagOnly_17->SetFillStyle(4000);
   Aplanarity_tagOnly_17->SetBorderMode(0);
   Aplanarity_tagOnly_17->SetBorderSize(2);
   Aplanarity_tagOnly_17->SetLeftMargin(0.15);
   Aplanarity_tagOnly_17->SetFrameFillStyle(1000);
   Aplanarity_tagOnly_17->SetFrameBorderMode(0);
   Aplanarity_tagOnly_17->SetFrameFillStyle(1000);
   Aplanarity_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__119 = new TH1D("VH_tagOnly_Aplanarity__119","",50,0,1);
   VH_tagOnly_Aplanarity__119->SetBinContent(1,1.25726);
   VH_tagOnly_Aplanarity__119->SetBinContent(2,0.1165547);
   VH_tagOnly_Aplanarity__119->SetBinContent(3,0.02706904);
   VH_tagOnly_Aplanarity__119->SetBinContent(4,0.01161365);
   VH_tagOnly_Aplanarity__119->SetBinContent(5,0.005016942);
   VH_tagOnly_Aplanarity__119->SetBinContent(6,0.001290917);
   VH_tagOnly_Aplanarity__119->SetBinContent(7,0.0001481517);
   VH_tagOnly_Aplanarity__119->SetBinContent(9,0.001064883);
   VH_tagOnly_Aplanarity__119->SetBinContent(11,0.0009156332);
   VH_tagOnly_Aplanarity__119->SetBinError(1,0.04423617);
   VH_tagOnly_Aplanarity__119->SetBinError(2,0.01368821);
   VH_tagOnly_Aplanarity__119->SetBinError(3,0.006903648);
   VH_tagOnly_Aplanarity__119->SetBinError(4,0.003841252);
   VH_tagOnly_Aplanarity__119->SetBinError(5,0.0025094);
   VH_tagOnly_Aplanarity__119->SetBinError(6,0.001290917);
   VH_tagOnly_Aplanarity__119->SetBinError(7,0.0001481517);
   VH_tagOnly_Aplanarity__119->SetBinError(9,0.001064883);
   VH_tagOnly_Aplanarity__119->SetBinError(11,0.0009156332);
   VH_tagOnly_Aplanarity__119->SetEntries(1088);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__119->SetLineColor(ci);
   VH_tagOnly_Aplanarity__119->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__119->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__119->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__119->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__119->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__119->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__119->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__119->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__119->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__119->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__119->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__119->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__119->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__119->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__119->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tagOnly_17->Modified();
   Aplanarity_tagOnly_17->cd();
   Aplanarity_tagOnly_17->SetSelected(Aplanarity_tagOnly_17);
}
