#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHcc_DHZfirst_2b1c_17()
{
//=========Macro generated from canvas: Sphericity_ZHcc_DHZfirst_2b1c_17/Sphericity_ZHcc_DHZfirst_2b1c_17
//=========  (Fri May 24 12:43:07 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHcc_DHZfirst_2b1c_17 = new TCanvas("Sphericity_ZHcc_DHZfirst_2b1c_17", "Sphericity_ZHcc_DHZfirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHcc_DHZfirst_2b1c_17->SetHighLightColor(2);
   Sphericity_ZHcc_DHZfirst_2b1c_17->Range(-0.2,-0.04357207,1.133333,0.3921486);
   Sphericity_ZHcc_DHZfirst_2b1c_17->SetFillColor(0);
   Sphericity_ZHcc_DHZfirst_2b1c_17->SetFillStyle(4000);
   Sphericity_ZHcc_DHZfirst_2b1c_17->SetBorderMode(0);
   Sphericity_ZHcc_DHZfirst_2b1c_17->SetBorderSize(2);
   Sphericity_ZHcc_DHZfirst_2b1c_17->SetLeftMargin(0.15);
   Sphericity_ZHcc_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_ZHcc_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   Sphericity_ZHcc_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_ZHcc_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Sphericity__4022 = new TH1D("VH_DHZfirst_2b1c_Sphericity__4022","",25,0,1);
   VH_DHZfirst_2b1c_Sphericity__4022->SetBinContent(1,0.3319777);
   VH_DHZfirst_2b1c_Sphericity__4022->SetBinContent(2,0.2879029);
   VH_DHZfirst_2b1c_Sphericity__4022->SetBinContent(3,0.1873795);
   VH_DHZfirst_2b1c_Sphericity__4022->SetBinContent(4,0.09289391);
   VH_DHZfirst_2b1c_Sphericity__4022->SetBinContent(5,0.08361963);
   VH_DHZfirst_2b1c_Sphericity__4022->SetBinContent(6,0.02689561);
   VH_DHZfirst_2b1c_Sphericity__4022->SetBinContent(7,0.005337693);
   VH_DHZfirst_2b1c_Sphericity__4022->SetBinContent(8,0.001699622);
   VH_DHZfirst_2b1c_Sphericity__4022->SetBinContent(9,0.001098324);
   VH_DHZfirst_2b1c_Sphericity__4022->SetBinContent(10,0.000387655);
   VH_DHZfirst_2b1c_Sphericity__4022->SetBinContent(11,0.0001815984);
   VH_DHZfirst_2b1c_Sphericity__4022->SetBinContent(16,8.92071e-05);
   VH_DHZfirst_2b1c_Sphericity__4022->SetBinError(1,0.01912311);
   VH_DHZfirst_2b1c_Sphericity__4022->SetBinError(2,0.01700087);
   VH_DHZfirst_2b1c_Sphericity__4022->SetBinError(3,0.01429826);
   VH_DHZfirst_2b1c_Sphericity__4022->SetBinError(4,0.009898569);
   VH_DHZfirst_2b1c_Sphericity__4022->SetBinError(5,0.0106166);
   VH_DHZfirst_2b1c_Sphericity__4022->SetBinError(6,0.004962359);
   VH_DHZfirst_2b1c_Sphericity__4022->SetBinError(7,0.00174508);
   VH_DHZfirst_2b1c_Sphericity__4022->SetBinError(8,0.0005646369);
   VH_DHZfirst_2b1c_Sphericity__4022->SetBinError(9,0.001098324);
   VH_DHZfirst_2b1c_Sphericity__4022->SetBinError(10,0.0002824609);
   VH_DHZfirst_2b1c_Sphericity__4022->SetBinError(11,0.0001815984);
   VH_DHZfirst_2b1c_Sphericity__4022->SetBinError(16,8.92071e-05);
   VH_DHZfirst_2b1c_Sphericity__4022->SetEntries(2407);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Sphericity__4022->SetLineColor(ci);
   VH_DHZfirst_2b1c_Sphericity__4022->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_2b1c_Sphericity__4022->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_2b1c_Sphericity__4022->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4022->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4022->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4022->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_2b1c_Sphericity__4022->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4022->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Sphericity__4022->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Sphericity__4022->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Sphericity__4022->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4022->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4022->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4022->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4022->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHcc_DHZfirst_2b1c_17->Modified();
   Sphericity_ZHcc_DHZfirst_2b1c_17->cd();
   Sphericity_ZHcc_DHZfirst_2b1c_17->SetSelected(Sphericity_ZHcc_DHZfirst_2b1c_17);
}
