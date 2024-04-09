#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_noJEC()
{
//=========Macro generated from canvas: H_jetmass_noJEC/H_jetmass_noJEC
//=========  (Fri Mar 29 15:50:01 2024) by ROOT version 6.28/10
   TCanvas *H_jetmass_noJEC = new TCanvas("H_jetmass_noJEC", "H_jetmass_noJEC",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC->SetHighLightColor(2);
   H_jetmass_noJEC->Range(-60,-0.3250783,340,2.925704);
   H_jetmass_noJEC->SetFillColor(0);
   H_jetmass_noJEC->SetFillStyle(4000);
   H_jetmass_noJEC->SetBorderMode(0);
   H_jetmass_noJEC->SetBorderSize(2);
   H_jetmass_noJEC->SetLeftMargin(0.15);
   H_jetmass_noJEC->SetFrameFillStyle(1000);
   H_jetmass_noJEC->SetFrameBorderMode(0);
   H_jetmass_noJEC->SetFrameFillStyle(1000);
   H_jetmass_noJEC->SetFrameBorderMode(0);
   
   TH1D *VH_MCjet_ideal_H_jetmass_noJEC__19 = new TH1D("VH_MCjet_ideal_H_jetmass_noJEC__19","",150,0,300);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(1,0.005479564);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(2,0.1476686);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(3,0.9176982);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(4,1.809496);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(5,2.476787);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(6,2.184684);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(7,1.712371);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(8,1.401618);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(9,0.8460624);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(10,0.7032735);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(11,0.4785216);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(12,0.3756386);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(13,0.2705656);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(14,0.1458399);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(15,0.1385695);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(16,0.1012545);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(17,0.0821774);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(18,0.06244804);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(19,0.01954975);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(20,0.03195547);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(21,0.01672179);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(22,0.0107869);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(23,0.03485347);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(24,0.01137404);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(25,0.003330002);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(26,0.0151056);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(27,0.01122428);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(29,0.01068932);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(30,0.01390531);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(31,0.007375523);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(32,0.009575958);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(33,0.004679904);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(44,0.005943888);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(56,0.002008434);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(61,0.006110999);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(63,0.00379101);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinContent(64,0.002946767);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(1,0.003255784);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(2,0.02156975);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(3,0.05178174);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(4,0.07136777);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(5,0.1039215);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(6,0.08054052);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(7,0.0717192);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(8,0.06727418);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(9,0.05320406);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(10,0.05392925);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(11,0.04015248);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(12,0.03476763);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(13,0.03089219);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(14,0.02084471);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(15,0.02040214);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(16,0.01778416);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(17,0.0168273);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(18,0.01374333);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(19,0.007482137);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(20,0.01000354);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(21,0.007063939);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(22,0.005408597);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(23,0.009855688);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(24,0.005814489);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(25,0.003330002);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(26,0.007020914);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(27,0.006722122);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(29,0.005377198);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(30,0.00630656);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(31,0.005258872);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(32,0.00565314);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(33,0.003315484);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(44,0.005943888);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(56,0.002008434);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(61,0.004445046);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(63,0.00379101);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetBinError(64,0.002946767);
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetEntries(5357);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_MCjet_ideal_H_jetmass_noJEC__19->SetLineColor(ci);
   VH_MCjet_ideal_H_jetmass_noJEC__19->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VH_MCjet_ideal_H_jetmass_noJEC__19->GetXaxis()->SetRange(1,150);
   VH_MCjet_ideal_H_jetmass_noJEC__19->GetXaxis()->SetLabelFont(42);
   VH_MCjet_ideal_H_jetmass_noJEC__19->GetXaxis()->SetTitleOffset(1);
   VH_MCjet_ideal_H_jetmass_noJEC__19->GetXaxis()->SetTitleFont(42);
   VH_MCjet_ideal_H_jetmass_noJEC__19->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_MCjet_ideal_H_jetmass_noJEC__19->GetYaxis()->SetLabelFont(42);
   VH_MCjet_ideal_H_jetmass_noJEC__19->GetYaxis()->SetLabelSize(0.05);
   VH_MCjet_ideal_H_jetmass_noJEC__19->GetYaxis()->SetTitleSize(0.057);
   VH_MCjet_ideal_H_jetmass_noJEC__19->GetYaxis()->SetTitleOffset(1.2);
   VH_MCjet_ideal_H_jetmass_noJEC__19->GetYaxis()->SetTitleFont(42);
   VH_MCjet_ideal_H_jetmass_noJEC__19->GetZaxis()->SetLabelFont(42);
   VH_MCjet_ideal_H_jetmass_noJEC__19->GetZaxis()->SetTitleOffset(1);
   VH_MCjet_ideal_H_jetmass_noJEC__19->GetZaxis()->SetTitleFont(42);
   VH_MCjet_ideal_H_jetmass_noJEC__19->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC->Modified();
   H_jetmass_noJEC->cd();
   H_jetmass_noJEC->SetSelected(H_jetmass_noJEC);
}
