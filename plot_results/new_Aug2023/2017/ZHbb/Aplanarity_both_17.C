void Aplanarity_both_17()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Tue Aug 22 09:23:18 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2,-3.360872,1.133333,30.24785);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLeftMargin(0.15);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_9 = new TH1D("VbbHcc_both_Aplanarity_stack_9","",50,0,1);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(1,25.60664);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(2,7.619834);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(3,3.650146);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(4,2.180233);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(5,1.37691);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(6,0.7912843);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(7,0.5246341);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(8,0.3500621);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(9,0.2421027);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(10,0.1560042);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(11,0.1194952);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(12,0.06670538);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(13,0.04218151);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(14,0.02061143);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(15,0.01934162);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(16,0.007862121);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(17,0.01173464);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(18,0.004189235);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(19,0.001111367);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(1,0.2039473);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(2,0.1104687);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(3,0.07640931);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(4,0.05937237);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(5,0.04704855);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(6,0.03518225);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(7,0.02880672);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(8,0.02338639);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(9,0.01954346);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(10,0.01541319);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(11,0.01344331);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(12,0.01021154);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(13,0.008253115);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(14,0.005537806);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(15,0.005328582);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(16,0.003596585);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(17,0.004195613);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(18,0.002459897);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(19,0.001111367);
   VbbHcc_both_Aplanarity_stack_9->SetEntries(29329);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Aplanarity_stack_9->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->Draw("HIST");
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
