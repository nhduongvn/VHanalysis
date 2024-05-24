#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WW_tagFirst_2b1c_17()
{
//=========Macro generated from canvas: Aplanarity_WW_tagFirst_2b1c_17/Aplanarity_WW_tagFirst_2b1c_17
//=========  (Fri May 24 12:42:43 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WW_tagFirst_2b1c_17 = new TCanvas("Aplanarity_WW_tagFirst_2b1c_17", "Aplanarity_WW_tagFirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WW_tagFirst_2b1c_17->SetHighLightColor(2);
   Aplanarity_WW_tagFirst_2b1c_17->Range(-0.2,-12.39443,1.133333,111.5499);
   Aplanarity_WW_tagFirst_2b1c_17->SetFillColor(0);
   Aplanarity_WW_tagFirst_2b1c_17->SetFillStyle(4000);
   Aplanarity_WW_tagFirst_2b1c_17->SetBorderMode(0);
   Aplanarity_WW_tagFirst_2b1c_17->SetBorderSize(2);
   Aplanarity_WW_tagFirst_2b1c_17->SetLeftMargin(0.15);
   Aplanarity_WW_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_WW_tagFirst_2b1c_17->SetFrameBorderMode(0);
   Aplanarity_WW_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_WW_tagFirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Aplanarity__2633 = new TH1D("VH_tagFirst_2b1c_Aplanarity__2633","",50,0,1);
   VH_tagFirst_2b1c_Aplanarity__2633->SetBinContent(1,94.43376);
   VH_tagFirst_2b1c_Aplanarity__2633->SetBinContent(2,10.25689);
   VH_tagFirst_2b1c_Aplanarity__2633->SetBinContent(3,2.834555);
   VH_tagFirst_2b1c_Aplanarity__2633->SetBinContent(4,1.021486);
   VH_tagFirst_2b1c_Aplanarity__2633->SetBinContent(5,0.2488032);
   VH_tagFirst_2b1c_Aplanarity__2633->SetBinContent(6,0.5710464);
   VH_tagFirst_2b1c_Aplanarity__2633->SetBinContent(8,0.1686304);
   VH_tagFirst_2b1c_Aplanarity__2633->SetBinError(1,5.725482);
   VH_tagFirst_2b1c_Aplanarity__2633->SetBinError(2,1.915787);
   VH_tagFirst_2b1c_Aplanarity__2633->SetBinError(3,0.9611361);
   VH_tagFirst_2b1c_Aplanarity__2633->SetBinError(4,0.6422209);
   VH_tagFirst_2b1c_Aplanarity__2633->SetBinError(5,0.2488032);
   VH_tagFirst_2b1c_Aplanarity__2633->SetBinError(6,0.4052554);
   VH_tagFirst_2b1c_Aplanarity__2633->SetBinError(8,0.1686304);
   VH_tagFirst_2b1c_Aplanarity__2633->SetEntries(381);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Aplanarity__2633->SetLineColor(ci);
   VH_tagFirst_2b1c_Aplanarity__2633->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_2b1c_Aplanarity__2633->GetXaxis()->SetRange(1,50);
   VH_tagFirst_2b1c_Aplanarity__2633->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2633->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2633->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2633->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_2b1c_Aplanarity__2633->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2633->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Aplanarity__2633->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Aplanarity__2633->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Aplanarity__2633->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2633->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2633->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2633->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2633->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WW_tagFirst_2b1c_17->Modified();
   Aplanarity_WW_tagFirst_2b1c_17->cd();
   Aplanarity_WW_tagFirst_2b1c_17->SetSelected(Aplanarity_WW_tagFirst_2b1c_17);
}
