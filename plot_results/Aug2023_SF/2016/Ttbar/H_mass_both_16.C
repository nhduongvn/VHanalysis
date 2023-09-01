#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_both_16()
{
//=========Macro generated from canvas: H_mass_both_16/H_mass_both_16
//=========  (Fri Sep  1 13:23:41 2023) by ROOT version 6.28/04
   TCanvas *H_mass_both_16 = new TCanvas("H_mass_both_16", "H_mass_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_both_16->SetHighLightColor(2);
   H_mass_both_16->Range(-80,-78.39273,453.3333,705.5345);
   H_mass_both_16->SetFillColor(0);
   H_mass_both_16->SetBorderMode(0);
   H_mass_both_16->SetBorderSize(2);
   H_mass_both_16->SetLeftMargin(0.15);
   H_mass_both_16->SetFrameBorderMode(0);
   H_mass_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_mass__741 = new TH1D("VbbHcc_both_H_mass__741","",40,0,400);
   VbbHcc_both_H_mass__741->SetBinContent(3,2.569137);
   VbbHcc_both_H_mass__741->SetBinContent(4,26.82347);
   VbbHcc_both_H_mass__741->SetBinContent(5,76.35137);
   VbbHcc_both_H_mass__741->SetBinContent(6,120.6465);
   VbbHcc_both_H_mass__741->SetBinContent(7,183.3965);
   VbbHcc_both_H_mass__741->SetBinContent(8,259.5737);
   VbbHcc_both_H_mass__741->SetBinContent(9,330.716);
   VbbHcc_both_H_mass__741->SetBinContent(10,397.0443);
   VbbHcc_both_H_mass__741->SetBinContent(11,474.6743);
   VbbHcc_both_H_mass__741->SetBinContent(12,544.5703);
   VbbHcc_both_H_mass__741->SetBinContent(13,586.4231);
   VbbHcc_both_H_mass__741->SetBinContent(14,597.2779);
   VbbHcc_both_H_mass__741->SetBinContent(15,571.4548);
   VbbHcc_both_H_mass__741->SetBinContent(16,530.7153);
   VbbHcc_both_H_mass__741->SetBinContent(17,496.5154);
   VbbHcc_both_H_mass__741->SetBinContent(18,465.3368);
   VbbHcc_both_H_mass__741->SetBinContent(19,433.312);
   VbbHcc_both_H_mass__741->SetBinContent(20,417.9855);
   VbbHcc_both_H_mass__741->SetBinContent(21,401.4564);
   VbbHcc_both_H_mass__741->SetBinContent(22,367.0058);
   VbbHcc_both_H_mass__741->SetBinContent(23,347.0484);
   VbbHcc_both_H_mass__741->SetBinContent(24,320.8116);
   VbbHcc_both_H_mass__741->SetBinContent(25,299.939);
   VbbHcc_both_H_mass__741->SetBinContent(26,282.4188);
   VbbHcc_both_H_mass__741->SetBinContent(27,256.8071);
   VbbHcc_both_H_mass__741->SetBinContent(28,248.2315);
   VbbHcc_both_H_mass__741->SetBinContent(29,228.7496);
   VbbHcc_both_H_mass__741->SetBinContent(30,210.9805);
   VbbHcc_both_H_mass__741->SetBinContent(31,195.7828);
   VbbHcc_both_H_mass__741->SetBinContent(32,182.5973);
   VbbHcc_both_H_mass__741->SetBinContent(33,168.1383);
   VbbHcc_both_H_mass__741->SetBinContent(34,155.794);
   VbbHcc_both_H_mass__741->SetBinContent(35,142.8241);
   VbbHcc_both_H_mass__741->SetBinContent(36,137.5202);
   VbbHcc_both_H_mass__741->SetBinContent(37,125.5966);
   VbbHcc_both_H_mass__741->SetBinContent(38,115.9916);
   VbbHcc_both_H_mass__741->SetBinContent(39,108.7527);
   VbbHcc_both_H_mass__741->SetBinContent(40,102.856);
   VbbHcc_both_H_mass__741->SetBinContent(41,1587.387);
   VbbHcc_both_H_mass__741->SetBinError(3,0.3686305);
   VbbHcc_both_H_mass__741->SetBinError(4,1.179276);
   VbbHcc_both_H_mass__741->SetBinError(5,1.998027);
   VbbHcc_both_H_mass__741->SetBinError(6,2.541461);
   VbbHcc_both_H_mass__741->SetBinError(7,3.15205);
   VbbHcc_both_H_mass__741->SetBinError(8,3.764893);
   VbbHcc_both_H_mass__741->SetBinError(9,4.267871);
   VbbHcc_both_H_mass__741->SetBinError(10,4.667909);
   VbbHcc_both_H_mass__741->SetBinError(11,5.085596);
   VbbHcc_both_H_mass__741->SetBinError(12,5.466219);
   VbbHcc_both_H_mass__741->SetBinError(13,5.687984);
   VbbHcc_both_H_mass__741->SetBinError(14,5.713963);
   VbbHcc_both_H_mass__741->SetBinError(15,5.605714);
   VbbHcc_both_H_mass__741->SetBinError(16,5.407597);
   VbbHcc_both_H_mass__741->SetBinError(17,5.237171);
   VbbHcc_both_H_mass__741->SetBinError(18,5.055321);
   VbbHcc_both_H_mass__741->SetBinError(19,4.890545);
   VbbHcc_both_H_mass__741->SetBinError(20,4.809631);
   VbbHcc_both_H_mass__741->SetBinError(21,4.718015);
   VbbHcc_both_H_mass__741->SetBinError(22,4.516003);
   VbbHcc_both_H_mass__741->SetBinError(23,4.383557);
   VbbHcc_both_H_mass__741->SetBinError(24,4.222446);
   VbbHcc_both_H_mass__741->SetBinError(25,4.09523);
   VbbHcc_both_H_mass__741->SetBinError(26,3.970156);
   VbbHcc_both_H_mass__741->SetBinError(27,3.790288);
   VbbHcc_both_H_mass__741->SetBinError(28,3.747937);
   VbbHcc_both_H_mass__741->SetBinError(29,3.578253);
   VbbHcc_both_H_mass__741->SetBinError(30,3.455824);
   VbbHcc_both_H_mass__741->SetBinError(31,3.329343);
   VbbHcc_both_H_mass__741->SetBinError(32,3.226418);
   VbbHcc_both_H_mass__741->SetBinError(33,3.097751);
   VbbHcc_both_H_mass__741->SetBinError(34,2.977405);
   VbbHcc_both_H_mass__741->SetBinError(35,2.852692);
   VbbHcc_both_H_mass__741->SetBinError(36,2.820977);
   VbbHcc_both_H_mass__741->SetBinError(37,2.667005);
   VbbHcc_both_H_mass__741->SetBinError(38,2.589702);
   VbbHcc_both_H_mass__741->SetBinError(39,2.511696);
   VbbHcc_both_H_mass__741->SetBinError(40,2.454162);
   VbbHcc_both_H_mass__741->SetBinError(41,9.833308);
   VbbHcc_both_H_mass__741->SetEntries(244052);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_mass__741->SetFillColor(ci);
   VbbHcc_both_H_mass__741->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_both_H_mass__741->GetXaxis()->SetRange(1,40);
   VbbHcc_both_H_mass__741->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass__741->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_mass__741->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass__741->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass__741->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass__741->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass__741->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_mass__741->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass__741->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_both_16->Modified();
   H_mass_both_16->cd();
   H_mass_both_16->SetSelected(H_mass_both_16);
}
