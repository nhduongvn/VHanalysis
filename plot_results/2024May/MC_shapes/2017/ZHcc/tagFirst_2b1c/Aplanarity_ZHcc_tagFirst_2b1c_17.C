#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHcc_tagFirst_2b1c_17()
{
//=========Macro generated from canvas: Aplanarity_ZHcc_tagFirst_2b1c_17/Aplanarity_ZHcc_tagFirst_2b1c_17
//=========  (Fri May 24 12:42:43 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHcc_tagFirst_2b1c_17 = new TCanvas("Aplanarity_ZHcc_tagFirst_2b1c_17", "Aplanarity_ZHcc_tagFirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHcc_tagFirst_2b1c_17->SetHighLightColor(2);
   Aplanarity_ZHcc_tagFirst_2b1c_17->Range(-0.2,-0.3942078,1.133333,3.54787);
   Aplanarity_ZHcc_tagFirst_2b1c_17->SetFillColor(0);
   Aplanarity_ZHcc_tagFirst_2b1c_17->SetFillStyle(4000);
   Aplanarity_ZHcc_tagFirst_2b1c_17->SetBorderMode(0);
   Aplanarity_ZHcc_tagFirst_2b1c_17->SetBorderSize(2);
   Aplanarity_ZHcc_tagFirst_2b1c_17->SetLeftMargin(0.15);
   Aplanarity_ZHcc_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_tagFirst_2b1c_17->SetFrameBorderMode(0);
   Aplanarity_ZHcc_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_tagFirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Aplanarity__2612 = new TH1D("VH_tagFirst_2b1c_Aplanarity__2612","",50,0,1);
   VH_tagFirst_2b1c_Aplanarity__2612->SetBinContent(1,3.003488);
   VH_tagFirst_2b1c_Aplanarity__2612->SetBinContent(2,0.3109018);
   VH_tagFirst_2b1c_Aplanarity__2612->SetBinContent(3,0.07756786);
   VH_tagFirst_2b1c_Aplanarity__2612->SetBinContent(4,0.02470726);
   VH_tagFirst_2b1c_Aplanarity__2612->SetBinContent(5,0.0137195);
   VH_tagFirst_2b1c_Aplanarity__2612->SetBinContent(6,0.005425172);
   VH_tagFirst_2b1c_Aplanarity__2612->SetBinContent(7,0.002404212);
   VH_tagFirst_2b1c_Aplanarity__2612->SetBinContent(8,0.001198057);
   VH_tagFirst_2b1c_Aplanarity__2612->SetBinContent(9,0.001064883);
   VH_tagFirst_2b1c_Aplanarity__2612->SetBinContent(10,0.0001482523);
   VH_tagFirst_2b1c_Aplanarity__2612->SetBinContent(11,0.001758706);
   VH_tagFirst_2b1c_Aplanarity__2612->SetBinContent(12,9.746111e-05);
   VH_tagFirst_2b1c_Aplanarity__2612->SetBinError(1,0.05676709);
   VH_tagFirst_2b1c_Aplanarity__2612->SetBinError(2,0.01785057);
   VH_tagFirst_2b1c_Aplanarity__2612->SetBinError(3,0.009686184);
   VH_tagFirst_2b1c_Aplanarity__2612->SetBinError(4,0.004936668);
   VH_tagFirst_2b1c_Aplanarity__2612->SetBinError(5,0.003957304);
   VH_tagFirst_2b1c_Aplanarity__2612->SetBinError(6,0.002664086);
   VH_tagFirst_2b1c_Aplanarity__2612->SetBinError(7,0.001234593);
   VH_tagFirst_2b1c_Aplanarity__2612->SetBinError(8,0.0006203505);
   VH_tagFirst_2b1c_Aplanarity__2612->SetBinError(9,0.001064883);
   VH_tagFirst_2b1c_Aplanarity__2612->SetBinError(10,0.0001482523);
   VH_tagFirst_2b1c_Aplanarity__2612->SetBinError(11,0.001011927);
   VH_tagFirst_2b1c_Aplanarity__2612->SetBinError(12,9.746111e-05);
   VH_tagFirst_2b1c_Aplanarity__2612->SetEntries(8476);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Aplanarity__2612->SetLineColor(ci);
   VH_tagFirst_2b1c_Aplanarity__2612->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_2b1c_Aplanarity__2612->GetXaxis()->SetRange(1,50);
   VH_tagFirst_2b1c_Aplanarity__2612->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2612->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2612->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2612->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_2b1c_Aplanarity__2612->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2612->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Aplanarity__2612->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Aplanarity__2612->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Aplanarity__2612->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2612->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2612->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2612->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2612->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHcc_tagFirst_2b1c_17->Modified();
   Aplanarity_ZHcc_tagFirst_2b1c_17->cd();
   Aplanarity_ZHcc_tagFirst_2b1c_17->SetSelected(Aplanarity_ZHcc_tagFirst_2b1c_17);
}
