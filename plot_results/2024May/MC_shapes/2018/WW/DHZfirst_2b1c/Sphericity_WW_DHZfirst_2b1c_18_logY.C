#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WW_DHZfirst_2b1c_18_logY()
{
//=========Macro generated from canvas: Sphericity_WW_DHZfirst_2b1c_18/Sphericity_WW_DHZfirst_2b1c_18
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WW_DHZfirst_2b1c_18 = new TCanvas("Sphericity_WW_DHZfirst_2b1c_18", "Sphericity_WW_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WW_DHZfirst_2b1c_18->SetHighLightColor(2);
   Sphericity_WW_DHZfirst_2b1c_18->Range(-0.2,-0.8690582,1.133333,1.57492);
   Sphericity_WW_DHZfirst_2b1c_18->SetFillColor(0);
   Sphericity_WW_DHZfirst_2b1c_18->SetFillStyle(4000);
   Sphericity_WW_DHZfirst_2b1c_18->SetBorderMode(0);
   Sphericity_WW_DHZfirst_2b1c_18->SetBorderSize(2);
   Sphericity_WW_DHZfirst_2b1c_18->SetLogy();
   Sphericity_WW_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   Sphericity_WW_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_WW_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   Sphericity_WW_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_WW_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Sphericity__4044 = new TH1D("VH_DHZfirst_2b1c_Sphericity__4044","",25,0,1);
   VH_DHZfirst_2b1c_Sphericity__4044->SetBinContent(1,11.29726);
   VH_DHZfirst_2b1c_Sphericity__4044->SetBinContent(2,9.577512);
   VH_DHZfirst_2b1c_Sphericity__4044->SetBinContent(3,11.01966);
   VH_DHZfirst_2b1c_Sphericity__4044->SetBinContent(4,0.4746458);
   VH_DHZfirst_2b1c_Sphericity__4044->SetBinContent(5,1.147802);
   VH_DHZfirst_2b1c_Sphericity__4044->SetBinContent(6,0.4839194);
   VH_DHZfirst_2b1c_Sphericity__4044->SetBinError(1,3.223266);
   VH_DHZfirst_2b1c_Sphericity__4044->SetBinError(2,2.857369);
   VH_DHZfirst_2b1c_Sphericity__4044->SetBinError(3,3.83338);
   VH_DHZfirst_2b1c_Sphericity__4044->SetBinError(4,0.4746458);
   VH_DHZfirst_2b1c_Sphericity__4044->SetBinError(5,0.8138698);
   VH_DHZfirst_2b1c_Sphericity__4044->SetBinError(6,0.4839194);
   VH_DHZfirst_2b1c_Sphericity__4044->SetEntries(46);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Sphericity__4044->SetLineColor(ci);
   VH_DHZfirst_2b1c_Sphericity__4044->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_2b1c_Sphericity__4044->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_2b1c_Sphericity__4044->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4044->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4044->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4044->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_2b1c_Sphericity__4044->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4044->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Sphericity__4044->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Sphericity__4044->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Sphericity__4044->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4044->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4044->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4044->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4044->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WW_DHZfirst_2b1c_18->Modified();
   Sphericity_WW_DHZfirst_2b1c_18->cd();
   Sphericity_WW_DHZfirst_2b1c_18->SetSelected(Sphericity_WW_DHZfirst_2b1c_18);
}
