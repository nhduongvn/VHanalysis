#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WZ_DHZfirst_2b1c_18_logY()
{
//=========Macro generated from canvas: Sphericity_WZ_DHZfirst_2b1c_18/Sphericity_WZ_DHZfirst_2b1c_18
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WZ_DHZfirst_2b1c_18 = new TCanvas("Sphericity_WZ_DHZfirst_2b1c_18", "Sphericity_WZ_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WZ_DHZfirst_2b1c_18->SetHighLightColor(2);
   Sphericity_WZ_DHZfirst_2b1c_18->Range(-0.2,-1.110704,1.133333,2.528439);
   Sphericity_WZ_DHZfirst_2b1c_18->SetFillColor(0);
   Sphericity_WZ_DHZfirst_2b1c_18->SetFillStyle(4000);
   Sphericity_WZ_DHZfirst_2b1c_18->SetBorderMode(0);
   Sphericity_WZ_DHZfirst_2b1c_18->SetBorderSize(2);
   Sphericity_WZ_DHZfirst_2b1c_18->SetLogy();
   Sphericity_WZ_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   Sphericity_WZ_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_WZ_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   Sphericity_WZ_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_WZ_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Sphericity__4047 = new TH1D("VH_DHZfirst_2b1c_Sphericity__4047","",25,0,1);
   VH_DHZfirst_2b1c_Sphericity__4047->SetBinContent(1,77.08605);
   VH_DHZfirst_2b1c_Sphericity__4047->SetBinContent(2,60.32254);
   VH_DHZfirst_2b1c_Sphericity__4047->SetBinContent(3,33.89419);
   VH_DHZfirst_2b1c_Sphericity__4047->SetBinContent(4,27.181);
   VH_DHZfirst_2b1c_Sphericity__4047->SetBinContent(5,13.62287);
   VH_DHZfirst_2b1c_Sphericity__4047->SetBinContent(6,9.637089);
   VH_DHZfirst_2b1c_Sphericity__4047->SetBinContent(7,1.871068);
   VH_DHZfirst_2b1c_Sphericity__4047->SetBinContent(9,0.3582945);
   VH_DHZfirst_2b1c_Sphericity__4047->SetBinError(1,7.645819);
   VH_DHZfirst_2b1c_Sphericity__4047->SetBinError(2,6.330456);
   VH_DHZfirst_2b1c_Sphericity__4047->SetBinError(3,4.807814);
   VH_DHZfirst_2b1c_Sphericity__4047->SetBinError(4,4.302103);
   VH_DHZfirst_2b1c_Sphericity__4047->SetBinError(5,3.086052);
   VH_DHZfirst_2b1c_Sphericity__4047->SetBinError(6,3.372012);
   VH_DHZfirst_2b1c_Sphericity__4047->SetBinError(7,0.9984948);
   VH_DHZfirst_2b1c_Sphericity__4047->SetBinError(9,0.3582945);
   VH_DHZfirst_2b1c_Sphericity__4047->SetEntries(389);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Sphericity__4047->SetLineColor(ci);
   VH_DHZfirst_2b1c_Sphericity__4047->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_2b1c_Sphericity__4047->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_2b1c_Sphericity__4047->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4047->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4047->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4047->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_2b1c_Sphericity__4047->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4047->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Sphericity__4047->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Sphericity__4047->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Sphericity__4047->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4047->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4047->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4047->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4047->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WZ_DHZfirst_2b1c_18->Modified();
   Sphericity_WZ_DHZfirst_2b1c_18->cd();
   Sphericity_WZ_DHZfirst_2b1c_18->SetSelected(Sphericity_WZ_DHZfirst_2b1c_18);
}
