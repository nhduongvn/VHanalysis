void Aplanarity_both_18()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Tue Aug 22 09:23:18 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2,-104.8101,1.133333,943.2908);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLeftMargin(0.15);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,798.553);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,230.7486);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,115.6962);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,66.02672);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,37.93054);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,25.45511);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,17.38953);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,10.76175);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,8.055933);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,4.956123);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,2.828938);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,2.342669);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,1.856236);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,1.137268);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.9103231);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.4213183);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.3276047);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.1295059);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,0.05215649);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(23,0.06807733);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,12.78972);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,6.812291);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,4.805839);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,3.641559);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,2.691488);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,2.245561);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,1.820042);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,1.404217);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,1.317521);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,1.020433);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.6672147);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.7241443);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.6860598);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.447983);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.480954);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.3612998);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.281063);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.07778502);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,0.05215649);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(23,0.06807733);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(14948);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
