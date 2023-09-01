#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_16()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Fri Sep  1 13:23:44 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-0.0008646305,1.133333,0.007781674);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity__945 = new TH1D("VbbHcc_both_Sphericity__945","",25,0,1);
   VbbHcc_both_Sphericity__945->SetBinContent(1,0.006077271);
   VbbHcc_both_Sphericity__945->SetBinContent(2,0.006587661);
   VbbHcc_both_Sphericity__945->SetBinContent(3,0.003178892);
   VbbHcc_both_Sphericity__945->SetBinContent(4,0.003867256);
   VbbHcc_both_Sphericity__945->SetBinContent(5,0.004533508);
   VbbHcc_both_Sphericity__945->SetBinContent(6,0.001179207);
   VbbHcc_both_Sphericity__945->SetBinContent(7,0.001672672);
   VbbHcc_both_Sphericity__945->SetBinContent(8,0.002191266);
   VbbHcc_both_Sphericity__945->SetBinContent(9,0.003160938);
   VbbHcc_both_Sphericity__945->SetBinContent(10,0.001164947);
   VbbHcc_both_Sphericity__945->SetBinContent(11,0.002142354);
   VbbHcc_both_Sphericity__945->SetBinContent(12,0.001243325);
   VbbHcc_both_Sphericity__945->SetBinContent(13,0.0005612621);
   VbbHcc_both_Sphericity__945->SetBinContent(14,0.0002573456);
   VbbHcc_both_Sphericity__945->SetBinContent(15,0.0002816317);
   VbbHcc_both_Sphericity__945->SetBinContent(16,0.0006708356);
   VbbHcc_both_Sphericity__945->SetBinContent(17,0.0002942744);
   VbbHcc_both_Sphericity__945->SetBinError(1,0.001337496);
   VbbHcc_both_Sphericity__945->SetBinError(2,0.001423657);
   VbbHcc_both_Sphericity__945->SetBinError(3,0.0009287573);
   VbbHcc_both_Sphericity__945->SetBinError(4,0.001087779);
   VbbHcc_both_Sphericity__945->SetBinError(5,0.001168327);
   VbbHcc_both_Sphericity__945->SetBinError(6,0.0005398595);
   VbbHcc_both_Sphericity__945->SetBinError(7,0.0006874309);
   VbbHcc_both_Sphericity__945->SetBinError(8,0.000781133);
   VbbHcc_both_Sphericity__945->SetBinError(9,0.000956423);
   VbbHcc_both_Sphericity__945->SetBinError(10,0.0005858423);
   VbbHcc_both_Sphericity__945->SetBinError(11,0.0007619015);
   VbbHcc_both_Sphericity__945->SetBinError(12,0.0006265652);
   VbbHcc_both_Sphericity__945->SetBinError(13,0.000398435);
   VbbHcc_both_Sphericity__945->SetBinError(14,0.0002573456);
   VbbHcc_both_Sphericity__945->SetBinError(15,0.0002816317);
   VbbHcc_both_Sphericity__945->SetBinError(16,0.0004743846);
   VbbHcc_both_Sphericity__945->SetBinError(17,0.0002942744);
   VbbHcc_both_Sphericity__945->SetEntries(137);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity__945->SetFillColor(ci);
   VbbHcc_both_Sphericity__945->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity__945->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity__945->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__945->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity__945->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__945->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__945->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__945->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__945->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity__945->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__945->Draw("HIST");
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
