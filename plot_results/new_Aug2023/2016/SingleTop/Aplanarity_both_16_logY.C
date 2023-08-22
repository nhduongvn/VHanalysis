void Aplanarity_both_16_logY()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Tue Aug 22 09:18:48 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-2.310294,1.133333,3.375163);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLogy();
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,338.1182);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,101.6522);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,51.96367);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,29.25031);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,17.75016);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,13.2668);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,8.375188);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,3.72404);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,3.14212);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,1.778097);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,1.727199);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,0.8120264);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,0.6475052);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.3315866);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.7304208);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.3756664);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.2635683);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.2526541);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(22,0.03624783);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,6.936177);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,3.770917);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,2.758428);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,2.066585);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,1.564255);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,1.47505);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,1.166943);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,0.6901417);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,0.6731612);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.4764558);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.538703);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.3736753);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.2576679);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.1362519);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.3350303);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.230739);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.1975928);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.2526541);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(22,0.03624783);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(9517);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}
