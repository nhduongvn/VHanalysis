void Sphericity_both_16()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Tue Aug 22 09:23:13 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-3343.845,1.133333,30094.61);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,20526.06);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,25476.92);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,17559.8);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,15398.19);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,10081.54);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,8126.324);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,7597.351);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,4056.832);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,3237.242);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,5421.349);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,3519.24);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,3459.028);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,2316.571);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,1451.746);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,3232.185);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,1004.726);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,540.8007);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,910.8349);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,57.48017);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,111.8466);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(21,20.57435);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(22,34.01122);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,1689.168);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,2560.752);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,2256.718);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,2068.164);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,1385.69);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,1325.274);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,1486.584);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,674.6561);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,596.296);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,1656.678);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,738.0064);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,1085.881);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,581.017);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,382.7495);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,1185.744);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,321.3707);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,274.3354);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,401.2669);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,24.90308);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,43.4693);
   VbbHcc_both_Sphericity_stack_1->SetBinError(21,9.17198);
   VbbHcc_both_Sphericity_stack_1->SetBinError(22,24.69973);
   VbbHcc_both_Sphericity_stack_1->SetEntries(9183);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_16->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->SetSelected(Sphericity_both_16);
}
