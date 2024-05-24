#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHbb_tagOnly_2b1c_18_logY()
{
//=========Macro generated from canvas: Sphericity_ZHbb_tagOnly_2b1c_18/Sphericity_ZHbb_tagOnly_2b1c_18
//=========  (Thu May 23 20:49:12 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHbb_tagOnly_2b1c_18 = new TCanvas("Sphericity_ZHbb_tagOnly_2b1c_18", "Sphericity_ZHbb_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHbb_tagOnly_2b1c_18->SetHighLightColor(2);
   Sphericity_ZHbb_tagOnly_2b1c_18->Range(-0.2,-4.420881,1.133333,3.262452);
   Sphericity_ZHbb_tagOnly_2b1c_18->SetFillColor(0);
   Sphericity_ZHbb_tagOnly_2b1c_18->SetFillStyle(4000);
   Sphericity_ZHbb_tagOnly_2b1c_18->SetBorderMode(0);
   Sphericity_ZHbb_tagOnly_2b1c_18->SetBorderSize(2);
   Sphericity_ZHbb_tagOnly_2b1c_18->SetLogy();
   Sphericity_ZHbb_tagOnly_2b1c_18->SetLeftMargin(0.15);
   Sphericity_ZHbb_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_ZHbb_tagOnly_2b1c_18->SetFrameBorderMode(0);
   Sphericity_ZHbb_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_ZHbb_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Sphericity__3306 = new TH1D("VH_tagOnly_2b1c_Sphericity__3306","",25,0,1);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinContent(1,164.6529);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinContent(2,140.0155);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinContent(3,80.58577);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinContent(4,51.21387);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinContent(5,32.7282);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinContent(6,17.6007);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinContent(7,7.44488);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinContent(8,3.902171);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinContent(9,2.362863);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinContent(10,1.549849);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinContent(11,1.183616);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinContent(12,0.9192173);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinContent(13,0.7410102);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinContent(14,0.5125851);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinContent(15,0.4320633);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinContent(16,0.2871145);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinContent(17,0.2780294);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinContent(18,0.1730123);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinContent(19,0.07668466);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinContent(20,0.03215451);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinContent(21,0.01713918);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinContent(22,0.0006013037);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinContent(23,0.0004451252);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinError(1,0.7635601);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinError(2,0.722387);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinError(3,0.5031406);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinError(4,0.3970993);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinError(5,0.3256585);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinError(6,0.2851356);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinError(7,0.1453945);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinError(8,0.1283764);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinError(9,0.08247523);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinError(10,0.06397409);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinError(11,0.05645135);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinError(12,0.04808285);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinError(13,0.04714038);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinError(14,0.03791949);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinError(15,0.04783634);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinError(16,0.0258838);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinError(17,0.06513071);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinError(18,0.02288806);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinError(19,0.0135292);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinError(20,0.01157384);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinError(21,0.01181313);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinError(22,0.0006013037);
   VH_tagOnly_2b1c_Sphericity__3306->SetBinError(23,0.0004451252);
   VH_tagOnly_2b1c_Sphericity__3306->SetEntries(454994);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Sphericity__3306->SetLineColor(ci);
   VH_tagOnly_2b1c_Sphericity__3306->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_2b1c_Sphericity__3306->GetXaxis()->SetRange(1,25);
   VH_tagOnly_2b1c_Sphericity__3306->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3306->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3306->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3306->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_2b1c_Sphericity__3306->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3306->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Sphericity__3306->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Sphericity__3306->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Sphericity__3306->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3306->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3306->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3306->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3306->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHbb_tagOnly_2b1c_18->Modified();
   Sphericity_ZHbb_tagOnly_2b1c_18->cd();
   Sphericity_ZHbb_tagOnly_2b1c_18->SetSelected(Sphericity_ZHbb_tagOnly_2b1c_18);
}
