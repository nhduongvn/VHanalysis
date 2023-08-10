void Aplanarity_both_16_logY()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Thu Aug 10 12:21:51 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-3.71673,1.133333,2.251982);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLogy();
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_9 = new TH1D("VbbHcc_both_Aplanarity_stack_9","",50,0,1);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(1,23.85403);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(2,7.396533);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(3,3.693346);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(4,2.156585);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(5,1.386499);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(6,0.8783481);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(7,0.5776792);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(8,0.393722);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(9,0.251777);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(10,0.1601349);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(11,0.09757869);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(12,0.07841168);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(13,0.04582404);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(14,0.03111231);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(15,0.01791424);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(16,0.01029347);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(17,0.0107981);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(18,0.004742532);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(19,0.002978615);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(20,0.001517649);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(22,0.00166245);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(1,0.1923961);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(2,0.1073848);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(3,0.07563178);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(4,0.05782929);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(5,0.04640262);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(6,0.03700729);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(7,0.02958591);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(8,0.02482024);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(9,0.01965933);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(10,0.01561194);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(11,0.01252373);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(12,0.0109771);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(13,0.008292348);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(14,0.006857092);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(15,0.005180066);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(16,0.003891591);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(17,0.004087452);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(18,0.002743407);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(19,0.0021063);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(20,0.001517649);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(22,0.00166245);
   VbbHcc_both_Aplanarity_stack_9->SetEntries(28649);

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
