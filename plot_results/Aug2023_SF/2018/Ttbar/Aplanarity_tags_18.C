#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_18()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Fri Sep  1 13:34:45 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2,-3929.092,1.133333,35361.83);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLeftMargin(0.15);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity__231 = new TH1D("VbbHcc_tags_Aplanarity__231","",50,0,1);
   VbbHcc_tags_Aplanarity__231->SetBinContent(1,29935.94);
   VbbHcc_tags_Aplanarity__231->SetBinContent(2,4184.971);
   VbbHcc_tags_Aplanarity__231->SetBinContent(3,1166.499);
   VbbHcc_tags_Aplanarity__231->SetBinContent(4,427.1494);
   VbbHcc_tags_Aplanarity__231->SetBinContent(5,207.1968);
   VbbHcc_tags_Aplanarity__231->SetBinContent(6,98.92936);
   VbbHcc_tags_Aplanarity__231->SetBinContent(7,55.8446);
   VbbHcc_tags_Aplanarity__231->SetBinContent(8,33.11796);
   VbbHcc_tags_Aplanarity__231->SetBinContent(9,19.18076);
   VbbHcc_tags_Aplanarity__231->SetBinContent(10,13.26122);
   VbbHcc_tags_Aplanarity__231->SetBinContent(11,7.264041);
   VbbHcc_tags_Aplanarity__231->SetBinContent(12,5.830337);
   VbbHcc_tags_Aplanarity__231->SetBinContent(13,3.363366);
   VbbHcc_tags_Aplanarity__231->SetBinContent(14,2.045823);
   VbbHcc_tags_Aplanarity__231->SetBinContent(15,1.548489);
   VbbHcc_tags_Aplanarity__231->SetBinContent(16,1.077921);
   VbbHcc_tags_Aplanarity__231->SetBinContent(17,0.5587799);
   VbbHcc_tags_Aplanarity__231->SetBinContent(18,0.7249389);
   VbbHcc_tags_Aplanarity__231->SetBinContent(19,0.2030633);
   VbbHcc_tags_Aplanarity__231->SetBinContent(20,0.4156745);
   VbbHcc_tags_Aplanarity__231->SetBinError(1,67.60264);
   VbbHcc_tags_Aplanarity__231->SetBinError(2,24.92245);
   VbbHcc_tags_Aplanarity__231->SetBinError(3,13.17228);
   VbbHcc_tags_Aplanarity__231->SetBinError(4,7.98644);
   VbbHcc_tags_Aplanarity__231->SetBinError(5,8.465228);
   VbbHcc_tags_Aplanarity__231->SetBinError(6,4.149962);
   VbbHcc_tags_Aplanarity__231->SetBinError(7,2.744644);
   VbbHcc_tags_Aplanarity__231->SetBinError(8,2.065674);
   VbbHcc_tags_Aplanarity__231->SetBinError(9,1.560891);
   VbbHcc_tags_Aplanarity__231->SetBinError(10,1.297089);
   VbbHcc_tags_Aplanarity__231->SetBinError(11,1.0132);
   VbbHcc_tags_Aplanarity__231->SetBinError(12,0.9338197);
   VbbHcc_tags_Aplanarity__231->SetBinError(13,0.6897887);
   VbbHcc_tags_Aplanarity__231->SetBinError(14,0.4753008);
   VbbHcc_tags_Aplanarity__231->SetBinError(15,0.4212609);
   VbbHcc_tags_Aplanarity__231->SetBinError(16,0.3772104);
   VbbHcc_tags_Aplanarity__231->SetBinError(17,0.2195014);
   VbbHcc_tags_Aplanarity__231->SetBinError(18,0.2923024);
   VbbHcc_tags_Aplanarity__231->SetBinError(19,0.1545185);
   VbbHcc_tags_Aplanarity__231->SetBinError(20,0.2806449);
   VbbHcc_tags_Aplanarity__231->SetEntries(419014);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Aplanarity__231->SetFillColor(ci);
   VbbHcc_tags_Aplanarity__231->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity__231->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity__231->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__231->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__231->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__231->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__231->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__231->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__231->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__231->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__231->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
