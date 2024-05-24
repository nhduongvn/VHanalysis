#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHbb_tagFirst_17()
{
//=========Macro generated from canvas: Sphericity_ZHbb_tagFirst_17/Sphericity_ZHbb_tagFirst_17
//=========  (Fri May 24 12:42:11 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHbb_tagFirst_17 = new TCanvas("Sphericity_ZHbb_tagFirst_17", "Sphericity_ZHbb_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHbb_tagFirst_17->SetHighLightColor(2);
   Sphericity_ZHbb_tagFirst_17->Range(-0.2,-4.595601,1.133333,41.3604);
   Sphericity_ZHbb_tagFirst_17->SetFillColor(0);
   Sphericity_ZHbb_tagFirst_17->SetFillStyle(4000);
   Sphericity_ZHbb_tagFirst_17->SetBorderMode(0);
   Sphericity_ZHbb_tagFirst_17->SetBorderSize(2);
   Sphericity_ZHbb_tagFirst_17->SetLeftMargin(0.15);
   Sphericity_ZHbb_tagFirst_17->SetFrameFillStyle(1000);
   Sphericity_ZHbb_tagFirst_17->SetFrameBorderMode(0);
   Sphericity_ZHbb_tagFirst_17->SetFrameFillStyle(1000);
   Sphericity_ZHbb_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__425 = new TH1D("VH_tagFirst_Sphericity__425","",25,0,1);
   VH_tagFirst_Sphericity__425->SetBinContent(1,35.0141);
   VH_tagFirst_Sphericity__425->SetBinContent(2,28.79354);
   VH_tagFirst_Sphericity__425->SetBinContent(3,16.34819);
   VH_tagFirst_Sphericity__425->SetBinContent(4,10.67084);
   VH_tagFirst_Sphericity__425->SetBinContent(5,6.813587);
   VH_tagFirst_Sphericity__425->SetBinContent(6,3.639541);
   VH_tagFirst_Sphericity__425->SetBinContent(7,1.816793);
   VH_tagFirst_Sphericity__425->SetBinContent(8,0.9878669);
   VH_tagFirst_Sphericity__425->SetBinContent(9,0.6243753);
   VH_tagFirst_Sphericity__425->SetBinContent(10,0.5013293);
   VH_tagFirst_Sphericity__425->SetBinContent(11,0.3170143);
   VH_tagFirst_Sphericity__425->SetBinContent(12,0.2533724);
   VH_tagFirst_Sphericity__425->SetBinContent(13,0.203489);
   VH_tagFirst_Sphericity__425->SetBinContent(14,0.1392319);
   VH_tagFirst_Sphericity__425->SetBinContent(15,0.1019392);
   VH_tagFirst_Sphericity__425->SetBinContent(16,0.07430325);
   VH_tagFirst_Sphericity__425->SetBinContent(17,0.06389053);
   VH_tagFirst_Sphericity__425->SetBinContent(18,0.03037213);
   VH_tagFirst_Sphericity__425->SetBinContent(19,0.02548517);
   VH_tagFirst_Sphericity__425->SetBinContent(20,0.006927401);
   VH_tagFirst_Sphericity__425->SetBinContent(21,0.001080696);
   VH_tagFirst_Sphericity__425->SetBinContent(22,0.002687852);
   VH_tagFirst_Sphericity__425->SetBinContent(23,0.00394395);
   VH_tagFirst_Sphericity__425->SetBinError(1,0.225908);
   VH_tagFirst_Sphericity__425->SetBinError(2,0.2017954);
   VH_tagFirst_Sphericity__425->SetBinError(3,0.1503066);
   VH_tagFirst_Sphericity__425->SetBinError(4,0.1237543);
   VH_tagFirst_Sphericity__425->SetBinError(5,0.1007006);
   VH_tagFirst_Sphericity__425->SetBinError(6,0.07240442);
   VH_tagFirst_Sphericity__425->SetBinError(7,0.05227823);
   VH_tagFirst_Sphericity__425->SetBinError(8,0.03693828);
   VH_tagFirst_Sphericity__425->SetBinError(9,0.03461389);
   VH_tagFirst_Sphericity__425->SetBinError(10,0.03130758);
   VH_tagFirst_Sphericity__425->SetBinError(11,0.02018387);
   VH_tagFirst_Sphericity__425->SetBinError(12,0.01901356);
   VH_tagFirst_Sphericity__425->SetBinError(13,0.01743806);
   VH_tagFirst_Sphericity__425->SetBinError(14,0.0142381);
   VH_tagFirst_Sphericity__425->SetBinError(15,0.0111901);
   VH_tagFirst_Sphericity__425->SetBinError(16,0.008563383);
   VH_tagFirst_Sphericity__425->SetBinError(17,0.01065298);
   VH_tagFirst_Sphericity__425->SetBinError(18,0.005892898);
   VH_tagFirst_Sphericity__425->SetBinError(19,0.005408027);
   VH_tagFirst_Sphericity__425->SetBinError(20,0.002468617);
   VH_tagFirst_Sphericity__425->SetBinError(21,0.0006281291);
   VH_tagFirst_Sphericity__425->SetBinError(22,0.001988157);
   VH_tagFirst_Sphericity__425->SetBinError(23,0.003002862);
   VH_tagFirst_Sphericity__425->SetEntries(173680);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__425->SetLineColor(ci);
   VH_tagFirst_Sphericity__425->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__425->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__425->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__425->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__425->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__425->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__425->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__425->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__425->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__425->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__425->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__425->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__425->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__425->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__425->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHbb_tagFirst_17->Modified();
   Sphericity_ZHbb_tagFirst_17->cd();
   Sphericity_ZHbb_tagFirst_17->SetSelected(Sphericity_ZHbb_tagFirst_17);
}
