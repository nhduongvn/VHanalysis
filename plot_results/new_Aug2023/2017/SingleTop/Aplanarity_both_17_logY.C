void Aplanarity_both_17_logY()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Tue Aug 22 09:18:49 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2,-5.177006,1.133333,3.929839);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLogy();
   Aplanarity_both_17->SetLeftMargin(0.15);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,551.5767);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,166.3897);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,74.67935);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,40.60037);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,31.00702);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,17.07377);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,12.19756);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,10.47447);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,5.976843);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,3.677201);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,2.176654);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,1.738562);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,0.8130484);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.5115172);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.4351565);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.3507274);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.0001083199);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.05756252);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,0.315519);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(21,0.05752587);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,9.807988);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,5.378556);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,3.58139);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,2.667613);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,2.406395);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,1.749962);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,1.39962);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,1.379688);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,1.044802);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.8806227);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.5342729);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.586882);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.3712432);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.2461364);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.2570204);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.29114);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.07514536);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.05756252);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,0.315519);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(21,0.05752587);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(12402);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_17->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->SetSelected(Aplanarity_both_17);
}
