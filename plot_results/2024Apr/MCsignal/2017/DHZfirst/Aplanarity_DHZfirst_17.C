#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_DHZfirst_17()
{
//=========Macro generated from canvas: Aplanarity_DHZfirst_17/Aplanarity_DHZfirst_17
//=========  (Mon Apr  8 11:27:53 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_DHZfirst_17 = new TCanvas("Aplanarity_DHZfirst_17", "Aplanarity_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_DHZfirst_17->SetHighLightColor(2);
   Aplanarity_DHZfirst_17->Range(-0.2,-0.03129013,1.133333,0.2816111);
   Aplanarity_DHZfirst_17->SetFillColor(0);
   Aplanarity_DHZfirst_17->SetFillStyle(4000);
   Aplanarity_DHZfirst_17->SetBorderMode(0);
   Aplanarity_DHZfirst_17->SetBorderSize(2);
   Aplanarity_DHZfirst_17->SetLeftMargin(0.15);
   Aplanarity_DHZfirst_17->SetFrameFillStyle(1000);
   Aplanarity_DHZfirst_17->SetFrameBorderMode(0);
   Aplanarity_DHZfirst_17->SetFrameFillStyle(1000);
   Aplanarity_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__191 = new TH1D("VH_DHZfirst_Aplanarity__191","",50,0,1);
   VH_DHZfirst_Aplanarity__191->SetBinContent(1,0.238401);
   VH_DHZfirst_Aplanarity__191->SetBinContent(2,0.01389255);
   VH_DHZfirst_Aplanarity__191->SetBinContent(3,0.001448007);
   VH_DHZfirst_Aplanarity__191->SetBinError(1,0.01876611);
   VH_DHZfirst_Aplanarity__191->SetBinError(2,0.004597516);
   VH_DHZfirst_Aplanarity__191->SetBinError(3,0.001448007);
   VH_DHZfirst_Aplanarity__191->SetEntries(199);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__191->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__191->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__191->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__191->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__191->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__191->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__191->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__191->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__191->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__191->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__191->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__191->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__191->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__191->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__191->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__191->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_DHZfirst_17->Modified();
   Aplanarity_DHZfirst_17->cd();
   Aplanarity_DHZfirst_17->SetSelected(Aplanarity_DHZfirst_17);
}
