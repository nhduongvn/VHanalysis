void Aplanarity_both_16()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Thu Aug  3 12:26:22 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-1099.305,1.133333,9893.749);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_3 = new TH1D("VbbHcc_both_Aplanarity_stack_3","",50,0,1);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(1,8375.66);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(2,2779.061);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(3,1374.282);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(4,790.7031);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(5,497.2007);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(6,324.114);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(7,223.8458);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(8,148.5143);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(9,103.1633);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(10,69.59143);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(11,50.4703);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(12,33.97998);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(13,23.29626);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(14,16.18006);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(15,9.445129);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(16,6.306194);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(17,3.937438);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(18,2.560967);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(19,1.850925);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(20,0.8882759);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(21,0.213515);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(22,0.06964491);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(24,0.06964491);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(1,22.96204);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(2,13.2323);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(3,9.31046);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(4,7.065234);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(5,5.599717);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(6,4.530414);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(7,3.763508);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(8,3.061911);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(9,2.553726);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(10,2.105351);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(11,1.788336);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(12,1.467555);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(13,1.218237);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(14,1.015161);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(15,0.7635689);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(16,0.636638);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(17,0.4928172);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(18,0.3969338);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(19,0.3483176);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(20,0.2402156);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(21,0.1083972);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(22,0.06964491);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(24,0.06964491);
   VbbHcc_both_Aplanarity_stack_3->SetEntries(243289);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Aplanarity_stack_3->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->Draw("HIST");
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
