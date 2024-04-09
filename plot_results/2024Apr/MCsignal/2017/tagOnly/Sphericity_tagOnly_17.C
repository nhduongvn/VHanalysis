#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tagOnly_17()
{
//=========Macro generated from canvas: Sphericity_tagOnly_17/Sphericity_tagOnly_17
//=========  (Mon Apr  8 11:27:52 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_tagOnly_17 = new TCanvas("Sphericity_tagOnly_17", "Sphericity_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tagOnly_17->SetHighLightColor(2);
   Sphericity_tagOnly_17->Range(-0.2,-0.06182495,1.133333,0.5564245);
   Sphericity_tagOnly_17->SetFillColor(0);
   Sphericity_tagOnly_17->SetFillStyle(4000);
   Sphericity_tagOnly_17->SetBorderMode(0);
   Sphericity_tagOnly_17->SetBorderSize(2);
   Sphericity_tagOnly_17->SetLeftMargin(0.15);
   Sphericity_tagOnly_17->SetFrameFillStyle(1000);
   Sphericity_tagOnly_17->SetFrameBorderMode(0);
   Sphericity_tagOnly_17->SetFrameFillStyle(1000);
   Sphericity_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__116 = new TH1D("VH_tagOnly_Sphericity__116","",25,0,1);
   VH_tagOnly_Sphericity__116->SetBinContent(1,0.4710472);
   VH_tagOnly_Sphericity__116->SetBinContent(2,0.3588882);
   VH_tagOnly_Sphericity__116->SetBinContent(3,0.2265632);
   VH_tagOnly_Sphericity__116->SetBinContent(4,0.1289244);
   VH_tagOnly_Sphericity__116->SetBinContent(5,0.1292164);
   VH_tagOnly_Sphericity__116->SetBinContent(6,0.04888817);
   VH_tagOnly_Sphericity__116->SetBinContent(7,0.01283546);
   VH_tagOnly_Sphericity__116->SetBinContent(8,0.008074813);
   VH_tagOnly_Sphericity__116->SetBinContent(9,0.009399134);
   VH_tagOnly_Sphericity__116->SetBinContent(10,0.009980013);
   VH_tagOnly_Sphericity__116->SetBinContent(11,0.008323734);
   VH_tagOnly_Sphericity__116->SetBinContent(12,0.004857358);
   VH_tagOnly_Sphericity__116->SetBinContent(13,0.0009156332);
   VH_tagOnly_Sphericity__116->SetBinContent(14,0.0001481517);
   VH_tagOnly_Sphericity__116->SetBinContent(15,0.001807104);
   VH_tagOnly_Sphericity__116->SetBinContent(16,0.001064883);
   VH_tagOnly_Sphericity__116->SetBinError(1,0.0266105);
   VH_tagOnly_Sphericity__116->SetBinError(2,0.02413989);
   VH_tagOnly_Sphericity__116->SetBinError(3,0.01836751);
   VH_tagOnly_Sphericity__116->SetBinError(4,0.01371278);
   VH_tagOnly_Sphericity__116->SetBinError(5,0.01571694);
   VH_tagOnly_Sphericity__116->SetBinError(6,0.008403467);
   VH_tagOnly_Sphericity__116->SetBinError(7,0.004750336);
   VH_tagOnly_Sphericity__116->SetBinError(8,0.003445995);
   VH_tagOnly_Sphericity__116->SetBinError(9,0.003644472);
   VH_tagOnly_Sphericity__116->SetBinError(10,0.003595021);
   VH_tagOnly_Sphericity__116->SetBinError(11,0.003483197);
   VH_tagOnly_Sphericity__116->SetBinError(12,0.002477015);
   VH_tagOnly_Sphericity__116->SetBinError(13,0.0009156332);
   VH_tagOnly_Sphericity__116->SetBinError(14,0.0001481517);
   VH_tagOnly_Sphericity__116->SetBinError(15,0.001330817);
   VH_tagOnly_Sphericity__116->SetBinError(16,0.001064883);
   VH_tagOnly_Sphericity__116->SetEntries(1088);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__116->SetLineColor(ci);
   VH_tagOnly_Sphericity__116->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__116->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__116->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__116->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__116->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__116->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__116->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__116->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__116->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__116->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__116->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__116->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__116->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__116->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__116->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tagOnly_17->Modified();
   Sphericity_tagOnly_17->cd();
   Sphericity_tagOnly_17->SetSelected(Sphericity_tagOnly_17);
}
