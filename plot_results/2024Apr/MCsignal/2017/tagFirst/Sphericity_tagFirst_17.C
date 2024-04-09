#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tagFirst_17()
{
//=========Macro generated from canvas: Sphericity_tagFirst_17/Sphericity_tagFirst_17
//=========  (Mon Apr  8 11:27:51 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_tagFirst_17 = new TCanvas("Sphericity_tagFirst_17", "Sphericity_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tagFirst_17->SetHighLightColor(2);
   Sphericity_tagFirst_17->Range(-0.2,-0.06480778,1.133333,0.58327);
   Sphericity_tagFirst_17->SetFillColor(0);
   Sphericity_tagFirst_17->SetFillStyle(4000);
   Sphericity_tagFirst_17->SetBorderMode(0);
   Sphericity_tagFirst_17->SetBorderSize(2);
   Sphericity_tagFirst_17->SetLeftMargin(0.15);
   Sphericity_tagFirst_17->SetFrameFillStyle(1000);
   Sphericity_tagFirst_17->SetFrameBorderMode(0);
   Sphericity_tagFirst_17->SetFrameFillStyle(1000);
   Sphericity_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__44 = new TH1D("VH_tagFirst_Sphericity__44","",25,0,1);
   VH_tagFirst_Sphericity__44->SetBinContent(1,0.4937736);
   VH_tagFirst_Sphericity__44->SetBinContent(2,0.3725418);
   VH_tagFirst_Sphericity__44->SetBinContent(3,0.2327042);
   VH_tagFirst_Sphericity__44->SetBinContent(4,0.135786);
   VH_tagFirst_Sphericity__44->SetBinContent(5,0.133852);
   VH_tagFirst_Sphericity__44->SetBinContent(6,0.04810986);
   VH_tagFirst_Sphericity__44->SetBinContent(7,0.01283546);
   VH_tagFirst_Sphericity__44->SetBinContent(8,0.008074813);
   VH_tagFirst_Sphericity__44->SetBinContent(9,0.008867236);
   VH_tagFirst_Sphericity__44->SetBinContent(10,0.008732813);
   VH_tagFirst_Sphericity__44->SetBinContent(11,0.006919288);
   VH_tagFirst_Sphericity__44->SetBinContent(12,0.007317626);
   VH_tagFirst_Sphericity__44->SetBinContent(13,0.0009156332);
   VH_tagFirst_Sphericity__44->SetBinContent(14,0.0001481517);
   VH_tagFirst_Sphericity__44->SetBinContent(15,0.001807104);
   VH_tagFirst_Sphericity__44->SetBinContent(16,0.001064883);
   VH_tagFirst_Sphericity__44->SetBinError(1,0.02741613);
   VH_tagFirst_Sphericity__44->SetBinError(2,0.02473351);
   VH_tagFirst_Sphericity__44->SetBinError(3,0.01872925);
   VH_tagFirst_Sphericity__44->SetBinError(4,0.01429522);
   VH_tagFirst_Sphericity__44->SetBinError(5,0.015905);
   VH_tagFirst_Sphericity__44->SetBinError(6,0.008385435);
   VH_tagFirst_Sphericity__44->SetBinError(7,0.004750336);
   VH_tagFirst_Sphericity__44->SetBinError(8,0.003445995);
   VH_tagFirst_Sphericity__44->SetBinError(9,0.003605448);
   VH_tagFirst_Sphericity__44->SetBinError(10,0.003371746);
   VH_tagFirst_Sphericity__44->SetBinError(11,0.003187506);
   VH_tagFirst_Sphericity__44->SetBinError(12,0.003491206);
   VH_tagFirst_Sphericity__44->SetBinError(13,0.0009156332);
   VH_tagFirst_Sphericity__44->SetBinError(14,0.0001481517);
   VH_tagFirst_Sphericity__44->SetBinError(15,0.001330817);
   VH_tagFirst_Sphericity__44->SetBinError(16,0.001064883);
   VH_tagFirst_Sphericity__44->SetEntries(1123);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__44->SetLineColor(ci);
   VH_tagFirst_Sphericity__44->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__44->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__44->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__44->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__44->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__44->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__44->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__44->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__44->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__44->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__44->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__44->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__44->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__44->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__44->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tagFirst_17->Modified();
   Sphericity_tagFirst_17->cd();
   Sphericity_tagFirst_17->SetSelected(Sphericity_tagFirst_17);
}
