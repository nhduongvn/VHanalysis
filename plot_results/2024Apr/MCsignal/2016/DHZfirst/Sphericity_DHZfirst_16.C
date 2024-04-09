#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_DHZfirst_16()
{
//=========Macro generated from canvas: Sphericity_DHZfirst_16/Sphericity_DHZfirst_16
//=========  (Mon Apr  8 11:27:53 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_DHZfirst_16 = new TCanvas("Sphericity_DHZfirst_16", "Sphericity_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_DHZfirst_16->SetHighLightColor(2);
   Sphericity_DHZfirst_16->Range(-0.2,-0.01380153,1.133333,0.1242137);
   Sphericity_DHZfirst_16->SetFillColor(0);
   Sphericity_DHZfirst_16->SetFillStyle(4000);
   Sphericity_DHZfirst_16->SetBorderMode(0);
   Sphericity_DHZfirst_16->SetBorderSize(2);
   Sphericity_DHZfirst_16->SetLeftMargin(0.15);
   Sphericity_DHZfirst_16->SetFrameFillStyle(1000);
   Sphericity_DHZfirst_16->SetFrameBorderMode(0);
   Sphericity_DHZfirst_16->SetFrameFillStyle(1000);
   Sphericity_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__187 = new TH1D("VH_DHZfirst_Sphericity__187","",25,0,1);
   VH_DHZfirst_Sphericity__187->SetBinContent(1,0.1051545);
   VH_DHZfirst_Sphericity__187->SetBinContent(2,0.07319467);
   VH_DHZfirst_Sphericity__187->SetBinContent(3,0.06294384);
   VH_DHZfirst_Sphericity__187->SetBinContent(4,0.03990658);
   VH_DHZfirst_Sphericity__187->SetBinContent(5,0.02048198);
   VH_DHZfirst_Sphericity__187->SetBinContent(6,0.01882713);
   VH_DHZfirst_Sphericity__187->SetBinContent(8,0.001461375);
   VH_DHZfirst_Sphericity__187->SetBinError(1,0.01465603);
   VH_DHZfirst_Sphericity__187->SetBinError(2,0.01203404);
   VH_DHZfirst_Sphericity__187->SetBinError(3,0.01093266);
   VH_DHZfirst_Sphericity__187->SetBinError(4,0.009019967);
   VH_DHZfirst_Sphericity__187->SetBinError(5,0.006259533);
   VH_DHZfirst_Sphericity__187->SetBinError(6,0.006298138);
   VH_DHZfirst_Sphericity__187->SetBinError(8,0.001461375);
   VH_DHZfirst_Sphericity__187->SetEntries(167);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__187->SetLineColor(ci);
   VH_DHZfirst_Sphericity__187->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__187->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__187->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__187->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__187->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__187->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__187->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__187->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__187->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__187->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__187->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__187->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__187->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__187->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__187->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_DHZfirst_16->Modified();
   Sphericity_DHZfirst_16->cd();
   Sphericity_DHZfirst_16->SetSelected(Sphericity_DHZfirst_16);
}
