#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZJets_DHZfirst_2b1c_17()
{
//=========Macro generated from canvas: Sphericity_ZJets_DHZfirst_2b1c_17/Sphericity_ZJets_DHZfirst_2b1c_17
//=========  (Fri May 24 12:43:07 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZJets_DHZfirst_2b1c_17 = new TCanvas("Sphericity_ZJets_DHZfirst_2b1c_17", "Sphericity_ZJets_DHZfirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZJets_DHZfirst_2b1c_17->SetHighLightColor(2);
   Sphericity_ZJets_DHZfirst_2b1c_17->Range(-0.2,-288.0241,1.133333,2592.216);
   Sphericity_ZJets_DHZfirst_2b1c_17->SetFillColor(0);
   Sphericity_ZJets_DHZfirst_2b1c_17->SetFillStyle(4000);
   Sphericity_ZJets_DHZfirst_2b1c_17->SetBorderMode(0);
   Sphericity_ZJets_DHZfirst_2b1c_17->SetBorderSize(2);
   Sphericity_ZJets_DHZfirst_2b1c_17->SetLeftMargin(0.15);
   Sphericity_ZJets_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_ZJets_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   Sphericity_ZJets_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_ZJets_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Sphericity__4034 = new TH1D("VH_DHZfirst_2b1c_Sphericity__4034","",25,0,1);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinContent(1,2194.469);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinContent(2,1855.242);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinContent(3,1120.91);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinContent(4,632.1113);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinContent(5,322.1134);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinContent(6,149.5096);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinContent(7,50.03195);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinContent(8,10.15228);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinContent(9,4.583124);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinContent(10,0.990614);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinContent(11,0.8513571);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinContent(12,0.006560615);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinContent(13,0.4618032);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinContent(14,0.2440405);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinContent(15,0.1270649);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinContent(17,0.2080631);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinError(1,33.0992);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinError(2,35.7347);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinError(3,25.8086);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinError(4,20.63401);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinError(5,11.89032);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinError(6,7.901321);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinError(7,5.574835);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinError(8,1.602329);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinError(9,1.38253);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinError(10,0.3004471);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinError(11,0.3175708);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinError(12,0.006560615);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinError(13,0.2547509);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinError(14,0.1338403);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinError(15,0.07709834);
   VH_DHZfirst_2b1c_Sphericity__4034->SetBinError(17,0.1669287);
   VH_DHZfirst_2b1c_Sphericity__4034->SetEntries(41564);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Sphericity__4034->SetLineColor(ci);
   VH_DHZfirst_2b1c_Sphericity__4034->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_2b1c_Sphericity__4034->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_2b1c_Sphericity__4034->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4034->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4034->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4034->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_2b1c_Sphericity__4034->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4034->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Sphericity__4034->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Sphericity__4034->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Sphericity__4034->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4034->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4034->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4034->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4034->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZJets_DHZfirst_2b1c_17->Modified();
   Sphericity_ZJets_DHZfirst_2b1c_17->cd();
   Sphericity_ZJets_DHZfirst_2b1c_17->SetSelected(Sphericity_ZJets_DHZfirst_2b1c_17);
}
