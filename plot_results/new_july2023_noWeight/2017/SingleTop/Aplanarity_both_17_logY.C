void Aplanarity_both_17_logY()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Thu Aug 10 12:33:06 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2,-2.215863,1.133333,3.66488);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLogy();
   Aplanarity_both_17->SetLeftMargin(0.15);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,629.8782);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,190.0397);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,83.84309);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,45.60185);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,34.03392);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,18.92925);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,14.00495);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,11.838);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,6.46201);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,4.357645);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,2.423748);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,1.702763);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,1.019839);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.7007938);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.4568201);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.3142877);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.09424774);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.04712387);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,0.2635671);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(21,0.04712387);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,9.817326);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,5.42195);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,3.597613);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,2.711367);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,2.391464);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,1.716505);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,1.466766);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,1.407459);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,1.022562);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.882102);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.5865229);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.5012568);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.4028348);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.3004265);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.2807513);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.267486);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.06664322);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.04712387);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,0.2635671);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(21,0.04712387);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(12820);

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
