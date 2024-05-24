#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHbb_tagFirst_18_logY()
{
//=========Macro generated from canvas: Sphericity_ZHbb_tagFirst_18/Sphericity_ZHbb_tagFirst_18
//=========  (Thu May 23 20:48:32 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHbb_tagFirst_18 = new TCanvas("Sphericity_ZHbb_tagFirst_18", "Sphericity_ZHbb_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHbb_tagFirst_18->SetHighLightColor(2);
   Sphericity_ZHbb_tagFirst_18->Range(-0.2,-4.233793,1.133333,2.813969);
   Sphericity_ZHbb_tagFirst_18->SetFillColor(0);
   Sphericity_ZHbb_tagFirst_18->SetFillStyle(4000);
   Sphericity_ZHbb_tagFirst_18->SetBorderMode(0);
   Sphericity_ZHbb_tagFirst_18->SetBorderSize(2);
   Sphericity_ZHbb_tagFirst_18->SetLogy();
   Sphericity_ZHbb_tagFirst_18->SetLeftMargin(0.15);
   Sphericity_ZHbb_tagFirst_18->SetFrameFillStyle(1000);
   Sphericity_ZHbb_tagFirst_18->SetFrameBorderMode(0);
   Sphericity_ZHbb_tagFirst_18->SetFrameFillStyle(1000);
   Sphericity_ZHbb_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__426 = new TH1D("VH_tagFirst_Sphericity__426","",25,0,1);
   VH_tagFirst_Sphericity__426->SetBinContent(1,67.86474);
   VH_tagFirst_Sphericity__426->SetBinContent(2,54.50654);
   VH_tagFirst_Sphericity__426->SetBinContent(3,31.49245);
   VH_tagFirst_Sphericity__426->SetBinContent(4,20.2016);
   VH_tagFirst_Sphericity__426->SetBinContent(5,12.99144);
   VH_tagFirst_Sphericity__426->SetBinContent(6,7.372068);
   VH_tagFirst_Sphericity__426->SetBinContent(7,3.348727);
   VH_tagFirst_Sphericity__426->SetBinContent(8,1.868507);
   VH_tagFirst_Sphericity__426->SetBinContent(9,1.269273);
   VH_tagFirst_Sphericity__426->SetBinContent(10,0.8092892);
   VH_tagFirst_Sphericity__426->SetBinContent(11,0.5775406);
   VH_tagFirst_Sphericity__426->SetBinContent(12,0.5116117);
   VH_tagFirst_Sphericity__426->SetBinContent(13,0.4022717);
   VH_tagFirst_Sphericity__426->SetBinContent(14,0.2625586);
   VH_tagFirst_Sphericity__426->SetBinContent(15,0.2699596);
   VH_tagFirst_Sphericity__426->SetBinContent(16,0.1291393);
   VH_tagFirst_Sphericity__426->SetBinContent(17,0.1588112);
   VH_tagFirst_Sphericity__426->SetBinContent(18,0.08352624);
   VH_tagFirst_Sphericity__426->SetBinContent(19,0.03377358);
   VH_tagFirst_Sphericity__426->SetBinContent(20,0.02587617);
   VH_tagFirst_Sphericity__426->SetBinContent(21,0.0196924);
   VH_tagFirst_Sphericity__426->SetBinContent(22,0.001263049);
   VH_tagFirst_Sphericity__426->SetBinContent(23,0.0005915795);
   VH_tagFirst_Sphericity__426->SetBinError(1,0.5608999);
   VH_tagFirst_Sphericity__426->SetBinError(2,0.4949243);
   VH_tagFirst_Sphericity__426->SetBinError(3,0.3450509);
   VH_tagFirst_Sphericity__426->SetBinError(4,0.2618601);
   VH_tagFirst_Sphericity__426->SetBinError(5,0.2159482);
   VH_tagFirst_Sphericity__426->SetBinError(6,0.1782652);
   VH_tagFirst_Sphericity__426->SetBinError(7,0.1055425);
   VH_tagFirst_Sphericity__426->SetBinError(8,0.07427516);
   VH_tagFirst_Sphericity__426->SetBinError(9,0.06855887);
   VH_tagFirst_Sphericity__426->SetBinError(10,0.05244743);
   VH_tagFirst_Sphericity__426->SetBinError(11,0.04138601);
   VH_tagFirst_Sphericity__426->SetBinError(12,0.04056429);
   VH_tagFirst_Sphericity__426->SetBinError(13,0.03784944);
   VH_tagFirst_Sphericity__426->SetBinError(14,0.0275635);
   VH_tagFirst_Sphericity__426->SetBinError(15,0.04627245);
   VH_tagFirst_Sphericity__426->SetBinError(16,0.01744987);
   VH_tagFirst_Sphericity__426->SetBinError(17,0.06293166);
   VH_tagFirst_Sphericity__426->SetBinError(18,0.01675563);
   VH_tagFirst_Sphericity__426->SetBinError(19,0.007556392);
   VH_tagFirst_Sphericity__426->SetBinError(20,0.01121004);
   VH_tagFirst_Sphericity__426->SetBinError(21,0.01317982);
   VH_tagFirst_Sphericity__426->SetBinError(22,0.0008941329);
   VH_tagFirst_Sphericity__426->SetBinError(23,0.0005915795);
   VH_tagFirst_Sphericity__426->SetEntries(171464);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__426->SetLineColor(ci);
   VH_tagFirst_Sphericity__426->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__426->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__426->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__426->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__426->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__426->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__426->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__426->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__426->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__426->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__426->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__426->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__426->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__426->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__426->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHbb_tagFirst_18->Modified();
   Sphericity_ZHbb_tagFirst_18->cd();
   Sphericity_ZHbb_tagFirst_18->SetSelected(Sphericity_ZHbb_tagFirst_18);
}
